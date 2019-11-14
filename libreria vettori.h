int raddoppia(int n)
{
	return 2*n;
}

int randomNM(int n, int m)
{
	int valoreRandom = rand() % (m - n + 1) + n;
	return valoreRandom;
}

float randomNM(float n, float m)
{
	float valoreRandom = rand() % (m - n + 1) + n;
	return valoreRandom;
}

void riempiVettore(int v[], int n)
{
	for (int i=0; i<n; i++)
		v[i] = randomNM(VALORE_MIN, VALORE_MAX);
}

void riempiVettore(float v[], int n)
{
	for (int i=0; i<n; i++)
		v[i] = randomNM(VALORE_MIN, VALORE_MAX);
}

void inserisciNumerosita(int &n)
{
	do
	{
		cout << "Inserisci numerosita: ";
		cin >> n;	
	} while (n <= 0 || n > 100);
}

void inserisciNumerosita(float &n)
{
	do
	{
		cout << "Inserisci numerosita: ";
		cin >> n;	
	} while (n <= 0 || n > 100);
}

void stampaVettore(int v[], int n)
{
	cout << "Stampo il vettore:" << endl;
	for (int i=0; i<n; i++)
		cout << "\tElemento " << i+1 << ": " << v[i] << endl;
	cout << endl;
}

void stampaVettore(float v[], int n)
{
	cout << "Stampo il vettore:" << endl;
	for (int i=0; i<n; i++)
		cout << "\tElemento " << i+1 << ": " << v[i] << endl;
	cout << endl;
}

void scambia(int &a, int &b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

void scambia(float &a, float &b)
{
	float tmp = a;
	a = b;
	b = tmp;
}

void ordinamentoIngenuo(int v[], int n)
{
	for (int i=0; i<n-1; i++)
		for (int j=i+1; j<n; j++)
			if (v[i] > v[j])
				scambia(v[i], v[j]);
}

void ordinamentoIngenuo(float v[], int n)
{
	for (int i=0; i<n-1; i++)
		for (int j=i+1; j<n; j++)
			if (v[i] > v[j])
				scambia(v[i], v[j]);
}

bool ricercaBinaria(int v[], int n, int x)
{
	int inizio = 0, fine = n-1, medio;
	while (inizio <= fine)
	{
		medio = (inizio + fine) / 2;
		
		if (v[medio] == x)
			return true;
			
		if (v[medio] > x)
			fine = medio - 1;
		else
			inizio = medio + 1;
	}
	
	return false;
}

bool ricercaBinaria(float v[], int n, float x)
{
	int inizio = 0, fine = n-1, medio;
	while (inizio <= fine)
	{
		medio = (inizio + fine) / 2;
		
		if (v[medio] == x)
			return true;
			
		if (v[medio] > x)
			fine = medio - 1;
		else
			inizio = medio + 1;
	}
	
	return false;
}

void stampaPresenze(int v[], int n)
{
	for (int i=VALORE_MIN; i<=VALORE_MAX; i++)
	{
		cout << i << "\t -> \t";
		if (ricercaBinaria(v, n, i))
			cout << "PRESENTE" << endl;
		else
			cout << "NON PRESENTE" << endl;
	}
}

void stampaPresenze(float v[], int n)
{
	for (int i=VALORE_MIN; i<=VALORE_MAX; i++)
	{
		cout << i << "\t -> \t";
		if (ricercaBinaria(v, n, i))
			cout << "PRESENTE" << endl;
		else
			cout << "NON PRESENTE" << endl;
	}
}
