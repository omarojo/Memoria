#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioClip
struct AudioClip_t794140988;
// UnityEngine.AudioSource
struct AudioSource_t1740077639;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIManagerScript
struct  UIManagerScript_t890932388  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.AudioClip UIManagerScript::winSoundClip
	AudioClip_t794140988 * ___winSoundClip_2;
	// UnityEngine.AudioSource UIManagerScript::a_source
	AudioSource_t1740077639 * ___a_source_3;

public:
	inline static int32_t get_offset_of_winSoundClip_2() { return static_cast<int32_t>(offsetof(UIManagerScript_t890932388, ___winSoundClip_2)); }
	inline AudioClip_t794140988 * get_winSoundClip_2() const { return ___winSoundClip_2; }
	inline AudioClip_t794140988 ** get_address_of_winSoundClip_2() { return &___winSoundClip_2; }
	inline void set_winSoundClip_2(AudioClip_t794140988 * value)
	{
		___winSoundClip_2 = value;
		Il2CppCodeGenWriteBarrier(&___winSoundClip_2, value);
	}

	inline static int32_t get_offset_of_a_source_3() { return static_cast<int32_t>(offsetof(UIManagerScript_t890932388, ___a_source_3)); }
	inline AudioSource_t1740077639 * get_a_source_3() const { return ___a_source_3; }
	inline AudioSource_t1740077639 ** get_address_of_a_source_3() { return &___a_source_3; }
	inline void set_a_source_3(AudioSource_t1740077639 * value)
	{
		___a_source_3 = value;
		Il2CppCodeGenWriteBarrier(&___a_source_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
