#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>


/**
 goes throught integer array and prints the digits (if key value then it will print the abrreviation)
 */
void BoardSetup(int p1, int p2, int p3, int p4, int snakes[10], int ladders[10], int BH[7], int arr[10][10]){
    int i = 0, j = 0;
    printf("----------------------------------------------------------------------------------------------------------------------------------\n");
    // print board (array)
    for (i = 0; i < 10; i++){
        for (j = 0; j < 10; j++){
            if (arr[i][j] == snakes[0]) {
                printf("|  S1S %2d   |", snakes[0]);
            } else if (arr[i][j] == snakes[1]) {
                printf("|  S1F %2d   |", snakes[1]);
            } else if (arr[i][j] == snakes[2]) {
                printf("|  S2S %2d   |", snakes[2]);
            } else if (arr[i][j] == snakes[3]) {
                printf("|  S2F %2d   |", snakes[3]);
            } else if (arr[i][j] == snakes[4]) {
                printf("|  S3S %2d   |", snakes[4]);
            } else if (arr[i][j] == snakes[5]) {
                printf("|  S3F %2d   |", snakes[5]);
            } else if (arr[i][j] == snakes[6]) {
                printf("|  S4S %2d   |", snakes[6]);
            } else if (arr[i][j] == snakes[7]) {
                printf("|  S4F %2d   |", snakes[7]);
            } else if (arr[i][j] == snakes[8]) {
                printf("|  S5S %2d   |", snakes[8]);
            } else if (arr[i][j] == snakes[9]) {
                printf("|  S5F %2d   |", snakes[9]);
            } else if (arr[i][j] == ladders[0]) {
                printf("|  L1S %2d   |", ladders[0]);
            } else if (arr[i][j] == ladders[1]) {
                printf("|  L1F %2d   |", ladders[1]);
            } else if (arr[i][j] == ladders[2]) {
                printf("|  L2S %2d   |", ladders[2]);
            } else if (arr[i][j] == ladders[3]) {
                printf("|  L2F %2d   |", ladders[3]);
            } else if (arr[i][j] == ladders[4]) {
                printf("|  L3S %2d   |", ladders[4]);
            } else if (arr[i][j] == ladders[5]) {
                printf("|  L3F %2d   |", ladders[5]);
            } else if (arr[i][j] == ladders[6]) {
                printf("|  L4S %2d   |", ladders[6]);
            } else if (arr[i][j] == ladders[7]) {
                printf("|  L4F %2d   |", ladders[7]);
            } else if (arr[i][j] == ladders[8]) {
                printf("|  L5S %2d   |", ladders[8]);
            } else if (arr[i][j] == ladders[9]) {
                printf("|  L5F %2d   |", ladders[9]);
            } else if (arr[i][j] == BH[0]) {
                printf("|  BH1 %2d   |", BH[0]);
            } else if (arr[i][j] == BH[1]) {
                printf("|  BH2 %2d   |", BH[1]);
            } else if (arr[i][j] == BH[2]) {
                printf("|  BH3 %2d   |", BH[2]);
            } else if (arr[i][j] == BH[3]) {
                printf("|  BH4 %2d   |", BH[3]);
            }  else if (arr[i][j] == BH[4]) {
                printf("|  BH5 %2d   |", BH[4]);
            } else if (arr[i][j] == BH[5]) {
                printf("|  BH6 %2d   |", BH[5]);
            } else if (arr[i][j] == BH[6]) {
                printf("|  BH7 %2d   |", BH[6]);
            } else {
                printf("|    %4d   |", arr[i][j]);
            }
        } // end of row loop
        printf("\n");
        
        for (j = 0; j < 10; j++){
            if (p1 == arr[i][j] && p2 == arr[i][j] && p3 == arr[i][j] && p4 == arr[i][j]){
                printf("|P1 P2 P3 P4|");
            } else if (p1 == arr[i][j] && p2 == arr[i][j] && p3 == arr[i][j]){
                printf("| P1 P2 P3  |");
            } else if (p1 == arr[i][j] && p3 == arr[i][j] && p4 == arr[i][j]) {
                printf("| P1 P3 P4  |");
            } else if (p1 == arr[i][j] && p2 == arr[i][j] && p4 == arr[i][j]) {
                printf("| P1 P2 P4  |");
            } else if (p2 == arr[i][j] && p3 == arr[i][j] && p4 == arr[i][j]) {
                printf("| P2 P3 P4  |");
            } else if (p1 == arr[i][j] && p2 == arr[i][j]) {
                printf("|   P1 P2   |");
            } else if (p1 == arr[i][j] && p3 == arr[i][j]) {
                printf("|   P1 P3   |");
            } else if (p1 == arr[i][j] && p4 == arr[i][j]){
                printf("|   P1 P4   |");
            } else if (p2 == arr[i][j] && p3 == arr[i][j]) {
                printf("|   P2 P3   |");
            } else if (p2 == arr[i][j] && p4 == arr[i][j]) {
                printf("|   P2 P4   |");
            } else if (p3 == arr[i][j] && p4 == arr[i][j]) {
                printf("|   P3 P4   |");
            } else if (p1 == arr[i][j]) {
                printf("|     P1    |");
            } else if (p2 == arr[i][j]) {
                printf("|     P2    |");
            } else if (p3 == arr[i][j]){
                printf("|     P3    |");
            } else if (p4 == arr[i][j]) {
                printf("|     P4    |");
            } else {
                printf("|           |");
            }
        }
        printf("\n");
        printf("----------------------------------------------------------------------------------------------------------------------------------\n");
    }
}

