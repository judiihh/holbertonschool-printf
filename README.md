# Printf Project

## Table of Content


## Project Overview
The Printf Project is a custom implementation of the standard C library function printf. This project aims to mimic the behavior of printf by handling specific format specifiers while also giving developers insights into variadic functions and low-level system calls.

### Purpose
The purpose of this project is to:
* Strengthen understanding of C programming concepts such as variadic functions, memory allocation, and system calls.
* Build a foundational understanding of how standard library functions are implemented.
* Foster collaboration through team-based development.

### Main Features
* Custom implementation of the _printf_ function.
* Support for a subset of printf conversion specifiers.
* Extensive testing to ensure reliability and consistency.

### Intended Audience
This project is designed for:
* Holberton students learning the intricacies of C programming.
* Developers interested in understanding how functions like _printf_ are implemented under the hood.

## Supported Specifiers

### What is a format specifier?
A format specifier is a special sequence of characters used in formatted input and output functions (like printf, scanf) to define how data should be formatted and displayed or read.

| Format Specifier | Description                               | Example Output       |
|------------------|-------------------------------------------|----------------------|
| %c               | Prints a single character                 | Input: %c -> H       |
| %s               | Prints a string of characters             | Input: %s -> Hello   |
| %                | Prints a literal % character              | Input: %% -> %       |
| %d               | Prints a signed decimal integer           | Input: %d -> 42      |
| %i               | Prints a signed integer (identical to %d) | Input: %i -> 42      |

### Compilation Instructions
All the files that were used are compiled using:
'gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c' on Ubuntu 20.04 LTS.

## Language
The creation of the _printf()_ function is being done using the C programming language. As a low-level language, C gives us the ability to build and control functions from the ground up while defining their specific outputs. Currently, we are in the foundational phase of learning C, and this project serves as a way to test out understanding by implementing _printf()_ entirely from scratch.

## Challenges

## Reference

## Contributors
This project was completed as a team effort by:

**Judith Espinal:** [GitHub Profile](https://github.com/judiihh)
[LinkedIn Profile](https://www.linkedin.com/in/judithespinal12)

Hello, I'm Judith Espinal, one of the developers behind this project. I invite you to explore my work and connect with me professionally on LinkedIn. I look forward to networking and sharing ideas with you!

**Giann Pabon:** [GitHub Profile](https://github.com/GiannPabon)
[LinkedIn Profile](https://www.linkedin.com/in/giannpabon/)

Hi there! I'm Giann Pabon, a passionate developer and contributor to this project. Feel free to check out my work and connect with me on LinkedIn. I’m always excited to network and exchange ideas with fellow professionals!

