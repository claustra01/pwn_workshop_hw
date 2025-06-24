#include <stdio.h>
#include <unistd.h>


__attribute__((constructor))
void init(void){
	setbuf(stdin, NULL);
	setbuf(stdout, NULL);
}

void echo(void)
{
    char buf[64];

    printf("🧑 > ");
    gets(buf);

    printf("🐦 > ");
    printf(buf);
}

int main(void)
{
    for (;;) {
        echo();
    }

    return 0;
}
