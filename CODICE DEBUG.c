#include <stdio.h>
#include <stdlib.h>

void menu ();
void moltiplica ();
void dividi ();
void ins_string();


int main () 

{
	char scelta_iniziale= {'\0'};
	bool s;
    do{
    	menu ();
		scanf ("%c", &scelta_iniziale);
		rewind(stdin);

		switch (scelta_iniziale)
		{
			case 'A':{
				moltiplica();
				s=false;
				break;
			}
			case 'B':{
				dividi();
				s=false;
				break;
			}
			case 'C':{
				ins_string();
				s=false;
				break;
			}
    	    case 'D':
	        	{
        	  	printf("\nFammi sapere se hai di nuovo bisogno di me\n");
        	 	 system("PAUSE");
        		  return 0;
				}
    	    default :{ 
	           printf("\nOpzione non valida\n");
	           s=true;
				break;
			}   
		}
	}while(s);
    system ("PAUSE");
	return 0;

}


void menu ()
{
	printf ("Benvenuto, sono un assitente digitale, posso aiutarti a sbrigare alcuni compiti\n");
	printf ("Come posso aiutarti?\n");
	printf ("A >> Moltiplicare due numeri\nB >> Dividere due numeri\nC >> Inserire una stringa\nD>> Esci\n");

}


void moltiplica ()
{
	int  a, b;
	printf ("Inserisci i due numeri da moltiplicare:");
	scanf ("%d", &a);
	rewind(stdin);
	scanf ("%d", &b);
	rewind(stdin);

	int prodotto = a * b;

	printf ("Il prodotto tra %d e %d e': %d", a,b,prodotto);
}


void dividi ()
{
        int  a,b;
        printf ("\nInserisci il numeratore: ");
        scanf ("%d", &a);
		printf ("\nInserisci il denominatore: ");
        scanf ("%d", &b);

        float divisione = (float)a / (float)b;

        printf ("\nLa divisione tra %d e %d e': %f\n\n", a,b,divisione);
}





void ins_string () 
{
	char stringa[10];
        printf ("Inserisci la stringa:");
        scanf ("%s", &stringa);
}