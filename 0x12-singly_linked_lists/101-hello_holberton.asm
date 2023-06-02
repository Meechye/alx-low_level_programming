section .data
message:	db "Hello, Holberton", 0
format:		db "%s", 10, 0

section .text
	extern printf
	global main
main:
	mov esi, message
	mov edi, format
	xor eax, eax
	call printf

	mov eax, 0
	ret
