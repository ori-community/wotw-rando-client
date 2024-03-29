#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_1_GenericCastManager_1_NativeArrays_.h>
#include <Modloader/app/structs/Action_1_GenericCastManager_1_NativeArrays__1.h>
#include <Modloader/app/structs/Action_1_GenericCastManager_1_NativeArrays__2.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/GenericCastManager_1_Command_NativeArrays_UnityEngine_CapsulecastCommand_.h>
#include <Modloader/app/structs/GenericCastManager_1_Command_NativeArrays_UnityEngine_RaycastCommand_.h>
#include <Modloader/app/structs/GenericCastManager_1_Command_NativeArrays_UnityEngine_SpherecastCommand_.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Action_1_GenericCastManager_1_NativeArrays_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor_1, (app::Action_1_GenericCastManager_1_NativeArrays_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x012DE680, void, Invoke_1, (app::Action_1_GenericCastManager_1_NativeArrays_ * this_ptr, app::GenericCastManager_1_Command_NativeArrays_UnityEngine_CapsulecastCommand_ obj))
    IL2CPP_REGISTER_METHOD(0x029FE210, app::IAsyncResult*, BeginInvoke_1, (app::Action_1_GenericCastManager_1_NativeArrays_ * this_ptr, app::GenericCastManager_1_Command_NativeArrays_UnityEngine_CapsulecastCommand_ obj, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke_1, (app::Action_1_GenericCastManager_1_NativeArrays_ * this_ptr, app::IAsyncResult* result))
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor_2, (app::Action_1_GenericCastManager_1_NativeArrays__1 * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x012DE680, void, Invoke_2, (app::Action_1_GenericCastManager_1_NativeArrays__1 * this_ptr, app::GenericCastManager_1_Command_NativeArrays_UnityEngine_RaycastCommand_ obj))
    IL2CPP_REGISTER_METHOD(0x029FE2E0, app::IAsyncResult*, BeginInvoke_2, (app::Action_1_GenericCastManager_1_NativeArrays__1 * this_ptr, app::GenericCastManager_1_Command_NativeArrays_UnityEngine_RaycastCommand_ obj, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke_2, (app::Action_1_GenericCastManager_1_NativeArrays__1 * this_ptr, app::IAsyncResult* result))
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor_3, (app::Action_1_GenericCastManager_1_NativeArrays__2 * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x012DE680, void, Invoke_3, (app::Action_1_GenericCastManager_1_NativeArrays__2 * this_ptr, app::GenericCastManager_1_Command_NativeArrays_UnityEngine_SpherecastCommand_ obj))
    IL2CPP_REGISTER_METHOD(0x029FE3B0, app::IAsyncResult*, BeginInvoke_3, (app::Action_1_GenericCastManager_1_NativeArrays__2 * this_ptr, app::GenericCastManager_1_Command_NativeArrays_UnityEngine_SpherecastCommand_ obj, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke_3, (app::Action_1_GenericCastManager_1_NativeArrays__2 * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Action_1_GenericCastManager_1_NativeArrays_
