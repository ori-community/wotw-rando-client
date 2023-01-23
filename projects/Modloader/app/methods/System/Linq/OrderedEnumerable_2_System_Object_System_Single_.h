#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/OrderedEnumerable_2_System_Object_System_Single_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Object_.h>
#include <Modloader/app/structs/Func_2_Object_Single_.h>
#include <Modloader/app/structs/IComparer_1_System_Single_.h>
#include <Modloader/app/structs/EnumerableSorter_1_System_Object_.h>

namespace app::classes::System::Linq::OrderedEnumerable_2_System_Object_System_Single_ {
    IL2CPP_REGISTER_METHOD(0x0254A8C0, void, ctor, (app::OrderedEnumerable_2_System_Object_System_Single_ * this_ptr, app::IEnumerable_1_System_Object_* source, app::Func_2_Object_Single_* key_selector, app::IComparer_1_System_Single_* comparer, bool descending))
    IL2CPP_REGISTER_METHODINFO(0x047357B0, OrderedEnumerable_2_System_Object_System_Single___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02549A40, app::EnumerableSorter_1_System_Object_*, GetEnumerableSorter, (app::OrderedEnumerable_2_System_Object_System_Single_ * this_ptr, app::EnumerableSorter_1_System_Object_* next))
} // namespace app::classes::System::Linq::OrderedEnumerable_2_System_Object_System_Single_
