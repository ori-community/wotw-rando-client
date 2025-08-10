#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/KeyValuePair_2_System_ValueTuple_2_System_ValueTuple_3__1__Boxed.h>
#include <Modloader/app/structs/KeyValuePair_2_System_ValueTuple_2_System_ValueTuple_3___Boxed.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/ValueTuple_2_Object_Object_.h>
#include <Modloader/app/structs/ValueTuple_2_String_String_.h>
#include <Modloader/app/structs/ValueTuple_3_Int32_Object_Int32_.h>
#include <Modloader/app/structs/ValueTuple_3_Int32_System_Collections_Generic_List_1_Int32_.h>

namespace app::classes::System::Collections::Generic::KeyValuePair_2_System_ValueTuple_2_System_ValueTuple_3_ {
    IL2CPP_REGISTER_METHOD(
        0x00133A80,
        app::ValueTuple_3_Int32_System_Collections_Generic_List_1_Int32_,
        get_Value_1,
        app::KeyValuePair_2_System_ValueTuple_2_System_ValueTuple_3___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0010A980,
        app::ValueTuple_2_String_String_,
        get_Key_1,
        app::KeyValuePair_2_System_ValueTuple_2_System_ValueTuple_3___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00151FB0,
        void,
        ctor,
        app::KeyValuePair_2_System_ValueTuple_2_System_ValueTuple_3__1__Boxed* this_ptr,
        app::ValueTuple_2_Object_Object_ key,
        app::ValueTuple_3_Int32_Object_Int32_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x0010A980,
        app::ValueTuple_2_Object_Object_,
        get_Key_2,
        app::KeyValuePair_2_System_ValueTuple_2_System_ValueTuple_3__1__Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00133A80,
        app::ValueTuple_3_Int32_Object_Int32_,
        get_Value_2,
        app::KeyValuePair_2_System_ValueTuple_2_System_ValueTuple_3__1__Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x00151FD0, app::String*, ToString, app::KeyValuePair_2_System_ValueTuple_2_System_ValueTuple_3__1__Boxed* this_ptr)
} // namespace app::classes::System::Collections::Generic::KeyValuePair_2_System_ValueTuple_2_System_ValueTuple_3_
