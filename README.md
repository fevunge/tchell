# Tchell

# Tchell

![Project Image](<https://socialify.git.ci/fevunge/tchell/image?custom_description=My+own+simplis>
tic+Unix+shell+in+C&description=1&language=1&name=1&owner=1&pattern=Circuit+Board&theme=Auto)

A minimalistic Unix shell implementation written in C, demonstrating fundamental systems
programming concepts and shell functionality.

## 📋 Table of Contents

- [About](#about)
- [Features](#features)
- [Prerequisites](#prerequisites)
- [Installation](#installation)
- [Usage](#usage)
- [Project Structure](#project-structure)
- [Technologies Used](#technologies-used)
- [Contributing](#contributing)
- [License](#license)
- [Contact](#contact)

## 🚀 About

Tchell is a custom Unix shell implementation that provides a basic command-line interface. This
project showcases:

- **Systems Programming**: Direct interaction with Unix system calls
- **Memory Management**: Proper allocation and deallocation of resources
- **Input Handling**: Custom implementation using `get_next_line` function
- **Process Management**: Understanding of how shells interact with the operating system

This project serves as an educational exercise in understanding how shells work under the hood
and demonstrates proficiency in low-level C programming.

## ✨ Features

- **Interactive Command Prompt**: Custom prompt (`tcsh !..`) for user interaction
- **Input Processing**: Efficient line-by-line input reading using `get_next_line`
- **Modular Design**: Clean separation of concerns with dedicated modules:
  - `get_next_line`: Custom file reading implementation
  - `printft`: Custom printf implementation
  - `strings`: String manipulation utilities
- **Memory Safe**: Proper memory management practices
- **Unix Compliant**: Follows Unix shell conventions

## 🔧 Prerequisites

- **GCC** or compatible C compiler
- **Make** build system
- **Unix-like operating system** (Linux, macOS, etc.)

## 📦 Installation

1. **Clone the repository**:

    ```bash
    git clone https://github.com/fevunge/tchell.git
    cd tchell
    ```

2. **Build the project**:

    ```bash
    make
    ```

3. **Run the shell**:

    ```bash
    make run
    # or directly:
    ./build/tchell
    ```

## 🎯 Usage

Once started, Tchell presents an interactive prompt where you can enter commands:

```bash
tcsh !.. your_command_here
```

### Available Make Targets

- `make` or `make all` - Build the project
- `make clean` - Remove object files
- `make fclean` - Remove all generated files including build directory
- `make re` - Rebuild the project from scratch
- `make run` - Build and run the shell

## 📁 Project Structure

```
tchell/
 src/
    get_next_line/     # Custom file reading implementation
    printft/           # Custom printf implementation
    strings/           # String manipulation utilities
    main.c             # Entry point
    tchell.c           # Main shell loop implementation
    tchell.h           # Header file with function declarations
 build/                 # Generated executable (after build)
 Makefile              # Build configuration
 README.md             # This file
```

## 🛠 Technologies Used

- **C Language**: Core implementation language
- **Make**: Build system for compilation
- **Unix System Calls**: For system interaction
- **Custom Libraries**:
  - `get_next_line`: Efficient line reading
  - `printft`: Custom formatted output
  - `strings`: String manipulation utilities

## 🤝 Contributing

Contributions are welcome! Here's how you can help:

1. Fork the repository
2. Create a feature branch (`git checkout -b feature/amazing-feature`)
3. Commit your changes (`git commit -m 'Add some amazing feature'`)
4. Push to the branch (`git push origin feature/amazing-feature`)
5. Open a Pull Request

### Development Guidelines

- Follow consistent C coding style
- Ensure memory safety (no leaks, proper cleanup)
- Test your changes thoroughly
- Update documentation as needed

## 📝 License

This project is open source. Please check the repository for license details.

## 📞 Contact

[![GitHub](https://img.shields.io/badge/GitHub-fevunge-181717?style=for-the-badge&logo=github)](https://github.com/fevunge)

---

_Built with ❤️ and lots of C programming_
