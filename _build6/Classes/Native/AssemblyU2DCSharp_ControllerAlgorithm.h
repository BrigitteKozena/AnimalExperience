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
// UnityEngine.Transform
struct Transform_t5_82;
// UnityEngine.GameObject
struct GameObject_t5_111;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "AssemblyU2DCSharp_ControllerAlgorithm_Animals.h"
#include "UnityEngine_UnityEngine_LayerMask.h"

// ControllerAlgorithm
struct  ControllerAlgorithm_t7_97  : public MonoBehaviour_t5_104
{
	// UnityEngine.Rigidbody ControllerAlgorithm::myRigibody
	Rigidbody_t5_129 * ___myRigibody_2;
	// System.Single ControllerAlgorithm::moveVertical
	float ___moveVertical_3;
	// System.Single ControllerAlgorithm::moveHorizontal
	float ___moveHorizontal_4;
	// System.Boolean ControllerAlgorithm::isGrounded
	bool ___isGrounded_5;
	// System.Single ControllerAlgorithm::gravityScale
	float ___gravityScale_6;
	// System.Boolean ControllerAlgorithm::isMoving
	bool ___isMoving_7;
	// ControllerAlgorithm/Animals ControllerAlgorithm::animal
	int32_t ___animal_8;
	// UnityEngine.Transform ControllerAlgorithm::endPoint
	Transform_t5_82 * ___endPoint_9;
	// UnityEngine.Transform ControllerAlgorithm::startPoint
	Transform_t5_82 * ___startPoint_10;
	// UnityEngine.LayerMask ControllerAlgorithm::FloorLayer
	LayerMask_t5_65  ___FloorLayer_11;
	// System.Single ControllerAlgorithm::moveSpeed
	float ___moveSpeed_12;
	// System.Single ControllerAlgorithm::jumpHeight
	float ___jumpHeight_13;
	// System.Single ControllerAlgorithm::rotateSpeed
	float ___rotateSpeed_14;
	// UnityEngine.GameObject ControllerAlgorithm::cam
	GameObject_t5_111 * ___cam_15;
};
