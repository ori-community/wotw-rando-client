#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/Func_1_UnityEngine_Quaternion_.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Quaternion.h>

namespace app::classes::System::Func_1_UnityEngine_Quaternion_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::Func_1_UnityEngine_Quaternion_* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(0x02186FB0, app::Quaternion, Invoke, app::Func_1_UnityEngine_Quaternion_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00611B10,
        app::IAsyncResult*,
        BeginInvoke,
        app::Func_1_UnityEngine_Quaternion_* this_ptr,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x01C7A680, app::Quaternion, EndInvoke, app::Func_1_UnityEngine_Quaternion_* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::System::Func_1_UnityEngine_Quaternion_
