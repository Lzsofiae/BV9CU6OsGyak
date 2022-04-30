#include stdio.h
#include unistd.h
#include stdlib.h
#include syswait.h
#define MSIZE 128
int main(){
char inBuffer[MSIZE];
int p[2], nbytes, pid;
if (pipe(p)  0){
	perror(Pipe hiba);
	exit(1);
}
pid = fork();
if (pid  0)
	exit(2);
Child beleír
if (pid == 0){
	printf(Child Most fogok beirni a pipe-ba!n);
	write(p[1], LZ BV9CU6, MSIZE);
	printf(Child Sikeresen irtam a pipe-ba, Lehet olvasni!!n);
}
Parent Kiolvassa
else if (pid  0 ){
	wait(NULL);
	printf(Parent Vettem! Most fogok kiolvasni a pipe-bol!n);
	read(p[0], inBuffer, MSIZE);
	printf(Ezt olvastam ki %sn, inBuffer);
	printf(Parent jelzi Kesz!n);
}

return 0;
}