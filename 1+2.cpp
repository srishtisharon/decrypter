#include <iostream>
#include <bits/stdc++.h>
#include <fstream>
#include <stdio.h>
#include <math.h>
#include <string>

using namespace std;

int main()
{
  int n,i;
  char A[1000];

    cout<<"    MENU\n";
    cout<<"1. caesar cipher decrypter\n";
    cout<<"2. vigenere cipher decrpyter\n";
    cout<<"3. RSA cipher decrypter\n";
    cout<<"4. transposition cipher decrypter\n";
    cout<<"5. pigpen cipher decrypter\n";
    cout<<" enter your choice : ";
    cin>>n;
    cout<<" enter the encrypted message : \n";
    cin>>A;
    switch(n)
    {
        case 1 : int shift;
                 char ch;
                 cout << " shift by : ";
	             cin >> shift;
	             for(i = 0; i<50; ++i)
                 {
                    ch = A[i];
		           if(ch >= 'a' && ch <= 'z')
                   {
			       ch = ch - shift;
			       if(ch < 'a')
				   ch = ch + 'z' - 'a' + 1;
			       A[i] = ch;
		           }
		           else
                   if(ch >= 'A' && ch <= 'Z')
                   {
                       ch = ch - shift;
			       if(ch > 'a')
                   ch = ch + 'Z' - 'A' + 1;
			       A[i] = ch;
		           }
		           else
		           
		           A[i]=ch;
		           }
	             cout << "\n\n\n Decrypted message: " << A;  
				 
				 break;
	    case 2 :{
		         char key[1000];
	             cout<<"enter key : ";
	             cin>>key;
	             int m,n,j;
	             m=strlen(A);
	             n=strlen(key);
	             char add[m];
	             for(i=0,j=0;i<m;i++,j++)
	             {
	             	if(j==n)
	             	j=0;
	             	add[i]=key[j];
	             }
	             	cout<<"\nkey generated : "<<add;
	             
				 	i=0;
	                while(i<m)
                 {
                   A[i] = (((A[i] - add[i]) + 26) % 26)+'a';
                   i++;
                 }
                 cout << "\n\n\n Decrypted message: " << A;  
				 break;
			     }   
        case 3 : {
			     int p,q;
                 cout<<"\nenter the 1st prime number : ";
                 cin>>p;
                 cout<<"\nenter the 2nd prime number : ";
                 cin>>q;
                 int t;
				 t=p*q;
                 int d;                               
                 cout<<"\n enter private key : ";
                 cin>>d;
                 for(int i=0;i<n;i++)
                 {
                  char ch=A[i];
				  if(isdigit(ch))
				  A[i] =(int)pow(ch , d) % t;
                  
                  if(isalpha(ch))
                  {
                  	switch(ch)
                  	{
                  		case 'a' : ch=1; break;
						case 'b' : ch=2; break;
						case 'c' : ch=3; break;
						case 'd' : ch=4; break;
						case 'e' : ch=5; break;
						case 'f' : ch=6; break;
						case 'g' : ch=7; break;
						case 'h' : ch=8; break;
						case 'i' : ch=9; break;
						case 'j' : ch=10; break;
						case 'k' : ch=11; break;
						case 'l' : ch=12; break;
						case 'm' : ch=13; break;
						case 'n' : ch=14; break; 
						case 'o' : ch=15; break;
						case 'p' : ch=16; break;
						case 'q' : ch=17; break;
						case 'r' : ch=18; break;
						case 's' : ch=19; break;
						case 't' : ch=20; break;
						case 'u' : ch=21; break;
						case 'v' : ch=22; break;
						case 'w' : ch=23; break;
						case 'x' : ch=24; break;
						case 'y' : ch=25; break;
						case 'z' : ch=26; break;           		
				    }
				     A[i]=(int)pow(ch,d)%t;
				     switch(A[i])
				     {
				     	case 1 : A[i]='a'; break;
				     	case 2 : A[i]='b'; break;
				     	case 3 : A[i]='c'; break;
				     	case 4 : A[i]='d'; break;
				     	case 5 : A[i]='e'; break;
				     	case 6 : A[i]='f'; break;
				     	case 7 : A[i]='g'; break;
				     	case 8 : A[i]='h'; break;
				     	case 9 : A[i]='i'; break;
				     	case 10 : A[i]='j'; break;
				     	case 11 : A[i]='k'; break;
				     	case 12 : A[i]='l'; break;
				     	case 13 : A[i]='m'; break;
				     	case 14 : A[i]='n'; break;
				     	case 15 : A[i]='o'; break;
				     	case 16 : A[i]='p'; break;
						case 17 : A[i]='q'; break;
						case 18 : A[i]='r'; break;
						case 19 : A[i]='s'; break; 
						case 20 : A[i]='t'; break;
						case 21 : A[i]='u'; break;
						case 22 : A[i]='v'; break;
						case 23 : A[i]='w'; break;
						case 24 : A[i]='x'; break;
						case 25 : A[i]='y'; break;
						case 26 : A[i]='z'; break;
						 	
					 }
				     }
				     else
				     A[i]=ch;
		        	}
		        	cout << "\n\n\n Decrypted message: " << A;  
		        	break;
		        }
                 
		case 4 : {
	             string dmsg="",key;
	int i,j,kln,n,flag=0,t=0;
	int r,c;
	cout<<"Enter the key\n";
	cin>>key;
	int m=strlen(A);
	kln=key.length();
	char arr[kln][kln];
	int k=0;
	for(i=0; ;i++)
	{
		if(flag==1||A[i]==NULL)
			break;
		for(j=0;j<kln;j++)
			{
				if(A[k]==NULL)
					{flag=1;arr[i][j]='-';t++;}
				else
				{arr[i][j]=A[k];k++;}	
			}
	}
	r=i;
	c=j;
	for (i=0;i<r;i++) {
		for (j=0;j<c;j++) {
			printf("%c ",arr[i][j]);
		}
		cout<<"\n";
	}
	char dc[r][c];
	
	for(int i=0;i<kln;i++)
	{
		if(key[i]-'0'-1!=i)
			{
				n=key[i]-'0'-1;
				for(int j=0;j<r;j++)
					dc[j][n]=arr[j][i];
							}
	}
	for(i=0;i<m ;i++)
	{
		key[i]=ch;
		for(j=0;j<r;j++)
		cout<<arr[j][ch];
	}
			     break;
	       	     }
	     case 5 : {
	    	      int i;
	    	      n=strlen(A);
	    	      for (i=0;i<n;i++)
	    	      {
	    	      	cout << "\n\n\n Decrypted message: " << A;
	    	      	switch(A[i])
	    	      	{
	    	      	    case 'a' : cout<<"__|  "; break;
						case 'b' : cout<<"|__|  "; break;
						case 'c' : cout<<"|__  "; break;
						case 'd' : cout<<"]  "; break;
						case 'e' : cout<<"[]  "; break;
						case 'f' : cout<<"[  "; break;
						case 'g' : cout<<"T  "; break;
						case 'h' : cout<<"TT  "; break;
						case 'i' : cout<<"T  "; break;
						case 'j' : cout<<"__.|  "; break;
						case 'k' : cout<<"L._|  "; break;
						case 'l' : cout<<"|.__  "; break;
						case 'm' : cout<<".]  "; break;
						case 'n' : cout<<"[.]  "; break; 
						case 'o' : cout<<"[.  "; break;
						case 'p' : cout<<"T.  "; break;
						case 'q' : cout<<"T.T  "; break;
						case 'r' : cout<<".T  "; break;
						case 's' : cout<<"V  "; break;
						case 't' : cout<<">  "; break;
						case 'u' : cout<<"<  "; break;
						case 'v' : cout<< "/\  "; break;
						case 'w' : cout<< "\./  "; break;
						case 'x' : cout<<".>  "; break;
						case 'y' : cout<<"<.  "; break;
						case 'z' : cout<< "/.\  "; break; 	
					}
				  }
	    	       
			    
		}    	   
  
     
				         	 		 
				
			}
                 
                
    
	
	}
	
   



