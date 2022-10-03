#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Linq::Enumerable_WhereListIterator_1_System_Int32_ {
    IL2CPP_REGISTER_METHOD(0x00E77D90, app::IEnumerable_1_System_Byte_*, Select, (app::Enumerable_WhereListIterator_1_System_Int32_ * this_ptr, app::Func_2_Int32_Byte_* selector))
    IL2CPP_REGISTER_METHOD(0x02892980, void, ctor, (app::Enumerable_WhereListIterator_1_System_Int32_ * this_ptr, app::List_1_System_Int32_* source, app::Func_2_Int32_Boolean_* predicate))
    IL2CPP_REGISTER_METHOD(0x028929D0, app::Enumerable_Iterator_1_System_Int32_*, Clone, (app::Enumerable_WhereListIterator_1_System_Int32_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02894960, bool, MoveNext, (app::Enumerable_WhereListIterator_1_System_Int32_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x028945D0, app::IEnumerable_1_System_Int32_*, Where, (app::Enumerable_WhereListIterator_1_System_Int32_ * this_ptr, app::Func_2_Int32_Boolean_* predicate))
} // namespace app::classes::System::Linq::Enumerable_WhereListIterator_1_System_Int32_
