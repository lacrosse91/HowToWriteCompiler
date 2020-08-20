#include <stdio.h>
#include <stdlib.h>

/*
argc -> 引数の数。
argv -> それぞれの引数が格納された配列。argv[0]は実行するファイル名になるため, argv[1]を読み取る。
コマンドから数値を読み込んでアセンブリに埋め込むプログラム

cc -o mycc mycc.c
./mycc 91 > tmp.s
*/
int main(int argc, char **argv) {

    if (argc != 2) {
        fprintf(stderr, "引数の個数が間違っています\n");
        return 1;
    }

    printf(".intel_syntax noprefix\n");
    printf(".global main\n");
    printf("main:\n");
    printf("  mov rax, %d\n", atoi(argv[1]));
    printf("  ret\n");
    return 0;

}
