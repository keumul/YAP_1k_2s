.586P														; ������� ������(��������� Pentium)
.MODEL FLAT, STDCALL										; ������ ������, ���������� � �������
includelib kernel32.lib										; ������������: ����������� � kernel32

ExitProcess PROTO : DWORD									; �������� ������� ��� ���������� �������� Windows
MessageBoxA PROTO : DWORD, : DWORD, : DWORD, : DWORD		; �������� API-������� MessageBoxA	

.STACK 4096													; ��������� �����

.CONST														; ������� ��������

.DATA														; ������� ������
MB_OK	EQU 1											    ; EQU ���������� ���������
STR1	DB "��� ������ ���������", 0						; ������, ������ ������� ������ + ������� ���
STR2	DB "������ ����!", 0								; ������, ������ ������� ������ + ������� ���
HW		DD ?												; ������� ����� ������ 4 �����, ������������������

.CODE														; ������� ����

main PROC													; ����� ����� main
START :														; �����			
INVOKE MessageBoxA, HW, OFFSET STR2, OFFSET STR1, 1	; ����� �������
			push -1											; ��� �������� �������� Windows (�������� ExitProcess)
			call ExitProcess								; ��� ����������� ����� ������� Windows
			main ENDP										; ����� ���������
end main													; ����� ������ main