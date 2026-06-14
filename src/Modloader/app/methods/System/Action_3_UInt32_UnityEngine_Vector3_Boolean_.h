#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_3_UInt32_UnityEngine_Vector3_Boolean_.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::System::Action_3_UInt32_UnityEngine_Vector3_Boolean_ {
    IL2CPP_REGISTER_METHOD(0x02C169D0, void, Invoke, app::Action_3_UInt32_UnityEngine_Vector3_Boolean_* this_ptr, uint32_t arg1, app::Vector3 arg2, bool arg3)
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::Action_3_UInt32_UnityEngine_Vector3_Boolean_* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(
        0x02C16F00,
        app::IAsyncResult*,
        BeginInvoke,
        app::Action_3_UInt32_UnityEngine_Vector3_Boolean_* this_ptr,
        uint32_t arg1,
        app::Vector3 arg2,
        bool arg3,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, app::Action_3_UInt32_UnityEngine_Vector3_Boolean_* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::System::Action_3_UInt32_UnityEngine_Vector3_Boolean_
