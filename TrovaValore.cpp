#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <time.h>

using namespace std;

void OrdinaArray(int v[], int n) {
   for (int i=0; i<n-1; i++) {
      int index = i;
      for (int j=i+1; j<n; j++)
         if (v[j] < v[index]) 
            index = j;
      
      int temp = v[index];  
      v[index] = v[i];
      v[i] = temp;
   }
}

int TrovaValore(int v[], int n, int valore){
	OrdinaArray(v, n);
	int numero;
	int i = 0;
	int risultato = 0;
	int k=0;
	while(numero != valore){
		int media = (i+n)/2;
		if (v[media] == valore){
			risultato = v[media];
			break;
		}
		else if (v[media] > valore){
			n = media;
		}
		else if (v[media] < valore){
			i = media;
		}
		k++;
		
		if (k>100){
			break;
		}
	}
	return risultato;
}

int main() {
	
	int v[15] = {34, 567, 234, 2, 87, 98, 1234, 987, 34, 1223, 22, 65, 23, 456, 9};
	int b = TrovaValore(v, 15, 1223);
	cout << b;
	
	return 0;
}
