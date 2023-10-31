# Simple C++ Calculator

## Introduction

This is a simple terminal calculator program created as a part of my C++ learning process. It's based on the book "Programming Principles and Practice Using C++" by Bjarne Stroustrup. This calculator can handle basic mathematical expressions and provides a command-line interface for users to input expressions.

## Features

- Addition (+), subtraction (-), multiplication (*), and division (/).
- Parentheses to specify the order of operations.
- Factorial (!) calculation.
- Error handling for invalid input.
- Option to quit by typing 'q='.

## Getting Started

### Prerequisites

- A C++ compiler (e.g., g++) to build and run the program.

### Building and Running

1. Clone the repository to your local machine.
2. Navigate to the project directory.
3. Compile the program using the following command:
   ```bash
g++ -std=c++11 -o calculator main.cpp calculator.cpp token_stream.cpp
```
4. Run the program:
   ```bash
./calculator
```


### Usage

- To perform a calculation, enter a mathematical expression followed by '=' (e.g., 2 + 3 =).
- Use 'q=' to exit the program.
- Follow standard mathematical operators and conventions.
- The program will handle order of operations and parentheses.

### Examples

```
   SIMPLE CALCULATOR

Type q= to Exit
Enter your Expressions followed by =
3 + 4 * 2 =
11

(3 + 4) * 2 =
14

10 / 2 + 1 =
6
```


### Acknowledgments
- Thanks to Bjarne Stroustrup for the book "Programming Principles and Practice Using C++," which inspired this project.
- Special thanks to the C++ community for their support and contributions.
