# Chess-code
The provided C++ code is a console-based chess game implemented using object-oriented programming concepts. The chess class is defined to represent the game, and various member functions handle different aspects of the game, such as moving pieces, checking for valid moves, and displaying the chessboard.

Here's a brief overview of the key functionalities:

The chess class has private member variables for the chessboard matrix, pieces for both players (WHITE and BLACK), and other necessary variables.
Member functions like board_setting, display, move, and various piece-specific functions handle the setup, display, and movement of pieces on the chessboard.
The game alternates between the WHITE and BLACK player's turns.
The matching function checks if a given position on the chessboard matches a specific piece for either player.
The checking, white_checking, and black_checking functions verify if a particular move is valid or if a player's king is in check.
The main function initializes an instance of the chess class, sets up the initial board, and allows the user to choose whether to play the game or exit.

Note: The code seems to have some issues, such as missing function implementations (play, white_king, etc.), and some logical errors may need correction for the game to function properly. Additionally, the code lacks comments, making it challenging to understand specific parts of the implementation.
