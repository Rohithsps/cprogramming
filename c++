POINTERS:-
Pointers can holds address.
Variables can holds values .
EX:int *p = &i;
       p=&i;
To  find address of a variable is  By  using %p  as format specifier printf function
Suppose ex: the base address is 1000 then first interger is 1000 to 1003 and second 1004 to 1008. bcoz interger have a 4 bytes 
In subtraction p-q/4. p means address of p ,q is address of q .
Performing arithmetic on pointers which are not planning to array element leads to undefine behaviours 
ex: int main()
{
int i =10;
int *p =&i;
printf("%d",*(p+3));// when ever we increment with the pointer integer value 
return 0;l           // Should be stored in array otherwise the output will be diferent  
}
Name of the array can be used as pointer of the first element of an  array.
 WE can use array but the address of the pointer can't change 
suppose ex:- int main(){
             int a[]={11,23,36,5,6}
            printf("%d",a++);
       // so here the a++ is to change tha address of pointer but address can't change if i return is the output is zero
      so we can use here a+1; its for accessing 
      a++ is assiging 
      return 0;
             }

STRINGS:-
strlen-calculates the length of string
strcat-Appends one string at the end of another
strncat-Appends first n characters of a string at the end of another
strcpy-Copies a string into another
strncpy-Copies first n characters of one string into another
strcmp-Compares two strings
strncmp-Compares first n characters of two strings
strchr-Finds first occurrence of a given character in a string
strrchr-Finds last occurrence of a given character in a string
strstr-Finds first occurrence of a given string in another string

OOPS TOPIC:
Classes and Objects: 
class:- Its creates object and defines attributes and method to all the object that type 
Object:- It creates  based on a class and represent a specfic instance of that class  and multiple object can create 
         in same class.

 
