#include <time.h>
#include "Compression/Common.h"

#ifdef  __cplusplus
extern "C" {
#endif

// Environment.cpp
int long_path_size (void);                                 // ������������ ����� ����� �����
void FormatDateTime (char *buf, int bufsize, time_t t);    // ��������������� �����/���� ��� ������� ��������
CFILENAME GetExeName (CFILENAME buf, int bufsize);         // ������� ��� ������������ ����� ���������
int MyGetAppUserDataDirectory (CFILENAME buf);             // ������� %APPDATA%
uint64   GetPhysicalMemory (void);                         // ����� ���������� ������ ����������
unsigned GetMaxMemToAlloc (void);                          // ����. ����� ������ ������� �� ����� �������� � �������� ������������ ������ ��������
unsigned GetTotalMemoryToAlloc (void);                     // ����� ����� ������ ������� �� ����� �������� � �������� ������������ ������ ��������
unsigned GetAvailablePhysicalMemory (void);                // ����� ��������� ���������� ������ ����������
void TestMalloc (void);                                    // �������� ���������� ��������� ������
int GetProcessorsCount (void);                             // ����� ���������� ����������� (������, ���������� ����) � �������. ������������ ��� ����������� ����, ������� "������" �������������� ������� ������������� ��������� � ���������
int PowerOffComputer();                                    // ������������ ���������� ����������
void memxor (char *dest, char *src, uint size);            // ��-xor-��� ��� ����� ������
int systemRandomData (char *rand_buf, int rand_size);

#ifdef FREEARC_WIN
DWORD RegistryDeleteTree(HKEY hStartKey, LPTSTR pKeyName);  // Delete entrire subtree from Windows Registry
#endif

// GuiEnvironment.cpp
int BrowseForFolder(TCHAR *prompt, TCHAR *in_filename, TCHAR *out_filename);                      // ���� ������������ ������� �������
int BrowseForFile(TCHAR *prompt, TCHAR *filters, TCHAR *in_filename, TCHAR *out_filename);        // ���� ������������ ������� ����
void GuiFormatDateTime (time_t t, char *buf, int bufsize, char *date_format, char *time_format);  // ���������� �����/���� ����� � ������ � ������������ � ����������� locale ��� ��������� ��������� ������� � ����

#ifdef  __cplusplus
}
#endif
