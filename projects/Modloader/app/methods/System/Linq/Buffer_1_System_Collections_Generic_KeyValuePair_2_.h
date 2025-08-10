#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Buffer_1_System_Collections_Generic_KeyValuePair_2__1__Boxed.h>
#include <Modloader/app/structs/Buffer_1_System_Collections_Generic_KeyValuePair_2__2__Boxed.h>
#include <Modloader/app/structs/Buffer_1_System_Collections_Generic_KeyValuePair_2__3__Boxed.h>
#include <Modloader/app/structs/Buffer_1_System_Collections_Generic_KeyValuePair_2___Boxed.h>
#include <Modloader/app/structs/IEnumerable_1_KeyValuePair_2_System_Int32Enum_System_Object_.h>
#include <Modloader/app/structs/IEnumerable_1_KeyValuePair_2_System_Object_System_Int32_.h>
#include <Modloader/app/structs/IEnumerable_1_KeyValuePair_2_System_Object_System_Single_.h>
#include <Modloader/app/structs/IEnumerable_1_KeyValuePair_2_System_Object_System_ValueTuple_2_.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Int32Enum_System_Object___Array.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Object_System_Int32___Array.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Object_System_Single___Array.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Object_System_ValueTuple_2___Array.h>

namespace app::classes::System::Linq::Buffer_1_System_Collections_Generic_KeyValuePair_2_ {
    IL2CPP_REGISTER_METHOD(
        0x00218BC0,
        void,
        ctor_1,
        app::Buffer_1_System_Collections_Generic_KeyValuePair_2___Boxed* this_ptr,
        app::IEnumerable_1_KeyValuePair_2_System_Int32Enum_System_Object_* source
    )
    IL2CPP_REGISTER_METHOD(
        0x00218A90,
        app::KeyValuePair_2_System_Int32Enum_System_Object___Array*,
        ToArray_1,
        app::Buffer_1_System_Collections_Generic_KeyValuePair_2___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00218BD0,
        void,
        ctor_2,
        app::Buffer_1_System_Collections_Generic_KeyValuePair_2__1__Boxed* this_ptr,
        app::IEnumerable_1_KeyValuePair_2_System_Object_System_Int32_* source
    )
    IL2CPP_REGISTER_METHOD(
        0x00218A90,
        app::KeyValuePair_2_System_Object_System_Int32___Array*,
        ToArray_2,
        app::Buffer_1_System_Collections_Generic_KeyValuePair_2__1__Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00218BE0,
        void,
        ctor_3,
        app::Buffer_1_System_Collections_Generic_KeyValuePair_2__2__Boxed* this_ptr,
        app::IEnumerable_1_KeyValuePair_2_System_Object_System_Single_* source
    )
    IL2CPP_REGISTER_METHOD(
        0x00218A90,
        app::KeyValuePair_2_System_Object_System_Single___Array*,
        ToArray_3,
        app::Buffer_1_System_Collections_Generic_KeyValuePair_2__2__Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00218BF0,
        void,
        ctor_4,
        app::Buffer_1_System_Collections_Generic_KeyValuePair_2__3__Boxed* this_ptr,
        app::IEnumerable_1_KeyValuePair_2_System_Object_System_ValueTuple_2_* source
    )
    IL2CPP_REGISTER_METHOD(
        0x00218A90,
        app::KeyValuePair_2_System_Object_System_ValueTuple_2___Array*,
        ToArray_4,
        app::Buffer_1_System_Collections_Generic_KeyValuePair_2__3__Boxed* this_ptr
    )
} // namespace app::classes::System::Linq::Buffer_1_System_Collections_Generic_KeyValuePair_2_
