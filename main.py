from flask import Flask
app = Flask(__name__, static_folder="/")

@app.route('/')
def hello_world():
    data = open('index.html').read()    
    return data

if __name__ == '__main__':
    app.run(host='0.0.0.0')
