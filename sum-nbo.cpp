#include <stdint.h>
#include <stdio.h>
#include <netinet/in.h>

void btosum(int num, char *file[]) {
    uint32_t sum = 0;
    for(int i = 0; i < num; i++)
    {
        FILE* pFile = fopen(file[i], "rb");
        if (pFile == NULL)
        {
            printf("error\n");
            return -1;
        }
        uint32_t b;
        fread(&b, sizeof(uint32_t), 1, pFile);
        b = htonl(b);
        printf("%d(%#010x) ", b, b);
        sum += b;
        fclose(pFile);

        if(i != num-1)
        {
            printf("+ ");
        }
    }
    printf("= %d(%#010x)", sum, sum);

}

int main(int argc, char* argv[]) {
    btosum(argc - 1, &argv[1]);
}
