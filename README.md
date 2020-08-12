# Arras Mayhem
The offical client for the Arrasio5 server.

# Features
- Sound effects!
- Music!
- Lightweight, separate client! 
- More colours!
- Fixed hotkeys! (Be sure your server project has them binded)
- Deployment to Repl.it or Heroku! Still works with Glitch!


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
