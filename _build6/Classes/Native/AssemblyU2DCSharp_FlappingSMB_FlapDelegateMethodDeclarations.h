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

// FlappingSMB/FlapDelegate
struct FlapDelegate_t7_73;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void FlappingSMB/FlapDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void FlapDelegate__ctor_m7_518 (FlapDelegate_t7_73 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlappingSMB/FlapDelegate::Invoke()
extern "C" void FlapDelegate_Invoke_m7_519 (FlapDelegate_t7_73 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_FlapDelegate_t7_73(Il2CppObject* delegate);
// System.IAsyncResult FlappingSMB/FlapDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * FlapDelegate_BeginInvoke_m7_520 (FlapDelegate_t7_73 * __this, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlappingSMB/FlapDelegate::EndInvoke(System.IAsyncResult)
extern "C" void FlapDelegate_EndInvoke_m7_521 (FlapDelegate_t7_73 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
