#include <iostream>
#include <string>
#include<windows.h>

int main()
{
	// Iterating Variables

	std::string Name;
	std::string Address;
	std::string EmailAddress;
	std::string Birth;
	std::string BirthPlace;
	std::string Gender;
	std::string Age;
	std::string Status;
	std::string Religion;

	// Main Code

	// Prompt the User to start
	std::cout << "Hello User, This is ResumeBuilder 3000! v1.0.0 How can I help you? Type 'start' to begin building your resume, otherwise I will close.\n"; 
	
	// Check if the user starts the program, otherwise end the program.
	std::string StartProgram;
	std::cin >> StartProgram;
	if (StartProgram == "start") 
	{
		std::cout << "Please wait while we prepare the ResumeBuilder.. This will only be short.\n";
		Sleep(1500); // Fake loading times.
		std::cout << "ResumeBuilder Started.. Please fill in the information to build your resume\n\n\n";
		
		// Start the ResumeBuilder Prompts to build the resume
		std::cout << "What is your Name?\n";
		std::cin >> Name;
		std::cout << "What is your Address?\n";
		std::cin >> Address;
		std::cout << "What is your Email Address?\n";
		std::cin >> EmailAddress;
		std::cout << "When is your birthdate?\n";
		std::cin >> Birth;
		std::cout << "Where were you born?\n";
		std::cin >> BirthPlace;
		std::cout << "What is your gender?\n";
		std::cin >> Gender;
		std::cout << "What is your age?\n";
		std::cin >> Age;
		std::cout << "What is your status?\n"; 
		std::cin >> Status;
		std::cout << "What is your religion?\n";
		std::cin >> Religion;

		// End Information Prompt, Start Creating Resume
		std::cout << "Thank you for filling up the required information, I will begin to create your resume now. This will take a moment please wait...\n";
		Sleep(2000);
		std::cout << "I have finished creating your resume, Printing it now..\n";
		Sleep(1000);
		std::cout << "\nName: " << Name << "\nAddress: " << Address << "\nEmail Address: " << EmailAddress << "\nBirth: " << Birth << "\nBirth Place: " << BirthPlace << "\nGender: " << Gender << "\nAge: " << Age << "\nStatus: " << Status << "\nReligion: " << Religion << std::endl;
		std::cout << "Your Resume has been finished printing, Closing the program now. please relaunch if you wish to use me again!";
	}
	else
	{
		std::cout << "User did not prompt to start, closing the program.\n";
		return 0;
	}


	// return
	return 0;
}

