void removeConsecutiveDuplicates(char *input) {
	/* Don't write main().
	* Don't read input, it is passed as function argument.    
	* Change in the given string itself.
	* No need to return or print anything
	* Taking input and printing output is handled automatically.
	*/
if(input==nullptr||*input=='\0'){
	return;
}
int i=0,j=0;
while(input[i]!='\0'){
	if(i==0 || input[i]!=input[i-1]){
		input[j]=input[i];
		j++;
	}
	i++;
}
input[j]='\0';
}
