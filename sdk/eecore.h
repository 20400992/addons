// SDK for EverEdit
// Copyright ?2011-2013 everedit.net, All Rights Reserved.
//
////////////////////////////////////////////////////////////////////////////////

/*******************************************************************************
 * 2013/01/10 First Version
*******************************************************************************/

#ifndef __EECORE_HPP__
#define __EECORE_HPP__

//-----------------------------------------------------------------------------
// Selection types
#define EC_SEL_NONE                 1
#define EC_SEL_NORMAL               2
#define EC_SEL_COLUMN               3
#define EC_SEL_MULTIPLE             4

//-----------------------------------------------------------------------------
// Eol types
#define EC_EOL_NULL                 0
#define EC_EOL_WIN                  1
#define EC_EOL_UNIX                 2
#define EC_EOL_MAC                  3

//-----------------------------------------------------------------------------
// Folding methods
#define EC_FD_NONE                  0
#define EC_FD_SYNTAX                1
#define EC_FD_INDENT                2
#define EC_FD_MANUAL                3
#define EC_FD_RETURN                -1

//-----------------------------------------------------------------------------
// Folding styles
#define EC_FDSTYLE_LINE             1
#define EC_FDSTYLE_BOX              2
#define EC_FDSTYLE_ARROW            3

//-----------------------------------------------------------------------------
//Edit mode
#define EC_EDITMODE_NORMAL          0
#define EC_EDITMODE_OVERWRITE       1

//-----------------------------------------------------------------------------
//wrap mode
#define EC_WRAP_NONE                0
#define EC_WRAP_WINEDGE             1
#define EC_WRAP_SMART               2
#define EC_WRAP_COL                 3
#define EC_WRAP_EXPANDTAB           4
#define EC_WRAP_GETWRAP             6


//-----------------------------------------------------------------------------
// Commands

//键盘移动和选区移动命令
#define ECC_LEFT                    1
#define ECC_RIGHT                   2
#define ECC_UP                      3
#define ECC_DOWN                    4
#define ECC_LINEHOME                5
#define ECC_LINEEND                 6
#define ECC_DOCHOME                 7
#define ECC_DOCEND                  8
#define ECC_PGUP                    9
#define ECC_PGDOWN                  10
#define ECC_RIGHTWORD               11
#define ECC_LEFTWORD                12
#define ECC_SELTOLEFT               13
#define ECC_SELTORIGHT              14
#define ECC_SELTOUP                 15
#define ECC_SELTODOWN               16
#define ECC_SELTOLINEHOME           17
#define ECC_SELTOLINEEND            18
#define ECC_SELTODOCHOME            19
#define ECC_SELTODOCEND             20
#define ECC_SELTOPGUP               21
#define ECC_SELTOPGDOWN             22
#define ECC_SELTORIGHTWORD          23
#define ECC_SELTOLEFTWORD           24
#define ECC_SELALL                  25

//删除操作
#define ECC_DELLEFT                 26
#define ECC_DELRIGHT                27
#define ECC_DELLEFTWORD             28
#define ECC_DELNEXTWORD             29
#define ECC_DELLINE                 30

//一般操作
#define ECC_UNDO                    31
#define ECC_REDO                    32
#define ECC_COPY                    33
#define ECC_PASTE                   34
#define ECC_CUT                     35

//切换插入/覆盖模式
#define ECC_TOGGLEINSOVR            36

//不移动光标滚动
#define ECC_SCROLLUP                38
#define ECC_SCROLLDOWN              39

//中置光标到屏幕
#define ECC_CENTERCARET             40

//书签操作
#define ECC_TOGGLEMARKER            41
#define ECC_NEXTMARKER              42
#define ECC_PREVMARKER              43

//行插入
#define ECC_NEWLINEAFTER            44
#define ECC_NEWLINEBEFORE           45

//选择光标处单词
#define ECC_SELWORD                 46

//缩进
#define ECC_INDENT                  47
#define ECC_UNINDENT                48

