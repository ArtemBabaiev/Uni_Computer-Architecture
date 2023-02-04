.data
	myWord dd 102231
	myFloat real4 67.2
.code
Function proc
	mov ecx, 9
	here:
		dec ecx
	loopnzd here
	;mov ecx, 0
	jecxz zero
	mov eax, myWord
	ret
	zero:
		mov eax, 99999
		ret
Function endp
end