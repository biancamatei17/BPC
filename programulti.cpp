
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>

int nrImpar(int v[100], int n) {
	int c = 0;
	for (int i = 1; i <= n; i++) {
		if (v[i] % 2 != 0) {
			c++;
		}
	}
	return c;
}
int pozNr(int v[100], int n, int a) {
	int poz1 = 0;
	printf("a=");
	scanf("%d", &a);

	for (int i = 1; i <= n; i++) {
		if (v[i] == a) {
			poz1++;
		}
	}
	return poz1;
}
int sum(int v[100], int n) {
	int s = 0;

	for (int i = 1; i <= n; i++) {
		if (v[i] % 2 == 0) {
			s = s + v[i];
		}
	}
	return s;
}

int pozpar(int v[1000], int n) {
	int poz = 0;

	for (int i = 1; i <= n; i++) {
		if (i % 2 == 0) {
			poz++;
		}
	}
	return poz;
}
int produs(int v[100], int n) {
	int prod = 1;

	for (int i = 1; i <= n; i++)
		prod = prod * v[i];
	return prod;
}
int media(int v[100], int n)
{
	int i, c = 0;
	float m = 0;
	for (i = 1; i <= n; i++)
		if (i % 2 == 0)
		{
			m = m + v[i];
			c++;
		}
	m = m / c;

	return m;
}
int minim(int* a, int n) {
	int min = a[1];
	int i = 2;
	while (i <= n) {
		if (a[i] < min)
			min = a[i];
		i++;
	}
	return min;
}
int maxim(int* a, int n,int i) {
	int maxi = a[1];
	i = -1;
	while (i <= n) {
		if (a[i] > maxi)
			maxi = a[i];
		i++;
	}
	return maxi;
}
int produsimp(int v[100], int n) {
	int prod = 1;

	for (int i = 1; i <= n; i++) {
		if (v[i] % 2 != 0) {
			prod = prod * v[i];
		}
	}
	return prod;
}
void schimbare(int* x, int* y)
{
	int a = *x;
	*x = *y;
	*y = a;
}
void sortareVector(int v[100], int n) {
	for (int i = 1; i <= n - 1; i++) {
		for (int j = 1; j <= n - i - 1; j++) {
			if (v[j] > v[j + 1]) {
				schimbare(&v[j], &v[j + 1]);
			}
		}
	}
}
void lista(int v[100], int n) {
	for (int i = 1; i <= n; i++) {
		printf("%d ", v[i]);
	}
	printf("\n");
}
int main() {

	printf("Program multifunctional: \n");
	printf("\n");

	while (1) { 
		printf("1. Sa se afiseze numarul de elemente impare care exista intr-un vector.\n");
		printf("2. Sa se afiseze numarul de aparitii al unui numar citit de la tastatura, intr-un vector.\n");
		printf("3. Calculeaza suma elementelor pare ale unui vector.\n");
		printf("4. Sa se spuna cate pozitii pare exista in vector.\n");
		printf("5. Calculeaza produsul elementelor unui vector.\n");
		printf("6. Calculeaza media elementelor de pe pozitiile pare ale vectorului.\n");
		printf("7. Sa se spuna care este elementul maxim dintr-un vector.\n");
		printf("8. Sortare vector\n");
		printf("9. Sa se spuna care este elementul minim dintr-un vector.\n");
		printf("10. Sa se calculeze produsul elementelor impare ale unui vector.\n");
		printf("Pentru o optiune diferita fata de cele existente se va iesi din program.\n");

		int option;
		printf("Alegeti optiunea dorita\n");
		scanf("%d", &option);

		switch (option) {
		case 1: {
			int tab[100], m, i, x;
			printf("m=");
			scanf("%d", &m);
			for (i = 1; i <= m; i++)
			{
				printf("tab[%d]=", i);
				scanf("%d", &tab[i]);
			}
			x = nrImpar(tab, m);
			printf("Numarul de elemente impare ale vectorului este: %d\n", x);
			printf("\n");
			break;
		}
		case 2: {
				int tab[100], m, i, x, y;
				printf("m=");
				scanf("%d", &m);
				printf("y=");
				scanf("%d", &y);

				for (i = 1; i <= m; i++)
				{
					printf("tab[%d]=", i);
					scanf("%d", &tab[i]);
				}
				x = pozNr(tab, m, y);
				printf("Numarul de aparitii al numarului citit este: %d\n", x);
				break;
				printf("\n");
			}

		case 3: {
			int tab[10], m, i, x;
			printf("m=");
			scanf("%d", &m);
			for (i = 1; i <= m; i++)
			{
				printf("tab[%d]=", i);
				scanf("%d", &tab[i]);
			}
			x = sum(tab, m);
			printf("Suma numerelor pare este: %d\n", x);
			printf("\n");
			break;
		}
		
		case 4: {
			int tab[10], m, i, x;
			printf("m=");
			scanf("%d", &m);
			for (i = 1; i <= m; i++)
			{
				printf("tab[%d]=", i);
				scanf("%d", &tab[i]);
			}
			x = pozpar(tab, m);
			printf("Numarul pozitiilor pare este: %d\n", x);
			printf("\n");
			break;
		}
		case 5: {
			int tab[10], m, i, x;
			printf("m=");
			scanf("%d", &m);
			for (i = 1; i <= m; i++)
			{
				printf("tab[%d]=", i);
				scanf("%d", &tab[i]);
			}
			x = produs(tab, m);
			printf("Produsul elementelor este: %d\n", x);
			printf("\n");

			break;
		}
			  
		case 6: {
			int tab[10], m, i, x;
			printf("m=");
			scanf("%d", &m);
			for (i = 1; i <= m; i++)
			{
				printf("tab[%d]=", i);
				scanf("%d", &tab[i]);
			}
			x = media(tab, m);
			printf("Media elementelor de pe pozitiile pare este: %d\n", x);
			printf("\n");
			break;
		}
		
		case 7: {
				  int tab[10], m, i, x;
				  printf("m=");
				  scanf("%d", &m);
				  for (i = 1; i <= m; i++)
				  {
					  printf("tab[%d]=", i);
					  scanf("%d", &tab[i]);
				  }
				  x = maxim(tab, m,i);
				  printf("Maxim este: %d\n", x);
				  printf("\n");
				  break;
			  }
		case 8:{
			int n;
			int nr[100];

			printf("n=");
			scanf("%d", &n);

			for (int i = 1; i <= n; ++i) {
				printf("nr[%d]=", i);
				scanf("%d", &nr[i]);
			}

			sortareVector(nr, n);
			lista(nr, n);

			break;
		}
		
		case 9: {
			int tab[10], m, i, x;
			printf("m=");
			scanf("%d", &m);
			for (i = 1; i <= m; i++)
			{
				printf("tab[%d]=", i);
				scanf("%d", &tab[i]);
			}
			x = minim(tab, m);
			printf("Minimul este: %d\n", x);
			printf("\n");
			break;
		}
		
		case 10: {
			int tab[10], m, i, x;
			printf("m=");
			scanf("%d", &m);
			for (i = 1; i <= m; i++)
			{
				printf("tab[%d]=", i);
				scanf("%d", &tab[i]);
			}
			x = produsimp(tab, m);
			printf("Produsul numerelor impare este: %d\n", x);
			printf("\n");
			break;
		}
		
		default:
			printf("End\n");
			return 0;
		}
	}

	return 0;
}