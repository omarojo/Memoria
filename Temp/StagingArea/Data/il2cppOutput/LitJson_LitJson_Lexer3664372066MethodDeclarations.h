#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// LitJson.Lexer
struct Lexer_t3664372066;
// System.String
struct String_t;
// System.IO.TextReader
struct TextReader_t2148718976;
// LitJson.FsmContext
struct FsmContext_t3936467683;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_TextReader2148718976.h"
#include "LitJson_LitJson_FsmContext3936467683.h"

// System.Boolean LitJson.Lexer::get_EndOfInput()
extern "C"  bool Lexer_get_EndOfInput_m57994450 (Lexer_t3664372066 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.Lexer::get_Token()
extern "C"  int32_t Lexer_get_Token_m3197663547 (Lexer_t3664372066 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LitJson.Lexer::get_StringValue()
extern "C"  String_t* Lexer_get_StringValue_m2250118517 (Lexer_t3664372066 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.Lexer::.cctor()
extern "C"  void Lexer__cctor_m312235920 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.Lexer::.ctor(System.IO.TextReader)
extern "C"  void Lexer__ctor_m1101987844 (Lexer_t3664372066 * __this, TextReader_t2148718976 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.Lexer::HexValue(System.Int32)
extern "C"  int32_t Lexer_HexValue_m1760624318 (Il2CppObject * __this /* static, unused */, int32_t ___digit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.Lexer::PopulateFsmTables()
extern "C"  void Lexer_PopulateFsmTables_m2601495830 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char LitJson.Lexer::ProcessEscChar(System.Int32)
extern "C"  Il2CppChar Lexer_ProcessEscChar_m2805824502 (Il2CppObject * __this /* static, unused */, int32_t ___esc_char0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State1(LitJson.FsmContext)
extern "C"  bool Lexer_State1_m1833119603 (Il2CppObject * __this /* static, unused */, FsmContext_t3936467683 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State2(LitJson.FsmContext)
extern "C"  bool Lexer_State2_m2044470516 (Il2CppObject * __this /* static, unused */, FsmContext_t3936467683 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State3(LitJson.FsmContext)
extern "C"  bool Lexer_State3_m2255821429 (Il2CppObject * __this /* static, unused */, FsmContext_t3936467683 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State4(LitJson.FsmContext)
extern "C"  bool Lexer_State4_m2467172342 (Il2CppObject * __this /* static, unused */, FsmContext_t3936467683 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State5(LitJson.FsmContext)
extern "C"  bool Lexer_State5_m2678523255 (Il2CppObject * __this /* static, unused */, FsmContext_t3936467683 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State6(LitJson.FsmContext)
extern "C"  bool Lexer_State6_m2889874168 (Il2CppObject * __this /* static, unused */, FsmContext_t3936467683 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State7(LitJson.FsmContext)
extern "C"  bool Lexer_State7_m3101225081 (Il2CppObject * __this /* static, unused */, FsmContext_t3936467683 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State8(LitJson.FsmContext)
extern "C"  bool Lexer_State8_m3312575994 (Il2CppObject * __this /* static, unused */, FsmContext_t3936467683 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State9(LitJson.FsmContext)
extern "C"  bool Lexer_State9_m3523926907 (Il2CppObject * __this /* static, unused */, FsmContext_t3936467683 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State10(LitJson.FsmContext)
extern "C"  bool Lexer_State10_m3439175875 (Il2CppObject * __this /* static, unused */, FsmContext_t3936467683 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State11(LitJson.FsmContext)
extern "C"  bool Lexer_State11_m3650526788 (Il2CppObject * __this /* static, unused */, FsmContext_t3936467683 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State12(LitJson.FsmContext)
extern "C"  bool Lexer_State12_m3861877701 (Il2CppObject * __this /* static, unused */, FsmContext_t3936467683 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State13(LitJson.FsmContext)
extern "C"  bool Lexer_State13_m4073228614 (Il2CppObject * __this /* static, unused */, FsmContext_t3936467683 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State14(LitJson.FsmContext)
extern "C"  bool Lexer_State14_m4284579527 (Il2CppObject * __this /* static, unused */, FsmContext_t3936467683 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State15(LitJson.FsmContext)
extern "C"  bool Lexer_State15_m200963144 (Il2CppObject * __this /* static, unused */, FsmContext_t3936467683 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State16(LitJson.FsmContext)
extern "C"  bool Lexer_State16_m412314057 (Il2CppObject * __this /* static, unused */, FsmContext_t3936467683 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State17(LitJson.FsmContext)
extern "C"  bool Lexer_State17_m623664970 (Il2CppObject * __this /* static, unused */, FsmContext_t3936467683 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State18(LitJson.FsmContext)
extern "C"  bool Lexer_State18_m835015883 (Il2CppObject * __this /* static, unused */, FsmContext_t3936467683 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State19(LitJson.FsmContext)
extern "C"  bool Lexer_State19_m1046366796 (Il2CppObject * __this /* static, unused */, FsmContext_t3936467683 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State20(LitJson.FsmContext)
extern "C"  bool Lexer_State20_m1401119586 (Il2CppObject * __this /* static, unused */, FsmContext_t3936467683 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State21(LitJson.FsmContext)
extern "C"  bool Lexer_State21_m1612470499 (Il2CppObject * __this /* static, unused */, FsmContext_t3936467683 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State22(LitJson.FsmContext)
extern "C"  bool Lexer_State22_m1823821412 (Il2CppObject * __this /* static, unused */, FsmContext_t3936467683 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State23(LitJson.FsmContext)
extern "C"  bool Lexer_State23_m2035172325 (Il2CppObject * __this /* static, unused */, FsmContext_t3936467683 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State24(LitJson.FsmContext)
extern "C"  bool Lexer_State24_m2246523238 (Il2CppObject * __this /* static, unused */, FsmContext_t3936467683 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State25(LitJson.FsmContext)
extern "C"  bool Lexer_State25_m2457874151 (Il2CppObject * __this /* static, unused */, FsmContext_t3936467683 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State26(LitJson.FsmContext)
extern "C"  bool Lexer_State26_m2669225064 (Il2CppObject * __this /* static, unused */, FsmContext_t3936467683 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State27(LitJson.FsmContext)
extern "C"  bool Lexer_State27_m2880575977 (Il2CppObject * __this /* static, unused */, FsmContext_t3936467683 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State28(LitJson.FsmContext)
extern "C"  bool Lexer_State28_m3091926890 (Il2CppObject * __this /* static, unused */, FsmContext_t3936467683 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::GetChar()
extern "C"  bool Lexer_GetChar_m4104177437 (Lexer_t3664372066 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.Lexer::NextChar()
extern "C"  int32_t Lexer_NextChar_m2560439808 (Lexer_t3664372066 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::NextToken()
extern "C"  bool Lexer_NextToken_m2325282711 (Lexer_t3664372066 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.Lexer::UngetChar()
extern "C"  void Lexer_UngetChar_m3833420334 (Lexer_t3664372066 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
