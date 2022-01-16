# Pan-Dice Roller
This application is a simple, console-based dice-roller made for console. It can make any number of dice rolls on a simulated dice of any number of sides.

## Getting Started

### Windows
If you are running this application on a on Windows 10, the program can be run by executing panRoller.exe.

### Building from source
If you are running this application on another system, you will need to download the source code and build the application. I have included a Makefile in the root directory for those who wish to build it themselves; however, if you are doing so, it may be necessary to modify/remove the following compiler options from the CCFLAGS variable in the Makefile.

```
-static
-static-libgcc
-static-libstdc++
```

Once the modifications are complete, the application can be built by using GMake via the following command.

```
make
```

## Usage
If setup was successful, executing the program will result in the following prompt.

```
panRoller>
```

Commands can then be issued to the application.

### Commands
* ```<t>d<n>``` - **Dice Roll** - Rolls a n-sided die t times.
* ```exit``` - **Exit** - Terminates the program.
* ```help``` - **Help** - Prints a list of commands.

## Built With
* [MinGW](http://www.mingw.org/) - Compiler/Linker
* [atom](https://atom.io/) - Editor

## Author
* **Brandon Hill** - [Hill-Brandon-M](https://github.com/Hill-Brandon-M)

## License
This project is licensed under [The Unlicense](http://unlicense.org/). (see the [LICENSE](LICENSE) for more details)
