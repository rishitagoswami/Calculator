#include<iostream>
#include<math.h>
#include<windows.h>
#include<conio.h>
#include<cmath>

using namespace std;

void gotoxy(int, int);
void simple();
void logarithmic();
void trignometric();
void add();
void sub();
void mul();
void div();
void mod();
void fac();
void power();
void sqroot();
int main(){
	system("CLS");
	gotoxy(36, 8);
	int choice;
	cout<<"1. SIMPLE CALCULATOR"<<endl;
	gotoxy(36, 10);
	cout<<"2. LOGARITHMIC CALCULATOR"<<endl;
	gotoxy(36, 12);
	cout<<"3. TRIGNOMETRIC CALCULATOR"<<endl;
	
	gotoxy(40, 16);
	cout<<"Enter your preference number: ";
	cin>>choice;
	
	switch(choice){
		case 1: simple();
			break;
		case 2: logarithmic();
		    break;
		case 3: trignometric();
		    break;
		    gotoxy(40, 18);
		default: cout<<"Option doesn't exist!!"<<endl;		
	}
}

void simple(){
    system("CLS");
	int choice;

	gotoxy(36, 8);
	cout<<"####SELECT THE OPERATION YOU WANT TO PERFORM####"<<endl;
	
	gotoxy(36, 10);
	cout<<"1. ADDITION"<<endl;
	gotoxy(36, 11);
	cout<<"2. SUBTRACTION"<<endl;
	gotoxy(36, 12);
	cout<<"3. MULTIPLICATION"<<endl;
	gotoxy(36, 13);
	cout<<"4. DIVISION"<<endl;
	gotoxy(36, 14);
	cout<<"5. MODULUS"<<endl;
	gotoxy(36, 15);
	cout<<"6. FACTORIAL"<<endl;
	gotoxy(36, 16);
	cout<<"7. POWER"<<endl;
	gotoxy(36, 17);
	cout<<"8. SQUARE ROOT"<<endl;
	gotoxy(36, 19);
	cout<<"9. CHANGE CALCULATOR TYPE"<<endl;
	gotoxy(36, 20);
	cout<<"10. EXIT"<<endl;
	
	gotoxy(40, 23);
	cout<<"Enter Option Number: ";
	cin>>choice;
	
	switch(choice){
		case 1: add();
		break;
		case 2: sub();
		break;
		case 3: mul();
		break;
		case 4: div();
		break;
		case 5: mod();
		break;
		case 6: fac();
		break;
		case 7: power();
		break;
		case 8: sqroot();
		break;
		case 9: main();
		break;
		case 10: exit(1);
		break;
		gotoxy(40, 20);
		default: cout<<"Invalid input!!";
	}
}

