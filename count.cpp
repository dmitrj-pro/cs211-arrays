#include <string>
#include <cstdio>
#include <iostream>

using namespace std;

/* count digits, white space, others */

/* TODO: (1) fix all errors; 
 *       (2) add code for painting histogram in console,
 *           cf. picture in https://en.wikipedia.org/wiki/Histogram
 * 
 */
int count(int x){
	int tmp=0;
	if (x==0){
		return 1;
	}
	x=abs(x);
	while(x>0){
		tmp++;
		x=x/10;
	}
	return tmp;
}
string Gen(int n){
	string tmp="";
	for(int i=0;i<n;i++){
		tmp+=" ";
	}
	return tmp;
}
string IntToStr(int x){
	string tmp="";
	if (x<0){
		tmp="-";
	}
	x=abs(x);
	int t1=0;
	int k=0;
	if (x==0){
		return "0";
	}
	while (x>0){
		k++;
		t1=t1*10+x%10;
		x/=10;
	}
	for(int i=0;i<k;i++){
		int d=t1%10;
		t1/=10;
		switch(d){
		case 1:tmp+="1";
		break;
		case 2:tmp+="2";
		break;
		case 3:tmp+="3";
		break;
		case 4:tmp+="4";
		break;
		case 5:tmp+="5";
		break;
		case 6:tmp+="6";
		break;
		case 7:tmp+="7";
		break;
		case 8:tmp+="8";
		break;
		case 9:tmp+="9";
		break;
		case 0:tmp+="-";
		break;
		}
	}
	return tmp;

}
int main()
{
	string src("12 plus 45 minus 39 is 18\n");
	int i, nwhite, nother;
	const int size = 10;
	int ndigit[size];
	nwhite = nother = 0;
	i=0;
	for(;i<size;i++){
		ndigit[i]=0;
	}
	i=0;
	char c;
	while ((c = src[i++]))
		if ((c >= '0') && (c <= '9'))
			++ndigit[c - '0'];
		else if ((c == ' ') || (c == '\n') || (c == '\t'))
			++nwhite;
		else
			++nother;
	
	cout << "source string: " << src;
	string s1,s2;
	cout<< endl << "digits :"<<endl;

	for (int i = 0; i < size; ++i) {
		int x=count(ndigit[i]);
		s1+=Gen(x)+IntToStr(i);
		s2+=" "+IntToStr(ndigit[i]);
		//cout << " " << ndigit[i];
	}
	cout<<s1<<endl<<s2<<endl;
	cout << "white space = " << nwhite
		 << ", other = " << nother << endl;
}
