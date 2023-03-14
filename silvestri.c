    //SCRIVERE UN PROGRAMMA CHE CHIEDA ALL'UTENTE DI INSERIRE 
    //UN INT ETA E DICA SE E'MAGGIORENNE O MENO 
    

    #include <stdio.h>

    int main()
    {
        int anno;
        printf("inserisci l'anno: ");
        scanf(" %d", &anno);
        if ((anno%4 == 0 && anno%100 != 0)|| anno%400 ==0)
        {
            printf("bisestile\n");
        }
        
        else 
        {
            printf( "non bisestile\n");
        }
    }
        
        

    
        
        