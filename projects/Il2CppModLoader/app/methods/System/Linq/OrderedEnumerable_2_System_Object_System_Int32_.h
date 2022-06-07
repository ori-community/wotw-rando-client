#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Linq::OrderedEnumerable_2_System_Object_System_Int32_ {
    IL2CPP_REGISTER_METHOD(0x0254A4D0, void, ctor, (app::OrderedEnumerable_2_System_Object_System_Int32_ * this_ptr, app::IEnumerable_1_System_Object_ * source, app::Func_2_Object_Int32_ * key_selector, app::IComparer_1_System_Int32_ * comparer, bool descending))
    IL2CPP_REGISTER_METHODINFO(0x0471A338, OrderedEnumerable_2_System_Object_System_Int32___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02549A40, app::EnumerableSorter_1_System_Object_ *, GetEnumerableSorter, (app::OrderedEnumerable_2_System_Object_System_Int32_ * this_ptr, app::EnumerableSorter_1_System_Object_ * next))
}
