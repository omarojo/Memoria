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

// LitJson.JsonException
struct JsonException_t3617621405;
// System.Exception
struct Exception_t3991598821;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "LitJson_LitJson_ParserToken608116400.h"
#include "mscorlib_System_Exception3991598821.h"
#include "mscorlib_System_String7231557.h"

// System.Void LitJson.JsonException::.ctor(LitJson.ParserToken,System.Exception)
extern "C"  void JsonException__ctor_m1122554673 (JsonException_t3617621405 * __this, int32_t ___token0, Exception_t3991598821 * ___inner_exception1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonException::.ctor(System.Int32)
extern "C"  void JsonException__ctor_m3681649971 (JsonException_t3617621405 * __this, int32_t ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonException::.ctor(System.String)
extern "C"  void JsonException__ctor_m2918697824 (JsonException_t3617621405 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
