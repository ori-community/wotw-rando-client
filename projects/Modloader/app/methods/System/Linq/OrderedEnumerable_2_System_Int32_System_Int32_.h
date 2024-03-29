#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/OrderedEnumerable_2_System_Int32_System_Int32_.h>
#include <Modloader/app/structs/EnumerableSorter_1_System_Int32_.h>
#include <Modloader/app/structs/Func_2_Int32_Int32_.h>
#include <Modloader/app/structs/IComparer_1_System_Int32_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Int32_.h>

namespace app::classes::System::Linq::OrderedEnumerable_2_System_Int32_System_Int32_ {
    IL2CPP_REGISTER_METHOD(0x0254A230, void, ctor, (app::OrderedEnumerable_2_System_Int32_System_Int32_ * this_ptr, app::IEnumerable_1_System_Int32_* source, app::Func_2_Int32_Int32_* key_selector, app::IComparer_1_System_Int32_* comparer, bool descending))
    IL2CPP_REGISTER_METHOD(0x02549A40, app::EnumerableSorter_1_System_Int32_*, GetEnumerableSorter, (app::OrderedEnumerable_2_System_Int32_System_Int32_ * this_ptr, app::EnumerableSorter_1_System_Int32_* next))
} // namespace app::classes::System::Linq::OrderedEnumerable_2_System_Int32_System_Int32_
