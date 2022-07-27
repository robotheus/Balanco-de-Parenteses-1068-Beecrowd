#include <stdio.h>
#include <string.h>

int main(){
    char expressao[1000];

    while(scanf("%s", expressao) != EOF){
        int i = 0, f = 0, par = 0;
        
        for(int l = 0; l < strlen(expressao); l++){
            if(expressao[l] == '(') i++;
            else if(expressao[l] == ')') f++;
        }

        if(i != f) printf("incorrect\n");
        else{
            for(int j = 0; j < strlen(expressao); j++){
                if(expressao[j] == '('){
                    for(int k = j+1; k < strlen(expressao); k++){
                        if(expressao[k] == ')') {
                            par++;
                            break;
                        }
                    }
                }
            }

            if(par == i && par == f) printf("correct\n");
            else printf("incorrect\n");
        }
    }

return 0;
}

