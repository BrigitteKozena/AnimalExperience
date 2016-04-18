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

// FreeFlight
struct FreeFlight_t7_44;
// System.String
struct String_t;
// UnityEngine.Collision
struct Collision_t5_128;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_UnityFreeFlight_MovementModes.h"

// System.Void FreeFlight::.ctor()
extern "C" void FreeFlight__ctor_m7_349 (FreeFlight_t7_44 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FreeFlight::version()
extern "C" String_t* FreeFlight_version_m7_350 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FreeFlight::OnEnable()
extern "C" void FreeFlight_OnEnable_m7_351 (FreeFlight_t7_44 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FreeFlight::SwitchModes(UnityFreeFlight.MovementModes)
extern "C" void FreeFlight_SwitchModes_m7_352 (FreeFlight_t7_44 * __this, int32_t ___newmode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FreeFlight::Start()
extern "C" void FreeFlight_Start_m7_353 (FreeFlight_t7_44 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FreeFlight::Update()
extern "C" void FreeFlight_Update_m7_354 (FreeFlight_t7_44 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FreeFlight::FixedUpdate()
extern "C" void FreeFlight_FixedUpdate_m7_355 (FreeFlight_t7_44 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FreeFlight::OnCollisionEnter(UnityEngine.Collision)
extern "C" void FreeFlight_OnCollisionEnter_m7_356 (FreeFlight_t7_44 * __this, Collision_t5_128 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
