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

// CardFlip
struct  CardFlip_t55987133  : public MonoBehaviour_t667441552
{
public:
	// System.Int32 CardFlip::fps
	int32_t ___fps_3;
	// System.Single CardFlip::rotateDegreesPerSecond
	float ___rotateDegreesPerSecond_4;
	// System.Boolean CardFlip::isFaceUp
	bool ___isFaceUp_5;
	// System.Single CardFlip::waitTime
	float ___waitTime_6;
	// System.Boolean CardFlip::isAnimatingProcessing
	bool ___isAnimatingProcessing_7;
	// UnityEngine.AudioClip CardFlip::flipSound
	AudioClip_t794140988 * ___flipSound_8;
	// UnityEngine.AudioSource CardFlip::a_source
	AudioSource_t1740077639 * ___a_source_9;

public:
	inline static int32_t get_offset_of_fps_3() { return static_cast<int32_t>(offsetof(CardFlip_t55987133, ___fps_3)); }
	inline int32_t get_fps_3() const { return ___fps_3; }
	inline int32_t* get_address_of_fps_3() { return &___fps_3; }
	inline void set_fps_3(int32_t value)
	{
		___fps_3 = value;
	}

	inline static int32_t get_offset_of_rotateDegreesPerSecond_4() { return static_cast<int32_t>(offsetof(CardFlip_t55987133, ___rotateDegreesPerSecond_4)); }
	inline float get_rotateDegreesPerSecond_4() const { return ___rotateDegreesPerSecond_4; }
	inline float* get_address_of_rotateDegreesPerSecond_4() { return &___rotateDegreesPerSecond_4; }
	inline void set_rotateDegreesPerSecond_4(float value)
	{
		___rotateDegreesPerSecond_4 = value;
	}

	inline static int32_t get_offset_of_isFaceUp_5() { return static_cast<int32_t>(offsetof(CardFlip_t55987133, ___isFaceUp_5)); }
	inline bool get_isFaceUp_5() const { return ___isFaceUp_5; }
	inline bool* get_address_of_isFaceUp_5() { return &___isFaceUp_5; }
	inline void set_isFaceUp_5(bool value)
	{
		___isFaceUp_5 = value;
	}

	inline static int32_t get_offset_of_waitTime_6() { return static_cast<int32_t>(offsetof(CardFlip_t55987133, ___waitTime_6)); }
	inline float get_waitTime_6() const { return ___waitTime_6; }
	inline float* get_address_of_waitTime_6() { return &___waitTime_6; }
	inline void set_waitTime_6(float value)
	{
		___waitTime_6 = value;
	}

	inline static int32_t get_offset_of_isAnimatingProcessing_7() { return static_cast<int32_t>(offsetof(CardFlip_t55987133, ___isAnimatingProcessing_7)); }
	inline bool get_isAnimatingProcessing_7() const { return ___isAnimatingProcessing_7; }
	inline bool* get_address_of_isAnimatingProcessing_7() { return &___isAnimatingProcessing_7; }
	inline void set_isAnimatingProcessing_7(bool value)
	{
		___isAnimatingProcessing_7 = value;
	}

	inline static int32_t get_offset_of_flipSound_8() { return static_cast<int32_t>(offsetof(CardFlip_t55987133, ___flipSound_8)); }
	inline AudioClip_t794140988 * get_flipSound_8() const { return ___flipSound_8; }
	inline AudioClip_t794140988 ** get_address_of_flipSound_8() { return &___flipSound_8; }
	inline void set_flipSound_8(AudioClip_t794140988 * value)
	{
		___flipSound_8 = value;
		Il2CppCodeGenWriteBarrier(&___flipSound_8, value);
	}

	inline static int32_t get_offset_of_a_source_9() { return static_cast<int32_t>(offsetof(CardFlip_t55987133, ___a_source_9)); }
	inline AudioSource_t1740077639 * get_a_source_9() const { return ___a_source_9; }
	inline AudioSource_t1740077639 ** get_address_of_a_source_9() { return &___a_source_9; }
	inline void set_a_source_9(AudioSource_t1740077639 * value)
	{
		___a_source_9 = value;
		Il2CppCodeGenWriteBarrier(&___a_source_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
