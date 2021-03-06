﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.Rigidbody
struct Rigidbody_t3346577219;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Rigidbody3346577219.h"
#include "UnityEngine_UnityEngine_ForceMode2134283300.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882.h"

// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
extern "C"  void Rigidbody_AddForce_m3682301239 (Rigidbody_t3346577219 * __this, Vector3_t4282066566  ___force0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_AddForce(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.ForceMode)
extern "C"  void Rigidbody_INTERNAL_CALL_AddForce_m3651654387 (Il2CppObject * __this /* static, unused */, Rigidbody_t3346577219 * ___self0, Vector3_t4282066566 * ___force1, int32_t ___mode2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::AddRelativeForce(UnityEngine.Vector3)
extern "C"  void Rigidbody_AddRelativeForce_m1706572579 (Rigidbody_t3346577219 * __this, Vector3_t4282066566  ___force0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_AddRelativeForce(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.ForceMode)
extern "C"  void Rigidbody_INTERNAL_CALL_AddRelativeForce_m3589442951 (Il2CppObject * __this /* static, unused */, Rigidbody_t3346577219 * ___self0, Vector3_t4282066566 * ___force1, int32_t ___mode2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Rigidbody::get_rotation()
extern "C"  Quaternion_t1553702882  Rigidbody_get_rotation_m3846953477 (Rigidbody_t3346577219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_get_rotation(UnityEngine.Quaternion&)
extern "C"  void Rigidbody_INTERNAL_get_rotation_m1932073294 (Rigidbody_t3346577219 * __this, Quaternion_t1553702882 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::MoveRotation(UnityEngine.Quaternion)
extern "C"  void Rigidbody_MoveRotation_m38358738 (Rigidbody_t3346577219 * __this, Quaternion_t1553702882  ___rot0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_MoveRotation(UnityEngine.Rigidbody,UnityEngine.Quaternion&)
extern "C"  void Rigidbody_INTERNAL_CALL_MoveRotation_m4110814929 (Il2CppObject * __this /* static, unused */, Rigidbody_t3346577219 * ___self0, Quaternion_t1553702882 * ___rot1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
