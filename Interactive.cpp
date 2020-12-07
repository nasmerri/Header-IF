/*
* Naszir Merritt 
* Additional source file for function definitions 



*/


#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
#include "Interactive.h"
using namespace std;


// boolean variable
bool Initialized;

bool MinorWound;

bool MajorWound;

bool Blind;

bool Creator;

bool Dog;

// intger variables


// Social Stats 
int Confidence = 0;

int Focus = 0;

int Luck = 0;

int Kindness = 0;

int Fear = 0;


// stats variables 

int PlayerHealth = 10;

int PlayerMoney = 30;

int achievement = 0;

int PlayerHellpResponses = 0;

int CreatorResponses = 0;

int DogResponses = 0;

int Eye = 2;

int Items = 0;

int Six = 6;

int Fate = 2;

const int Max_Inventory = 13;

const int Max_BodyParts = 6;
// create array for body parts 

string BodyParts[Max_BodyParts] = { "leg", "arm", "eye", "heart", "hand", "foot" };

string Inventory[Max_Inventory];





// string variable
string PlayerAnswer;

string GameDecision;

string DogName;












void PlayerRules()
{



	cout << "\n==========================================================================\n";
	cout << "\n\t\t\t\t Rules\n\n";
	cout << "\t\t\t\tDon't use uppercase.\n";
	cout << "\t\t\t\tNo Spaces\n";
	YesNoDecision("\n\t\t\t\tDo you understand?\n\t\t\t\t(Use y for yes, and n for no)\n");
	cout << "\n==========================================================================\n";


	if (PlayerAnswer != "y")
	{

		ToBeContinued(); // calling function
	}


	Stats();
	// returns to main function


}

void Beginning()
{




	cout << "\n\t\t\t\t\tUntangible Emotions. . . .\n\n";
	cout << "\t\t\t\t     This is a story about choices.     \n\n";
	cout << "\t\t\t\t     Your fate is in your hands.     \n\n";
	cout << "\n\t\t\t\t\t'Remember who you are'";

	PlayerAnswer = YesNoDecision("\nUnkown:Would you like to remember?\n"); // calling function

	// if statement for first player decision
	if (PlayerAnswer == "y")
	{
		cout << "\n\nUnkown:So be it.\n\n";

	}
	else if (PlayerAnswer == "n")
	{
		cout << "\n\nProgram Hellp:Please type 'quit' to exit the game.\n\n";
		cout << "Response:";
		cin >> PlayerAnswer;

		if (PlayerAnswer == "quit")
		{

			// do once for this section of code
			if (!Initialized)
			{
				achievement++;
				cout << "\n\n\t\t\t\t\t Achievement Unlocked: Anger the Hellp\n\n";
				Initialized = true;
			}
			cout << "Program Hellp:You really thought i'd let you leave?\n" << "How much of a fool do you take me for?\n";

			Stats();


			HellpAttack(); // calling fake quit function


		}
		else
		{
			PlayerHellpResponse("Oh, so you don't want to 'quit' but you dont't want to remember either.\n\n"); // calling player hellp response
			cout << "\nSoon you'll realize that indecisivness is death.\n";
			YesNoDecision("\nContinue?\n");

		}

	}




}


