//Deque.cpp
//lab7 Lukas, Will, Zalika, and Malik
//Video links:
//https://www.youtube.com/watch?v=8d2pSUH6BKA&list=PLVBorYCcu-xXWDdyWYDr4KrqIjPSm9uAe&index=4
#include<iostream>
#include<deque>

using namespace std;

int main(){
	deque<int> d(5);
	string answer;
	bool boolResize;
	int num, num2;
	
	//User input to populate the deque
	for(int i=0;i<5;i++){
		cout << "Enter "<< 5-i <<" more integers: ";
		cin >> d[i];
	}
	cout << "\n";
	
	//User input for the pushback
	cout << "Would you like to push an item to the end of the the deque? (yes or no): ";
	cin >> answer;
	if (answer == "yes")
		boolResize = true;
	if (answer == "no")
		boolResize = false;
	if(boolResize){
		cout << "Enter a number to be pushed to the end of the deque: ";
		cin >> num;
		d.push_back(num);
		cout <<"\n";
	}
	
	//User input for the pushfront
	cout << "Would you like to push an item to the beggining\n"
			"of the the deque? (yes or no) ";
	cin >> answer;
	if (answer == "yes")
		boolResize = true;
	if (answer == "no")
		boolResize = false;
	if(boolResize){
		cout << "Enter a number to be pushed to the beggining of the deque: ";
		cin >> num2;
		d.push_front(num2);
		cout << "\n";
	}
	
	//Display the deque
	for(int i=0;i<7;i++){
		cout<<d[i]<<endl;
	}
}
