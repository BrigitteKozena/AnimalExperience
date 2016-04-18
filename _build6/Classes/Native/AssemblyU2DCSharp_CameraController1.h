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

// CameraController1
struct  CameraController1_t7_93  : public MonoBehaviour_t5_104
{
	// UnityEngine.GameObject CameraController1::currentCharacter
	GameObject_t5_111 * ___currentCharacter_2;
	// UnityEngine.GameObject CameraController1::catPlayer
	GameObject_t5_111 * ___catPlayer_3;
	// UnityEngine.GameObject CameraController1::birdPlayer
	GameObject_t5_111 * ___birdPlayer_4;
	// UnityEngine.GameObject CameraController1::kangarooPlayer
	GameObject_t5_111 * ___kangarooPlayer_5;
	// UnityEngine.GameObject CameraController1::newPlayer
	GameObject_t5_111 * ___newPlayer_6;
	// UnityEngine.Camera CameraController1::catCamera
	Camera_t5_98 * ___catCamera_7;
	// UnityEngine.Camera CameraController1::kangarooCamera
	Camera_t5_98 * ___kangarooCamera_8;
	// UnityEngine.Camera CameraController1::birdCamera
	Camera_t5_98 * ___birdCamera_9;
	// UnityEngine.Camera CameraController1::newCamera
	Camera_t5_98 * ___newCamera_10;
};
