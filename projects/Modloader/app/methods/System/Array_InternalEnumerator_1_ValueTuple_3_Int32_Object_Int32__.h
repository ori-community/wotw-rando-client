#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/Array_InternalEnumerator_1_ValueTuple_3_Int32_Object_Int32___Boxed.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ValueTuple_3_Int32_Object_Int32_.h>

namespace app::classes::System::Array_InternalEnumerator_1_ValueTuple_3_Int32_Object_Int32__ {
    IL2CPP_REGISTER_METHOD(0x00160580, void, ctor, app::Array_InternalEnumerator_1_ValueTuple_3_Int32_Object_Int32___Boxed* this_ptr, app::Array* array)
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, app::Array_InternalEnumerator_1_ValueTuple_3_Int32_Object_Int32___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00160590, bool, MoveNext, app::Array_InternalEnumerator_1_ValueTuple_3_Int32_Object_Int32___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0019EE90,
        app::ValueTuple_3_Int32_Object_Int32_,
        get_Current,
        app::Array_InternalEnumerator_1_ValueTuple_3_Int32_Object_Int32___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x00160610, void, IEnumerator_Reset, app::Array_InternalEnumerator_1_ValueTuple_3_Int32_Object_Int32___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0019EEC0, app::Object*, IEnumerator_get_Current, app::Array_InternalEnumerator_1_ValueTuple_3_Int32_Object_Int32___Boxed* this_ptr)
} // namespace app::classes::System::Array_InternalEnumerator_1_ValueTuple_3_Int32_Object_Int32__
