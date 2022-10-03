#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Linq::Enumerable_WhereSelectEnumerableIterator_2_System_Int32Enum_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x00E775A0, app::IEnumerable_1_System_Int32_*, Select_1, (app::Enumerable_WhereSelectEnumerableIterator_2_System_Int32Enum_System_Object_ * this_ptr, app::Func_2_Object_Int32_* selector))
    IL2CPP_REGISTER_METHOD(0x00E775A0, app::IEnumerable_1_System_Object_*, Select_2, (app::Enumerable_WhereSelectEnumerableIterator_2_System_Int32Enum_System_Object_ * this_ptr, app::Func_2_Object_Object_* selector))
    IL2CPP_REGISTER_METHOD(0x00E775A0, app::IEnumerable_1_System_Single_*, Select_3, (app::Enumerable_WhereSelectEnumerableIterator_2_System_Int32Enum_System_Object_ * this_ptr, app::Func_2_Object_Single_* selector))
    IL2CPP_REGISTER_METHOD(0x00E775A0, app::IEnumerable_1_UnityEngine_Rect_*, Select_4, (app::Enumerable_WhereSelectEnumerableIterator_2_System_Int32Enum_System_Object_ * this_ptr, app::Func_2_Object_UnityEngine_Rect_* selector))
    IL2CPP_REGISTER_METHOD(0x02895170, void, ctor, (app::Enumerable_WhereSelectEnumerableIterator_2_System_Int32Enum_System_Object_ * this_ptr, app::IEnumerable_1_System_Int32Enum_* source, app::Func_2_Int32Enum_Boolean_* predicate, app::Func_2_Int32Enum_Object_* selector))
    IL2CPP_REGISTER_METHOD(0x028951E0, app::Enumerable_Iterator_1_System_Object_*, Clone, (app::Enumerable_WhereSelectEnumerableIterator_2_System_Int32Enum_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x028986A0, void, Dispose, (app::Enumerable_WhereSelectEnumerableIterator_2_System_Int32Enum_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02898760, bool, MoveNext, (app::Enumerable_WhereSelectEnumerableIterator_2_System_Int32Enum_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02896570, app::IEnumerable_1_System_Object_*, Where, (app::Enumerable_WhereSelectEnumerableIterator_2_System_Int32Enum_System_Object_ * this_ptr, app::Func_2_Object_Boolean_* predicate))
} // namespace app::classes::System::Linq::Enumerable_WhereSelectEnumerableIterator_2_System_Int32Enum_System_Object_
