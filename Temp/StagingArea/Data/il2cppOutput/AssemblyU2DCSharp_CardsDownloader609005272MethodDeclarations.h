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

// CardsDownloader
struct CardsDownloader_t609005272;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"

// System.Void CardsDownloader::.ctor()
extern "C"  void CardsDownloader__ctor_m3426110355 (CardsDownloader_t609005272 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator CardsDownloader::Start()
extern "C"  Il2CppObject * CardsDownloader_Start_m1794968283 (CardsDownloader_t609005272 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardsDownloader::Update()
extern "C"  void CardsDownloader_Update_m562100698 (CardsDownloader_t609005272 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardsDownloader::loadCardsImages(System.String)
extern "C"  void CardsDownloader_loadCardsImages_m2459747900 (CardsDownloader_t609005272 * __this, String_t* ___jsonText0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