int RollDice() {
    time_t t;
    srand((unsigned)time(&t));
    int x = (rand() % 6) + 1;
    printf("dice roll = %d\n", x);
    return x;
}

int updateGame(int plyr, int snakes[], int ladders[]){ // checks to see if we hit
    // check snake 1
    if (plyr == snakes[0]) {
        printf("player hit snake 1!\n");
        printf("slide from spot %d to %d\n", snakes[0], snakes[1]);
        return snakes[1];
    }
    
    // check snake 2
    if (plyr == snakes[2]) {
        printf("player hit snake 2!\n");
        printf("slide from spot %d to %d\n", snakes[2], snakes[3]);
        return snakes[3];
    }
    
    // check snake 3
    if (plyr == snakes[4]) {
        printf("player hit snake 3!\n");
        printf("slide from spot %d to %d\n", snakes[4], snakes[5]);
        return snakes[5];
    }
    
    // check snake 4
    if (plyr == snakes[6]) {
        printf("player hit snake 4!\n");
        printf("slide from spot %d to %d\n", snakes[6], snakes[7]);
        return snakes[7];
    }
    
    // check snake 5
    if (plyr == snakes[8]) {
        printf("player hit snake 5!\n");
        printf("slide from spot %d to %d\n", snakes[8], snakes[9]);
        return snakes[9];
    }
    
    // check ladder 1
    if (plyr == ladders[0]) {
        printf("player hit ladder 1!\n");
        printf("climb from spot %d to %d\n", ladders[0], ladders[1]);
        return ladders[1];
    }
    
    // check ladder 2
    if (plyr == ladders[2]) {
        printf("player hit ladder 2!\n");
        printf("climb from spot %d to %d\n", ladders[2], ladders[3]);
        return ladders[3];
    }
    
    // check ladder 3
    if (plyr == ladders[4]) {
        printf("player hit ladder 3!\n");
        printf("climb from spot %d to %d\n", ladders[4], ladders[5]);
        return ladders[5];
    }
    
    // check ladder 4
    if (plyr == ladders[6]) {
        printf("player hit ladder 4!\n");
        printf("climb from spot %d to %d\n", ladders[6], ladders[7]);
        return ladders[7];
    }
    
    // check ladder 5
    if (plyr == ladders[8]) {
        printf("player hit ladder 5!\n");
        printf("climb from spot %d to %d\n", ladders[8], ladders[9]);
        return ladders[9];
    }
    
    printf("player at spot %d\n", plyr);
    return plyr;
}

