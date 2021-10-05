.586P
.MODEL FLAT, STDCALL
includelib kernel32.lib

ExitProcess PROTO : DWORD
MessageBoxA PROTO : DWORD, : DWORD, : DWORD, : DWORD

.STACK 4096

.CONST

.DATA
str2 BYTE "Сапегина Assembler2", 0
str1 BYTE "Результат сложения = 0", 0

first	BYTE 2
second	BYTE 3

.CODE
main PROC
START:
		mov al, first
		add al, second
		add str1[21], al
	
		INVOKE MessageBoxA, 0, offset str1, offset str2, 0
		
	push	-1
	call	ExitProcess
main ENDP

end main

; ml /c Asm2.asm
; link /out:Asm2.exe /subsystem:windows user32.lib Asm2.obj