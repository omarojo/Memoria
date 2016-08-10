#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;
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

// GameLogicManager
struct  GameLogicManager_t2471680929  : public MonoBehaviour_t667441552
{
public:
	// System.Int32 GameLogicManager::matchedPairs
	int32_t ___matchedPairs_3;
	// UnityEngine.GameObject GameLogicManager::flipedCard1
	GameObject_t3674682005 * ___flipedCard1_4;
	// UnityEngine.GameObject GameLogicManager::flipedCard2
	GameObject_t3674682005 * ___flipedCard2_5;
	// UnityEngine.AudioClip GameLogicManager::matchedSound
	AudioClip_t794140988 * ___matchedSound_6;
	// UnityEngine.AudioSource GameLogicManager::a_source
	AudioSource_t1740077639 * ___a_source_7;

public:
	inline static int32_t get_offset_of_matchedPairs_3() { return static_cast<int32_t>(offsetof(GameLogicManager_t2471680929, ___matchedPairs_3)); }
	inline int32_t get_matchedPairs_3() const { return ___matchedPairs_3; }
	inline int32_t* get_address_of_matchedPairs_3() { return &___matchedPairs_3; }
	inline void set_matchedPairs_3(int32_t value)
	{
		___matchedPairs_3 = value;
	}

	inline static int32_t get_offset_of_flipedCard1_4() { return static_cast<int32_t>(offsetof(GameLogicManager_t2471680929, ___flipedCard1_4)); }
	inline GameObject_t3674682005 * get_flipedCard1_4() const { return ___flipedCard1_4; }
	inline GameObject_t3674682005 ** get_address_of_flipedCard1_4() { return &___flipedCard1_4; }
	inline void set_flipedCard1_4(GameObject_t3674682005 * value)
	{
		___flipedCard1_4 = value;
		Il2CppCodeGenWriteBarrier(&___flipedCard1_4, value);
	}

	inline static int32_t get_offset_of_flipedCard2_5() { return static_cast<int32_t>(offsetof(GameLogicManager_t2471680929, ___flipedCard2_5)); }
	inline GameObject_t3674682005 * get_flipedCard2_5() const { return ___flipedCard2_5; }
	inline GameObject_t3674682005 ** get_address_of_flipedCard2_5() { return &___flipedCard2_5; }
	inline void set_flipedCard2_5(GameObject_t3674682005 * value)
	{
		___flipedCard2_5 = value;
		Il2CppCodeGenWriteBarrier(&___flipedCard2_5, value);
	}

	inline static int32_t get_offset_of_matchedSound_6() { return static_cast<int32_t>(offsetof(GameLogicManager_t2471680929, ___matchedSound_6)); }
	inline AudioClip_t794140988 * get_matchedSound_6() const { return ___matchedSound_6; }
	inline AudioClip_t794140988 ** get_address_of_matchedSound_6() { return &___matchedSound_6; }
	inline void set_matchedSound_6(AudioClip_t794140988 * value)
	{
		___matchedSound_6 = value;
		Il2CppCodeGenWriteBarrier(&___matchedSound_6, value);
	}

	inline static int32_t get_offset_of_a_source_7() { return static_cast<int32_t>(offsetof(GameLogicManager_t2471680929, ___a_source_7)); }
	inline AudioSource_t1740077639 * get_a_source_7() const { return ___a_source_7; }
	inline AudioSource_t1740077639 ** get_address_of_a_source_7() { return &___a_source_7; }
	inline void set_a_source_7(AudioSource_t1740077639 * value)
	{
		___a_source_7 = value;
		Il2CppCodeGenWriteBarrier(&___a_source_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
