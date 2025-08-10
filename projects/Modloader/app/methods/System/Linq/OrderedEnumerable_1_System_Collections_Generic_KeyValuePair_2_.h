#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_KeyValuePair_2_System_Object_System_Single_.h>
#include <Modloader/app/structs/IEnumerator_1_KeyValuePair_2_System_Object_System_ValueTuple_2_.h>
#include <Modloader/app/structs/OrderedEnumerable_1_System_Collections_Generic_KeyValuePair_2_.h>
#include <Modloader/app/structs/OrderedEnumerable_1_System_Collections_Generic_KeyValuePair_2__1.h>

namespace app::classes::System::Linq::OrderedEnumerable_1_System_Collections_Generic_KeyValuePair_2_ {
    IL2CPP_REGISTER_METHOD(
        0x01D09B00,
        app::IEnumerator_1_KeyValuePair_2_System_Object_System_Single_*,
        GetEnumerator_1,
        app::OrderedEnumerable_1_System_Collections_Generic_KeyValuePair_2_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x019F8810,
        app::IEnumerator*,
        IEnumerable_GetEnumerator_1,
        app::OrderedEnumerable_1_System_Collections_Generic_KeyValuePair_2_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor_1, app::OrderedEnumerable_1_System_Collections_Generic_KeyValuePair_2_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01D09B00,
        app::IEnumerator_1_KeyValuePair_2_System_Object_System_ValueTuple_2_*,
        GetEnumerator_2,
        app::OrderedEnumerable_1_System_Collections_Generic_KeyValuePair_2__1* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x019F8810,
        app::IEnumerator*,
        IEnumerable_GetEnumerator_2,
        app::OrderedEnumerable_1_System_Collections_Generic_KeyValuePair_2__1* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor_2, app::OrderedEnumerable_1_System_Collections_Generic_KeyValuePair_2__1* this_ptr)
} // namespace app::classes::System::Linq::OrderedEnumerable_1_System_Collections_Generic_KeyValuePair_2_
