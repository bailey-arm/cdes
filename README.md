# C Learning Project

## How to build and run

**Build:**
```
make
```

**Run:**
```
./hello
```

**Clean up compiled files:**
```
make clean
```

## How it works

- `hello.c` — your C source code (the file you edit)
- `Makefile` — tells `make` how to compile your code
- `hello` — the compiled binary that gets created after you run `make` (not in git)

## Starting a new program

1. Create a new `.c` file (e.g. `myprogram.c`)
2. Add a `main` function — every C program starts there
3. Add a new rule to `Makefile` (copy the `hello` block and swap the names)
4. Run `make myprogram` to build it

## Compiler flags explained

- `-Wall -Wextra` — turn on extra warnings to catch common mistakes early
- `-g` — include debug info so you can use a debugger (lldb/gdb) if needed
