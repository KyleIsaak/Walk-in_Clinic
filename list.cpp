/*
 * List.cpp
 * 
 * Class Description: List data collection ADT.
 * Class Invariant: Data collection with the following characteristics:
 *                   - Each element is unique (no duplicates).
 *                   - The number of elements within the list is stored
 *
 * Author: Kyle Isaak / Brad Bart
 * Date: January 22, 2019
 */

	#include "Patient.h"
	#include "list.h"
	#include "string"
	#include <iostream>

	// Default constructor
	List::List();

	// Description: Returns the total element count currently stored in List.
	List::getElementCount() const { return elementCount;}

	// Description: Insert an element.
	// Precondition: newElement must not already be in data collection.  
	// Postcondition: newElement inserted and elementCount has been incremented.   
	List::insert(const Patient& newElement){
        for (int i = 0; i <= elementCount; i++;){
         if(Patient::operator == (const Patient & rhs)){
            elements[elementcount] = newElement;
            elementCount++;
			cout << "Patient succesfully created";
            }
        }

    }// End of insert

	// Description: Remove an element. 
	// Postcondition: toBeRemoved is removed and elementCount has been decremented.	
	List::remove( const Patient& toBeRemoved ){
		for (int i = 0; i <= elementCount; i++;){
         if(Patient::operator == (const Patient & toBeRemoved)){
            delete elements[i];
            elementCount--;
			cout << "Patient info succesfully deleted" << endl;
            }
        }
	}
	
	// Description: Remove all elements.
	List::removeAll(){
		for (int i = elementsCount; i >= 0; i--;){
            delete elements[i];
            elementCount--;
            }
        }
	}
   
	// Description: Search for target element.
	//              Returns a pointer to the element if found,
	//              otherwise, returns NULL.
	Patient* List::search(const Patient& target){
		for (int i = 0; i <= elementCount; i++;){
         if(target == elements[i]){
			cout << "Patient found!" << endl;
			return target&;
            }
			else{return NULL;}
        }
	}