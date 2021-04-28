# SLCubed

SLCubed is a simple application that redirects the steam launcher
to the Starloader Launcher by making use of the POSIX exec syscall.

While technically it is able redirect every call to it to a newly
created java process.

## Building

On Linux it can be built by invoking `gcc SLCubed.c`.
It likely works similarly for other plattforms,
but it really depends on what you currently have on how to compile it.
Using non-linux environments for C compilation is nerveracking at best
either way.

## Usage

After building and obtaining your executable, you need to replace
the `galimulator-linux-64bit` executeable with the newly obtained
executable.

The command line syntax is:

`galimulator-linux-64bit`
or
`./galimulator-linux-64bit [path/to/your.jar] [arguments]`

by default it will invoke the `starloader.jar` java archive,
however you can change it. Per default steam will call the
executable directly with the launch options (empty by default).

## License

This repository is licensed under the MIT/Expat license,
see the LICENSE file for more information
