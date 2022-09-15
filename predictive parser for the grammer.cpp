#include<stdio.h> 
#include<string.h> 
#include<stdlib.h>
void removeduplicate(); 
void final();
int Isiden(char ch);
int Isop(char ch);
int Isdel(char ch);
int Iskey(char * str);
void removeduplicate();

char op[8]={'+','-','*','/','=','<','>','%'}; 
char del[8]={'}','{',';','(',')','[',']',','}; 
char *key[]={"int","void","main","char","float"}; 

//char operato[]={"+","-","/","","<",">","=","%","<=",">=","++"}; 

int idi=0,idj=0,k,opi=0,opj=0,deli=0,uqdi=0,uqidi=0,uqoperi=0,kdi=0,liti=0,ci=0; 
int uqdeli[20],uqopi[20],uqideni[20],l=0,j; 
char uqdel[20],uqiden[20][20],uqop[20][20],keyword[20][20]; 
char iden[20][20],oper[20][20],delem[20],litral[20][20],lit[20],constant[20][20]; 

void lexanalysis(char *str) 
 { 
   int i=0; 
   while(str[i]!='\0') 
    { 
     if(Isiden(str[i]))     //for identifiers 
       { 
          while(Isiden(str[i])) 
        { 
            iden[idi][idj++]=str[i++]; 
        } 
          iden[idi][idj]='\0'; 
          idi++;idj=0; 
       } 
      else 
      if(str[i]=='"')         //for literals 
         { 
         lit[l++]=str[i]; 
         for(j=i+1;str[j]!='"';j++) 
           { 
            lit[l++]=str[j]; 
           } 
         lit[l++]=str[j];lit[l]='\0'; 
         strcpy(litral[liti++],lit); 
         i=j+1; 
         } 
      else 
      if(Isop(str[i]))        // for operators 
          { 
         while(Isop(str[i])) 
            { 
             oper[opi][opj++]=str[i++]; 
            } 
         oper[opi][opj]='\0'; 
         opi++;opj=0; 
          } 
       else 
       if(Isdel(str[i]))     //for delemeters 
          { 
          while(Isdel(str[i])) 
            { 
              delem[deli++]=str[i++]; 
            } 
           } 
        else 
           { 
            i++; 
        } 
     } 

   removeduplicate(); 
   final(); 
}
