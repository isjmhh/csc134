#include <iostream>

using namespace std;
/*
CSC 134
M4T3
Joel
10/9/23

Three times, we'll take some number, then sum and average them
Tasks:
For Loop: Write a program that utilizes a for loop to prompt the user to enter NUM_ITEMS numbers. Sum up the numbers entered by the user and calculate the average. Output both the sum and the average.

While Loop: Similar to the first task, write a program that uses a while loop to achieve the same results. Again, the loop should prompt the user for NUM_ITEMS numbers, sum them, and compute the average.

Sentinel-Controlled While Loop: Write a program that uses a while loop to gather numbers from the user until the sentinel value (-1) is entered. Calculate the sum and average of the numbers and output the results.
*/
int main()
{
    const int NUM_DAYS = 5;
    int todays_cars;
    int total_cars = 0;

    cout << "Part 1: Counting Loop with for" << endl;
    cout << "How many cars did you see each day?" << endl;
    //TODO
    for (int i=0; i < NUM_DAYS; i++){
        cout << "DAY# " << i << ": ";
        cin >> todays_cars;
        total_cars += todays_cars; // add today to total
    }
    cout << "Total cars seen was: " << total_cars;
    cout << " over " << NUM_DAYS << " days" << endl;
    //find average as a double
    double average = (double) total_cars / NUM_DAYS;
    cout << "Average per day = " << total_cars / NUM_DAYS;
    cout << endl;
    cout << "Part 2: Count with while" << endl;

    // TODO: ask the user how many cars they saw
    // each day, then add them up
    total_cars = 0;
    int i = 0;
    while (i < NUM_DAYS){
            cout << "DAY# " << i << endl;
            cin >> todays_cars;
        total_cars += todays_cars; // add today to total

   i++;   // i = i+1; // go to next day
    }

    cout << "Total cars seen was: " << total_cars;
    cout << " over " << NUM_DAYS << " days" << endl;
    //find average as a double
     average = (double) total_cars / NUM_DAYS;
    cout << "Average per day = " << total_cars / NUM_DAYS;
    cout << endl;

    // Part 3 - Sentinel
    cout << "Enter how many cars you saw per day." << endl;
    cout << "or -1 to finish." << endl;
    bool keep_going = true;
    int day = 0;
    total_cars = 0;
    while (keep_going) {

        cout << "Day# " << day << ": ";
        cin >> todays_cars;
        if (todays_cars == -1) {
                cout << "OK, Done" << endl;
        keep_going = false;
        } else {
        total_cars += todays_cars;
     day = day + 1;
        }
    }
    cout << "Total = " << total_cars << " cars" << endl;
    average = (double) total_cars / day;
    cout << "Average per day = " << total_cars / NUM_DAYS;
    cout << endl;


    return 0;
}
