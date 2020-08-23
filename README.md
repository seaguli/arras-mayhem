# Arras Mayhem
The offical client for the Arrasio5 server.
![Purple Arras.io logo](https://cdn.glitch.com/fca666a2-8235-47b6-a711-c9926dc2248f%2FLogo.png?v=1595837913869)
# Features
- Sound effects!
- Music!
- Lightweight, separate client! 
- More colours!
- Fixed hotkeys! (Be sure your server project has them binded)
- Deployment to Repl.it or Heroku! Still works with Glitch!
- Webserver compatibility with 6 different languages!

# Webservers
The client is able to be hosted as either a Node.js Express, PHP, Go HTTP, Ruby Webrick, C or Python Flask webserver. Details below! Examples are linked as well.

- Node.JS Express server:
   ``node index.js``
    - <https://repl.it/@umineko/arras-express> 
    - <https://gitlab.com/seaguli/arras-express>
- PHP webserver: 
   ``php -S 0.0.0.0:8000 -t`` 
   - <https://repl.it/@umineko/arras-php>
- Python Flask server:
   ``python main.py`` 
   - <https://repl.it/@umineko/arras-flask>
   - <https://gitlab.com/seaguli/arras-flask>
- Go HTTP server: 
   ``go build`` , then ``./main``
   - <https://repl.it/@umineko/arras-go>
   - <https://gitlab.com/seaguli/arras-go>
- Ruby Webrick server:
   ``ruby main.rb`` 
   - <https://repl.it/@umineko/arras-ruby>
   - <https://gitlab.com/seaguli/arras-ruby>
- C webserver: 
   ``make`` , then ``./arras 8000 ./``
   - <https://repl.it/@umineko/arras-C>
   
Additonal code is available on my Github project's page, <https://github.com/seaguli/arras-mayhem>
# Remixing
Feel free to remix this project and modify it to your own liking!

<sub><sup>
    ask me if you want any aspect of the server's code at (SF) Seagull#2224
</sub></sup>
# Setting it up
The client currently uses arrasio5 as a server, but you can edit it!
- Go to line ~3241 in bundle.js and edit the code. It should look like this:

                 -   id: "a",
                 -   type: "4TDM",
                 -  code: "arras",
                 -  at: p.glitch ("YOUR-ARRAS-SERVER")
                 
- p.glitch is the name of your Arras.io server hosted on Glitch.com. For example, ("arrasio5")
- It also works with servers hosted on Heroku, simply change `p.glitch` to `p.heroku` and fill in your server normally.
- Type is the gamemode of your server. For example, "4TDM" for 4 Team Deathmatch, "FFA" for Free For All.
- Code isn't important

# Domains
The client can be found at the following links:

- <https://arras-mayhem.glitch.me>
- <https://arras.neocities.org>
- <https://arras-mayhem.netlify.app/>
- <https://arras-mayhem.vercel.app/>
- <https://seaguli.github.io/arras-mayhem/> (Styleless version)
- <https://arras-mayhem.umineko.repl.co/> (Does not recieve client updates)
- <http://arrasiomayhem.surge.sh/> (Uses secondary server hosted on Glitch)
- <https://arrasmayhem.herokuapp.com> (PHP Example, usually down)


# Credits
- Original Client by ProKameron
<https://glitch.com/~imp-template2>
- Seaguli
- Various StackOverflow contributors (For webserver code)
