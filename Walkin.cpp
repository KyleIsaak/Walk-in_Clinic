/*
 * Walkin.cpp
 *
 * Class Description: Allows a receptionist to manage personal records of a walk-in clinic system.
 * Class Invariant: Each patient has a unique care card number.
 *                  This care card number must have 10 digits.
 *                  This care card number cannot be modified.
 *
 * Author: Kyle Isaak / Brad Bart
 * Date: January 21, 2019
 */

using namespace std;

#include <iostream>
#include <string>
#include "Patient.h"
#include "List.h"

void main(){

	string userInput = "Start";

	cout << "Welcome to Kyle Isaak's walk-in clinic patient record system." << endl << endl;

	while (userInput != "0"){
		cout << "What would you like to do? (Please input the number of your desired action)" << endl;
		cout <<"1. enter a new patient into the system" << endl;
		cout <<"2. remove a patient from the system" << endl;
		cout <<"3. search for an existing patient" << endl;
		cout <<"4. modify a patient's record" << endl;
		cout <<"5. print all patients' records" << endl;
		cout <<"0. exit program" << endl;
		cin >> userInput;
		cout << endl;


	// enter a new patient into the system
		if(userInput == "1"){
			int careCardNumber;
			cout << "Enter the care card number of the patient you would like to add: ";
			cin << careCardNumber;
			cout << endl;

			Patient* newPatient = Patient::Patient(careCardNumber);

			bool alreadyAdded;

			for(int i = 0; i < List::getElementCount(); i++;){
				if(Patient::operator == (newPatient)){
					bool alreadyAdded = true;
					i = List::getElementCount();
				}
			}

			if (bool alreadyAdded == false){
				List::insert(newPatient)
			}
			else{
				cout << "That user has already been added! Please modify their information instead!"

			}

			string addInput = "Start";

			while(addInput != "0"){
				cout << "Would you like to add the patient's name, address, phone or email?" << endl;
				cout << "1. name" << endl;
				cout << "2. address" << endl;
				cout << "3. phone" << endl;
				cout << "4. email" << endl;
				cout << "5. all" << endl;
				cout << "0. none" << endl;
				cin >> addInput;

				if(addInput == "1") {
					int modifyInt = 1;
					modifyInfo(modifyInt)
				}

				if(addInput == "2") {
					int modifyInt = 2;
					modifyInfo(modifyInt)
				}

				if(addInput == "3") {
					int modifyInt = 3;
					modifyInfo(modifyInt)
				}

				if(addInput == "4") {
					int modifyInt = 4;
					modifyInfo(modifyInt)
				}

				if(addInput == "5") {
					int modifyInt = 5;
					modifyInfo(modifyInt)

				}
			}

			userInput = "Start";

		}// End of add patient function
	





	// remove a patient from the system
		
		if(userInput == "2"){
			int careCardNumber;
			cout << "Enter the care card number of the patient you would like to remove: ";
			cin << careCardNumber;

			Patient* removePatient = Patient::Patient(careCardNumber);
			List::remove(List::search(searchPatient));
			//for(int i = 0; i < List::getElementCount(); i++;){
			//	
			//	if(Patient::operator == (removePatient)){
			//		List::remove( const Patient& toBeRemoved );
			//		i = List::getElementCount();
			//	}
		}
		

	// search for an existing patient

		if(userInput == "3"){
			int careCardNumber;
			cout << "Enter the care card number of the patient you would like to search for: ";
			cin << careCardNumber;

			Patient* searchPatient = Patient::Patient(careCardNumber);
			cout << List::search(searchPatient);

		}

	// modify a patient's record (for example, adding the patient's information or making a change of address, etc...).
		if(userInput == "4"){
			int careCardNumber;
			cout << "Enter the care card number of the patient you would like to add: ";
			cin << careCardNumber;

			string modifyInput = "Start";

			while(modifyInput != "0"){
				cout << endl << "Would you like to modify the patient's name, address, phone or email?" << endl;
				cout << "1. name" << endl;
				cout << "2. address" << endl;
				cout << "3. phone" << endl;
				cout << "4. email" << endl;
				cout << "5. all" << endl;
				cout << "0. none" << endl;
				cin >> addInput;

				if(addInput == "1") {
					int modifyInt = 1;
					modifyInfo(modifyInt)
				}

				if(addInput == "2") {
					int modifyInt = 2;
					modifyInfo(modifyInt)
				}

				if(addInput == "3") {
					int modifyInt = 3;
					modifyInfo(modifyInt)
				}

				if(addInput == "4") {
					int modifyInt = 4;
					modifyInfo(modifyInt)
				}

				if(addInput == "5") {
					int modifyInt = 5;
					modifyInfo(modifyInt)

				}
			}

			userInput = "Start";

		}// End of add patient function



	// print all its patients by ascending order of care card numbers.

	}// End of while loop

} // End of main



// This function modify's a patient's info to the desired string
// Precondition: An integer from 1 to 5 must be passed in to determine which string to modify
// Postcondition: desired string is changed to what the user inputs
string modifyInfo(int infoToModify){

	if(infoToModify == 1) {
		string name;
		cout << "Enter patient's name: ";
		cin >> name;
		cout << endl;
		Patient::setName(name);
	}

	if(addInput == 2) {
		string address;
		cout << "Enter patient's address: ";
		cin >> address;
		cout << endl;
		Patient::setAddress(address);
	}

	if(addInput == 3) {
		string phone;
		cout << "Enter patient's phone: ";
		cin >> phone;
		cout << endl;
		Patient::setPhone(phone);
	}

	if(addInput == 4) {
		string email;
		cout << "Enter patient's email: ";
		cin >> email;
		cout << endl;
		Patient::setEmail(email);
	}

	if(addInput == 5) {
		string name;
		cout << "Enter patient's name: ";
		cin >> name;
		cout << endl;
		Patient::setName(name);
		delete name;

		string address;
		cout << "Enter patient's address: ";
		cin >> address;
		cout << endl;
		Patient::setAddress(address);
		delete address;

		string phone;
		cout << "Enter patient's phone: ";
		cin >> phone;
		cout << endl;
		Patient::setPhone(phone);
		delete phone;

		string email;
		cout << "Enter patient's email: ";
		cin >> email;
		cout << endl;
		Patient::setEmail(email);
		delete email;
	}
} // End of modify function