#include <stdio.h>

void set_a(int x){
	int abc[3];
	abc[0] = x;
}

void set_b(int x){
	int abc[3];
	abc[1] = x;
}

void add_ab(int x){
	int abc[3];
	abc[2] = abc[0] + abc[1];
}

int get_c(int x){
	int abc[3];
	return abc[2];
}

void pabc(int x){
	int abc[3];
	printf("a=%d, b=%d, c=%d\n",abc[0],abc[1],abc[2]);
}

void main(){
	pabc(0);
	set_a(3);
	pabc(0);
	set_b(4);
	pabc(0);
	add_ab(0);
	pabc(0);
}
