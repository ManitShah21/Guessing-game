# 🎯 Guess the Number

A simple command-line number guessing game written in C++. The program generates a random number between 1 and 10, and the player has unlimited attempts per round to guess it correctly, with the option to keep playing round after round.

## How It Works

1. The program generates a random number between 1 and 10.
2. The player enters a guess.
3. The program tells the player if they guessed correctly or not (revealing the number if they lost).
4. The player is asked if they'd like to play again.

## Features

- **True randomness** — uses the Mersenne Twister engine (`mt19937`) seeded by a hardware-based random device, rather than the older, less-random `rand()` function.
- **Input validation** — rejects guesses outside the 1–10 range with a clear message, without crashing or ending the round.
- **Replay loop** — validates the player's y/n input, looping until a valid response is given, and lets them play as many rounds as they like.
- **Clean console formatting** — clear section dividers and prompts for readability.

## Concepts Used

| Concept | Where it's used |
|---|---|
| `<random>` library | Random number generation via `std::random_device`, `std::mt19937`, and `std::uniform_int_distribution` |
| Control flow | `while` loops for the game loop and replay-input validation, `if`/`else if`/`else` for guess logic |
| Uniform initialization | Brace initialization (`int userGuess{}`) used throughout for variables |
| I/O streams | `std::cin` / `std::cout` for user interaction |
| Nested loops | Inner loop to re-prompt for valid y/n input without breaking the outer game loop |

## Getting Started

### Prerequisites
- A C++ compiler that supports C++11 or later (for `<random>`)
- Visual Studio (recommended, since the project includes `.sln`/`.vcxproj` files) or any C++ IDE/compiler of your choice

### Running the game

**Using Visual Studio:**
1. Open `Guessing_game.slnx` (or the `.sln` file) in Visual Studio
2. Build and run (`Ctrl + F5`)

**Using g++ from the command line:**
```bash
g++ Guessing_game.cpp -o guessing_game
./guessing_game
```

## Sample Gameplay

```
GUESS THE NUMBER
----------------

Take a guess (between 1-10): 7
You lose!
The number was 3
Play again? (y/n): y
***********************************************
Take a guess (between 1-10): 3
YOU WON!!!!
Play again? (y/n): n
***********************************************
Thanks for playing!
```

## Possible Future Improvements

- Track and display the number of guesses per round
- Add a scoring system across rounds
- Let the player choose the number range
- Add difficulty levels (adjusting the range or number of attempts)

## Author

Built by [Manit Shah](https://github.com/ManitShah21) as a project to practice core C++ concepts.

