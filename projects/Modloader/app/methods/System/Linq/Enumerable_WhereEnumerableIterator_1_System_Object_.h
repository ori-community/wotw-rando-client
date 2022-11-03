#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Linq::Enumerable_WhereEnumerableIterator_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x02892980, void, ctor, (app::Enumerable_WhereEnumerableIterator_1_System_Object_ * this_ptr, app::IEnumerable_1_System_Object_* source, app::Func_2_Object_Boolean_* predicate))
    IL2CPP_REGISTER_METHOD(0x028929D0, app::Enumerable_Iterator_1_System_Object_*, Clone, (app::Enumerable_WhereEnumerableIterator_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02892EA0, void, Dispose, (app::Enumerable_WhereEnumerableIterator_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02892F60, bool, MoveNext, (app::Enumerable_WhereEnumerableIterator_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E77D90, app::IEnumerable_1_System_Object_*, Select_1, (app::Enumerable_WhereEnumerableIterator_1_System_Object_ * this_ptr, app::Func_2_Object_Object_* selector))
    IL2CPP_REGISTER_METHOD(0x02892D60, app::IEnumerable_1_System_Object_*, Where, (app::Enumerable_WhereEnumerableIterator_1_System_Object_ * this_ptr, app::Func_2_Object_Boolean_* predicate))
    IL2CPP_REGISTER_METHOD(0x00E77D90, app::IEnumerable_1_System_Int32_*, Select_2, (app::Enumerable_WhereEnumerableIterator_1_System_Object_ * this_ptr, app::Func_2_Object_Int32_* selector))
    IL2CPP_REGISTER_METHOD(0x00E77D90, app::IEnumerable_1_System_Single_*, Select_3, (app::Enumerable_WhereEnumerableIterator_1_System_Object_ * this_ptr, app::Func_2_Object_Single_* selector))
    IL2CPP_REGISTER_METHOD(0x00E77D90, app::IEnumerable_1_UnityEngine_Rect_*, Select_4, (app::Enumerable_WhereEnumerableIterator_1_System_Object_ * this_ptr, app::Func_2_Object_UnityEngine_Rect_* selector))
} // namespace app::classes::System::Linq::Enumerable_WhereEnumerableIterator_1_System_Object_
