#include <cstdio>
#include <cstdlib>

void selectionSort(int dizi[], int dizi_eleman)
{
	for (int i = 0; i < dizi_eleman; i++)
	{
		int min = dizi[i], indis = i; //min değeri 0 ata ve dizinin elamanını bulmak için indise i değerini ata
		for (int j = i; j < dizi_eleman; j++) //dizide işlem görülen indisi dahil etme
		{
			if (dizi[j] < dizi[i] && dizi[j] < min) //dizinin elemanı seçilen elemandan VE min elemandanda küçükse
			{
				min = dizi[j]; //küçük elemanı min değişkenine aktar
				indis = j; //dizideki yeri(indis)
			}
		}
		int swap = dizi[i]; //seçilen elemanı swap değişkenine aktar
		dizi[i] = min; //min değişkenindeki elemanı dizideki yerine taşı
		dizi[indis] = swap; //swap değişkenindeki elemanı en küçük elemanın bulunduğu indise taşı
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

	selectionSort(dizi, eleman);
	for (int i = 0; i < eleman; i++) printf("%d  ", dizi[i]); //dizi eleman yazdırmak
	printf("\n\n");

	system("Pause");
	return 0;
}