//上下移动行
#define ECC_UPLINE                  49
#define ECC_DOWNLINE                50

#define ECC_FOLDSEL                 51
#define ECC_UNFOLD                  52

//删除书签
#define ECC_DELALLMARKER            53

//复制光标行
#define ECC_DUPLICATELINE           54

//上下选择行
#define ECC_SELUPLINE               55
#define ECC_SELDOWNLINE             56

//大小写
#define ECC_CASEUPPER               57
#define ECC_CASELOWER               58

//中置光标行到屏幕
#define ECC_CENTERLINE              59

//括号匹配
#define ECC_NEXTPAIR                60

//缩进并粘贴
#define ECC_INDENTPASTE             61
#define ECC_FOLD                    62

//trim操作
#define ECC_TRIMHEAD                63
#define ECC_TRIMTAIL                64

//清楚选区,保留文字
#define ECC_CLEARSEL                65

//光标处插入新行
#define ECC_NEWLINE                 66

//选择到括号
#define ECC_SELTOPAIR               67

//拷贝光标行
#define ECC_COPYLINE                68

//tab<->space
#define ECC_TAB2SPACE               69
#define ECC_SPACE2TAB               70

//最后编辑点
#define ECC_LASTEDITPOINT           71

//合并行
#define ECC_JOINLINE                72

//子行行头.行末操作
#define ECC_SUBLINEHOME             73
#define ECC_SUBLINEEND              74
#define ECC_SELTOSUBLINEHOME        75
#define ECC_SELTOSUBLINEEND         76
#define ECC_DELTOLINEHEAD           79
#define ECC_DELTOLINETAIL           80

//交换光标处字符
#define ECC_TRANSPOSE               81

//反转大小写
#define ECC_CASEINVERT              82

//行头tab<->space
#define ECC_HEADTAB2SPACE           83
#define ECC_HEADSPACE2TAB           84

//删除光标处单词
#define ECC_DELWORD                 85

//选择行
#define ECC_SELLINE                 86

//追加剪切拷贝
#define ECC_CUTAPPEND               87
#define ECC_COPYAPPEND              88
#define ECC_COPYMARKEDLINES         89
#define ECC_CUTMARKEDLINES          90

//列模式粘贴
#define ECC_COLUMNPASTE             91

//未实现
#define ECC_COPYASRTF               92

//强制光标更新
#define ECC_UPDATECARET             93

//行尾粘贴
#define ECC_PASTETAIL               94

//段落操作
#define ECC_NEXTPARA                95
#define ECC_PREVPARA                96

//全角半角
#define ECC_TOFULLWIDTH             97
#define ECC_TOHALFWIDTH             98

//平假名<->片假名
#define ECC_TOHIRAGANA              99

//选区变化通知命令!
#define ECC_SELCHANGE               100

//平假名<->片假名
#define ECC_TOKATAKANA              101

//首字母大写
#define ECC_CAPITALIZE              102

//清空文档
#define ECC_CLEAR                   103

//-----------------------------------------------------------------------------
// Messages
/**
 * @Return: (BOOL)是否可以Undo
 */
#define ECM_CANUNDO                 WM_USER+1

/**
 * @Return: (BOOL)是否可以Redo
 */
#define ECM_CANREDO                 WM_USER+2

/**
 * @Return: 跳转光标到指定行
 * @wparam: (int)行号
 */
#define ECM_JUMPTOLINE              WM_USER+3

/**
 * @Return: 获取指定位置处的单词
 * @wparam: (EC_Pos*)位置信息
 * @lparam: (int)方向, 参考GETWORD_LWORD的flags
 */
#define ECM_GETWORD                 WM_USER+4

/**
 * @Return: (int)获取文档的行数
 */
#define ECM_GETLINECNT              WM_USER+8

/**
 * @Return: (const wchar_t*)获取文档的全路径
 */
#define ECM_GETPATH                 WM_USER+11

/**
 * @Return: (void)获取当前光标的位置信息
 * @wparam: (EC_POS*)接受位置
 */
#define ECM_GETCARETPOS             WM_USER+12

