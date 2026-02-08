/*
 * ===================================================================
 * ELECTRICAL LOAD MONITORING AND BILLING SIMULATOR
 * ===================================================================
 *
 * File Name: main.cpp
 *
 * AUTHOR INFORMATION:
 * Name: [FRIEND'S NAME]
 * Index: [FRIEND'S INDEX]
 * GitHub Username: [FRIEND'S USERNAME]
 * Programme: HND Electrical Engineering
 * Course: EEE 227 (PT) - Programming for Electrical Engineering
 * Level: 200
 * Institution: ACCRA TECHNICAL UNIVERSITY
 *
 * Week 1: Basic Structure and Appliance Class
 * Date: February 8, 2026
 * ===================================================================
 */

#include <iostream>
#include <string>
using namespace std;

// ===================================================================
// APPLIANCE CLASS
// ===================================================================
class Appliance
{
private:
    string name;
    double powerRating;
    double usageHours;

public:
    // Constructors
    Appliance() : name(""), powerRating(0), usageHours(0) {}

    Appliance(string n, double p, double h)
    {
        name = n;
        powerRating = p;
        usageHours = h;
    }

    // Getters
    string getName()
    {
        return name;
    }

    double getPower()
    {
        return powerRating;
    }

    double getHours()
    {
        return usageHours;
    }

    // Display function
    void display()
    {
        cout << "Appliance: " << name
             << " | Power: " << powerRating << "W"
             << " | Hours: " << usageHours << " hrs/day" << endl;
    }
};

// ===================================================================
// MAIN FUNCTION
// ===================================================================
int main()
{
    cout << "\n=========================================\n";
    cout << "   ELECTRICAL LOAD MONITORING SYSTEM\n";
    cout << "            WEEK 1 - BASIC STRUCTURE\n";
    cout << "=========================================\n";

    // Create a test appliance
    Appliance testApp("Test Appliance", 100, 5);

    // Display the appliance
    cout << "\nTesting Appliance Class:\n";
    cout << "------------------------\n";
    testApp.display();

    // Show that getters work
    cout << "\nUsing Getters:\n";
    cout << "Name: " << testApp.getName() << endl;
    cout << "Power Rating: " << testApp.getPower() << " watts" << endl;
    cout << "Daily Usage: " << testApp.getHours() << " hours" << endl;

    cout << "\n✅ Week 1 complete: Appliance class created and tested.\n";
    cout << "\nPress Enter to exit...";
    cin.get();

    return 0;
}