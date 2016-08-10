#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// LitJson.JsonData
struct JsonData_t1715015430;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CardsDownloader
struct  CardsDownloader_t609005272  : public MonoBehaviour_t667441552
{
public:
	// System.String CardsDownloader::jsonString
	String_t* ___jsonString_2;
	// LitJson.JsonData CardsDownloader::cardsData
	JsonData_t1715015430 * ___cardsData_3;

public:
	inline static int32_t get_offset_of_jsonString_2() { return static_cast<int32_t>(offsetof(CardsDownloader_t609005272, ___jsonString_2)); }
	inline String_t* get_jsonString_2() const { return ___jsonString_2; }
	inline String_t** get_address_of_jsonString_2() { return &___jsonString_2; }
	inline void set_jsonString_2(String_t* value)
	{
		___jsonString_2 = value;
		Il2CppCodeGenWriteBarrier(&___jsonString_2, value);
	}

	inline static int32_t get_offset_of_cardsData_3() { return static_cast<int32_t>(offsetof(CardsDownloader_t609005272, ___cardsData_3)); }
	inline JsonData_t1715015430 * get_cardsData_3() const { return ___cardsData_3; }
	inline JsonData_t1715015430 ** get_address_of_cardsData_3() { return &___cardsData_3; }
	inline void set_cardsData_3(JsonData_t1715015430 * value)
	{
		___cardsData_3 = value;
		Il2CppCodeGenWriteBarrier(&___cardsData_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