void PartOne()
{




	cout << "\nYou wake in the middle of a snowy field in the dead of night.\n";


	YesNoDecision("\nDo you want to explore?\n");// move or stay 

	if (PlayerAnswer == "y") // glitch \ fight 
	{
		cout << "\n\nIt is the middle of the night with a light breeze.\n";
		cout << "All that surrounds you are snowy hills and trees.\n";
		cout << "You notice a light over the next hill.\n";
		YesNoDecision("\nDo you want to investigate?\n");

		if (PlayerAnswer == "y") // fight 
		{
			cout << "\n\nYou approach the light and notice its a campfire.\n";
			YesNoDecision("\nWould you like to get warm?\n");

			if (PlayerAnswer == "y")
			{
				cout << "\n\nYou step toward the warm campfire.\n";

				RandomSix(6);

				cout << "\n An arrow flys out toward you.\n";
				cout << "\nDistracted by the chance to be warm, the arrow hits your " << BodyParts[Six] << ".\n";

				if (BodyParts[Six] == BodyParts[0]) // leg 
				{
					PlayerHealth = PlayerHealth - 3;
					cout << "\nOuch Your leg is wounded\n";
					Stats();
					MinorWound = true;
				}
				else if (BodyParts[Six] == BodyParts[1]) // arm 
				{
					PlayerHealth = PlayerHealth - 3;
					cout << "\nOuch Your arm is wounded\n";
					Stats();
					MinorWound = true;
				}
				else if (BodyParts[Six] == BodyParts[2]) // eye 
				{
					PlayerHealth = PlayerHealth - 5;
					Eye--;
					cout << "\nOuch as it hit your eye, you cry in agony.\n";
					cout << "\nYet still holding on for life.\n";
					Stats();
					MajorWound = true;
				}
				// no three because its heart
				else if (BodyParts[Six] == BodyParts[4]) // hand 
				{
					PlayerHealth = PlayerHealth - 3;
					cout << "\nOuch Your hand is wounded";
					Stats();
					MinorWound = true;
				}
				else if (BodyParts[Six] == BodyParts[5]) // foot
				{
					PlayerHealth = PlayerHealth - 3;
					cout << "\nOuch Your foot is wounded";
					Stats();
					MinorWound = true;
				}
				else // dead 
				{

					// achievement 
					PlayerHealth = 0;
					cout << "\nThe arrow rips into your chest, piercing your beating heart.\n";
					cout << "\nAll that you remembered is lost.\n";
					cout << "\nFor some odd reason you feel nothing.\n";

					//MajorWound = true;
					/*if (confidence > 5)
					{
						cout << "\nLife\n";

						// edit for more later
					}
					else
					{
						ToBeContinued();
					}*/
					ToBeContinued();

				}



				cout << "\nAs you manage to survive the encounter you run, injured, through the woods.\n";
				cout << "\nLeaving a trail of blood behind you.\n";

				Stats();


			}
			else
			{
				cout << "\n\nYou hear rustling in the trees to the right of the campfire.\n";
				cout << "You notice a glint, and almost immediatley duck down behind the hill.\n";
				cout << "Evading the arrow you try to catch your breath.\n";
				YesNoDecision("Do you stay and catch your breath?\n");

				if (PlayerAnswer == "y")
				{
					Focus++;
					cout << "\nYou crouch and gather yourself behind the hill.\n";
					cout << "\nAs you breathe in and out, you hear footsteps crunching in the snow get louder.";
					cout << "\nThe steps get louder and louder, but then a loud thump in the forrest echoes through out the hills.\n";
					cout << "\nAnd then silence. No more footsteps. Just pure nothing.";

					YesNoDecision("\nDo you wish to investigate?\n");

					if (PlayerAnswer == "y")
					{

						cout << "\nYou peak over and notice theres a huge branch over top of the once burning campfire.\n";
						cout << "\nAs you get closer to the branch you notice half a body of an 'eyebrow' archer.\n";
						cout << "\nCreator: Don't ask what an 'eyebrow' archer is just know it wasn't my fault.\n";

						Inventory[Items++] = "Bow and Arrow";
						cout << "\nYou notice a bow and a bag of arrows and add them to your inventory.\n";
						InventoryList(Inventory);


						// put achievement

						cout << "\nYou then head proudly with a little bit of gear.\n";
						cout << "\nBe it dumb luck or pure genius.\n";
						cout << "\nYou proceed into the dark and cold winter forest.\n";
						Stats();
					}
					else
					{

						cout << "\nYou flee to the woods.\n";
						cout << "\nHoping for life and sanctuary.\n";

						Stats();
					}
				}
				else
				{
					Focus--;
					cout << "\nWith fear in your eyes, you run into the forest blindly.\n";
					PlayerHealth = PlayerHealth - 2;
					cout << "\nUh Oh, you trip over a branch as you run into the forrest and as you trip you hear a loud thump.\n";
					cout << "\nYou get up too afraid to investigate and head farther into the forest.\n";

					Stats();

				}



			}



		}
		else   // glitch 
		{
			cout << "\n\nYou notice that a tree is glitching due to high snowfall.\n";
			YesNoDecision("Would you like to try to fix this?\n");

			if (PlayerAnswer == "y")
			{
				Focus++;
				Luck++;
				cout << "\nYou walk up with your freezing hands trying to fix the glitch.\n";
				PlayerHellpResponses++;
				PlayerHellpResponse("Hey buddy don't touch that.\n");

				YesNoDecision("\nDo you continue fixing?\n");

				if (PlayerAnswer == "y")
				{
					Focus++;
					Luck++;
					cout << "\nYour glitch fixing skills surprises you as the glitch begins to go away.\n";
					cout << "\nAtleast you thought it went away. The glitch turns into a massive wormhole.\n";
					cout << "\nYou feel a presence nod at your creation.\n";
					PlayerHellpResponses++;
					PlayerHellpResponse("Now you've done it, get over here.\n");
					YesNoDecision("\nDo you wish to run away?\n");

					if (PlayerAnswer == "y")
					{
						Luck++;
						cout << "\nYou feel an ominous presence behind you\n";
						cout << "\nBut before it can take action, you traverse through the wormhole.\n";
						cout << "\nYou end up somewhere in the forest\n";
						Stats();
						// achievement 
					}
					else
					{
						Confidence--;
						cout << "\nYou choose to not risk going into a warmhole.\n";
						cout << "\nBut that came at a cost.";
						HellpAttack();

						cout << "\nYou end up somewhere in the forest;\n";
						Stats();
					}

				}
				else
				{

					Focus--;
					cout << "\nYou quickly run into the forest.\n";

					Stats();
				}

			}
			else
			{
				cout << "\nYou stop in your tracks, and hear nature all around you. It's beautiful and frightening at the same time.\n";
				cout << "\nYou hear whimpering close by.\n";
				YesNoDecision("\nDo you wish to walk closer to it?\n");
				if (PlayerAnswer == "y")
				{
					Kindness++;
					cout << "\nYour steps begin to quicken as you try to track the sound of the whimpering.\n";
					cout << "\nAs you approach the whimpering you find is a wolf cub.\n";
					cout << "\nYou barely can see it, because its covered in snow, but its silver fur shines just right in the moonlight.\n";
					cout << "\nFor you to see this cub shivering in the snow.";
					cout << "\nDev: And no it dosen't take up inventory space if you kept it.\n";
					YesNoDecision("\nDo you want to keep it?\n");

					if (PlayerAnswer == "y")
					{

						cout << "\nWhat would you like to name it?\n";
						cout << "\nDev:One word and keep it short please.\n";
						cin >> DogName;
						cout << "\nYou grab the dog in your arms.\n";
						cout << "\nThen proceed toward the forest for warmth.\n";

						if (!Initialized)
						{
							Dog = true;
							DogResponse("*Whimpers quietly*.", DogName);

							// achievement
							Initialized = true;
						}
						Stats();
					}
					else
					{
						Fear++;
						cout << "\nYou have decided to abandon the wolf cub in the harsh weather.\n";
						cout << "\nAs you continue to push through the extreme winds, you hear the cub continue to whimper.\n";
						cout << "\nYou notice the whimpering turn into a menacingly low - pitched growl.\n";
						cout << "\nTurning around, your eyes fall upon a fully - grown wolf in the dim moonlight.\n";

						cout << "\nKnowing that death is close you go on your knees and hope for mercy. As guilt overwhelms you\n";
						cout << "\nThe grown wolf approaches you.\n";


						RandomFate(2);

						switch (Fate)
						{
						case 1:
							cout << "\n==========================================================================\n";
							cout << "\nWithout hesitation, you turn around and run away from the wolf.\n";
							cout << "\nHowever, you dont make it far before you feel the wolf tear into your leg.\n";
							cout << "\nThe beast shows no mercy.\n";
							cout << "\nIt continues to tear into your flesh and you slip out of consciousness.\n";//death
							cout << "\nAnd slip slowly into the cold embrace of death.\n";

							cout << "\n==========================================================================\n";
							ToBeContinued();
							break;
						case 2:
							cout << "\n==========================================================================\n";
							cout << "\nYou stand tall, shaking the guilt.\n";
							cout << "\nSlowly approaching the wolf, its growls soften.\n";
							cout << "\nFinally within arms length, you reach out to pet the creature.\n";
							cout << "\nThe wolf acknowledges your will and leaves you.\n";
							cout << "\nShaken but still kicking you head into the forest.\n";// life
							cout << "\n==========================================================================\n";
							Stats();
							break;
						}

					}



				}
				else
				{
					Kindness--;
					cout << "\nAs the you walk away from the whimpering.\n";
					cout << "\nThe whimpers eventually cease\n.";
					cout << "\nYou think you feel a gnawing at your leg.\n";
					cout << "\nBut as you look back nothing is there.\n";
					cout << "\nYou walk into the quiet forrest.\n";
					Stats();

					// achievement 


				}






			}


		}

	}
	else   // scarf 
	{
		cout << "\n\nAs you stand in the middle of the snowy field, you feel a throbbing sensation in your head.\n";
		cout << "You see vision of someone handing you a black scarf.\n";
		YesNoDecision("\nUnknown:I got you a present....do you like it?\n");


		if (PlayerAnswer == "y")
		{
			cout << "\n\nA strong gust of wind blows through you.\n";
			Inventory[Items++] = "Black Scarf";
			cout << "Your scarf unravels around your neck as you try to get a hold of it.\n";
			cout << "At the very last minute you grab your scarf before it blows away.\n";
			Confidence++;
			cout << "You embrace it with a new found conviction.\n";
			Stats();


		}
		else
		{
			cout << "\n\nA big surge of wind overwhelms as you fall.\n";
			cout << "You sit up and shake it off.\n";
			cout << "But can't help but feel a sensation of loss come over you.\n";
			cout << "As you rub your naked neck.";
			Confidence--;
			Stats();

		}
	}


	cout << "\nYou find a town past the trees.\n";
	Stats();


	// Part Two
	if (MajorWound == true)
	{
		cout << "\nYou walk out the other side of the forest on the brink of death.\n";
		cout << "You pass out.\n";
		cout << "All your money was spent on healing your wounds.\n";

		PlayerMoney = 0;

	}

	if (MinorWound == true)
	{
		cout << "\nAs you walk hurt through the town you find a hospital\n";

		YesNoDecision("\nDo you want to go to the hospital?\n");

		if (PlayerAnswer == "y")
		{
			cout << "\nYou spend 15 gold to heal your wounds\n";

			++Confidence;

			++Focus;

			++Luck;

			++Kindness;

			MinorWound = false;




		}
		else
		{
			cout << "\nYou reluctantly walk away from the hospital.\n";
			cout << "Not willing to spend your gold you turn toward the main road.\n";
			++Fear;



		}


		//trueno

	}

	Stats();

	cout << "\nAs you walk within the town you hear screaming.\n";
	cout << "Ahhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh!\n";
	YesNoDecision("\nDo you wanna investigate?\n");

	if (PlayerAnswer == "y")
	{
		cout << "\nYou see an alley way while your walking on the main road.\n";
		cout << "It seems like a quicker way to the screaming\n";

		YesNoDecision("\nDo you want to go down the alley way\n");

		if (PlayerAnswer == "y")
		{
			cout << "\nYou walk in the alley.\n";
			cout << "\nYou notice as you walk in the alley that its littered with trash.\n";

			if (Focus >= 2)
			{
				cout << "\nThe trash begins to move around you.\n";
				cout << "With your current awareness, you quickly escape the trash surrounding you.\n";

			}
			else
			{
				cout << "\nUknowingly the trash begins to move but you do not notice.\n";
				cout << "Thieves come out of the trash, threatening you.\n";
				cout << "'Give us your money.'\n";
				cout << "'Give us your equipment.'\n";
				cout << "'Give us your life.'\n";
				cout << "The three thieves seem to want alot.\n";




			}

		}
		else
		{




		}

		//cout << "\nYou approach the screaming.\n";
		//cout << "And as you do you begin to notice smoke in the direction of the screaming.\n"


	}
	else
	{

		++Fear;



	}


}











