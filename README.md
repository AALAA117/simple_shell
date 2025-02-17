# Simple Shell

## Description
Simple Shell is a basic command-line interpreter (CLI) that mimics the functionality of the UNIX shell. It reads user commands, parses them, and executes the appropriate programs. This project was built as part of the ALX Software Engineering curriculum.

## Features
- Display a prompt and wait for user input.
- Execute built-in shell commands.
- Handle external commands using the `execve` system call.
- Implement the PATH environment variable to find executables.
- Manage child processes and signal handling.
- Support input redirection and basic error handling.

## Compilation
To compile the shell, use the following command:
```sh
gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
```

## Usage
Run the shell using:
```sh
./hsh
```
Then enter commands as you would in a regular shell.

## Example
```
$ ./hsh
$ ls -l
$ echo "Hello, World!"
$ exit
```

## Built-in Commands
The Simple Shell supports the following built-in commands:
- `exit` - Exit the shell.
- `env` - Print the environment variables.
- `cd` - Change directory (if implemented).
- `help` - Display help information (optional).

## Files
- `main.c` - Entry point for the shell.
- `shell.h` - Header file with function prototypes and macros.
- `builtins.c` - Implementation of built-in commands.
- `execute.c` - Function to execute commands.
- `parser.c` - Tokenization and command parsing.

## Authors
- [Aalaa Mohammed]
- [Menna Lotfy]

## License
This project is open-source and available under the MIT License.


