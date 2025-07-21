# SUM-NBO
32 bit 숫자가 파일에 4바이트의 크기로 저장되어 있다(network byte order). 
1개 이상의 파일로부터 숫자를 읽어 들여 그 합을 출력하는 프로그램을 작성하라.

```
# example
$ echo -n -e \\x00\\x00\\x03\\xe8 > thousand.bin
$ echo -n -e \\x00\\x00\\x01\\xf4 > five-hundred.bin
$ echo -n -e \\x00\\x00\\x00\\xc8 > two-hundred.bin
$ ./sum-nbo thousand.bin five-hundred.bin two-hundred.bin
1000(0x000003e8) + 500(0x000001f4) + 200(0x000000c8) = 1700(0x000006a4)
```

![Image](https://github.com/user-attachments/assets/cebdd69a-5131-4d0c-8400-2504a034cacb)
