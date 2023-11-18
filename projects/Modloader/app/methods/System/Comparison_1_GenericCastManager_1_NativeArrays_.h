#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Comparison_1_GenericCastManager_1_NativeArrays_.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/Comparison_1_GenericCastManager_1_NativeArrays__1.h>
#include <Modloader/app/structs/Comparison_1_GenericCastManager_1_NativeArrays__2.h>
#include <Modloader/app/structs/GenericCastManager_1_Command_NativeArrays_UnityEngine_CapsulecastCommand_.h>
#include <Modloader/app/structs/GenericCastManager_1_Command_NativeArrays_UnityEngine_RaycastCommand_.h>
#include <Modloader/app/structs/GenericCastManager_1_Command_NativeArrays_UnityEngine_SpherecastCommand_.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Comparison_1_GenericCastManager_1_NativeArrays_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor_1, (app::Comparison_1_GenericCastManager_1_NativeArrays_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02B876E0, int32_t, Invoke_1, (app::Comparison_1_GenericCastManager_1_NativeArrays_ * this_ptr, app::GenericCastManager_1_Command_NativeArrays_UnityEngine_CapsulecastCommand_ x, app::GenericCastManager_1_Command_NativeArrays_UnityEngine_CapsulecastCommand_ y))
    IL2CPP_REGISTER_METHOD(0x02B88B60, app::IAsyncResult*, BeginInvoke_1, (app::Comparison_1_GenericCastManager_1_NativeArrays_ * this_ptr, app::GenericCastManager_1_Command_NativeArrays_UnityEngine_CapsulecastCommand_ x, app::GenericCastManager_1_Command_NativeArrays_UnityEngine_CapsulecastCommand_ y, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke_1, (app::Comparison_1_GenericCastManager_1_NativeArrays_ * this_ptr, app::IAsyncResult* result))
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor_2, (app::Comparison_1_GenericCastManager_1_NativeArrays__1 * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02B876E0, int32_t, Invoke_2, (app::Comparison_1_GenericCastManager_1_NativeArrays__1 * this_ptr, app::GenericCastManager_1_Command_NativeArrays_UnityEngine_RaycastCommand_ x, app::GenericCastManager_1_Command_NativeArrays_UnityEngine_RaycastCommand_ y))
    IL2CPP_REGISTER_METHOD(0x02B88C50, app::IAsyncResult*, BeginInvoke_2, (app::Comparison_1_GenericCastManager_1_NativeArrays__1 * this_ptr, app::GenericCastManager_1_Command_NativeArrays_UnityEngine_RaycastCommand_ x, app::GenericCastManager_1_Command_NativeArrays_UnityEngine_RaycastCommand_ y, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke_2, (app::Comparison_1_GenericCastManager_1_NativeArrays__1 * this_ptr, app::IAsyncResult* result))
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor_3, (app::Comparison_1_GenericCastManager_1_NativeArrays__2 * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02B876E0, int32_t, Invoke_3, (app::Comparison_1_GenericCastManager_1_NativeArrays__2 * this_ptr, app::GenericCastManager_1_Command_NativeArrays_UnityEngine_SpherecastCommand_ x, app::GenericCastManager_1_Command_NativeArrays_UnityEngine_SpherecastCommand_ y))
    IL2CPP_REGISTER_METHOD(0x02B88D40, app::IAsyncResult*, BeginInvoke_3, (app::Comparison_1_GenericCastManager_1_NativeArrays__2 * this_ptr, app::GenericCastManager_1_Command_NativeArrays_UnityEngine_SpherecastCommand_ x, app::GenericCastManager_1_Command_NativeArrays_UnityEngine_SpherecastCommand_ y, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke_3, (app::Comparison_1_GenericCastManager_1_NativeArrays__2 * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Comparison_1_GenericCastManager_1_NativeArrays_
