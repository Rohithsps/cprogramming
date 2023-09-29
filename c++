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
 
