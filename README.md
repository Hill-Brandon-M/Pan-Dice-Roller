# Pan-Dice Roller
This application is a simple, console-based dice-roller made for Windows. 

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
Welcome to the Dice Random Number Generator!
For t dice rolls for an n-sided die, please enter a command in the follwing format: <t>d<n>
Otherwise, enter "exit" to close the program.
```

Dice rolls can then be run until the ```exit``` command is entered, at which point the program will terminate.

## Built With
* [MinGW](http://www.mingw.org/) - Compiler/Linker
* [atom](https://atom.io/) - Editor

## Author
* **Brandon Hill** - [Hill-Brandon-M](https://github.com/Hill-Brandon-M)

## License
This project is licensed under the Unlicense. (see the [LICENSE](LICENSE) for more details)
