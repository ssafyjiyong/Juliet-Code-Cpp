









#include <iostream.h>
#include <new.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>



int main(){
        char            input[100];
        int             i, n;
        long           *l;

  cout <<   "How many numbers do you want to type in? ";
        cin.getline(input, 100);
        i = atoi(input);

        //try {
                l = new long    [i]; /* BAD */
        //}

        //catch (bad_alloc & ba) {
        //       cout << "Exception:" << endl;
        //}
        if (l == NULL)
                exit(1);
        for (n = 0; n < i; n++) {
                cout << "Enter number: ";
                cin.getline(input, 100);
                l[n] = atol(input);
        }
                cout << "You have entered: ";
        for (n = 0; n < i; n++)
                cout << l[n] << ", ";
        delete[] l;
        return 0;
}
