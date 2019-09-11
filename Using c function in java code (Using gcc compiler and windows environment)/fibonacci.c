#include<jni.h>
#include<stdio.h>
#include "main.h"


JNIEXPORT void JNICALL Java_main_fibonacci 
	(JNIEnv *env, jobject obj)
{
	printf("\nEnter number of fibonacci numbers you wanted: ");
	int n;
	scanf("%d",&n);
	int arr[n];
	arr[0]=1;
	arr[1]=1;
	int i;
	for(i=2;i<n;i++)
	{
		arr[i] = arr[i-1]+arr[i+2];
	}

	printf("These are your %d fibonacci numbers: \n\n",n);

	for(i=0;i<n;i++)
		printf("%d, ",arr[i]);
}



