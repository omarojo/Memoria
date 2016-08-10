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

// LitJson.IJsonWrapper
struct IJsonWrapper_t2026182966;
// LitJson.WrapperFactory
struct WrapperFactory_t3264289803;
// LitJson.JsonReader
struct JsonReader_t1009895007;
// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>
struct IDictionary_2_t1504911478;
// System.Type
struct Type_t;
// LitJson.ImporterFunc
struct ImporterFunc_t2138319818;
// LitJson.JsonData
struct JsonData_t1715015430;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// LitJson.JsonWriter
struct JsonWriter_t1165300239;

#include "codegen/il2cpp-codegen.h"
#include "LitJson_LitJson_WrapperFactory3264289803.h"
#include "LitJson_LitJson_JsonReader1009895007.h"
#include "mscorlib_System_Type2863145774.h"
#include "LitJson_LitJson_ImporterFunc2138319818.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Object4170816371.h"
#include "LitJson_LitJson_JsonWriter1165300239.h"

// System.Void LitJson.JsonMapper::.cctor()
extern "C"  void JsonMapper__cctor_m4040458713 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.IJsonWrapper LitJson.JsonMapper::ReadValue(LitJson.WrapperFactory,LitJson.JsonReader)
extern "C"  Il2CppObject * JsonMapper_ReadValue_m3662287667 (Il2CppObject * __this /* static, unused */, WrapperFactory_t3264289803 * ___factory0, JsonReader_t1009895007 * ___reader1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::RegisterBaseExporters()
extern "C"  void JsonMapper_RegisterBaseExporters_m1541476208 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::RegisterBaseImporters()
extern "C"  void JsonMapper_RegisterBaseImporters_m810286623 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::RegisterImporter(System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>,System.Type,System.Type,LitJson.ImporterFunc)
extern "C"  void JsonMapper_RegisterImporter_m2108531963 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___table0, Type_t * ___json_type1, Type_t * ___value_type2, ImporterFunc_t2138319818 * ___importer3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonData LitJson.JsonMapper::ToObject(System.String)
extern "C"  JsonData_t1715015430 * JsonMapper_ToObject_m3425498490 (Il2CppObject * __this /* static, unused */, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.IJsonWrapper LitJson.JsonMapper::ToWrapper(LitJson.WrapperFactory,System.String)
extern "C"  Il2CppObject * JsonMapper_ToWrapper_m685126738 (Il2CppObject * __this /* static, unused */, WrapperFactory_t3264289803 * ___factory0, String_t* ___json1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__1(System.Object,LitJson.JsonWriter)
extern "C"  void JsonMapper_U3CRegisterBaseExportersU3Em__1_m1072502522 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, JsonWriter_t1165300239 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__2(System.Object,LitJson.JsonWriter)
extern "C"  void JsonMapper_U3CRegisterBaseExportersU3Em__2_m2797983419 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, JsonWriter_t1165300239 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__3(System.Object,LitJson.JsonWriter)
extern "C"  void JsonMapper_U3CRegisterBaseExportersU3Em__3_m228497020 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, JsonWriter_t1165300239 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__4(System.Object,LitJson.JsonWriter)
extern "C"  void JsonMapper_U3CRegisterBaseExportersU3Em__4_m1953977917 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, JsonWriter_t1165300239 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__5(System.Object,LitJson.JsonWriter)
extern "C"  void JsonMapper_U3CRegisterBaseExportersU3Em__5_m3679458814 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, JsonWriter_t1165300239 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__6(System.Object,LitJson.JsonWriter)
extern "C"  void JsonMapper_U3CRegisterBaseExportersU3Em__6_m1109972415 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, JsonWriter_t1165300239 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__7(System.Object,LitJson.JsonWriter)
extern "C"  void JsonMapper_U3CRegisterBaseExportersU3Em__7_m2835453312 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, JsonWriter_t1165300239 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__8(System.Object,LitJson.JsonWriter)
extern "C"  void JsonMapper_U3CRegisterBaseExportersU3Em__8_m265966913 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, JsonWriter_t1165300239 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__9(System.Object,LitJson.JsonWriter)
extern "C"  void JsonMapper_U3CRegisterBaseExportersU3Em__9_m1991447810 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, JsonWriter_t1165300239 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__A(System.Object)
extern "C"  Il2CppObject * JsonMapper_U3CRegisterBaseImportersU3Em__A_m976906870 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__B(System.Object)
extern "C"  Il2CppObject * JsonMapper_U3CRegisterBaseImportersU3Em__B_m466372693 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__C(System.Object)
extern "C"  Il2CppObject * JsonMapper_U3CRegisterBaseImportersU3Em__C_m4250805812 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__D(System.Object)
extern "C"  Il2CppObject * JsonMapper_U3CRegisterBaseImportersU3Em__D_m3740271635 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__E(System.Object)
extern "C"  Il2CppObject * JsonMapper_U3CRegisterBaseImportersU3Em__E_m3229737458 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__F(System.Object)
extern "C"  Il2CppObject * JsonMapper_U3CRegisterBaseImportersU3Em__F_m2719203281 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__10(System.Object)
extern "C"  Il2CppObject * JsonMapper_U3CRegisterBaseImportersU3Em__10_m890446864 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__11(System.Object)
extern "C"  Il2CppObject * JsonMapper_U3CRegisterBaseImportersU3Em__11_m379912687 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__12(System.Object)
extern "C"  Il2CppObject * JsonMapper_U3CRegisterBaseImportersU3Em__12_m4164345806 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__13(System.Object)
extern "C"  Il2CppObject * JsonMapper_U3CRegisterBaseImportersU3Em__13_m3653811629 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__14(System.Object)
extern "C"  Il2CppObject * JsonMapper_U3CRegisterBaseImportersU3Em__14_m3143277452 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__15(System.Object)
extern "C"  Il2CppObject * JsonMapper_U3CRegisterBaseImportersU3Em__15_m2632743275 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.IJsonWrapper LitJson.JsonMapper::<ToObject>m__18()
extern "C"  Il2CppObject * JsonMapper_U3CToObjectU3Em__18_m3664313392 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
