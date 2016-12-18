/*
******************************************************************************
* ----------
* HEALTH (+)
* ----------
* by: Brandon Beschta and Trevor Maliborski
******************************************************************************
*/
#include <iostream>

int main(){

	std::cout << "------------------------" << std::endl;
	std::cout << " Welcome to Health (+)! " << std::endl;
	std::cout << "------------------------" << std::endl;
	std::cout << std::endl;
	
	int heightSelection;
	
	std::cout << "    Select your height class:"  << std::endl << std::endl;
	std::cout << "[1] Less than 5 feet"  		  << std::endl;
	std::cout << "[2] Between 5 and 5 (1/2) feet" << std::endl;
	std::cout << "[3] Between 5 (1/2) and 6 feet" << std::endl;
	std::cout << "[4] Between 6 and 6 (1/2) feet" << std::endl << std::endl;
	
	std::cout << "Selection: ";
	std::cin  >> heightSelection;
	std::cout << std::endl;
	
	int weightSelection;

	std::cout << "    Select your weight class:"  << std::endl << std::endl;
	std::cout << "[1] Between 80 and 100 pounds"  << std::endl;
	std::cout << "[2] Between 100 and 120 pounds" << std::endl;
	std::cout << "[3] Between 120 and 150 pounds" << std::endl;
	std::cout << "[4] Between 150 and 180 pounds" << std::endl;
	std::cout << "[5] Between 180 and 220 pounds" << std::endl;
	std::cout << "[6] Between 220 and 250 pounds" << std::endl;
	std::cout << "[7] 250+ pounds" << std::endl   << std::endl;
	
	std::cout << "Selection: ";
	std::cin  >> weightSelection;
	std::cout << std::endl;

	int exerciseHabitsSelection;

	std::cout << "    Select the option below that best aligns" 
			  <<    " with your current exercise habits:" 
			  << std::endl 
			  << std::endl;
	
	std::cout << "[1] I have not exercised recently" << std::endl;
	std::cout << "[2] I exercise about once a week"  << std::endl;
	std::cout << "[3] I exercise a few times a week" << std::endl;
	std::cout << "[4] I exercise almost every day"   << std::endl << std::endl;

	std::cout << "Selection: ";
	std::cin  >> exerciseHabitsSelection;
	std::cout << std::endl;

	int eatingHabitsSelection;

	std::cout << "    Select the option below that best aligns"
			  <<    " with your current eating habits:"
			  << std::endl
			  << std::endl;

	std::cout << "[1] I mainly eat fast food, instant meals," 
			  <<    " really salty foods, and sweets" 
			  << std::endl;

	std::cout << "[2] I eat junk food sparingly but I don't"
			  << 	" really think about the food I'm eating" 
			  << std::endl;

	std::cout << "[3] I make a concious effort to eat healthy"
			  << 	" and prepare wholesome meals"
			  << std::endl;

	std::cout << "Selection: ";
	std::cin  >> eatingHabitsSelection;
	std::cout << std::endl;

	int tipIndex =   heightSelection 
				   + weightSelection
				   + exerciseHabitsSelection
				   + eatingHabitsSelection;

	return 0;
}
