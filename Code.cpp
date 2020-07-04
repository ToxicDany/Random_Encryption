//Libraries 
#include <iostream>
#include <fstream> 

using namespace std;

string decryption(string message)
{
    
//Libraries to work with txt files
ofstream myfile;
fstream file;


//Create file
myfile.open ("example.txt", ios::out);
myfile << message;
myfile.close();

    for(int i = 0; i < message.length(); i++ )
    {
        switch(message[i])
        {
        case 'g':
            message[i] = 'a';
            break;  
        case 'v':
            message[i] = 'b';
            break;   
        case 's':
            message[i] = 'c';
            break;
        case 'a':
            message[i] = 'd';
            break;  
        case 'o':
            message[i] = 'e';
            break;   
        case 'l':
            message[i] = 'f';
            break; 
        case 'p':
            message[i] = 'g';
            break;  
        case 'h':
            message[i] = 'h';
            break;   
        case 'j':
            message[i] = 'i';
            break; 
        case 'd':
            message[i] = 'j';
            break;  
        case 'm':
            message[i] = 'k';
            break;   
        case 'x':
            message[i] = 'l';
            break; 
        case 'z':
            message[i] = 'm';
            break;  
        case 'e':
            message[i] = 'n';
            break;  
        case 'i':
            message[i] = 'o';
            break; 
        case 't':
            message[i] = 'p';
            break;  
        case 'b':
            message[i] = 'q';
            break;   
        case 'y':
            message[i] = 'r';
            break; 
        case 'f':
            message[i] = 's';
            break;  
        case 'c':
            message[i] = 't';
            break;  
        case 'w':
            message[i] = 'u';
            break; 
        case 'u':
            message[i] = 'v';
            break;  
        case 'q':
            message[i] = 'w';
            break;   
        case 'r':
            message[i] = 'x';
            break;
        case 'k':
            message[i] = 'y';
            break;
        case 'n':
            message[i] = 'z';
            break;
        }
    }

//Write the result to a file
myfile.open ("example.txt", ios::trunc );
myfile << message;
myfile.close();

}

string encryption(string message)
{
    
//Libraries to work with txt files
ofstream myfile;
fstream file;


//Create file
myfile.open ("example.txt", ios::out);
myfile << message;
myfile.close();

    for(int i = 0; i < message.length(); i++ )
    {
        switch(message[i])
        {
        case 'a':
            message[i] = 'g';
            break;  
        case 'b':
            message[i] = 'v';
            break;   
        case 'c':
            message[i] = 's';
            break;
        case 'd':
            message[i] = 'a';
            break;  
        case 'e':
            message[i] = 'o';
            break;   
        case 'f':
            message[i] = 'l';
            break; 
        case 'g':
            message[i] = 'p';
            break;  
        case 'h':
            message[i] = 'h';
            break;   
        case 'i':
            message[i] = 'j';
            break; 
        case 'j':
            message[i] = 'd';
            break;  
        case 'k':
            message[i] = 'm';
            break;   
        case 'l':
            message[i] = 'x';
            break; 
        case 'm':
            message[i] = 'z';
            break;  
        case 'n':
            message[i] = 'e';
            break;  
        case 'o':
            message[i] = 'i';
            break; 
        case 'p':
            message[i] = 't';
            break;  
        case 'q':
            message[i] = 'b';
            break;   
        case 'r':
            message[i] = 'y';
            break; 
        case 's':
            message[i] = 'f';
            break;  
        case 't':
            message[i] = 'c';
            break;  
        case 'u':
            message[i] = 'w';
            break; 
        case 'v':
            message[i] = 'u';
            break;  
        case 'w':
            message[i] = 'q';
            break;   
        case 'x':
            message[i] = 'r';
            break;
        case 'y':
            message[i] = 'k';
            break;
        case 'z':
            message[i] = 'n';
            break;
        }
    }

//Write the result to a file
myfile.open ("example.txt", ios::trunc );
myfile << message;
myfile.close();

}


int Chose(string message)
{
bool a;
cout << "chose:" << endl;
cout << "1 - encryption" << endl;
cout << "0 - decryption" << endl;
cin >> a;
    if(a == true)
    {
        encryption(message);

    }
    else if( a == false)
    {
        decryption(message);
    }
}

int main() 
{ 

//Mesage for encryption
cout << "Compleate stirng:" << endl;
string message;
getline(cin, message);

//Encryption

Chose(message);

}