void add(){
    system("CLS");
	int a, b;
	gotoxy(45, 8);
	cout<<"--------------ADDITION---------------"<<endl;
	gotoxy(36, 12);
	cout<<"Enter first operand: ";
	cin>>a;
	gotoxy(36, 13);
	cout<<"Enter second operand: ";
    cin>>b;
    gotoxy(40, 16);
    cout<<a<<"+"<<b<<"="<<a+b;
    gotoxy(40, 18);
    cout<<"Press any key";
    getch();
    simple();
}
void sub(){
    system("CLS");
	int a, b;
	gotoxy(45, 8);
	cout<<"---------------SUBTRACTION---------------"<<endl;
	gotoxy(36, 12);
	cout<<"Enter first operand: ";
	cin>>a;
	gotoxy(36, 13);
	cout<<"Enter second operand: ";
    cin>>b;
    gotoxy(40, 16);
    cout<<a<<"-"<<b<<"="<<a-b;
    gotoxy(40, 18);
    cout<<"Press any key";
    getch();
    simple();
}  
void mul(){
    system("CLS");
	int a, b;
	gotoxy(45, 8);
	cout<<"---------------MULTIPLICATION---------------"<<endl;
	gotoxy(36, 12);
	cout<<"Enter first operand: ";
	cin>>a;
	gotoxy(36, 13);
	cout<<"Enter second operand: ";
    cin>>b;
    gotoxy(40, 16);
    cout<<a<<"*"<<b<<"="<<a*b;
    gotoxy(40, 18);
    cout<<"Press any key";
    getch();
    simple();
}  
void div(){
    system("CLS");
	int a, b;
	gotoxy(45, 8);
	cout<<"---------------DIVISION---------------"<<endl;
    gotoxy(36, 12);
	cout<<"Enter first operand: ";
	cin>>a;
	gotoxy(36, 13);
	cout<<"Enter second operand: ";
    cin>>b;
    gotoxy(40, 16);
    cout<<a<<"/"<<b<<"="<<a/b;
    gotoxy(40, 18);
    cout<<"Press any key";
    getch();
    simple();
}  
void mod(){
    system("CLS");
	int a, b;
	gotoxy(45, 8);
	cout<<"---------------MODULUS---------------"<<endl;
	gotoxy(36, 12);
	cout<<"Enter first operand: ";
	cin>>a;
	gotoxy(36, 13);
	cout<<"Enter second operand: ";
    cin>>b;
    gotoxy(40, 16);
    cout<<a<<"%"<<b<<"="<<a%b;
    gotoxy(40, 18);
    cout<<"Press any key";
    getch();
    simple();
}  
void fac(){
    system("CLS");
	int a, fact= 1;
	gotoxy(45, 8);
	cout<<"---------------FACTORIAL---------------"<<endl;
	gotoxy(36, 12);
	cout<<"Enter a positive number: ";
	cin>>a;
    
	for(int i=a; i>=1; i--){
    		fact= fact*i;
	}	
	gotoxy(40, 15);	
    cout<<"Factorial of "<<a<<"="<<fact;
    gotoxy(40, 18);
    cout<<"Press any key";
    getch();
    simple();
}  
void power(){
    system("CLS");
	int a, b;
	gotoxy(45, 8);
	cout<<"---------------POWER---------------"<<endl;
	gotoxy(36, 12);
	cout<<"Enter base operand: ";
	cin>>a;
	gotoxy(36, 13);
	cout<<"Enter exponent operand: ";
    cin>>b;
    gotoxy(40, 16);
    cout<<a<<" to the power "<<b<<": "<<pow(a, b);
    gotoxy(40, 18);
    cout<<"Press any key";
    getch();
    simple();
}   
void sqroot(){
    system("CLS");
	int a;
	gotoxy(45, 8);
	cout<<"---------------SQUARE ROOT---------------"<<endl;
	gotoxy(36, 12);
	cout<<"Enter a positive number: ";
	cin>>a;
    gotoxy(40, 16);
    cout<<"Square root of "<<a<<": "<<sqrt(a);
    gotoxy(40, 18);
    cout<<"Press any key";
    getch();
    simple();
}   

