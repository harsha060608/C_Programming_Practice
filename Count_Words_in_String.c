    #include <stdio.h>

    int main()
    {
        char str[100] = " I love Programming ";

        int count = 0, i = 0; 

       while(str[i] != '\0')
       {
            if(str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
            {
                count++;
            }

            i++;
       }

       printf("Total No:of Words are %d", count);

       return 0; 
    }