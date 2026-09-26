A C Program consists of *functions* and *variables*.

The entry point or where a program begins its execution in C is in the `main` function.
This is why you don't need to *explicitly* call the `main` function.

A sequence of characters in double quotes like, `"hello, world\n"` is called a *character string* or *string constant*.

An *escape sequence* like `\n` provides a general and extensible mechanism for representing hard-to-type or invisible characters. Others in C include:
- `\t` for tab
- `\b` for backspace
- `\"` for the double quote
- `\\` for the backslash

Comments are used to explain a section of code in a brief manner. Signaled in code via
`//` for a single line, and `/* */` for a multi-line comment.
Comments make a program easier to understand, especially in logic-heavy areas.

All variables must be declared before they are used, typically done at the beginning of a function before any executable statements.
A *declaration* announces the properties of variables; it consists of a name and a list of variables.

Outside of an `int`, or an integer, C provides several other data types:

`float` - floating point (numbers that may have a fractional part)
`char` - character (a single byte)
`short` - short integer
`long` - long integer
`double` - double-precision floating point

The size of these objects is machine-dependent, based on the systems processor (i.e. 32bit)
