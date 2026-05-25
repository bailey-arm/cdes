# Project Overview

This is Bailey's learning project — two goals running in parallel:

1. **Learning C** from the ground up
2. **Numerically solving PDEs** (partial differential equations) in C

Currently working through simple ODE/PDE solvers, starting with `df/dt = c` and building toward more complex equations.

## How to build and run

```
make          # build all targets
make pde      # build pde.c specifically
./pde         # run it
make clean    # remove compiled binaries
```

## How to help Bailey

When Bailey asks for help, **talk them through the problem** — don't just hand over the answer. The goal is understanding, not output. Good patterns:

- Ask what they think is happening before explaining
- Break the problem into steps and let them attempt each one
- Point to the relevant concept and let them apply it
- Give small hints that unblock rather than full solutions
- When they're stuck on C syntax specifically, brief direct answers are fine — the deeper learning goal is the numerical methods

## Project structure

- `pde.c` — main working file for PDE solver experiments
- `hello.c` — introductory C exercises
- `Makefile` — build rules; add a new block to compile a new `.c` file

## Context

Bailey is learning C as a beginner while also working through numerical methods for PDEs. Assume no prior C experience but engage with the mathematical/physics content at the appropriate level based on what they show you.
