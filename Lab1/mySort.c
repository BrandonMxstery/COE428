void mySort(int d[], unsigned int n)
{
	int i;
	int j;
	int min;
	int swap;
	for(i=0; i < n-1; i++){
		min = i;
		for (j=i+1; j<n;j++){
			if (d[j] < d[min]){
				min = j;
			}
}
		if (min != i)	{
			swap = d[min];
			d[min] = d[i];
			d[i]=swap;

		

}
}
}


