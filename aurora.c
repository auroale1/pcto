    //SCRIVERE UN PROGRAMMA CHE CHIEDA ALL'UTENTE DI INSERIRE 
    //UN INT ETA E DICA SE E'MAGGIORENNE O MENO 
    

    #include <stdio.h>

    int main()
    {
        char sesso;
        printf("scrivi il tuo sesso: ");
        scanf(" %c", &sesso);
        if (sesso == 'm')
        {
            printf("sei maschio\n");
        }
        else if (sesso == 'f')
        {
            printf("sei femmina\n");
        }
        else if (sesso =='n')
        {
                printf("non sei ne maschio ne femmina\n");   
        }
        else 
        {
            printf( "in qualunque altro caso stampi un messaggio di errore\n");open
        }
    }
        
        

    
        
        