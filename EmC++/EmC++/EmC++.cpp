#include <iostream>
#include <string>
using namespace std;

//Task 1:
 int main() {
	string human[3] = { "Name", "Surname", "Age" };
	cout << "Write your name: ";
	cin >> human[0];
	cout << "Write your age: ";
	cin >> human[1];
	cout << "Write your age: ";
	cin >> human[2];
	cout << human[0] << " " << human[1] << ", " << human[2] << endl;
} 

// Task 2:

/*int main() {
	string sNames[10] = { 
	"Tkachenko", "Brovchenko", "Arinarhov", "Kartalapov", "Rozcoha", "Nechaev", "Boiko", "Dovgan", "Chervatuk", "Oliynik" };
	cout << sNames[rand() % 10] << endl;
}*/

//Task 3:

/*int main() {
	int num1;
	int num2;
	cout << "Write first number: " << endl;
	cin >> num1;
	cout << "Write secind number: " << endl;
	cin >> num2;
	cout << num1 % num2;
} */