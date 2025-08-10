#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Comparer_1_KeyValuePair_2_System_Object_System_Object_.h>
#include <Modloader/app/structs/Comparison_1_System_Collections_Generic_KeyValuePair_2__12.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Comparer_1_KeyValuePair_2_System_Object_System_Object__ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::Comparer_1_KeyValuePair_2_System_Object_System_Object_*, get_Default, )
    IL2CPP_REGISTER_METHOD(
        0x028BB6D0,
        app::Comparer_1_KeyValuePair_2_System_Object_System_Object_*,
        Create,
        app::Comparison_1_System_Collections_Generic_KeyValuePair_2__12* comparison
    )
    IL2CPP_REGISTER_METHOD(0x028BB8D0, app::Comparer_1_KeyValuePair_2_System_Object_System_Object_*, CreateComparer, )
    IL2CPP_REGISTER_METHOD(
        0x028085A0,
        int32_t,
        IComparer_Compare,
        app::Comparer_1_KeyValuePair_2_System_Object_System_Object_* this_ptr,
        app::Object* x,
        app::Object* y
    )
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, app::Comparer_1_KeyValuePair_2_System_Object_System_Object_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Comparer_1_KeyValuePair_2_System_Object_System_Object__
