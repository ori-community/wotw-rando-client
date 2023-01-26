#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/OrderedEnumerable_2_System_Collections_Generic_KeyValuePair_2_System_Single_.h>
#include <Modloader/app/structs/EnumerableSorter_1_System_Collections_Generic_KeyValuePair_2_.h>
#include <Modloader/app/structs/Func_2_System_Collections_Generic_KeyValuePair_2_Single__3.h>
#include <Modloader/app/structs/IComparer_1_System_Single_.h>
#include <Modloader/app/structs/IEnumerable_1_KeyValuePair_2_System_Object_System_Single_.h>

namespace app::classes::System::Linq::OrderedEnumerable_2_System_Collections_Generic_KeyValuePair_2_System_Single_ {
    IL2CPP_REGISTER_METHOD(0x02549F90, void, ctor, (app::OrderedEnumerable_2_System_Collections_Generic_KeyValuePair_2_System_Single_ * this_ptr, app::IEnumerable_1_KeyValuePair_2_System_Object_System_Single_* source, app::Func_2_System_Collections_Generic_KeyValuePair_2_Single__3* key_selector, app::IComparer_1_System_Single_* comparer, bool descending))
    IL2CPP_REGISTER_METHOD(0x02549A40, app::EnumerableSorter_1_System_Collections_Generic_KeyValuePair_2_*, GetEnumerableSorter, (app::OrderedEnumerable_2_System_Collections_Generic_KeyValuePair_2_System_Single_ * this_ptr, app::EnumerableSorter_1_System_Collections_Generic_KeyValuePair_2_* next))
} // namespace app::classes::System::Linq::OrderedEnumerable_2_System_Collections_Generic_KeyValuePair_2_System_Single_
