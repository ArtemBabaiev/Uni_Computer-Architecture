mov al, 5
mov bl, 6
add al, bl
out 0100b, al
next: inc al
out 0100b, al
jmp next