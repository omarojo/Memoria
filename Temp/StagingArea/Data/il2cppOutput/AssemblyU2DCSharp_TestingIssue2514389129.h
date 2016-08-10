#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.RectTransform
struct RectTransform_t972643934;
// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TestingIssue2
struct  TestingIssue2_t514389129  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.RectTransform TestingIssue2::rect
	RectTransform_t972643934 * ___rect_2;
	// UnityEngine.GameObject TestingIssue2::go
	GameObject_t3674682005 * ___go_3;

public:
	inline static int32_t get_offset_of_rect_2() { return static_cast<int32_t>(offsetof(TestingIssue2_t514389129, ___rect_2)); }
	inline RectTransform_t972643934 * get_rect_2() const { return ___rect_2; }
	inline RectTransform_t972643934 ** get_address_of_rect_2() { return &___rect_2; }
	inline void set_rect_2(RectTransform_t972643934 * value)
	{
		___rect_2 = value;
		Il2CppCodeGenWriteBarrier(&___rect_2, value);
	}

	inline static int32_t get_offset_of_go_3() { return static_cast<int32_t>(offsetof(TestingIssue2_t514389129, ___go_3)); }
	inline GameObject_t3674682005 * get_go_3() const { return ___go_3; }
	inline GameObject_t3674682005 ** get_address_of_go_3() { return &___go_3; }
	inline void set_go_3(GameObject_t3674682005 * value)
	{
		___go_3 = value;
		Il2CppCodeGenWriteBarrier(&___go_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