void trignometric(){
	system("CLS");
	int choice;
	double operand;

	gotoxy(36, 8);
	cout<<"####SELECT THE OPERATION YOU WANT TO PERFORM####"<<endl;
	
	gotoxy(36, 10);
	cout<<"1. SINE FUNCTION"<<endl;
	gotoxy(36, 11);
	cout<<"2. COSINE FUNCTION"<<endl;
	gotoxy(36, 12);
	cout<<"3. TANGENT FUNCTION"<<endl;
	gotoxy(36, 13);
	cout<<"4. SINE INVERSE FUNCTION"<<endl;
	gotoxy(36, 14);
	cout<<"5. COSINE INVERSE FUNCTION"<<endl;
	gotoxy(36, 15);
	cout<<"6. TANGENT INVERSE FUNCTION"<<endl;
	gotoxy(36, 16);
	cout<<"7. SINE HYPERBOLIC FUNCTION"<<endl;
	gotoxy(36, 17);
	cout<<"8. COSINE HYPERBOLIC FUNCTION"<<endl;
	gotoxy(36, 18);
	cout<<"9. TANGENT HYPERBOLIC FUNCTION"<<endl;
	gotoxy(36, 20);
	cout<<"10. CHANGE CALCULATOR TYPE"<<endl;
	gotoxy(36, 21);
	cout<<"11. EXIT"<<endl;
	
	gotoxy(40, 24);
	cout<<"Enter Option Number: ";
	cin>>choice;
	
	switch(choice){
		case 1: system("CLS");
		        gotoxy(36, 8);
		        cout<<"----SINE FUNCTION----";
		        gotoxy(36, 10);
	            cout<<"Enter angle in radian: ";
	            cin>>operand;
	            gotoxy(40, 13);
	            cout<<"sin("<<operand<<")="<<sin(operand);
	            gotoxy(40, 18);
                cout<<"Press any key";
                getch();
                trignometric();
        break;
        case 2: system("CLS");
		        gotoxy(36, 8);
		        cout<<"----COSINE FUNCTION----";
		        gotoxy(36, 10);
	            cout<<"Enter angle in radian: ";
	            cin>>operand;
	            gotoxy(40, 13);
	            cout<<"cos("<<operand<<")="<<cos(operand);
	            gotoxy(40, 18);
                cout<<"Press any key";
                getch();
                trignometric();
        break;
        case 3: system("CLS");
		        gotoxy(36, 8);
		        cout<<"----TANGENT FUNCTION----";
		        gotoxy(36, 10);
	            cout<<"Enter angle in radian: ";
	            cin>>operand;
	            gotoxy(40, 13);
	            cout<<"tan("<<operand<<")="<<tan(operand);
	            gotoxy(40, 18);
                cout<<"Press any key";
                getch();
                trignometric();
        break;
        case 4: system("CLS");
		        gotoxy(36, 8);
		        cout<<"----SINE INVERSE FUNCTION----";
		        gotoxy(36, 10);
	            cout<<"Enter angle in radian: ";
	            cin>>operand;
	            gotoxy(40, 13);
	            cout<<"asin("<<operand<<")="<<asin(operand);
	            gotoxy(40, 18);
                cout<<"Press any key";
                getch();
                trignometric();
        break;
        case 5: system("CLS");
		        gotoxy(36, 8);
		        cout<<"----COSINE INVERSE FUNCTION----";
		        gotoxy(36, 10);
	            cout<<"Enter angle in radian: ";
	            cin>>operand;
	            gotoxy(40, 13);
	            cout<<"acos("<<operand<<")="<<acos(operand);
	            gotoxy(40, 18);
                cout<<"Press any key";
                getch();
                trignometric();
        break;
        case 6: system("CLS");
		        gotoxy(36, 8);
		        cout<<"----TANGENT INVERSE FUNCTION----";
		        gotoxy(36, 10);
	            cout<<"Enter angle in radian: ";
	            cin>>operand;
	            gotoxy(40, 13);
	            cout<<"atan("<<operand<<")="<<atan(operand);
	            gotoxy(40, 18);
                cout<<"Press any key";
                getch();
                trignometric();
        break;
        case 7: system("CLS");
		        gotoxy(36, 8);
		        cout<<"----SINE HYPERBOLIC FUNCTION----";
		        gotoxy(36, 10);
	            cout<<"Enter angle in radian: ";
	            cin>>operand;
	            gotoxy(40, 13);
	            cout<<"sinh("<<operand<<")="<<sinh(operand);
	            gotoxy(40, 18);
                cout<<"Press any key";
                getch();
                trignometric();
        break;
        case 8: system("CLS");
		        gotoxy(36, 8);
		        cout<<"----COSINE HYPERBOLIC FUNCTION----";
		        gotoxy(36, 10);
	            cout<<"Enter angle in radian: ";
	            cin>>operand;
	            gotoxy(40, 13);
	            cout<<"cosh("<<operand<<")="<<cosh(operand);
	            gotoxy(40, 18);
                cout<<"Press any key";
                getch();
                trignometric();
        break;
        case 9: system("CLS");
		        gotoxy(36, 8);
		        cout<<"----TANGENT HYPERBOLIC FUNCTION----";
		        gotoxy(36, 10);
	            cout<<"Enter angle in radian: ";
	            cin>>operand;
	            gotoxy(40, 13);
	            cout<<"tanh("<<operand<<")="<<tanh(operand);
	            gotoxy(40, 18);
                cout<<"Press any key";
                getch();
                trignometric();
        break;
        case 10: main();
        break;
        case 11: exit(1);
        break;
	}
}
void logarithmic(){
	int choice;
	system("CLS");
	double operand;

	gotoxy(36, 8);
	cout<<"####SELECT THE OPERATION YOU WANT TO PERFORM####"<<endl;
	gotoxy(36, 11);
	cout<<"1. NATURAL LOG"<<endl;
	gotoxy(36, 12);
	cout<<"2. LOG WITH BASE 10"<<endl;
	gotoxy(36, 14);
	cout<<"3. CHANGE CALCULATOR TYPE"<<endl;
	gotoxy(36, 15);
	cout<<"4. EXIT"<<endl;
	
	gotoxy(40, 18);
	cout<<"Enter Option Number: ";
	cin>>choice;
	
	switch(choice){
	 case 1: system("CLS");
		        gotoxy(36, 8);
		        cout<<"------NATURAL LOG------";
		        gotoxy(36, 10);
	            cout<<"Enter operand: ";
	            cin>>operand;
	            gotoxy(40, 13);
	            cout<<"log("<<operand<<")="<<log(operand);
	            gotoxy(40, 18);
                cout<<"Press any key";
                getch();
                logarithmic();
        break;
        case 2: system("CLS");
		        gotoxy(36, 8);
		        cout<<"------LOG WITH BASE 10------";
		        gotoxy(36, 10);
	            cout<<"Enter operand: ";
	            cin>>operand;
	            gotoxy(40, 13);
	            cout<<"log10("<<operand<<")="<<log10(operand);
	            gotoxy(40, 18);
                cout<<"Press any key";
                getch();
                logarithmic();
        break;
        case 3: main();
        break;
        case 4: exit(1);
        break;
    }
}

void gotoxy(int x, int y){
	COORD c;
	c.X= x;
	c.Y= y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
} 