// end of story functions 








void InventoryList(string Inventory)
{
	cout << "\nCurrent inventory:\n";

	for (int i = 0; i < Items; ++i)
	{
		cout << Inventory[i] << endl;
	}

	YesNoDecision("\nDo You want to continue\n");


}




// yes no function 
string YesNoDecision(string prompt)
{

	do
	{
		cout << "\n==========================================================================\n";
		cout << prompt;
		cout << "\nResponse:";
		cin >> PlayerAnswer;
		cout << "\n==========================================================================\n";


	} while (PlayerAnswer != "y" && PlayerAnswer != "n");

	return PlayerAnswer;

}



// fake quit function
int HellpAttack()
{
	PlayerHellpResponses++;
	cout << "\n==========================================================================\n";
	cout << "Because of your lack of bravery I will personally half your money or half your health.\n";
	cout << "Choose between 1 or 2.\n\n";
	cout << "\n==========================================================================\n";
	cout << "\nResponse:";
	cin >> PlayerAnswer;

	if (PlayerAnswer == "1")

	{
		PlayerHealth = PlayerHealth / 2;

		cout << " \n\nYou chose a shorter life.\n\n";


	}
	else if (PlayerAnswer == "2")
	{
		PlayerMoney = PlayerMoney / 2;

		cout << "\n\nYou chose to pay taxes.\n\n";

	}
	else
	{


		if (!Initialized)
		{
			cout << "\t\t\t\t\tAcievement Unlocked: Bother the programmer\n\n";
			achievement++;

			Initialized = true;
		}
		Creator = true;
		CreatorResponse("What was that?What did you do? I'm not supposed to be here.Put me back.\n\n"); // calling creator response function




	}


	// prompting user
	cout << "\n==========================================================================\n";
	cout << "\n\nYour health is now: " << PlayerHealth << " and your Money is: " << PlayerMoney << ".\n";
	cout << "I hope it was worth it. " << "What am I saying? I really dont't care. Now go and remember!\n";
	YesNoDecision("Do you understand now?\n");
	cout << "\n==========================================================================\n";



	cout << "\n\nEither way I'm sending you back.\n\n";

	return  PlayerHealth;

}


