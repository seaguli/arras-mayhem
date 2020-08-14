# Arras Mayhem
The offical client for the Arrasio5 server.

*Ignore the additonal files! They are for maximum compatibility with third-party hosting services!*
# Features
- Sound effects!
- Music!
- Lightweight, separate client! 
- More colours!
- Fixed hotkeys! (Be sure your server project has them binded)
- Deployment to Repl.it or Heroku! Still works with Glitch!

# Webservers
The client is able to be hosted as either a Node.js Express, PHP Apache2 or Python Flask webserver. Details below! These start scripts were tested with Heroku.

- NodeJS Express server:
   ``node index.js``
- PHP Apache2 server:
   ``heroku-php-apache2`` **HEROKU ONLY**
- Python Flask server:
   ``python main.py``
# Remixing
Feel free to remix this project and modify it to your own liking!

# Setting it up
The client currently uses arrasio5 as a server, but you can edit it!
- Go to line ~3228 in bundle.js and edit the code. It should look like this:

                 -   id: "a",
                 -   type: "4TDM",
                 -  code: "arras",
                 -  at: p.glitch ("YOUR-ARRAS-SERVER")
                 
- p.glitch is the name of your Arras.io server hosted on Glitch.com. For example, ("arrasio5")
- code isn't important