/**
 * @Return: (wchar)获取位置处的字符
 * @wparam: (int)行
 * @lparam: (int)列
 */
#define ECM_GETCHAR                 WM_USER+13

/**
 * @Return: (int)获取某行文本或者长度
 * @wparam: (int)行号
 * @lparam: (wchar_t*)接收为文本的缓冲区, 用户确保该缓冲区的尺寸!如果为NULL, 则直接返回该行的长度. 
 */
#define ECM_GETLINETEXT             WM_USER+14

/**
 * @Msg:    以内部缓存获取某行的文本(速度快,但当界面刷新时,该缓冲区会变更,用户需避免这种情况出现)
 * @Return: (const wchar_t*)缓冲区起始地址
 * @wparam: (int)行号
 */
#define ECM_GETLINEBUF              WM_USER+15

/**
 * @Return: (int)获取某行文本或者长度
 * @wparam: (EC_POS)起始位置
 * @lparam: (EC_POS)结束位置
 */
#define ECM_DELETETEXT              WM_USER+16

/**
 * @Return: (int)插入文本
 * @wparam: (EC_POS)插入位置, 如果为NULL, 则使用当前光标位置
 * @lparam: (EC_INSERTTEXT)文本信息
 */
#define ECM_INSERTTEXT              WM_USER+17

/**
 * @Msg:    (int)设置行尾类型
 * @Return: (int)行尾类型
 * @wparam: (int)EC_EOL_NULL,EC_EOL_WIN,EC_EOL_UNIX,EC_EOL_MAC,其他值只返回
 */
#define ECM_SETEOLTYPE              WM_USER+18

/**
 * @Return: (bool)文档是否被修改
 */
#define ECM_ISDOCDIRTY              WM_USER+21

/**
 * @Msg:    获取HitTest信息
 * @wparam: (EC_HitTestInfo*)
 */
#define ECM_HITTEST                 WM_USER+26

/**
 * @Msg:    设置或者获取行间距
 * @wparam: >=0:设置行高, <0只返回不设置
 */
#define ECM_LINESPACING             WM_USER+27

/**
 * @Msg:    获取.设置当前编辑模式(Edit mode)
 * @Return: (int)当前编辑模式
 * @wparam: (int)0:get, 1:set, 3:返回不设置
 */
#define ECM_EDITMODE                WM_USER+28

/**
 * @Return: (bool)获取或设定界面元素的显示
 * @wparam: 低字节部分:元素编号; 高字节部分:0(隐藏)或者1(显示)
 * @lparam: 0:不刷新界面;1:理解刷新界面;-1:忽略wparam的高字节返回元素是否显示
 */
#define ECM_SHOWELEMENT             WM_USER+29

/**
 * @Return: (void)设置普通选区的文本
 * @wparam: (EC_POS)起始位置
 * @lparam: (EC_POS)结束位置
 */
#define ECM_SETSEL                  WM_USER+32

/**
 * @Return: (enum)返回选区类型(Selection types), 可以通过判断范围值是否为EC_SEL_NORMAL, 得出是否含有含有选区
 */
#define ECM_HASSEL                  WM_USER+33

/**
 * @Return: (BOOL)得到选区的位置, 可以通过判断范围值是否为TRUE, 得出是否含有含有普通选区(EC_SEL_NORMAL)
 * @wparam: (EC_POS)起始位置
 * @lparam: (EC_POS)结束位置
 */
#define ECM_GETSEL                  WM_USER+34

/**
 * @Msg:    根据指定的范围和行尾结束符得到该区域的文本
 * @Return: (int)该区域的大小,包含行尾结束符
 * @wparam: EC_SelInfo
 */
#define ECM_GETTEXT                 WM_USER+35

/**
 * @Msg:    获取.设置自动换行模式
 * @Return: (int)当前的换行模式
 * @wparam: EC_WRAP_NONE,EC_WRAP_WINEDGE,EC_WRAP_SMART,EC_WRAP_COL,EC_WRAP_EXPANDTAB,EC_WRAP_GETWRAP
 */
