 /*Naszir L. Merritt Interactive Fiction
 * Title: untangible emotions
 * 
 * Goals within project:
 * Pass and return parameters to your functions.
 * Control all main functions in the main program. 
 * 
 * 
 * Idea for fixes 11/2/2020:
 * U.I needs to be better formatted for player (done)
 * make creator stay with player after being found
 * Finish story\project
 * current progress: 11%
 * 
 * Idea for fixes 11/3/2020
 * create arrays for stats? and body parts (done)
 * random number for  critical decisions (done)
 * current progress: 17%
 * Finish story\project
 * U.I needs to be better formatted for player (done)
 * make creator stay with player after being found
 * 
 * Idea for fixes 11/6/20
 * current progress 25%
 * creator responses (done)
 * look for new equation for random (done)
 * 
 * Idea for fixes 11/10/20
 * I debugged today
 * current progress 30%
 */

#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>

#include "Interactive.h"
using namespace std;

//int ConfidenceCheck(int confidence = 0 ); omit 

// void functions 




// functions with string parameter




int main()
{

	
	
	// rules 
	PlayerRules(); 
	// Game Intro 
	Beginning();
	//stats (turn into Function later)
	Stats();
	// part one of story
	PartOne();

	

	
		
		
		
	//calling function
	ToBeContinued(); 
	
	main();


	return 0;


}





// rules function and start of story functions 
