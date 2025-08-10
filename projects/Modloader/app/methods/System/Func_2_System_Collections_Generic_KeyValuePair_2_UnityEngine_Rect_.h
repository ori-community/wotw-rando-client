#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/Func_2_System_Collections_Generic_KeyValuePair_2_UnityEngine_Rect_.h>
#include <Modloader/app/structs/Func_2_System_Collections_Generic_KeyValuePair_2_UnityEngine_Rect__1.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Object_System_Int32_.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Object_System_Object_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Rect.h>

namespace app::classes::System::Func_2_System_Collections_Generic_KeyValuePair_2_UnityEngine_Rect_ {
    IL2CPP_REGISTER_METHOD(
        0x00611810,
        void,
        ctor_1,
        app::Func_2_System_Collections_Generic_KeyValuePair_2_UnityEngine_Rect_* this_ptr,
        app::Object* object,
        void* method_1
    )
    IL2CPP_REGISTER_METHOD(
        0x028867C0,
        app::Rect,
        Invoke_1,
        app::Func_2_System_Collections_Generic_KeyValuePair_2_UnityEngine_Rect_* this_ptr,
        app::KeyValuePair_2_System_Object_System_Int32_ arg
    )
    IL2CPP_REGISTER_METHOD(
        0x02F9E370,
        app::IAsyncResult*,
        BeginInvoke_1,
        app::Func_2_System_Collections_Generic_KeyValuePair_2_UnityEngine_Rect_* this_ptr,
        app::KeyValuePair_2_System_Object_System_Int32_ arg,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(
        0x01C7A680,
        app::Rect,
        EndInvoke_1,
        app::Func_2_System_Collections_Generic_KeyValuePair_2_UnityEngine_Rect_* this_ptr,
        app::IAsyncResult* result
    )
    IL2CPP_REGISTER_METHOD(
        0x00611810,
        void,
        ctor_2,
        app::Func_2_System_Collections_Generic_KeyValuePair_2_UnityEngine_Rect__1* this_ptr,
        app::Object* object,
        void* method_1
    )
    IL2CPP_REGISTER_METHOD(
        0x028867C0,
        app::Rect,
        Invoke_2,
        app::Func_2_System_Collections_Generic_KeyValuePair_2_UnityEngine_Rect__1* this_ptr,
        app::KeyValuePair_2_System_Object_System_Object_ arg
    )
    IL2CPP_REGISTER_METHOD(
        0x02F9E780,
        app::IAsyncResult*,
        BeginInvoke_2,
        app::Func_2_System_Collections_Generic_KeyValuePair_2_UnityEngine_Rect__1* this_ptr,
        app::KeyValuePair_2_System_Object_System_Object_ arg,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(
        0x01C7A680,
        app::Rect,
        EndInvoke_2,
        app::Func_2_System_Collections_Generic_KeyValuePair_2_UnityEngine_Rect__1* this_ptr,
        app::IAsyncResult* result
    )
} // namespace app::classes::System::Func_2_System_Collections_Generic_KeyValuePair_2_UnityEngine_Rect_
