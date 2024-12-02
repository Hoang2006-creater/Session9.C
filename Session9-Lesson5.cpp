#include <stdio.h>
int main()
{
 int a, b, arr[100], d=0, sum=0, min=arr[0], max=arr[0], e, addindex;
do
{
	printf ("1.nhap kich co vi gia tri mang \n");
	printf ("2.in ra cac gia tri trong mang \n");
	printf ("3.in ra cac gia tri chan trong mang \n");
	printf ("4.in ra gia tri lon nhat va gia tri nho nhat \n");
	printf ("5. in ra cac phan tu la so nguyen to trong mang \n");
	printf ("6.nhap vao mot so va thong ke trong mang co bao nhieu phan tu do\n");
	printf ("7.them phan tu vao vi tri chi dinh\n");
	printf ("8.thoat\n");
	printf ("moi nhap lua chon:");
	scanf ("%d",&a);
	switch (a)
	{
		case 1:
			printf ("moi nhap kich thuong mang :");
			scanf ("%d", &b);
			for (int i=0; i<b; i++)
			{
				printf ("moi nhap phan tu thu %d :", i+1);
				scanf ("%d", &arr[i]);
			}
			
			break;
		case 2:
		for (int i=0; i<b; i++)
		{
		  printf ("%d ",arr[i]);	
		}
		printf ("\n");
		break;
		case 3:
			printf ("cac phan tu chan trong mang :\n");
		for (int i=0; i<b; i++)
		 {
            if (arr[i]%2==0)
            {
            	printf ("%d ",arr[i]);
            	sum+=arr[i];
			}
		 }
		   printf ("\n");
		   printf ("tong cac phan tu chan :%d\n",sum);
		   break;
		case 4:
			
		 for (int i=0; i<b; i++)
		  {
		     if (arr[i]>max)
		     {
		     	max=arr[i];
			 }
		  }
		  for (int i=0; i<b; i++)
		  {
		     if (arr[i]<min)
		     {
		     	min=arr[i];
			 }
		  }
		  printf ("gia tri lon nhat :%d\n",max);
		  printf ("gia tri nho nhat :%d\n",min);
		  break; 
		case 5:
			printf ("cac so nguyen to :\n");
		 for (int i=0; i<b; i++)
		{
		  if (arr[i]<10)
		  {
		    switch (arr[i])
			 {
			   case 1:
			    printf ("%d ",arr[i]);
			    break;
			   case 2:
			    printf ("%d ",arr[i]);
			    break;
			   case 3:
			    printf ("%d ",arr[i]);
			    break;
			   case 5:
			   printf ("%d ",arr[i]);
			   break;
			   case 7:
			   printf ("%d ",arr[i]);
			   break;	
			 }	
		  } else if (arr[i]%2!=0 && arr[i]%3!=0 && arr[i]%5!=0 && arr[i]%7!=0)
		     {
		     	printf ("%d ",arr[i]);
			 }
		}  
		printf ("\n");
		break;
		case 6:
			printf ("moi ban nhap so bat ky:");
			scanf ("%d", &e);
			for (int i=0; i<b; i++)
			{
				if (arr[i]==e)
				{
					d+=1;
				}
			}
			if (d>0)
			{
				printf ("so %d co so phan tu trong mang :%d\n",e,d);
			}
			if (d==0)
			{
				printf ("so %d co so phan tu trong mang :%d\n",e,d);
			}
			break;
		case 7:
			printf ("moi ban nhap so bat ky:");
			scanf ("%d", &e);
			printf ("moi ban nhap vi tri muon them :");
			scanf ("%d", &addindex);
			if (addindex <0 || addindex>b)
			{
				printf ("khong hop le");
			} else 
			{
				for (int i=b; i>=addindex; i--)
			  {
			     arr[i]=arr[i-1];
			  }
			     arr[addindex]=e;
			      b++;
			    for (int i=0; i<b; i++)
			  {
				printf ("%d ", arr[i]);
			  }
			}       
			break;
		case 8:
			return 1;
		default:
			printf ("khong hop le");
			break;
	}
	 
} while(a>0 && a<9 );
return 0;
} 
