#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Linq::Enumerable_WhereEnumerableIterator_1_System_Byte_ {
    IL2CPP_REGISTER_METHOD(0x02892980, void, ctor, (app::Enumerable_WhereEnumerableIterator_1_System_Byte_ * this_ptr, app::IEnumerable_1_System_Byte_* source, app::Func_2_Byte_Boolean_* predicate))
    IL2CPP_REGISTER_METHOD(0x028929D0, app::Enumerable_Iterator_1_System_Byte_*, Clone, (app::Enumerable_WhereEnumerableIterator_1_System_Byte_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0298CB50, void, Dispose, (app::Enumerable_WhereEnumerableIterator_1_System_Byte_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0298CC10, bool, MoveNext, (app::Enumerable_WhereEnumerableIterator_1_System_Byte_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02892D60, app::IEnumerable_1_System_Byte_*, Where, (app::Enumerable_WhereEnumerableIterator_1_System_Byte_ * this_ptr, app::Func_2_Byte_Boolean_* predicate))
} // namespace app::classes::System::Linq::Enumerable_WhereEnumerableIterator_1_System_Byte_