int  RandomSix(int var)
{

	srand(time(NULL));
	Six = rand() % var;



	// look for different equation


	return Six;

}

int  RandomFate(int var)
{

	srand(time(NULL));
	Fate = rand() % var + 1;



	// look for different equation


	return Fate;

}


void Stats()
{
	cout << "\n==========================================================================\n";
	cout << "\n\nYour current stats are:\n";
	cout << "Health: " << PlayerHealth << "\n";
	cout << "Monry: " << PlayerMoney << "\n";
	cout << "Achievements: " << achievement << "\n";
	cout << "PlayerHellp Responses: " << PlayerHellpResponses << "\n";
	cout << "Creator Responses: " << CreatorResponses << "\n";
	cout << "Dog Responses: " << DogResponses << "\n";
	cout << "Confidence: " << Confidence << "\n";
	cout << "Focus: " << Focus << "\n";
	cout << "Fear: " << Fear << "\n";
	cout << "Kindness: " << Kindness << "\n";
	cout << "\n==========================================================================\n";

	YesNoDecision("\nDo you want to continue?\n");

	if (PlayerAnswer == "n")
	{

		ToBeContinued();
	}

}



// player help response function
void PlayerHellpResponse(string prompt)
{
	PlayerHellpResponses++;
	cout << "\nPlayerHellp:";
	cout << prompt;



}


// Creator response function
void CreatorResponse(string prompt)
{
	CreatorResponses++;
	cout << "\n\nCreator:";
	cout << prompt;




}

void DogResponse(string prompt, string var)
{
	DogResponses++;
	cout << var << ":" << prompt << endl;



}




// to be continued function 
void ToBeContinued(int percentage)
{

	cout << "\n\n\t\t\t\t\tGame Over\n\n";

	Stats();

	cout << "\n==========================================================================";
	cout << "\nDev: This project is not yet complete.\n";
	cout << "Current completion percentage is: " << percentage << ".\n";
	cout << "Feel free to try other options available in the program or quit.\n";
	cout << "\n==========================================================================";
	YesNoDecision("\nWould you like to play again?");




	if (PlayerAnswer == "n")
	{

		cout << "\n\n\n\n\nThanks for playing.\n\n";
		cout << "\n==========================================================================";
		exit(0);


	}



	 // call main function



}