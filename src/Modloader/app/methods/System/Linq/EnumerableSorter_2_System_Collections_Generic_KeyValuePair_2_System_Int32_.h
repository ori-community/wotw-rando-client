#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EnumerableSorter_1_System_Collections_Generic_KeyValuePair_2__1.h>
#include <Modloader/app/structs/EnumerableSorter_2_System_Collections_Generic_KeyValuePair_2_System_Int32_.h>
#include <Modloader/app/structs/Func_2_System_Collections_Generic_KeyValuePair_2_Int32__3.h>
#include <Modloader/app/structs/IComparer_1_System_Int32_.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Object_System_ValueTuple_2___Array.h>

namespace app::classes::System::Linq::EnumerableSorter_2_System_Collections_Generic_KeyValuePair_2_System_Int32_ {
    IL2CPP_REGISTER_METHOD(
        0x0289C9B0,
        void,
        ctor,
        app::EnumerableSorter_2_System_Collections_Generic_KeyValuePair_2_System_Int32_* this_ptr,
        app::Func_2_System_Collections_Generic_KeyValuePair_2_Int32__3* key_selector,
        app::IComparer_1_System_Int32_* comparer,
        bool descending,
        app::EnumerableSorter_1_System_Collections_Generic_KeyValuePair_2__1* next
    )
    IL2CPP_REGISTER_METHOD(
        0x0289D480,
        void,
        ComputeKeys,
        app::EnumerableSorter_2_System_Collections_Generic_KeyValuePair_2_System_Int32_* this_ptr,
        app::KeyValuePair_2_System_Object_System_ValueTuple_2___Array* elements,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x0289CE50,
        int32_t,
        CompareKeys,
        app::EnumerableSorter_2_System_Collections_Generic_KeyValuePair_2_System_Int32_* this_ptr,
        int32_t index1,
        int32_t index2
    )
} // namespace app::classes::System::Linq::EnumerableSorter_2_System_Collections_Generic_KeyValuePair_2_System_Int32_
