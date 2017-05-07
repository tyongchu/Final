#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)

{
    srand( time(NULL) );
    int cards = 0;
    int players = 0;
    int deck [52];
    int counter = 0;
    int counter2 = 0;
    int hold = 0;
    int CardCount = 0;
	int language = 0;
	
	
	printf("Choose language:\nEnglish = press 1\nSpanish = press 2\n");
	scanf("%d", &language);
	
	
	if (language = 1)
		{
				  //Initializes the deck 1-52
		while (counter < 52)
			{

			//places a number in the spot according
				deck[counter] = counter +1 ;
			//printf("%d\n", deck[counter]);
				counter++;
			}

		while(CardCount == 0)
			{
		// Asks how many players there are and assigns it to players
				printf("Number of players: ");
				scanf("%d", &players);

		// Asks how many cards per player and asignes it to cards
				printf("Cards per player: ");
				scanf("%d", &cards);

				CardCount = players * cards;
	// Enters the if statement only if cardcount is greater then 0 and less then 52
				if (CardCount <= 52 && CardCount > 0)
					{

		// Initializes an array, number of columns is cards, number of rows is players
						int users [cards][players];

		//Resets counter to 0 so it can enter the while statement
						counter = 0;

		//Keeps loopoing as many players as there are requested
						while ( counter < players)
							{

			//Loops according to the amount of cards requested
							while ( counter2 < cards)
								{

				// Randomly picks a number
									hold = rand() % 52+0;

				// Places the number that is present in the deck when into the users hands
									users[counter2][counter] = deck[hold];

				// Sets the chosen number to 0
									deck[hold] = 0;

				//printf("%d\n", users[counter2][counter]);

				// Enters this function if the number has already been used
									while (users[counter2][counter] == 0 )
										{

					// Randomly picks a number 0-51 (Accoding to an array)
											hold = rand() % 52+0;

					// Places the number that is present in the deck when into the users hands
											users[counter2][counter] = deck[hold];

					// Sets that number in the deck to 0
											deck[hold] = 0;

					//printf("%d   redo\n", users[counter2][counter]);

										}

									counter2++;

								}

			//Resets count 2 do that is can run through each hand again
							counter2 = 0;
							counter++;

						}

					counter = 0;
					counter2 = 0;

		//printf("players %d\n", players);
		//printf("cards %d\n", cards);

		//Places the cards in each players hands
					while (counter < players)
						{

			//Tells the user what player's cards will be shown
							printf("\nPlayer %d\n", counter+1);

							while (counter2 < cards)
								{

				//printf("player cards %d\n", users[counter2][counter]);

				// Assigns a card name to the number that was chosen by the random generator
									switch (users[counter2][counter])
										{

											case 1:
											   printf("Ace of spades\n");
											   break;
											case 2:
												printf("King of spades\n");
												break;
											case 3:
												printf("Queen of spades\n");
												break;
											case 4:
											   printf("Jack of spades\n");
											   break;
											case 5:
												printf("10 of spades\n");
												break;
											case 6:
												printf("9 of spades\n");
												break;
											case 7:
												printf("8 of spades\n");
												break;
											case 8:
												printf("7 of spades\n");
												break;
											case 9:
												printf("6 of spades\n");
												break;
											case 10:
												printf("5 of spades\n");
												break;
											case 11:
												printf("4 of spades\n");
												break;
											case 12:
												printf("3 of spades\n");
												break;
											case 13:
												printf("2 of spades\n");
												break;
											case 14:
												printf("Ace of diamonds\n");
												break;
											case 15:
												printf("King of diamonds\n");
												break;
											case 16:
												printf("Queen of diamonds\n");
												break;
											case 17:
												printf("Jack of diamonds\n");
												break;
											case 18:
												printf("10 of diamonds\n");
												break;
											case 19:
												printf("9 of diamonds\n");
												break;
											case 20:
												printf("8 of diamonds\n");
												break;
											case 21:
												printf("7 of diamonds\n");
												break;
											case 22:
												printf("6 of diamonds\n");
												break;
											case 23:
												printf("5 of diamonds\n");
												break;
											case 24:
												printf("4 of diamonds\n");
												break;
											case 25:
												printf("3 of diamonds\n");
												break;
											case 26:
												printf("2 of diamonds\n");
												break;
											case 27:
												printf("Ace of clovers\n");
												break;
											case 28:
												printf("King of clovers\n");
												break;
											case 29:
												printf("Queen of clovers\n");
												break;
											case 30:
												printf("Jack of clovers\n");
												break;
											case 31:
												printf("10 of clovers\n");
												break;
											case 32:
												printf("9 of clovers\n");
												break;
											case 33:
												printf("8 of clovers\n");
												break;
											case 34:
												printf("7 of clovers\n");
												break;
											case 35:
												printf("6 of clovers\n");
												break;
											case 36:
												printf("5 of clovers\n");
												break;
											case 37:
												printf("4 of clovers\n");
												break;
											case 38:
												printf("3 of clovers\n");
												break;
											case 39:
												printf("2 of clovers\n");
												break;
											case 40:
												printf("Ace of hearts\n");
												break;
											case 41:
												printf("King of hearts\n");
												break;
											case 42:
												printf("Queen of hearts\n");
												break;
											case 43:
												printf("Jack of hearts\n");
												break;
											case 44:
												printf("10 of hearts\n");
												break;
											case 45:
												printf("9 of hearts\n");
												break;
											case 46:
												printf("8 of hearts\n");
												break;
											case 47:
												printf("7 of hearts\n");
												break;
											case 48:
												printf("6 of hearts\n");
												break;
											case 49:
												printf("5 of hearts\n");
												break;
											case 50:
												printf("4 of hearts\n");
												break;
											case 51:
												printf("3 of hearts\n");
												break;
											case 52:
												printf("2 of hearts\n");
												break;
										}

									counter2++;//keep counter going to reach
								}

							counter++;
							counter2 = 0;
						}
					}

				else
					{
						printf("There are only 52 cards to pass, you entered %d cards\n", CardCount);

						CardCount = 0;

					}
				}
		}
	
	
	if (language = 2)
	{
		      //Initializes the deck 1-52
    while (counter < 52)
        {

        //places a number in the spot according
            deck[counter] = counter +1 ;
        //printf("%d\n", deck[counter]);
            counter++;
        }

    while(CardCount == 0)
        {
    // Asks how many players there are and assigns it to players
            printf("Numero de jugadores: ");
            scanf("%d", &players);

    // Asks how many cards per player and asignes it to cards
            printf("Cartas por jugador: ");
            scanf("%d", &cards);

            CardCount = players * cards;
// Enters the if statement only if cardcount is greater then 0 and less then 52
            if (CardCount <= 52 && CardCount > 0)
                {

    // Initializes an array, number of columns is cards, number of rows is players
                    int users [cards][players];

    //Resets counter to 0 so it can enter the while statement
                    counter = 0;

    //Keeps loopoing as many players as there are requested
                    while ( counter < players)
                        {

        //Loops according to the amount of cards requested
                        while ( counter2 < cards)
                            {

            // Randomly picks a number
                                hold = rand() % 52+0;

            // Places the number that is present in the deck when into the users hands
                                users[counter2][counter] = deck[hold];

            // Sets the chosen number to 0
                                deck[hold] = 0;

            //printf("%d\n", users[counter2][counter]);

            // Enters this function if the number has already been used
                                while (users[counter2][counter] == 0 )
                                    {

                // Randomly picks a number 0-51 (Accoding to an array)
                                        hold = rand() % 52+0;

                // Places the number that is present in the deck when into the users hands
                                        users[counter2][counter] = deck[hold];

                // Sets that number in the deck to 0
                                        deck[hold] = 0;

                //printf("%d   redo\n", users[counter2][counter]);

                                    }

                                counter2++;

                            }

        //Resets count 2 do that is can run through each hand again
                        counter2 = 0;
                        counter++;

                    }

                counter = 0;
                counter2 = 0;

    //printf("players %d\n", players);
    //printf("cards %d\n", cards);

    //Places the cards in each players hands
                while (counter < players)
                    {

        //Tells the user what player's cards will be shown
                        printf("\nPlayer %d\n", counter+1);

                        while (counter2 < cards)
                            {

            //printf("player cards %d\n", users[counter2][counter]);

            // Assigns a card name to the number that was chosen by the random generator
                                switch (users[counter2][counter])
                                    {

                                        case 1:
                                           printf("Az de Espadas\n");
                                           break;
                                        case 2:
                                            printf("Rey de Espadas\n");
                                            break;
                                        case 3:
                                            printf("Reina de Espadas\n");
                                            break;
                                        case 4:
                                           printf("Jack de Espadas\n");
                                           break;
                                        case 5:
                                            printf("10 de Espadas\n");
                                            break;
                                        case 6:
                                            printf("9 de Espadas\n");
                                            break;
                                        case 7:
                                            printf("8 de Espadas\n");
                                            break;
                                        case 8:
                                            printf("7 de Espadas\n");
                                            break;
                                        case 9:
                                            printf("6 de Espadas\n");
                                            break;
                                        case 10:
                                            printf("5 de Espadas\n");
                                            break;
                                        case 11:
                                            printf("4 de Espadas\n");
                                            break;
                                        case 12:
                                            printf("3 de Espadas\n");
                                            break;
                                        case 13:
                                            printf("2 de Espadas\n");
                                            break;
                                        case 14:
                                            printf("Az de Diamantes\n");
                                            break;
                                        case 15:
                                            printf("Rey de Diamantes\n");
                                            break;
                                        case 16:
                                            printf("Reina de Diamantes\n");
                                            break;
                                        case 17:
                                            printf("Jack de Diamantes\n");
                                            break;
                                        case 18:
                                            printf("10 de Diamantes\n");
                                            break;
                                        case 19:
                                            printf("9 de Diamantes\n");
                                            break;
                                        case 20:
                                            printf("8 de Diamantes\n");
                                            break;
                                        case 21:
                                            printf("7 de Diamantes\n");
                                            break;
                                        case 22:
                                            printf("6 de Diamantes\n");
                                            break;
                                        case 23:
                                            printf("5 de Diamantes\n");
                                            break;
                                        case 24:
                                            printf("4 de Diamantes\n");
                                            break;
                                        case 25:
                                            printf("3 de Diamantes\n");
                                            break;
                                        case 26:
                                            printf("2 de Diamantes\n");
                                            break;
                                        case 27:
                                            printf("Az de Trebol\n");
                                            break;
                                        case 28:
                                            printf("Rey de Trebol\n");
                                            break;
                                        case 29:
                                            printf("Reina de Trebol\n");
                                            break;
                                        case 30:
                                            printf("Jack de Trebol\n");
                                            break;
                                        case 31:
                                            printf("10 de Trebol\n");
                                            break;
                                        case 32:
                                            printf("9 de Trebol\n");
                                            break;
                                        case 33:
                                            printf("8 de Trebol\n");
                                            break;
                                        case 34:
                                            printf("7 de Trebol\n");
                                            break;
                                        case 35:
                                            printf("6 de Trebol\n");
                                            break;
                                        case 36:
                                            printf("5 de Trebol\n");
                                            break;
                                        case 37:
                                            printf("4 de Trebol\n");
                                            break;
                                        case 38:
                                            printf("3 de Trebol\n");
                                            break;
                                        case 39:
                                            printf("2 de Trebol\n");
                                            break;
                                        case 40:
                                            printf("Az de Corazones\n");
                                            break;
                                        case 41:
                                            printf("Rey de Corazones\n");
                                            break;
                                        case 42:
                                            printf("Reina de Corazones\n");
                                            break;
                                        case 43:
                                            printf("Jack de Corazones\n");
                                            break;
                                        case 44:
                                            printf("10 de Corazones\n");
                                            break;
                                        case 45:
                                            printf("9 de Corazones\n");
                                            break;
                                        case 46:
                                            printf("8 de Corazones\n");
                                            break;
                                        case 47:
                                            printf("7 de Corazones\n");
                                            break;
                                        case 48:
                                            printf("6 de Corazones\n");
                                            break;
                                        case 49:
                                            printf("5 de Corazones\n");
                                            break;
                                        case 50:
                                            printf("4 de Corazones\n");
                                            break;
                                        case 51:
                                            printf("3 de Corazones\n");
                                            break;
                                        case 52:
                                            printf("2 de Corazones\n");
                                            break;
                                    }

                                counter2++;//keep counter going to reach
                            }

                        counter++;
                        counter2 = 0;
                    }
                }

            else
                {
                    printf("Solo hay 52 cartas para jugar, usted eligio %d cartas\n", CardCount);

                    CardCount = 0;

                }
            }
	}
	
	
	if ((language =! 1) && (language =! 2))
	{
		printf("Language not available");
	}
	

return 0;
}
	
	
	
	
	
	
	
	
	

    
