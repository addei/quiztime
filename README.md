# quiztime by Atte R.

A C++ quiz game project from my University of Applied Sciences days (dated January 2020 per git history).

## About

This is an old coding project created during my studies. It is a command-line quiz application written in C++ that lets users:

- Play a multiple-choice quiz with questions loaded from a data file (`Questions.dat`)
- Create and add new questions to the question database
- Save and load high scores (`Hiscores.dat`)
- Navigate menus for gameplay, settings, and question management

## Build

All source files are included directly in `main.cpp`, so you can build with a single command:

```bash
g++ -Wall -Wextra -o quiztime main.cpp
```

Run the compiled binary:

```bash
./quiztime
```

## Notes

- This is legacy student project code and may contain quirks typical of early C++ work (mixed `cin`/`getline` usage, `#include` of `.cpp` files, etc.).
- `Questions.dat` and `Hiscores.dat` are used for persistence. `Questions.dat` should exist (can be empty) for the program to run without errors.
