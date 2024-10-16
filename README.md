# C Library Starter

## Overview

The **C Library StarterKit** is designed to provide a clean and organized structure for quickly initializing a C library project. It eliminates the need to manually create common files and directories, saving time and reducing boilerplate code. With a dynamic Makefile, pre-configured modules, and testing setup, this starter kit helps you focus on writing code rather than setting up infrastructure.

## Features

- **Modular Structure**:
Pre-configured directories for source code, headers, tests, and logs.
- **Logger Module**:
A thread-safe logging system that handles both file and console outputs.
- **Dynamic Makefile**:
A flexible Makefile that handles project compilation and testing with minimal configuration.
- **Testing Support**:
A simple framework for unit testing with test files for each module.
- **Environment Configuration (Future Plan)**:
Simple integration of environment variables or config files if needed.

## File Structure

The project is structured to keep source code, header files, logs, and tests separate for easy management and scaling.

```plaintext

project_name/ (root)
├── .gitignore              # Git ignore file to exclude unnecessary files from version control
├── build/                  # Directory for build files (object files, etc.)
├── include/                # Header files directory
│   ├── __dependencies__.h  # Include basic dependencies
│   ├── api.h               # Example module header
│   ├── logger.h            # Logger module header
│   └── utils.h             # Utility functions header
├── logs/                   # Directory for log files
│   └── log.txt             # Main log file
├── output/                 # Output directory
│   └── stdout.txt          # Stores stdout output
├── src/                    # Source files
│   ├── modules/            # Module source files
│   │   └── logger.c        # Logger module implementation
│   ├── services/           # Services implementation (example module)
│   │   └── api.c
│   ├── utils.c             # Utility functions implementation
│   └── main.c              # Main program entry point
├── test/                   # Test files
│   ├── test_all.c          # Entry point for running all tests
│   ├── test_logger.c       # Test for logger module
│   └── test_module.c       # Test for example module
├── Makefile                # Dynamic Makefile for building, testing, and running
└── README.md               # Project documentation

```

## Getting Started

### Prerequisites

You will need the following tools installed:

- GCC (or any C compiler)

- Make (for building and running the project)

### Setup

- **Clone the Repository**:

```bash
git clone <https://github.com/yourusername/project_name.git>
cd project_name
```

- **Build the Project**:
Use the provided Makefile to build and run the project.

```bash
make
```

- **Run the Program**:
After building, you can run the project and view output in the output/stdout.txt file.

```bash
make run
```

- **Run Tests**:
Unit tests are located in the test/ directory. You can run the tests using:

```bash
make test
```

- **Clean Up**:
To remove build files and logs:

```bash
make clean
```

### Modifying the Project

- **Add New Modules**: Add your new .c source files in src/ and create the corresponding .h files in include/.
- **Logger Module**: The project includes a pre-built logger (logger.c, logger.h) for handling logging. You can log messages to both files and the console.
- **Utility Functions**: Place reusable code in utils.c and utils.h to keep your project DRY (Don’t Repeat Yourself).

#### Example Usage

```c
// src/main.c
# include <stdio.h>
# include "logger.h"

int main(void) {
    log_info("Starting the program...");
    printf("Hello, C Library StarterKit!\n");
    log_info("Program finished.");
    return 0;
}
```

### Makefile Overview

The provided dynamic Makefile supports common tasks like compiling the program, running it, and cleaning up build files. It also includes support for debugging and optimized release builds.

  • **Build**: Compile the project using ```make```.

  • **Run**: Run the project using ```make run```.
  
  • **Test**: Run the unit tests using ```make test```.
  
  • **Clean**: Remove build and log files using ```make clean```.
  
  • **Debug**: Build the project with debug flags using ```make debug```.

### PS

This is just a personal library structure I use to quickly initialize and start libraries.
