mov al, 1
mov bl, 0
mov cx, 10
next:
    mov dh, al
    add al, bl
    mov bl, dh
    out 0100b, al
loop next

     
