.intel_syntax noprefix
.global main

main:
    mov rax, 42
    ret

# 42を返すアセンブリ
# raxというレジスタに42を代入している。
# 最終的にraxに代入されている値がexit statusとなる。
