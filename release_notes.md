# Release Notes

## 1.5.0

Released in June 2023.

* Replaced `sys_errlist` with `strerror_r`.
* Corrected `handle_signal` include issue.
* Renamed `atan` to `imaze_atan` to prevent conflict with standard `atan`.
* Rudimentary macOS / OSX / Darwin support.
* Added `quick-start.sh`
* Moved release notes into their own file.
* Moved credits into their own file.
* Misc. clean up and translations.

## 1.4.2

Released in April 2022.

* Made it compile on Debian 11 GNU Linux, AMD 64.

## 1.4.1

Released in April 2022.

* Saved from being loss by https://kacabenggala.uny.ac.id/gentoo/distfiles/imaze-1.4.tar.gz (actually a tar.gz.gz)
* Imported into github
* David A. Redick took over maintainance.

## 1.4.0

Released in December 2001.

* Added Athena Widgets support
* Added sound for Motif and Athena Widgets
* Added new command line options
* Added server options for game speed, reflective shots, autoanswer shots, quickturns and faceless, colorless or invisible players
* Added labyrinth editor `xlabed`
* Added camera mode

## 1.3.0

Released in February 1996.

* Fixed the server name was not configurable in the Makefile
* Fixed sometimes the client kill message was scrambled in the 3D display
* Fixed Linux sound didn't work properly
* Added Motif support
* Added support for several new platforms
* Added pause button

## 1.2.0

Released in December 1994.

Solved bugs since 1.1:
* Fixed problems with Solaris 2.x
* Fixed some of the 3D bugs were fixed
* Added score
* Added X resources
* Added client doesn't terminate after disconnect, you can reconnect to same or other server
* Added 2 hours timeout for the ninja
* Added a message is sent to players that you kill

## 1.1.0

Released in July 1994.

* Fixed the server produced zombie processes
* Fixed the XView client complained about "embedding seal incorrect"
* Fixed the XView client sometimes omitted walls in the 3D display
* Fixed unused bits in the labyrinth files weren't set to zero by genlab
* Added compatibility with HP-UX, Ultrix and maybe AIX
* Added logging of connections to the server
* Added sound for the XView client on SunOS and Linux
* Added joystick for the XView client on Linux
* Added man pages

## 1.0.0

Released in May 1994.

