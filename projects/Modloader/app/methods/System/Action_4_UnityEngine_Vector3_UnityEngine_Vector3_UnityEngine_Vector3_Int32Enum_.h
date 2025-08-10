#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_4_UnityEngine_Vector3_UnityEngine_Vector3_UnityEngine_Vector3_Int32Enum_.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Int32Enum__Enum.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::System::Action_4_UnityEngine_Vector3_UnityEngine_Vector3_UnityEngine_Vector3_Int32Enum_ {
    IL2CPP_REGISTER_METHOD(
        0x00611810,
        void,
        ctor,
        app::Action_4_UnityEngine_Vector3_UnityEngine_Vector3_UnityEngine_Vector3_Int32Enum_* this_ptr,
        app::Object* object,
        void* method_1
    )
    IL2CPP_REGISTER_METHOD(
        0x02C18EF0,
        void,
        Invoke,
        app::Action_4_UnityEngine_Vector3_UnityEngine_Vector3_UnityEngine_Vector3_Int32Enum_* this_ptr,
        app::Vector3 arg1,
        app::Vector3 arg2,
        app::Vector3 arg3,
        app::Int32Enum__Enum arg4
    )
    IL2CPP_REGISTER_METHOD(
        0x02C19810,
        app::IAsyncResult*,
        BeginInvoke,
        app::Action_4_UnityEngine_Vector3_UnityEngine_Vector3_UnityEngine_Vector3_Int32Enum_* this_ptr,
        app::Vector3 arg1,
        app::Vector3 arg2,
        app::Vector3 arg3,
        app::Int32Enum__Enum arg4,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(
        0x00611B40,
        void,
        EndInvoke,
        app::Action_4_UnityEngine_Vector3_UnityEngine_Vector3_UnityEngine_Vector3_Int32Enum_* this_ptr,
        app::IAsyncResult* result
    )
} // namespace app::classes::System::Action_4_UnityEngine_Vector3_UnityEngine_Vector3_UnityEngine_Vector3_Int32Enum_
