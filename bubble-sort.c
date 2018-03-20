#include <cstdio>
#include <cstdlib>

void bubbleSort(int dizi[], int dizi_eleman)
{
	for (int i = 0; i < dizi_eleman - 1; i++) //dizinin son elemanına (dizi_eleman - 1) kadar git
	{
		for (int j = 0; j < dizi_eleman - 1; j++)
		{
			if (dizi[j] > dizi[j + 1]) //dizinin j indisindeki değer j + 1 (yani bir sonraki) indisinden büyükse
			{
				int swap = dizi[j]; //büyük elemanı değişkene aktar
				dizi[j] = dizi[j + 1]; //bir sonraki eleman ile yer değiştir
				dizi[j + 1] = swap; //değişkendeki elemanı sonraki elemana taşı
			}
		}
	}
}

int main(void)
{
	int *dizi, eleman; //*dizi pointer kullanarak boyut alınabilir
	printf("Kac eleman girilecek> ");
	scanf("%d", &eleman);
	dizi = (int*)malloc((eleman * sizeof(int))); //malloc ile diziyi yeniden boyutlandırmak

	for (int i = 0; i < eleman; i++) //elemanları diziye aktarmak
	{
		printf("Dizinin %d.elamani=", i + 1);
		scanf("%d", &dizi[i]); //dizi eleman girişi
	}
	printf("\n%d Elemanli Dizi BubbleSort Siralama: ", eleman);

	bubbleSort(dizi, eleman);
	for (int i = 0; i < eleman; i++) printf("%d  ", dizi[i]); //dizi eleman yazdırmak
	printf("\n\n");

	system("Pause");
	return 0;
}
