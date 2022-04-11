#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;


void quit_file() {
    cout << "Thank You and Goodbye" << endl;
    exit(0);
}

void print_num() {

}

int main() {

    int i{0}, count{0};

    cout <<
         "1 - Print Numbers\n"
         "2 - Add a number\n"
         "3 - Display mean of the numbers\n"
         "4 - Display the smallest number\n"
         "5 - Display the largest number\n"
         "0 - Quit"
         << endl;
    int choice{0};
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 0:
            quit_file();
            break;

        case 1:
            //print_num();
            break;

        case 2:
            //add_num();
            break;

        case 3:
            //display_mean();
            break;

        case 4:
            //display_small();
            break;

        case 5:
            //display_large();
            break;

        default:
            cout << "Invalid Input" << endl;
    }

}