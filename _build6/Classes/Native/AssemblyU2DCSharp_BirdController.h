#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.CharacterController
struct CharacterController_t5_126;
// Boundary
struct Boundary_t7_88;
// UnityEngine.Component
struct Component_t5_29;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// BirdController
struct  BirdController_t7_89  : public MonoBehaviour_t5_104
{
	// UnityEngine.CharacterController BirdController::control
	CharacterController_t5_126 * ___control_2;
	// System.Single BirdController::speed
	float ___speed_3;
	// System.Single BirdController::tilt
	float ___tilt_4;
	// Boundary BirdController::boundary
	Boundary_t7_88 * ___boundary_5;
	// UnityEngine.Component BirdController::script
	Component_t5_29 * ___script_6;
	// UnityEngine.Vector3 BirdController::move
	Vector3_t5_67  ___move_7;
	// System.Single BirdController::moveSpeed
	float ___moveSpeed_8;
	// System.Single BirdController::gravity
	float ___gravity_9;
};
