#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EnumerableSorter_1_System_Collections_Generic_KeyValuePair_2__1.h>
#include <Modloader/app/structs/Func_2_System_Collections_Generic_KeyValuePair_2_Int32__3.h>
#include <Modloader/app/structs/IComparer_1_System_Int32_.h>
#include <Modloader/app/structs/IEnumerable_1_KeyValuePair_2_System_Object_System_ValueTuple_2_.h>
#include <Modloader/app/structs/OrderedEnumerable_2_System_Collections_Generic_KeyValuePair_2_System_Int32_.h>

namespace app::classes::System::Linq::OrderedEnumerable_2_System_Collections_Generic_KeyValuePair_2_System_Int32_ {
    IL2CPP_REGISTER_METHOD(
        0x0254A0E0,
        void,
        ctor,
        app::OrderedEnumerable_2_System_Collections_Generic_KeyValuePair_2_System_Int32_* this_ptr,
        app::IEnumerable_1_KeyValuePair_2_System_Object_System_ValueTuple_2_* source,
        app::Func_2_System_Collections_Generic_KeyValuePair_2_Int32__3* key_selector,
        app::IComparer_1_System_Int32_* comparer,
        bool descending
    )
    IL2CPP_REGISTER_METHOD(
        0x02549A40,
        app::EnumerableSorter_1_System_Collections_Generic_KeyValuePair_2__1*,
        GetEnumerableSorter,
        app::OrderedEnumerable_2_System_Collections_Generic_KeyValuePair_2_System_Int32_* this_ptr,
        app::EnumerableSorter_1_System_Collections_Generic_KeyValuePair_2__1* next
    )
} // namespace app::classes::System::Linq::OrderedEnumerable_2_System_Collections_Generic_KeyValuePair_2_System_Int32_
