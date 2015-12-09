#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED
#include <windows.h>
struct commands {
                int currentX;
                int nextX;
                int currentY;
                int nextY;
                char promotion;
                bool promotionExist;
} command;
enum Turn {     firstPlayer,
                secondPlayer,
};
enum GameState{ menu,
                load,
                help,
                setting
} gameState;
char *interfaceScreen[] = {     " ________   ___  ___   _______    ________    ________ ",
                                "|\\   ____\\ |\\  \\|\\  \\ |\\  ___ \\  |\\   ____\\  |\\   ____\\",
                                "\\ \\  \\___| \\ \\  \\\\\\  \\\\ \\   __/| \\ \\  \\___|_ \\ \\  \\___|_",
                                " \\ \\  \\     \\ \\   __  \\\\ \\  \\_|/__\\ \\_____  \\ \\ \\_____  \\",
                                "  \\ \\  \\____ \\ \\  \\ \\  \\\\ \\  \\_|\\ \\\\|____|\\  \\ \\|____|\\  \\",
                                "   \\ \\_______\\\\ \\__\\ \\__\\\\ \\_______\\ ____\\_\\  \\  ____\\_\\  \\",
                                "    \\|_______| \\|__|\\|__| \\|_______||\\_________\\|\\_________\\",
                                "                                    \\|_________|\\|_________|"};
int interfaceScreenSize = sizeof(interfaceScreen) / sizeof(char*);
char *gameOption[] ={   "Start a new Game",
                        "Load last Game",
                        "Help",
                        "Setting",
};
int gameOptionSize = sizeof(gameOption) / sizeof(char*);
char *errorCode[] = { "no input",
                    "large",
                    "number out of bound",
                    "letter out of bound",
                    "number out of list",

};
char *errorMessage[] = {    "Please Make sure you entered a valid input.",
                            "The input you entered was Too large.",
                            "The Index number you entered was out of bound.",
                            "Make sure you type the right Character in uppercase.",
                            "Make sure the number you entered exists in the List."
};
int errorMessageSize = sizeof(errorCode) / sizeof(char*);

char commandSpecial[] = { 's', 'l', 'u', 'r', 'n'};
int commandSpecialSize = sizeof(commandSpecial) / sizeof(char);

void printInterface(void);
void printLogo(void);
void clearScreen(void);
void printGameOption(void);
int getGameOption(void);
void getMove();
bool verifyLetter(char letter);
bool verifyNumber(char number);
int getNull( char input[], int maxSize);
int convertLetter( char letter);
int convertNumber( char number);
bool verifyInput( char input[]);
void printError(char *type);
void setCommand( char input[], bool promotion);
void doCommand( char input);//not finished
void printHelp();//not finished
bool verifyCommand( char input);//not Finished
void setColor(char* text);
#endif // GAME_H_INCLUDED
