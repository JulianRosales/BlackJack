# BlackJack
 Handling the GUI for assembly blackjack
# Blackjack GUI (Frontend in C)

This project implements the graphical user interface (GUI) for a blackjack game. The logic and backend are being implemented in assembly using the Keil platform.

## Project Structure

- **src/**: Contains source code for the C GUI application.
- **include/**: Header files.
- **assets/**: Images, icons, or other resources for the GUI.
- **docs/**: Documentation files.
- **build/**: Compiled binaries and build artifacts.

## Dependencies

- Any GUI libraries like `GTK+`, `Qt`, or `SDL` (to be added).

## How to Run

To compile the C GUI, run the following command:

```bash
gcc -o BlackJack src/main.c `pkg-config --cflags --libs gtk+-3.0`
