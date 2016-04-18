#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// StereoController
struct StereoController_t7_19;
// StereoRenderEffect
struct StereoRenderEffect_t7_22;
// UnityEngine.Camera
struct Camera_t5_98;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "AssemblyU2DCSharp_Cardboard_Eye.h"
#include "UnityEngine_UnityEngine_LayerMask.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"
#include "UnityEngine_UnityEngine_Vector4.h"

// CardboardEye
struct  CardboardEye_t7_21  : public MonoBehaviour_t5_104
{
	// Cardboard/Eye CardboardEye::eye
	int32_t ___eye_2;
	// UnityEngine.LayerMask CardboardEye::toggleCullingMask
	LayerMask_t5_65  ___toggleCullingMask_3;
	// StereoController CardboardEye::controller
	StereoController_t7_19 * ___controller_4;
	// StereoRenderEffect CardboardEye::stereoEffect
	StereoRenderEffect_t7_22 * ___stereoEffect_5;
	// UnityEngine.Camera CardboardEye::monoCamera
	Camera_t5_98 * ___monoCamera_6;
	// UnityEngine.Matrix4x4 CardboardEye::realProj
	Matrix4x4_t5_69  ___realProj_7;
	// UnityEngine.Vector4 CardboardEye::projvec
	Vector4_t5_71  ___projvec_8;
	// UnityEngine.Vector4 CardboardEye::unprojvec
	Vector4_t5_71  ___unprojvec_9;
	// System.Single CardboardEye::interpPosition
	float ___interpPosition_10;
	// UnityEngine.Camera CardboardEye::<camera>k__BackingField
	Camera_t5_98 * ___U3CcameraU3Ek__BackingField_11;
};
