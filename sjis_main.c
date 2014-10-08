#include <stdio.h>

int main(){
	char a[3];
	FILE *fp = NULL;
	fp = fopen("./char.txt", "w");
	a[2] = '\0';
	for(a[0] = 0x81; a[0] != 0; a[0]++){
		int i = 0;
		for(a[1] = 0x40; a[1] != 0; a[1]++){
			if(i == 0){ fprintf(fp, "0x%x%x", (unsigned char)a[0], (unsigned char)a[1]); }
			fprintf(fp, "%s", a);
			i++;
			if(i == 16){ fprintf(fp, "\n"); i = 0; }
		}
	}
	fclose(fp);
	return 0;
}

