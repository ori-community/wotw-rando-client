#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/Func_2_System_Collections_Generic_KeyValuePair_2_Single_.h>
#include <Modloader/app/structs/Func_2_System_Collections_Generic_KeyValuePair_2_Single__1.h>
#include <Modloader/app/structs/Func_2_System_Collections_Generic_KeyValuePair_2_Single__2.h>
#include <Modloader/app/structs/Func_2_System_Collections_Generic_KeyValuePair_2_Single__3.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Object_System_Int32_.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Object_System_Object_.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Object_System_Single_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Func_2_System_Collections_Generic_KeyValuePair_2_Single_ {
    IL2CPP_REGISTER_METHOD(
        0x00611810,
        void,
        ctor_1,
        app::Func_2_System_Collections_Generic_KeyValuePair_2_Single_* this_ptr,
        app::Object* object,
        void* method_1
    )
    IL2CPP_REGISTER_METHOD(
        0x00611810,
        void,
        ctor_2,
        app::Func_2_System_Collections_Generic_KeyValuePair_2_Single__1* this_ptr,
        app::Object* object,
        void* method_1
    )
    IL2CPP_REGISTER_METHOD(
        0x028862E0,
        float,
        Invoke_1,
        app::Func_2_System_Collections_Generic_KeyValuePair_2_Single__1* this_ptr,
        app::KeyValuePair_2_System_Object_System_Int32_ arg
    )
    IL2CPP_REGISTER_METHOD(
        0x02F9E2A0,
        app::IAsyncResult*,
        BeginInvoke_1,
        app::Func_2_System_Collections_Generic_KeyValuePair_2_Single__1* this_ptr,
        app::KeyValuePair_2_System_Object_System_Int32_ arg,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x028818E0, float, EndInvoke_1, app::Func_2_System_Collections_Generic_KeyValuePair_2_Single__1* this_ptr, app::IAsyncResult* result)
    IL2CPP_REGISTER_METHOD(
        0x00611810,
        void,
        ctor_3,
        app::Func_2_System_Collections_Generic_KeyValuePair_2_Single__2* this_ptr,
        app::Object* object,
        void* method_1
    )
    IL2CPP_REGISTER_METHOD(
        0x028862E0,
        float,
        Invoke_2,
        app::Func_2_System_Collections_Generic_KeyValuePair_2_Single__2* this_ptr,
        app::KeyValuePair_2_System_Object_System_Object_ arg
    )
    IL2CPP_REGISTER_METHOD(
        0x02F9E6B0,
        app::IAsyncResult*,
        BeginInvoke_2,
        app::Func_2_System_Collections_Generic_KeyValuePair_2_Single__2* this_ptr,
        app::KeyValuePair_2_System_Object_System_Object_ arg,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x028818E0, float, EndInvoke_2, app::Func_2_System_Collections_Generic_KeyValuePair_2_Single__2* this_ptr, app::IAsyncResult* result)
    IL2CPP_REGISTER_METHOD(
        0x00611810,
        void,
        ctor_4,
        app::Func_2_System_Collections_Generic_KeyValuePair_2_Single__3* this_ptr,
        app::Object* object,
        void* method_1
    )
    IL2CPP_REGISTER_METHOD(
        0x028862E0,
        float,
        Invoke_3,
        app::Func_2_System_Collections_Generic_KeyValuePair_2_Single__3* this_ptr,
        app::KeyValuePair_2_System_Object_System_Single_ arg
    )
    IL2CPP_REGISTER_METHOD(
        0x02F9E850,
        app::IAsyncResult*,
        BeginInvoke_3,
        app::Func_2_System_Collections_Generic_KeyValuePair_2_Single__3* this_ptr,
        app::KeyValuePair_2_System_Object_System_Single_ arg,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x028818E0, float, EndInvoke_3, app::Func_2_System_Collections_Generic_KeyValuePair_2_Single__3* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::System::Func_2_System_Collections_Generic_KeyValuePair_2_Single_
