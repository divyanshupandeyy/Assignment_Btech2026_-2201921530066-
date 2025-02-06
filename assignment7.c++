#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;
using namespace std;

class Student {
private:
    vector<int> scores; // Instance variable to hold the student's exam scores

public:
    // Function to read scores from input
    void input() {
        int score;
        for (int i = 0; i < 5; i++) { // Assuming there are always 5 scores
            cin >> score;
            scores.push_back(score); // Save each score to the scores vector
        }
    }

    // Function to calculate the total score
    int calculateTotalScore() {
        int total = 0;
        for (int score : scores) {
            total += score; // Sum up the scores
        }
        return total; // Return the total score
    }
};

// Write your Student class here

int main() {
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    cout << count;