#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){

    FILE *fp = fopen(".temp.c","w");
    fprintf(fp,"#include <stdio.h>\n");
    fprintf(fp,"\n");
    fprintf(fp,"int main(){\n");
    fprintf(fp,"    printf(\"Hello World\\n\");\n");
    fprintf(fp,"    \n");
    fprintf(fp,"    return 0;\n");
    fprintf(fp,"}\n");
    fclose(fp);

    char mkdir[100] = "mkdir ";
    strcat(mkdir,argv[1]);
    system(mkdir);
    char mv[100] = "mv .temp.c ./";
    strcat(mv, argv[1]);
    strcat(mv, "/");
    strcat(mv, argv[1]);
    strcat(mv, ".c");
    system(mv);
    return 0;
}
