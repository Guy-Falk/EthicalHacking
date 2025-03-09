The files in this repositry may not be what they seem, they are for test purposes only!  DO NOT! Download or attempt to open any files as they may be dangerous. No permission is granted to use any files.

File: ServicesHub.RootHost.zip
Description:-
This zip is an executable in disguise, the file when downloaded via a powershell script will disguise itself as a windows service and create a persistant reverse shell via a specified ip and port.

Command Line Args
ServicesHub.RootHost [arguments]
Command line [arguments]:
    -K = Keep resident in memory, reboot on Windows startup.
    -E = Exit program, reboot on Windows startup.
    -T = Terminate clear all footprints, don't load on Windows reboot.
    -S = Show in windows registry as auto load on startup.
    -H = Hide from windows registry as auto load on startup.
    -I = IP Adress to connect to.
    -P = Port listening on.

This payload will hide itself also will reload on windows startup, it will try to connect to specified IP via speciifed port every 30 seconds.
