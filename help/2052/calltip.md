##CallTip���
CallTip����˼�壬�����������ʱ���ܹ�ʵʱ����ʾһЩ�򵥵ĵ�����Ϣ����EverEdit�У���������ĳЩ�ض����ַ���ʱ�򣬻���������Ϸ��Զ�����ʾһЩ������ԭ����Ϣ����Ȼͨ���ʵ������ã�Ҳ������ʾ��������Ϣ��

##CallTipʹ��
������һ��CallTip���﷨��ɫ�еĶ���:

```
void AddCallTip( string strPathName, bool bCase, string strWord="", string strBegin="(", string strSep=",", string strEnd=")", bool bRemoveSpace=false );
```

**strPathName:** calltip���ļ����ƣ�calltip�ļ��������calltip�ļ�����

**bCase:** calltip�Ƿ��Ǵ�Сдƥ���

**strWord:** ָ��������Ĵ�����ʱ�� �ô�����ǰ����Ա���Ϊ�ǵ��ʵ��ַ�������Ƚϳ�����c���Ծ���˵��:

```
fclose   (fp);
```

`fclose`��`(`֮��Ŀհף�Ҳ���ǿո�������ط�����strWord����Ȼ�����������Ʊ������ôstrWord��Ӧ�ð����Ʊ���ȵȡ�

**strBegin:** �������õ���ʼ�ַ���һ���������š�ֻ�е�������ַ�ʱ��calltip�Ż���ʾ��

**strSep:** ��������֮��ķָ�����һ���Ƕ��š�

**strEnd:** ���������ַ���һ���������š�

**bRemoveSpace:** �ò���ָ���Ƿ�ɾ�������е�ʾ��`fclose`��`(`֮��Ŀհס�

##Calltip�ļ�������
calltip�ļ��洢��calltip�ļ����У��ļ�����Ӧ�þ������������塣calltip�ļ����洢Ϊ����BOM��UTF-8������ļ���

ÿһ�д洢һ��������ÿ��������Ϊ�����֣�����ԭ�ͺ�˵�����м��û��з�\n������

```
abs(int x):int\nReturns the absolute value of x
```
��������ʾ���ú�����ԭ��Ϊ`int abs(int x)`�����ǰѷ���ֵ�����ͷ��������Ϊ�˽��и�Ч��ƥ�䡣�������ַ����Ǹú�����˵����

##���һ��
����׼������������֮�󣬻������һ����ÿ��calltip�ļ�����������ģ�����Ҫ��ȷ�ĸ����﷨�ļ���Ҫ�����ĸ�calltip��

���磬c���Լ���cpp.ecp:

```
cpp.AddCallTip "c.ecp", True, " ", "(", ",", ")", True
```

�����������calltipֻ������ĳ���ض���region����ôֻ��Ҫ��region����calltip���ɣ�����html�е�js:

```
rJsRegion.AddCallTip "js.ecp", True, "."
```
