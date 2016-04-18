#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t5_111;
// UnityEngine.Camera
struct Camera_t5_98;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// CameraControllerNew
struct  CameraControllerNew_t7_94  : public MonoBehaviour_t5_104
{
	// UnityEngine.GameObject CameraControllerNew::currentCharacter
	GameObject_t5_111 * ___currentCharacter_2;
	// UnityEngine.GameObject CameraControllerNew::catPlayer
	GameObject_t5_111 * ___catPlayer_3;
	// UnityEngine.GameObject CameraControllerNew::birdPlayer
	GameObject_t5_111 * ___birdPlayer_4;
	// UnityEngine.GameObject CameraControllerNew::kangarooPlayer
	GameObject_t5_111 * ___kangarooPlayer_5;
	// UnityEngine.Camera CameraControllerNew::catCamera
	Camera_t5_98 * ___catCamera_6;
	// UnityEngine.Camera CameraControllerNew::kangarooCamera
	Camera_t5_98 * ___kangarooCamera_7;
	// UnityEngine.Camera CameraControllerNew::birdCamera
	Camera_t5_98 * ___birdCamera_8;
};
