#include <stdio.h>
#include <stdlib.h>

int main(){

    //This is for reading an exist file
    FILE *pF = fopen("pain.txt", "r"); // r stands for read. And if file is in another path. Just paste the path
    char buffer[255];
if(pF == NULL) {
    printf("Unable to open file!\n");
}   else {
    while(fgets(buffer, 255, pF)!=NULL) {

    printf("%s", buffer);
    }

}

    fclose(pF);

/*
    //This is for writing a file

    // if you write the name with a path instead of just naming the file, you can create that file in that path
    // for example     FILE *pF = fopen("C:\Users\Alper\Desktop\alper.txt", "w");

    FILE *pF = fopen("alper.txt", "w");

    fprintf(pF, "These are not just oranges. They're blood oranges.");
    fclose(pF);
*/
/*
    // This is for deleting a file
if(remove("alper.txt") == 0) {
    printf("That file was deleted succesfully");
}   else
{
    printf("That file was not deleted");
}
*/
    return 0;
}
