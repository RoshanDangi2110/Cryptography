#include<iostream>
#include<string.h>
using namespace std;
int main() {
   char msg[100];
   cout<<"Enter the message:";
   cin>>msg;
   int i, j, length,choice,key;
   cout << "Enter key: ";
   cin >> key;
   length = strlen(msg);
   cout<<"Enter your choice:\n 1. Encryption\n 2. Decryption ";
   cin>>choice;
   if (choice==1) //for encryption
    {
		char ch; 
      for(int i = 0; msg[i] != '\0'; ++i) 
	  {
         ch = msg[i];
		    if(ch >= 'a' && ch <= 'z')
			{
            	ch = ch + key;
            	if (ch > 'z') 
				{
            	   ch = ch - 'z' + 'a' - 1;
            	}  
            	msg[i] = ch;
         	}
            else if (ch >= 'A' && ch <= 'Z')
			{
            	ch = ch + key;
            	if (ch > 'Z')
				{
               		ch = ch - 'Z' + 'A' - 1;
            	}
            	msg[i] = ch;
         	}
      	}
      printf("Encrypted message: %s", msg);
   }
   if(choice == 2) { //for decryption
      char ch;
      for(int i = 0; msg[i] != '\0'; ++i) 
	  {
         ch = msg[i];
         if(ch >= 'a' && ch <= 'z') 
		 {
            ch = ch - key;
            if(ch < 'a')
			{
               ch = ch + 'z' - 'a' + 1;
            }
            msg[i] = ch;
         }
         else if(ch >= 'A' && ch <= 'Z') {
            ch = ch - key;
            if(ch < 'A') 
			{
               ch = ch + 'Z' - 'A' + 1;
            }
            msg[i] = ch;
         }
      }
      cout << "Decrypted message: " << msg;
   }
}
