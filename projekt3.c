// Program zwracajacy wektor z elementami macierzy o indeksach parzystych(zarowno indeks wiersza jak i kolumny ma byc parzysty)


#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int K, W, i, j, ileP=0, k=0, n;
    int **A, *wynik;
    
    printf("Ilosc kolumn: \n");
    scanf("%d", &K);
    printf("Ilosc wierszy: \n");
    scanf("%d", &W);
    
    // Alokacja pamieci dla tablicy dwuwymiarowej
    A=(int**)malloc(W*sizeof(int*)); // alokacja pamieci dla wierszy
    for(i=0; i<W; i++)
        A[i]=(int*)malloc(K*sizeof(int)); // alokacja pamieci dla kolumn
    
    // Przypisanie wartosci do tablicy A
    printf("\nWczytanie tablicy: \n");
    for(j=0 ; j<K ; j++)
        for(i=0 ; i<W ; i++)
        {
        	printf("Podaj K%d:W%d = ",j+1,i+1);
        	scanf("%d", &A[i][j]);
		}
            

    for(i=0 ; i<W ; i++){
    	
    	if ((i+1)%2==0)
    	{
        	for(j=0 ; j<K ; j++){
        		
        		if ((j+1)%2==0)
    			{
    				n=n+1;
    			}
    		
        	}
		}
        	
    }
    
    wynik=(int*)malloc(ileP*sizeof(int*));
    
    for(i=0 ; i<W ; i++){
    	
    	if ((i+1)%2==0)
    	{
        	for(j=0 ; j<K ; j++){
        		
        		if ((j+1)%2==0)
    			{
    				wynik[k]=A[i][j];
    				k=k+1;
    			}
    		
        	}
		}
        	
    }
    
    if(n>0)
    {
    	printf("\nWynik = {");
    	for (i=0; i<n; i++) 
		{
        	printf("%d", wynik[i]);
        	if(i != n-1) printf(", ");
    	}
    	printf("}\n");
    } else
    {
    	printf("\nBrak wyniku\n\n");
	}
	

    return 0;
}