#define ECM_WRAP                    WM_USER+37

/**
 * @Msg:    对用户以后的操作进行分组,使其可以一次性Undo. 注意:该消息必须成对调用, 否则后果不可预测!
 * @Return: (void)
 * @wparam: (BOOL)TRUE:开始分组; FALSE:结束分组
 */
#define ECM_GROUPUNDO               WM_USER+39

/**
 * @Msg:    获取选区的文本
 * @Return: (HANDLE)返回值为Handle, 可以用GlobalLock和GlobalUnlock获取文本值
 */
#define ECM_GETSELTEXT              WM_USER+40

/**
 * @Msg:    强制光标可见
 */
#define ECM_FORCECARETVISIBLE       WM_USER+41

/**
 * @Msg:    判断给定字符在当前文档内是否可以被认为是单词的组成部分
 * @Return: (bool)
 * @wparam: (wchar)字符
 */
#define ECM_ISWORDCHAR              WM_USER+43

/**
 * @Msg:    设置tab的大小
 * @Return: 当前tab的大小
 * @wparam: >=1&&<=64:设置, <=0：只返回
 */
#define ECM_SETTABSIZE              WM_USER+44


/**
 * @Return: (void)设定光标位置
 * @wparam: (EC_POS)位置
 * @lparam: (BOOL)如该位置不可见, 是否让其可见
 */
#define ECM_SETPOS                  WM_USER+46

/**
 * @Return: (bool)使能光标显示
 * @wparam: (true)
 */
#define ECM_NOCARET                 WM_USER+52

/**
 * @Return: (bool)使能Undo
 * @wparam: (true)
 */
#define ECM_ENABLEUNDO              WM_USER+53

/**
 * @Return: (int)获取当前行高(行高=字高+行间距)
 */
#define ECM_GETLINEHEIGHT           WM_USER+57

/**
 * @Return: (int)获取可视行的总数
 */
#define ECM_GETVISUALLINECOUNT      WM_USER+58

/**
 * @Return: (int)获取或设置折叠方法
 * @wparam: (int)折叠方法, EC_FD_RETURN:返回正在使用的折叠方法
 * @lwparam: (true)
 */
#define ECM_SETFOLDMETHOD           WM_USER+59

/**
 * @Return: (int)使用编辑器的字体计算给定字符串的像素长度
 * @wparam: (const wchar_t*)字符串
 * @lparam: (int)长度
 */
#define ECM_CALCTEXTEXTENT          WM_USER+60

/**
 * @Return: (int)获取当前字体的字高
 */
#define ECM_GETFONTHEIGHT           WM_USER+61

/**
 * @Msg   : 按照指定格式导出全部文本
 * @wparam: 路径
 * @lparan: EC_Export*
 */
#define ECM_EXPORT                  WM_USER+64

/**
 * @Return: (bool)清除DirtyFlag,使文档看起来未被修改过
 * @wparam: (true)
 */
#define ECM_FORCENEW                WM_USER+65

/**
 * @Return: (int*)获取或设置列线
 * @wparam: (int*)数组地址,每个值代表在第x个字符处设置一条列线,数组的长度必须为10
 * @lparam: (bool)true:设置, false:返回
 */
#define ECM_SETCOLMARKER            WM_USER+67

/**
 * @Return: (bool)当前选区是否可以扩展到编辑的右侧
 * @wparam: (int)0:不扩展,1:扩展, 2:返回当前值
 * @lparam: (bool)true:设置, false:返回
 */
#define ECM_SELWHOLELINE            WM_USER+68

/**
 * @Return: (bool)使用指定字符注释或反注释光标行,如有选区,则每一行都注释. 类似C++中的//
 * @wparam: (const wchar_t*)注释字符
 * @lparam: (bool)是否注释
 */
#define ECM_COMMENTLINE             WM_USER+69

/**
 * @Return: (bool)使用指定字符注释或反注释选区,如无选区,则注释当前行. . 类似C++中的/*
 * @wparam: (const wchar_t*)注释字符
 * @lparam: (bool)是否注释
 */
