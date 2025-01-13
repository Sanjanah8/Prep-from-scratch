void sortZeroesAndOne(int input[], int size)
{
    int left=0,right=size-1;
    while(left < right){
        if(input[left]==0){
            left++;
        }else if(input[right]==1){
            right--;
        }
        else{
swap(input[left],input[right]);
left++;
right--;
        }
    }
}

//2
void sortZeroesAndOne(int *input, int size)
{
    int nextZero = 0;

    for (int i = 0; i < size; i++)
    {

        if (input[i] == 0)
        {
            int temp = input[nextZero];
            input[nextZero] = input[i];
            input[i] = temp;
            nextZero++;
        }
    }
}
