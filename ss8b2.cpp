#include<stdio.h>
int main(){
	int array[]={1,3,5,7,9};
	int n= sizeof(array)/sizeof(array[0]);
	int x,vt=0;
	printf("nhap vao mot phan tu: \n");
	scanf("%d",&x);
	for(int i=0;i<n;i++){
		if(array[i]==x){
			printf("vi tri cua phan tu la: %d\n",i);
			vt=1;
			break;	
		}
	}
	if(!vt){
		printf("khong thay phan tu trong mang\n");

	}
	return 0;
}
	