#define ECM_COMMENTBLOCK            WM_USER+70

/**
 * @Return: (const wchar_t*)设置或返回当前单词字符
 * @wparam: (const wchar_t*)单词字符, 设置为NULL, 则返回当前设置
 */
#define ECM_SETWORDCHARS            WM_USER+73

/**
 * @Msg:    强制重绘
 */
#define ECM_REDRAW                  WM_USER+74

/**
 * @Msg:    从当前光标位置移动到指定字符数位置
 * @wparam: (int)字符数
 */
#define ECM_MOVECARET               WM_USER+77

/**
 * @Return: (int)获取指定行的子行行数
 * @wparam: (int)行号
 */
#define ECM_WRAPCOUNT               WM_USER+79

/**
 * @Return: (void)在当前光标处插入可被展开的文本片段(snippet)
 * @wparam: (const wchar_t*)文本起始地址
 * @lparam: (int)长度
 */
#define ECM_INSERTSNIPPET           WM_USER+82

/**
 * @Msg:    清除Dirty Flag
 */
#define ECM_CLEARDIRTY              WM_USER+84

/**
 * @Return: (const wchar_t*)获取当前光标处的scope信息
 */
#define ECM_GETSCOPE                WM_USER+87

/**
 * @Return: (int)获取或设置书签
 * @wparam: (int)0:取消书签,1:设置书签,2:返回
 * @lparam: (int)行号
 */
#define ECM_BOOKMARKER              WM_USER+88

/**
 * @Return: (int)获取或设置折叠层次
 * @wparam: (int)-1:返回, -2:是否正在解析折叠, 0~64:折叠层次
 * @lparam: (int)行号
 */
#define ECM_LINELEVEL               WM_USER+89

/**
 * @Return: (int)获取或设置折叠样式
 * @wparam: (int)0:返回, 1:设置
 * @lparam: (int)样式,参考Folding styles
 */
#define ECM_FOLDINGSTYLE            WM_USER+90

//-----------------------------------------------------------------------------
// Notify
#define ECN_UPDATETEXT              1
#define ECN_CARETCHANGE             2
#define ECN_IMEINSERT               3
#define ECN_TEXTCLICK               4

//-----------------------------------------------------------------------------
// flags for ECM_GETWORD 
#define GETWORD_LWORD               1
#define GETWORD_RWORD               2
#define GETWORD_WORD                GETWORD_LWORD|GETWORD_RWORD
#define GETWORD_LEDGE               4
#define GETWORD_REDGE               8
#define GETWORD_EDGE                GETWORD_LEDGE|GETWORD_REDGE
#define GETWORD_LSYNTAX             16
#define GETWORD_RSYNTAX             32
#define GETWORD_SYNTAX              GETWORD_LSYNTAX|GETWORD_RSYNTAX

//-----------------------------------------------------------------------------
// Structs
struct EC_Pos
{
    int line;
    int col;
};

struct EC_InsertText
{
    const wchar_t* lpText;
    int len;
};

struct EC_SelInfo
{
    EC_Pos spos;
    EC_Pos epos;
    wchar_t* lpBuffer;
    int nEol;
};

struct EC_HitTestInfo
{
    int line;
    int col;
    int vline;
    int sub;
};

struct EC_Export
{
    int nEncoding;
    int nEol;
    BOOL bBom;
};

struct ECNMHDR_TextUpdate : NMHDR
{
    EC_Pos spos;
    EC_Pos epos1;
    EC_Pos epos2;
};

struct ECNMHDR_CaretChange : NMHDR
{
    EC_Pos posOld;
    EC_Pos posNew;
};

struct ECNMHDR_IMEInsert : NMHDR
{
    const wchar_t* lpText;
    int length;
};

struct ECNMHDR_TextClick : NMHDR
{
    EC_Pos pos;
    EC_Pos spos;
    EC_Pos epos;
    const wchar_t* lpText;
};

#endif //__EESDK_HPP__
