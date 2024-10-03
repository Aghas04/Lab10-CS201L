//Name
//Lab
//Date
//Partner Name

#include<iostream>
#include<fstream>

using namespace std;

void main() {

	//PT I
	cout << "PART I" << endl;
	int * my_var = nullptr;

	cout << my_var << endl; 
	//Prediction:id for memeory location
	//Actual:it does print the null
	//Notes:null pointer was 0000000000000000
	//cout << *my_var << endl;
	//Prediction:it wont allow to print null value
	//Actual:does not print nullvalue
	//Notes:it throws exception
	cout << &my_var << endl;
	//Prediction:it prints the memory location id
	//Actual:printed the memory id
	//Notes:id was 0000003F2099FBA8

	cout << endl;

	//PT II
	cout << "PART II" << endl;
	my_var = new int (27);
	
	cout << my_var << endl;
	//Prediction:binary of 28
	//Actual: printed the memory location
	//Notes: the location is 000001ADF31C9540
	cout << *my_var << endl;
	//Prediction: prints the value
	//Actual: printed 27
	//Notes: printed 27
	cout << &my_var << endl;
	//Prediction: outputs the memory of my_var itself
	//Actual:printed the same adress as part1
	//Notes:

	cout << endl;

	//PT III
	cout << "PART III" << endl;
	int * new_var = new int; 
	int twenty_seven = 27;
	*new_var = twenty_seven;

	cout << new_var << endl;
	//Prediction: prints the adress of new_var
	//Actual:printed the adress of new_var
	//Notes:
	cout << *new_var << endl;
	//Prediction:prints 27
	//Actual:printed 27
	//Notes:
	cout << &new_var << endl;
	//Prediction:prints the adress of the pointer itself
	//Actual:printed the a new adress location
	//Notes:

	cout << endl;

	//PT IV
	cout << "PART IV" << endl;
	my_var = new_var;

	cout << my_var << endl;
	//Prediction: prints out the adress of 27
	//Actual: printed the same adress as my_var/the same adress
	//Notes:
	cout << *my_var << endl;
	//Prediction:prints the value in the variable
	//Actual:printed 27
	//Notes:
	cout << &my_var << endl;
	//Prediction:prints the adress of the variable itself
	//Actual:it does print the adress of the varailbe itself
	//Notes:
	
	cout << endl;

	//PT IV

	//Your Code Here
	cout << "PART 5" << endl;

	int* finals_var = new int;
	int* another_var = new int;
	int anoter = 22;
	*finals_var = anoter * 2;
	*another_var = *finals_var / 4;
	*finals_var = *another_var * 10;

	cout << finals_var << endl;
	//Your Partner's Prediction: This prints out the memory location of what finals_var points to 110
	//Actual: Prints out a memory location of *another_var  (10)
	//Notes: 000001C86C739410
	cout << *finals_var << endl;
	//Your Partner's Prediction: Prints out the value 110 which is what finals_var points to 
	//Actual:printed 110 which is the value of the memory location finals_var points to
	//Notes: 110
	cout << &finals_var << endl;
	//Your Partner's Prediction: Prints out the memory location of finals_var which doesn't change
	//Actual: Prints out finals_var memory location
	//Notes: 00000046BA1BFB68

	cout << another_var << endl;
	//Your Partner's Prediction: Prints out the memory location of what another_var points to (11)
	//Actual: Prints out the memory location of 11
	//Notes: 000001C86C739210
	cout << *another_var << endl;
	//Your Partner's Prediction: Prints out the value at the memory location of another_var which is 11
	//Actual:printed 11 which is the value of another_var
	//Notes: 11
	cout << &another_var << endl;
	//Your Partner's Prediction: Prints out the memory location of another_var which doesn't change
	//Actual: Prints out the location of another_var
	//Notes: 00000046BA1BFB88
	// 
	//Copy & Paste the following at various output points in your code (x6)
	//Your Partner's Prediction:
	//Actual:
	//Notes:

}