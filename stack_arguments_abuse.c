#include <stdint.h>

#define sword intptr_t
#define uword uintptr_t

uword add();
uword push();

uword add(rdi, rsi, rdx, rcx, r8, r9, a, b)
uword rdi; uword rsi; uword rdx; uword rcx; uword r8; uword r9;
uword a; uword b;
{
	a += b;
	return a;
}

uword push(rdi, rsi, rdx, rcx, r8, r9, a, b)
uword rdi; uword rsi; uword rdx; uword rcx; uword r8; uword r9;
uword a; uword b;
{
	b = a;
	return a;
}

int main(){
	push(0,0,0,0,0,0,  42);
	return add(0,0,0,0,0,0, 21);
}