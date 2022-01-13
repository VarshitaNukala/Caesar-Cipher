#include <bits/stdc++.h>
using namespace std;

//To return encrypted text
string encrypt(string text, int pos)
{
	string result = "";

	// traverse text
	for (int i=0;i<text.length();i++)
	{
		
		//we will checkk if the text is upper. If it is upper, 
		//we encrypt for uppercase alphabets.
		//65 is ascii value of A
		if (isupper(text[i])){
			result += char(int(text[i]+pos-65)%26 +65);}

	   //else we encrypt for lowercase alphabets
	   //97 is ascii value of a
    	else{
    		result += char(int(text[i]+pos-97)%26 +97);}
	}

	// Return the encrypted string
	return result;
}


int main()
{
	string text="LocalHackDay";
	int pos = 6;
	cout << "Text : " << text;
	cout << "\nShift: " << pos;
	cout << "\nCipher: " << encrypt(text, pos);
	return 0;
}
