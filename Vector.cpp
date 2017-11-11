//Vector.cpp
//lab7 Lukas, Will, Zalika, and Malik
#include<iostream>
#include<vector>

using namespace std;

int main(){
	vector<int> v(10);
	int last;
	string answer;
	bool boolResize;

	//User input to populate the vector
	for(int i=0;i<v.size();i++){
		cout << "Enter "<< 10-i <<" more integers: ";
		cin >> v[i];
	}
	
	//Display vector
	for(int i=0;i<v.size();i++)
		cout<<v[i]<<endl;
	
	//User input for resizing the list
	cout << "Would you like to resize the vector? (yes or no): ";
	cin >> answer;
	if (answer == "yes")
		boolResize = true;
	if (answer == "no")
		boolResize = false;
	if(boolResize){
		v.resize(20);
		for(int i=11;i<v.size();i++){
			cout << "Enter "<< 20-i <<" more integers: ";
			cin >> v[i];
		}
		
	}
	
	//User input for a random value at the end of the list
	cout << "Enter a random integer to add to the end of the list:";
	cin >> last;
	v.push_back(last);
	
	//display the list
	for(int i=0;i<v.size();i++)
		cout<<v[i]<<endl;
	
}
