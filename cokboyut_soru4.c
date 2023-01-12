/*Klavyeden girilen nxn tipindeki A matrisinde;her bir sütundaki en büyük elemanlarý bulup bunlarý B dizisine aktaran ve 
B dizisinin aritmetik,geometrik ve harmonik ortalamalarýný bulan program*/
#include<stdio.h>
main()
{
    int n, i, j, max, A[100][100], B[100];
    printf("Satir ve sutun sayilarini giriniz: ");
    scanf("%d", &n);
    for(i=0;i<n;i++) 
	{
        for(j=0;j<n;j++) 
		{
            printf("A[%d][%d]: ",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    for(j=0;j<n;j++) 
	{
        max = A[0][j];
        for(i = 1; i < n; i++) 
		{
            if(A[i][j] > max) 
			{
                max = A[i][j];
            }
        }
        B[j] = max;
    }
    printf("B dizisi: \n");
    for(j=0;j<n;j++)
	{
        printf("%d ",B[j]);
    }
    printf("\n");
    int toplam=0,art_ort=0;
    for(j=0;j<n;j++)
    {
    	toplam+=B[j];
    	art_ort=(toplam/n);
	}
	printf("B dizisinin aritmetik ortalamasi: %d \n",art_ort);
	int carpma=1,geo_ort=0;
	for(j=0;j<n;j++)
	{
		carpma*=B[j];
		geo_ort=pow(carpma,(1.0/(n)));
	}
	printf("B dizisinin geometrik ortalamasi: %d \n",geo_ort);
	int hrm_top=0,hrm_ort=0;
	for(j=0;j<n;j++)
	{
		hrm_top+=((hrm_top+1)/(B[j]));
		hrm_ort=((n/(hrm_top));
	}
	printf("B dizisinin harmonik ortalamasi: %d \n",hrm_ort);
	
    
    return 0;
}

	

