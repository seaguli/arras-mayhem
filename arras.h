/**
 * COMP30023 Computer Systems - Semester 1, 2018
 * Assignment 1 - HTTP Server
 *
 * Author: Emmanuel Macario <macarioe@student.unimelb.edu.au>
 * Student Number: 831659
 * Last Modified: 19/04/18
 *
 */
#ifndef SERVER_H
#define SERVER_H

/* * * * * * * * * *
 * CONSTANT VALUES *
 * * * * * * * * * */
#define BUFFER_SIZE 8192  // Buffer size
#define BACKLOG 10        // Total pending connections queue will hold

// The four different MIME types supported
#define MIME_HTML "text/html"
#define MIME_JPEG "image/jpeg"
#define MIME_CSS  "text/css"
#define MIME_JS   "application/javascript"

// The file extensions supported
#define EXTENSION_HTML ".html"
#define EXTENSION_JPEG ".jpg"
#define EXTENSION_CSS  ".css"
#define EXTENSION_JS   ".js"

// The content type header prefix
#define CONTENT_TYPE_HEADER "Content-Type: "

// The HTTP response status lines
#define STATUS_LINE_404 "HTTP/1.0 404 NOT FOUND\n"
#define STATUS_LINE_200 "HTTP/1.0 200 OK\n"


/* * * * * * * * * * *
 * GLOBAL VARIABLES  *
 * * * * * * * * * * */

// The path to the web root is a global
// variable, to be shared with all threads.
char *path_to_web_root;


/* * * * * * * * * * * *
 * FUNCTION PROTOTYPES *
 * * * * * * * * * * * */

// Creates a new socket and binds an IP address to the socket,
// such that remote clients can connect to it. Returns the file
// descriptor associated with the socket.
int initialise_server(char *port_num);

// Extracts and returns the HTTP request line from a
// HTTP request sent by a client over a connection.
char *get_request_line(FILE *fdstream);

// Parse the HTTP request line to get the name
// of the file requested by the client.
char *get_filename(char *request_line);

// Parses the name of the file the client requested
// and returns the MIME type (content type) associated
// with the file.
char *get_content_type(char *filename);

// Gets the path to the file requested. Can either be an absolute
// path or relative path, depending on the web root specified on
// the command line.
char *get_path_to_file(char *filename);

// Given a content type, constructs and returns the
// 'Content-Type' header to be sent in the HTTP response.
char *get_content_type_header(char *content_type);

// Sends a message through the TCP connection socket associated
// with a particular client connection. Ensures that the message 
// is sent fully. Returns the total number of bytes sent.
ssize_t send_message(int newfd, void *message, ssize_t size, int binary);

// Constructs and sends the HTTP 'response head', which includes
// the status line and headers to be sent in the HTTP response,
// to the client.
void send_response_head(int newfd, char *status_line, char *content_type);

// Takes as input the file descriptors for an open connection
// with a client, and one for a file, and sends the contents
// of the file to the client.
void send_response_body(int newfd, int fd);

// HTTP request handler function for a single worker thread.
// Responsible for fully constructing and sending a valid
// HTTP response to the client, after processing the request.
void *handle_http_request(void *arg);

#endif
