#!/bin/sh

# First compile everything.
cd source
./configure
make
cd ..

# Start the service on an open port and select a big maze.
./source/imazesrv -l - -p 12345 labs/25x25.lab &

# Start some bots.
./source/ninja -H :12345 &
./source/ninja -H :12345 &
./source/ninja -H :12345 &

# Start the graphic client
# Turn off sound because that's broken at the moment.
./source/imaze -H :12345 -q
