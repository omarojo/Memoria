﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Type
struct Type_t;

#include "mscorlib_System_ValueType1744280289.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LitJson.ArrayMetadata
struct  ArrayMetadata_t4058342910 
{
public:
	// System.Type LitJson.ArrayMetadata::element_type
	Type_t * ___element_type_0;
	// System.Boolean LitJson.ArrayMetadata::is_array
	bool ___is_array_1;
	// System.Boolean LitJson.ArrayMetadata::is_list
	bool ___is_list_2;

public:
	inline static int32_t get_offset_of_element_type_0() { return static_cast<int32_t>(offsetof(ArrayMetadata_t4058342910, ___element_type_0)); }
	inline Type_t * get_element_type_0() const { return ___element_type_0; }
	inline Type_t ** get_address_of_element_type_0() { return &___element_type_0; }
	inline void set_element_type_0(Type_t * value)
	{
		___element_type_0 = value;
		Il2CppCodeGenWriteBarrier(&___element_type_0, value);
	}

	inline static int32_t get_offset_of_is_array_1() { return static_cast<int32_t>(offsetof(ArrayMetadata_t4058342910, ___is_array_1)); }
	inline bool get_is_array_1() const { return ___is_array_1; }
	inline bool* get_address_of_is_array_1() { return &___is_array_1; }
	inline void set_is_array_1(bool value)
	{
		___is_array_1 = value;
	}

	inline static int32_t get_offset_of_is_list_2() { return static_cast<int32_t>(offsetof(ArrayMetadata_t4058342910, ___is_list_2)); }
	inline bool get_is_list_2() const { return ___is_list_2; }
	inline bool* get_address_of_is_list_2() { return &___is_list_2; }
	inline void set_is_list_2(bool value)
	{
		___is_list_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: LitJson.ArrayMetadata
struct ArrayMetadata_t4058342910_marshaled_pinvoke
{
	Type_t * ___element_type_0;
	int32_t ___is_array_1;
	int32_t ___is_list_2;
};
// Native definition for marshalling of: LitJson.ArrayMetadata
struct ArrayMetadata_t4058342910_marshaled_com
{
	Type_t * ___element_type_0;
	int32_t ___is_array_1;
	int32_t ___is_list_2;
};
