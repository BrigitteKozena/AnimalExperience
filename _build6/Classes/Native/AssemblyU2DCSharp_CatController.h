#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody
struct Rigidbody_t5_129;
// UnityEngine.Camera
struct Camera_t5_98;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// CatController
struct  CatController_t7_95  : public MonoBehaviour_t5_104
{
	// System.Single CatController::speed
	float ___speed_2;
	// UnityEngine.Rigidbody CatController::rb
	Rigidbody_t5_129 * ___rb_3;
	// UnityEngine.Camera CatController::catCamera
	Camera_t5_98 * ___catCamera_4;
	// UnityEngine.Vector3 CatController::movement
	Vector3_t5_67  ___movement_5;
	// System.Single CatController::camRayLength
	float ___camRayLength_6;
	// System.Int32 CatController::floorMask
	int32_t ___floorMask_7;
};
