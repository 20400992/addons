##�����ű�����
EverEdit֧����ActiveScript����ʽ��չ�Ľű����档Ŀǰ�������¼��֣�

```
VBScript
JScript
Python
PerlScript
RubyScript
```
##��׺��Ӧ
EverEdit���չ涨�ĺ�׺ȥ�жϸ�ʹ�õĽű����档���պ�׺���£�

```
.mac : VBScript
.evb : VBScript
.ejs : JScript
.epy : Python
.epl : PerlScript
.erb : RubyScript
```

##�ű�����İ�װ
Windows��win2000�����ڲ��Ѽ�����vbscript��jscript����˶����������Բ�������İ�װ��ֱ��ʹ�ü��ɡ�

###Python�ű��İ�װ

1. ��������python
2. ����pywin32

��pywin32�Ĳ��ַ�װ���⣬�п��ܻ��������ʧ�ܡ�����ű�������ʼ�������밴�������޸ģ�

1. ��C:\Python32\Lib\site-packages\win32comext\axscript\client\framework.py
2. �ҵ�556�����ҵ�def SetScriptSite(self, site)����
3. ע�͵����еĵ������ò���
4. ע����ϵĺ������£�

```
def SetScriptSite(self, site):
	# We should still work with an existing site (or so MSXML believes :)
	self.scriptSite = site
	#if self.debugManager is not None:
	#	self.debugManager.Close()
	#import traceback
	#try:
	#	import win32com.axdebug.axdebug # see if the core exists.
	#	from . import debug
	#	self.debugManager = debug.DebugManager(self)
	#except pythoncom.com_error:
	#	# COM errors will occur if the debugger interface has never been
	#	# seen on the target system
	#	trace("Debugging interfaces not available - debugging is disabled..")
	#	self.debugManager = None
	#except ImportError:
	#	trace("Debugging extensions (axdebug) module does not exist - debugging is disabled..")
	#	self.debugManager = None
	#except:
	#	traceback.print_exc()
	#	trace("*** Debugger Manager could not initialize - %s: %s" % (sys.exc_info()[0],sys.exc_info()[1]))
	#	self.debugManager = None

	try:
		self.lcid = site.GetLCID() 
	except pythoncom.com_error:
		self.lcid = win32api.GetUserDefaultLCID()
	self.Reset()
```

###Ruby�İ�װ
���ز���װActiveScriptRuby�� http://www.artonx.org/data/asr/index.html

###Perl�İ�װ
���ز���װActiveState��˾��ActivePerl��ע�⣺������δ��ActivePerl��ActivePython���Գɹ���

