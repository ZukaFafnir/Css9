
                /*int editIndex, newValue;
                printf("Hay nhap vi tri can sua:");
                scanf("%d", &editIndex);

                if(editIndex < 0 || editIndex > size - 1){
                    printf("vi tri can xoa ko hop le \n");
                } else{
                    printf("Hay nhap vao gia tri moi [gia tri cu = %d]:", arrayInt[editIndex]);
                    scanf("%d", &newValue);
                    arrayInt[editIndex] = newValue;
                    printf("Da cap nhat gia tri \n");
                }*/
#include<stdio.h>
int main(){
	int array[5]={9,4,6,7,4};
	int editIndex, newValue;
                printf("Hay nhap vi tri can sua:");
                scanf("%d", &editIndex);
                if(editIndex < 0 || editIndex > 4){
                    printf("vi tri can xoa ko hop le \n");
                } else{
                    printf("Hay nhap vao gia tri moi [gia tri cu = %d]:",array[editIndex]);
                    scanf("%d", &newValue);
                    array[editIndex] = newValue;
                    printf("Da cap nhat gia tri \n");}
                    	printf("Cac phan tu sau khi cap nhat la:\n");
                    for(int i=0;i<5;i++){
                    	printf("%d ",array[i]);
                    	
                    	
					}
	
	
	
	
	
	return 0;
}              