bool stuck(int playerValue, int BH[]){
    if (playerValue == 0 || playerValue == BH[0] || playerValue == BH[1] || playerValue == BH[2] || playerValue == BH[3] || playerValue == BH[4] || playerValue == BH[5] || playerValue == BH[6]) {
        if (playerValue == 0){
            printf("You are at the start. Roll a 6 to move forward.\n");
        } else {
            printf("Uh Oh! Looks like you are stuck in a blackhole. Roll a 6 to move forward\n");
        }
        int rd = RollDice();
        if (rd != 6){
            printf("Sorry, looks like you are still stuck. try again next round.\n");
            return true;
        } else {
            printf("It's your lucky day, you can move forward next round.\n");
            return false;
        }
    }
    return false;
}

void menu() {
    // print intro and rules here
    printf("Welcome to Snakes and Ladders!\n");
    printf("1. Set up Board\n2. Play Game\n3. Exit Program\nenter option: ");
}

int main(void){
    int snakes[10] = {29, 22, 99, 40, 50, 48}, ladders[10] = {2,13,23,54,73,75}, BH[7] = {6, 9, 84}; // can be altered to change the board
    int arr[10][10]; int count = 100; // used to intialize board pattern
    int numPlayers, plyr = 0, p1 = 0, p2 = 0, p3 = 0, p4 = 0, turn = 0, round = 1;
    bool stuck1 = true, stuck2 = true, stuck3 = true, stuck4 = true;
    char inp;
    
    // initialize board (array) values
    for (int row = 0; row < 10; row++){
        if (row % 2 == 0){
            for (int col = 0; col < 10; col++){
                arr[row][col] = count;
                count--;
            }
        } else {
            for (int col = 9; col >= 0; col--){
                arr[row][col] = count;
                count--;
            }
        }
    };
    
    // beginning of interactivity
    int option;
    
    do {
        menu();
        //printf("enter option: ");
        scanf("%d", &option);
        
        switch (option) {
            case 1:
                printf("enter different digits with a space in between (all digits must be positive). If not entering max possible numbers, fill rest in as '0'\n\n");
                // enter snake positions
                printf("enter snake positions (6, 8 or 10 digits): ");
                scanf("%d %d %d %d %d %d %d %d %d %d", &snakes[0], &snakes[1], &snakes[2], &snakes[3], &snakes[4], &snakes[5], &snakes[6], &snakes[7], &snakes[8], &snakes[9]);
                
                // enter ladder psoitions
                printf("\nenter ladder positions (6, 8 or 10 digits): ");
                scanf("%d %d %d %d %d %d %d %d %d %d", &ladders[0], &ladders[1], &ladders[2], &ladders[3], &ladders[4], &ladders[5], &ladders[6], &ladders[7], &ladders[8], &ladders[9]);
                
                // enter blackhole postions
                printf("\nenter black hole positions (5-7 digits): ");
                scanf("%d %d %d %d %d %d %d", &BH[0], &BH[1], &BH[2], &BH[3], &BH[4], &BH
                      [5], &BH[6]);
                
                // here is the new board
                printf("\n here is the new board: \n");
                BoardSetup(p1, p2, p3, p4, snakes, ladders, BH, arr);
                printf("\n");
                break;
                
            case 2:
                p1 = p2 = p3 = p4 = turn = 0; round = 1;
                stuck1 = stuck2 = stuck3 = stuck4 = true;
                int maxRound = 10;
                
                BoardSetup(p1, p2, p3, p4, snakes, ladders, BH, arr);
                
                printf("RULES: \n");
                printf("1. the board has positions 1 - 100. Each player starts at positon 0 and must roll a 6 to begin moving for the following rounds (if a players rolls a 6 they will begin at position 6 next turn).\n");
                printf("2. subsequent moves are made w/ the roll of dice.\n3.two or more players can occupy a position.4\nIf a player lands at the start of a ladder they will move upwards to the end of the ladder.\n5.If a player lands at the start of a snake they will move downwards to the bottom of the snake.\n6.If a player lands in a blackhole they must roll a 6 to move next round.\n7. First to position 100 before 10 rounds wins!\n\n");
                
                // ask player specifications and start game
                printf("\nSelect number of players (2-4): ");
                scanf("%d", &numPlayers);
                printf("\n");
                printf("\nEnter number of rounds. for default enter 10 & for extended enter value (recommened 25): ");
                scanf("%d", &maxRound);
                printf("\n");
                
                
                do {
                    ++plyr;
                        
                        switch (plyr) {
                            case 1:
                                printf("player number %d, press enter to roll dice: ", plyr);
                                scanf("%c", &inp); // this seems unencessary
                                stuck1 = stuck(p1, BH);
                                printf("player at spot %d\n", p1);
                                
                                if (!stuck1){
                                    p1 += RollDice();
                                    p1 = updateGame(p1, snakes, ladders);
                                }
                                BoardSetup(p1, p2, p3, p4, snakes, ladders, BH, arr);
                                turn++;
                                break;
                                
                            case 2:
                                printf("player number %d, press enter to roll dice: ", plyr);
                                scanf("%c", &inp); // this seems unencessary
                                stuck2 = stuck(p2, BH);
                                printf("player at spot %d\n", p2);
                                
                                if (!stuck2){
                                    p2 += RollDice();
                                    p2 = updateGame(p2, snakes, ladders);
                                }
                                BoardSetup(p1, p2, p3, p4, snakes, ladders, BH, arr);
                                turn++;
                                break;
                            
                            case 3:
                                // check if valid entry
                                if (plyr > numPlayers){
                                    //printf("invalid entry, try again.\n");
                                    break;
                                }
                                printf("player number %d, press enter to roll dice: ", plyr);
                                scanf("%c", &inp); // this seems unencessary
                                stuck3 = stuck(p3, BH);
                                printf("player at spot %d\n", p3);
                                
                                if (!stuck3){
                                    p3 += RollDice();
                                    p3 = updateGame(p3, snakes, ladders);
                                }
                                BoardSetup(p1, p2, p3, p4, snakes, ladders, BH, arr);
                                turn++;
                                break;
                                
                            case 4:
                                // check if valid entry
                                if (plyr > numPlayers){
                                    //printf("invalid entry, try again.\n");
                                    break;
                                }
                                
                                printf("player number %d, press enter to roll dice: ", plyr);
                                scanf("%c", &inp); // this seems unencessary
                                stuck4 = stuck(p4, BH);
                                printf("player at spot %d\n", p4);
                                
                                if (!stuck4){
                                    p4 += RollDice();
                                    p4 = updateGame(p4, snakes, ladders);
                                }
                                BoardSetup(p1, p2, p3, p4, snakes, ladders, BH, arr);
                                turn++;
                                break;
                                
                        }
                        
                        if (plyr > numPlayers){ // progresses the rounds
                            plyr = 0;
                            round++;
                            if (round <= maxRound) {
                                printf("!!Round %d (NEW ROUND)!!\n", round);
                            }
                            printf("Player 1 at: %d\nPlayer 2 at: %d\nPlayer 3 at: %d\nPlayer 4 at: %d\n", p1, p2, p3, p4);
                            printf("--------------\n");
                        }
                    
                    if (p1 >= 100 || p2 >= 100 || p3 >= 100 || p4 >= 100 || round == maxRound + 1) {
                        // prints end of game status (winner or draw)
                        
                        printf("GAME OVER...\n");
                        if (p1 >= 100){
                            printf("Player 1 Wins!\n\n");
                        } else if (p2 >= 100) {
                            printf("Player 2 Wins!\n\n");
                        } else if (p3 >= 100) {
                            printf("Player 3 Wins!\n\n");
                        } else if (p4 >= 100) {
                            printf("Player 4 Wins!\n\n");
                        } else {
                            printf("DRAW!\n\n");
                        }
                        break;
                    }
                    
                    
                } while (round <=  maxRound);
                    
                break;
                
            case 3:
                break;
                
            default:
                printf("invalid entry, try again.\n");
                break;
        }
        
        
    } while (option != 3);
    
    printf("exiting program...\n");
}
