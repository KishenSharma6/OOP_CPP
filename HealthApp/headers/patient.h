//Create class for patient being checked in at hospital
// Patient should have vitals collected by nurse (height, weight, BP, and resting heart rate) and name/age
// Patient vitals should probably be private
#ifndef PATIENT_H
#define PATIENT_H

#include "human.h"
#include "physician.h"
#include <iostream>

using namespace std;

class Patient: public Human{
private: //Should this information be private?
    int Systolic;
    int Diastolic;
    int RestHR;
    float height_inches;
    float weight_lbs;
<<<<<<< HEAD
   
    Patient(){
        cout<< "Patient does not have attributes"<< endl;
    };

=======

    
    
>>>>>>> 5fef680db467255054417a64dd0bed721552a2ad
    

};

#endif

