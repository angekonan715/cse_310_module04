
#include<iostream>
#include<string.h>
#include <list>
#include <iterator> 
#include <map> 
using namespace std;

class CollectData {

    private:
        string fname , lname , addressEmail;
        int age;
        char gender;
        long phoneNumber;
        
    public:
        // Setter
        void setFname(string first_name) {
            fname = first_name;
        }
        // Getter
        string getFname() {
            return  fname;
            }
        
        void setLname(string last_name){
            lname = last_name;
        }
        string getLname(){
            return lname;
        }

        void setAge(int myAge){
            age = myAge;

        }

        int getAge(){
            return age;
        }

        void setGender(char sex){
            gender = sex;
        }

        char getGender(){
            return gender;
        }

        void setPhoneNumber(long number){
            phoneNumber = number;
        }

        long getPhoneNumber(){
            return phoneNumber;
        }

        void setAddressEail(string email){
            addressEmail = email;
        }

        string getAddressEmail(){
            return addressEmail;
        }



};

class AgeClassification{

    public:

        void seniorAdult(){
            cout << "He/she is a Senior adult";
        }
        void adult(){
            cout << "He/she is an Aldult";
        }

        void adolescence(){
            cout << "He/She is an adolescence";
        }
        void child(){
            cout << "He/She is a child";

        }

};

// create a function that ask player for their name:



int main() {

    CollectData myData;
    AgeClassification classification;
    string first_name, last_name, address_Email;
    char gender;
    int age;
    long phone_number;
    map<int, string> dataMap; 

    int x;
    cout << "How many people do you want to store in our map list: ";
    cin >> x;
    int i = 0;
    while (i < x){
        // get info from the user
        cout << "============Data Set number "<< i+1<<"\n";
        cout << "First Name: ";
        cin >> first_name; 
        cout << "Last Name: ";
        cin >> last_name ;
        cout << "Gender [M/F]: ";
        cin >> gender;
        cout << "Age: ";
        cin >> age;
        cout << "Phone Number: ";
        cin >> phone_number;
        cout << "Address Email: ";
        cin >> address_Email;
        
        myData.setFname(first_name);
        myData.setLname(last_name);
        myData.setGender(gender);
        myData.setAge(age);
        myData.setPhoneNumber(phone_number);
        myData.setAddressEail(address_Email);

        //classification based on Age range.
        if(age <= 12){
            classification.child();
        }
        else if( age > 12 && age <= 18){
            classification.adolescence();
        }
        else if (age > 18 && age <= 60)
        {
            classification.adult();
        }
        else{
            classification.seniorAdult();
        }

        //insert element in first name in our datamap
        dataMap.insert(pair<int, string>(i+1, myData.getFname()));

        i++;
        cout << endl;


    }

    // print object stored in our map in column
    map<int, string>::iterator itr;
    cout << "\nThe data map is  : \n";
    cout << "\tNUMBER\tFirst Name\n";
    for (itr = dataMap.begin(); itr != dataMap.end(); ++itr){
        cout << '\t' << itr->first << '\t' << itr->second <<"\n";
    }
    cout <<"\n"<<"Thanks for Adding people to our Data Map";



    return 0;

}