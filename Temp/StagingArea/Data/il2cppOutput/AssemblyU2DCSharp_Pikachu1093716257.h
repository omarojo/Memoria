﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pikachu
struct  Pikachu_t1093716257  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject Pikachu::pikachuObj
	GameObject_t3674682005 * ___pikachuObj_2;

public:
	inline static int32_t get_offset_of_pikachuObj_2() { return static_cast<int32_t>(offsetof(Pikachu_t1093716257, ___pikachuObj_2)); }
	inline GameObject_t3674682005 * get_pikachuObj_2() const { return ___pikachuObj_2; }
	inline GameObject_t3674682005 ** get_address_of_pikachuObj_2() { return &___pikachuObj_2; }
	inline void set_pikachuObj_2(GameObject_t3674682005 * value)
	{
		___pikachuObj_2 = value;
		Il2CppCodeGenWriteBarrier(&___pikachuObj_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
