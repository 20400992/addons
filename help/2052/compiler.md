##VC 2005/VC 2008/VC 2008/VC2010
**����һ���������������£����Ϊc:\vc.bat������Ҫ����VS�Ļ����޸����еĲ������ݡ�**

```
@ECHO OFF
CALL "%VS90COMNTOOLS%vsvars32.bat"
"c:\Program Files (x86)\Microsoft Visual Studio 9.0\VC\bin\cl.exe" %1

SET exefile=%~n1.exe
IF EXIST "%exefile%" (
ECHO Run: %exefile%
"%exefile%"
)
```

**�ⲿ����:**

```
����:VC
����:"c:\vc.bat"
����:"$(FilePath)"
��ʼĿ¼:$(FileDir)
����ģʽ:�������
```
```
����λ:
Regular Expression:^(.*?)\((\d+)\) :
FilePath: Capture 1
Line: Capture 2:
```

##Tiny C Compiler: TCC
**�ⲿ����:**

```
����:TCC
����:"c:\Program Files (x86)\tcc\tcc.exe" -run
����:"$(FilePath)"
��ʼĿ¼:$(FileDir)
Action Pattern: �������
```
```
����λ:
Regular Expression:^(.*):(\d+)
FilePath:Capture 1
Line:Capture 2
```

##CSharp 
**����һ���������������£����Ϊc:\csharp.bat������Ҫ�����Լ��Ļ����޸����еĲ������ݡ�**

```
@ECHO OFF
"c:\Windows\Microsoft.NET\Framework\v4.0.30319\csc.exe" /target:exe %1

SET exefile=%~n1.exe
IF EXIST "%exefile%" (
	 ECHO Run: %exefile%
	 "%exefile%"
)
```

**�ⲿ����:**

```
����:CSharp
����:"c:\csharp.bat"
����:"$(FilePath)"
��ʼĿ¼:$(FileDir)
����ģʽ:�������
```