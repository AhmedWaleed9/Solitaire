# Solitaire Project

This project is a modern implementation of the classic Solitaire game, developed as part of a Data Structures course. The focus is on designing and implementing fundamental data structures from scratch, alongside creating a functional and visually appealing graphical user interface (GUI) using C++ and SFML (Simple and Fast Multimedia Library).

## Trailer


https://github.com/user-attachments/assets/aeb4549c-7382-453e-9c2b-2bbc47a18620


## Features

- **Interactive Gameplay**: Adheres to traditional Solitaire rules, offering an engaging user experience.
- **Custom Data Structures**:
  - **Deck**: Implemented as a stack to manage card drawing and placement.
  - **Columns**: Managed as doubly linked lists for efficient manipulation of card sequences.
- **Graphical Interface**: Built using SFML for smooth and interactive visuals.

## Technologies Used

- **Programming Language**: C++
- **Graphics Library**: SFML (Simple and Fast Multimedia Library)

## Data Structures Overview

- **Stack (Deck)**:
  - Models the main deck of cards.
  - Supports operations such as push, pop, and peek.
  - Implemented using a linked list structure.

- **Doubly Linked List (Columns)**:
  - Manages the columns of cards in the game.
  - Allows efficient insertion, deletion, and traversal in both directions.
  - Facilitates smooth gameplay for moving sequences of cards.

## Learning Outcomes

This project emphasizes:

1. Designing and implementing core data structures from scratch.
2. Integrating custom data structures with a GUI framework.
3. Applying algorithmic thinking to solve game mechanics challenges efficiently.
4. Utilizing SFML for game development.

## How to Build and Run

1. **Prerequisites**:
   - Install a C++ compiler (e.g., GCC or MSVC).
   - Install the SFML library.

2. **Building**:
   - Clone the repository:
     ```bash
     git clone https://github.com/AhmedWaleed9/Solitaire.git
     ```
   - Navigate to the project directory:
     ```bash
     cd Solitaire
     ```
   - Compile the project (ensure the SFML library path is correctly specified):
     ```bash
     g++ -o solitaire main.cpp -lsfml-graphics -lsfml-window -lsfml-system
     ```

3. **Running**:
   - Execute the compiled binary:
     ```bash
     ./solitaire
     ```

## Future Enhancements

- Add more variations of Solitaire.
- Enhance the GUI with animations and sound effects.
- Improve performance with optimized algorithms for large-scale card manipulations.


## License

This project is licensed under the [MIT License](LICENSE).

---

Enjoy playing Solitaire and exploring the beauty of data structures and algorithms!

*Note: Ensure that the `LICENSE` file exists in your repository to provide clarity on the project's licensing.*

*Additionally, consider adding a screenshot of the game interface to the README to give potential users a visual overview of the project.*

*If there are specific instructions or dependencies required for setting up SFML on different operating systems, including those details would be beneficial for users attempting to build and run the project.*

*For more detailed information on SFML setup and configuration, refer to the official SFML documentation: [SFML Documentation](https://www.sfml-dev.org/documentation/)* 
