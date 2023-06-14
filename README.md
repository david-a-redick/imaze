What is imaze?
==============

A free and libre clone of the [MIDI maze](https://en.wikipedia.org/wiki/MIDI_Maze) and Faceball 2000 game.

imaze is a multi-player network action game for TCP/IP with 3D graphics
under X11.

It has successfully broken down the local FORTRAN lessons.

Other features include:
- sophisticated, reliable network protocol, works even with SLIP connections
  via modem
- windows can be freely scaled to avoid speed drawbacks due to poor display
  performance
- modular, portable source code
- scores
- extensive documentation (german)

After hours of testing, dueling and enjoying MIDI Maze 2 on the Atari ST we
decided that it wouldn't be such a bad idea to write something similar for
Unix. "imaze" means "Internet Maze" and by a strange coincidence it is also
a substring of "MIDI Maze".

For those whom fate has denied the pleasures of MIDI Maze we should add the
following:

You run through a labyrinth and shoot everything that is round without being
hit by other round anythings.
Of course anything round is one of the following:
- other players playing over the net
- computer controlled ninjas
- deadly shots (except your own)

We even managed to have this work be accepted as our "Softwarepraktikum"
(some kind of term project every computer science student in Clausthal has
to do).

If you wonder what Clausthal is: it is that little town just between Berlin
and Bonn with no girls, bad weather, slow Internet connectivity and weird
people willing to devote their time to stupid computer games.

Copyright
=========

Copyright (c) 1993-2001 by Hans-Ulrich Kiel and Joerg Czeranski

See the file "Copyright" for licence conditions.

Supported systems
=================

imaze was tested successfully on the following systems:
Solaris, SuSE Linux, FreeBSD, Tru64 Unix, AIX, HP-UX.

You may be also able to compile it with another OS.

It should run with any graphics hardware including black and white and
grayscale X displays.

Sound is implemented for Linux, FreeBSD, Solaris and Tru64 Unix
and (analog) joystick support only for Linux and FreeBSD.
The Linux joystick support was written for the joystick kernel module 0.7.3.


What do you get?
================

Unzip it and un-tar it, it will create the directory "imaze-1.4".

The directory "imaze-1.4" contains this README and the Copyright.
The directory "imaze-1.4/source" contains the sources.
The directory "imaze-1.4/man6" contains the man pages.
The directory "imaze-1.4/cat6" contains the cat-man pages.
The directory "imaze-1.4/labs" contains some demo labyrinths.
The directory "imaze-1.4/sounds" contains sound files.

More sound files and german documentation for version 1.0 are also
available on the web site.


How to compile?
===============

Make sure you have a C compiler and the X11 development headers.
Then type "cd imaze-1.4/source" and run "./configure" there.

For configure options see "./configure -h".

After running configure you may want to define the default server host as:
DEFINES=-DDEFAULT_SERVER=\"host.name\" in the Makefile. Otherwise the
default is to connect to the imaze server in Clausthal.

If you use the sound, you may set the sound directory as:
DEFINES=-DDEFAULT_SOUND_DIR=\"/sound/dir\" in the Makefile.

Then type "make".


How to start?
=============

First start the server "imazesrv", then the clients "imaze"/"ninja".
See the man pages for options and game controls.


The rules of the game
=====================

Aim:
Run through the labyrinth and shoot the other players without being shot
yourself.

Doors:
Colored walls are doors. Some doors can be passed through in one direction
only.

Shots:
You can only shoot forward. If you shoot again, your previous shot dies.
The shot dies also if it hits a player, a wall or a door.

Death:
After being shot, you are suspended from the game for 3 seconds and then
join in again at a random place.

Score:
You get 1 point for every shot enemy.


How to use the user client?
===========================

The XView client has four buttons:
"Open" opens a front view, a rear view, a map, a compass or a scores list.
"Properties" opens a properties window. You may activate scrollbars for
  the map there.
"Connect/Disconnect" connects/disconnects your client to/from the server.
"Pause/Resume" pauses/resumes the player.

The Motif/Athena client has four menus:
"File" only contains an "Exit" item.
"Window" is the same as the "Open" menu of the XView client.
"Server" contains "Connect" and "Disconnect".
"Game" allows pausing and resuming the player with the "Pause" and "Resume"
  items.

All clients have a check box "Camera mode" that switches the
client into a watch-only mode.

After connecting to the server, the front view and scores windows
open automatically.

For playing click on any of the client windows, so that it receives
keyboard input.

The cursor keys move the player, the spacebar and the shift
and alt keys are for shooting (remember: you have one shot only).
With ^S you pause your player, with ^Q you resume, Tab turns
the player by 180 degrees if allowed by the server.

The main window will display a 3D view. If you are not in the game, the
main window is simply grey, if you have been shot, the lucky enemy and
his message is displayed.


How to create new labyrinths?
=============================

You can create your own labyrinths with "genlab".

Typing "./genlab" gives you the possible arguments.

Just play around with it. But you should at least specify "-v" for verbose
and "-s" for searching for a labyrinth without traps.

The values for -d and -D shouldn't be too high.


How to create new sounds?
=========================

The sound files use the Sun audio u-law 8000hz format. If you
have a microphone, you can record new sounds with the SunOS
audiotool.


Known bugs
==========

Often the ninjas just don't have an idea where to move. Just give them a
break, they're still kind of dumb. :-)

It is no bug that you can't leave a one way door in the other direction,
even if you have just touched it.


Where to get iMaze from?
========================

https://github.com/david-a-redick/imaze

