# ASCII Ball
By Acetilsalicilic

This is just a silly simulation of a ball falling and
bouncing against the walls. It's bad, but it's written
in C. It only works in Linux, though.

## Building
IDK why you would want to build and, pressumably,
run this. But I have a little _compile.sh_ script
written for bash. It's bad, and it should be a
Makefile instead. But I liked the idea of doing
everything with gcc. It compiles all the source,
it doesn't care if a file was changes, unlike make,
but I just wanted to do it myself.

See if _compile.sh_ works. If not, compile everything
using:

```bash
$ gcc -c [all of the sources, not headers]
$ gcc -o ./ball [all of the *.o files]
```

I'm not an expert on C, so I don't know if that's the best
way of doing it. I only know that it works for me. 

## Running
See the source code in **ascii_ball.c** for options for the command,
like the _acceleration constant_, the _width and height_ of the
playground, the initial _y and x velocities_ of the ball,
etc.

Everything else about running is like every other
excecutable, just do **$ ./ball [options]** and it should
be bouncing!

## DISCLAIMER
The animation is **INCREDIBLY** bad. Sorry!
