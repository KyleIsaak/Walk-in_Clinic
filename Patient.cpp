/*
 * Patient.cpp
 *
 * Class Description: Models a walk-in clinic patient.
 * Class Invariant: Each patient has a unique care card number.
 *                  This care card number must have 10 digits.
 *                  This care card number cannot be modified.
 *
 * Author: Kyle Isaak / Brad Bart
 * Date: January 21, 2019
 */



 // You can add #include statements if you wish.
#include <iostream>
#include <string>
#include "Patient.h"

// Default Constructor
// Description: Create a patient with a care card number of "0000000000". 
// Postcondition: All data members set to "To be entered", 
//                except the care card number which is set to "0000000000".       
Patient::Patient() {

	// You need to complete this method.

	careCard = "0000000000";		//Sets careCard to "0000000000" and all other data members to "To be entered"
	name = "To be entered";
	address = "To be entered";
	phone = "To be entered";
	email = "To be entered";

}

// Parameterized Constructor
// Description: Create a patient with the given care card number.
// Postcondition: If aCareCard does not have 10 digits, then care card is set to "0000000000".
//                All other data members set to "To be entered".
Patient::Patient(string aCareCard) {

	// You need to complete this method.

	if(aCareCard.length == 10){ careCard = aCareCard; }		//Sets careCard to aCareCard if it has 10 digits, and sets it to "0000000000" if it does not have ten digits
	else { careCard = "0000000000"; }

	//Sets all other data members to "To be entered"
	name = "To be entered";
	address = "To be entered";
	phone = "To be entered";
	email = "To be entered";

}

// Getters and setters -> You need to implement these methods.

	// Description: Returns patient's name.
	Patient::getName()const {return name;}

	// Description: Returns patient's address.
	Patient::getAddress()const {return address;}

	// Description: Returns patient's phone.
	Patient::getPhone()const {return phone;}

	// Description: Returns patient's email.
	Patient::getEmail()const {return email;}

	// Description: Returns patient's care card.
	Patient::getCareCard()const {return careCard;}

	// Description: Sets the patient's name.
	Patient::setName(const string aName){name = aName;}

	// Description: Sets the patient's address.
	Patient::setAddress(const string anAddress){address = anAddress;}

	// Description: Sets the patient's phone.
	Patient::setPhone(const string aPhone){phone = aPhone;}

	// Description: Sets the patient's email.
	Patient::setEmail(const string anEmail){email = an email;}



// Overloaded Operators
// Description: Comparison operator. Compares "this" Patient object with "rhs" Patient object.
//              Returns true if both Patient objects have the same care card number.
bool Patient::operator == (const Patient & rhs) {

	// Compare both Patient objects
	if (this->careCard == rhs.getCareCard())
		return true;
	else
		return false;

} // end of operator ==

// Description: Greater than operator. Compares "this" Patient object with "rhs" Patient object.
//              Returns true if the care card number of "this" Patient object is > the care card 
//              number of "rhs" Patient object
bool Patient::operator > (const Patient & rhs) {

	// Compare both Patient objects
	if (this->careCard > rhs.getCareCard())
		return true;
	else
		return false;

} // end of operator >


// Description: Prints the content of "this".
ostream & operator<<(ostream & os, const Patient & p) {

	cout << this.getName() << " " <<  this.getAddress() << " " << this.getPhone() << " " << this.getEmail() << endl;

	return os;

} // end of operator<<

// end of Patient.cpp