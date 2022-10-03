#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Linq::Enumerable_WhereSelectListIterator_2_System_Int32Enum_System_Int32_ {
    IL2CPP_REGISTER_METHOD(0x02895170, void, ctor, (app::Enumerable_WhereSelectListIterator_2_System_Int32Enum_System_Int32_ * this_ptr, app::List_1_System_Int32Enum_* source, app::Func_2_Int32Enum_Boolean_* predicate, app::Func_2_Int32Enum_Int32_* selector))
    IL2CPP_REGISTER_METHOD(0x028951E0, app::Enumerable_Iterator_1_System_Int32_*, Clone, (app::Enumerable_WhereSelectListIterator_2_System_Int32Enum_System_Int32_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0289B110, bool, MoveNext, (app::Enumerable_WhereSelectListIterator_2_System_Int32Enum_System_Int32_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0289A7C0, app::IEnumerable_1_System_Int32_*, Where, (app::Enumerable_WhereSelectListIterator_2_System_Int32Enum_System_Int32_ * this_ptr, app::Func_2_Int32_Boolean_* predicate))
} // namespace app::classes::System::Linq::Enumerable_WhereSelectListIterator_2_System_Int32Enum_System_Int32_
