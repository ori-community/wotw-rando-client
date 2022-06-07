#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Linq::Enumerable_WhereEnumerableIterator_1_System_Boolean_ {
    IL2CPP_REGISTER_METHOD(0x02892980, void, ctor, (app::Enumerable_WhereEnumerableIterator_1_System_Boolean_ * this_ptr, app::IEnumerable_1_System_Boolean_ * source, app::Func_2_Boolean_Boolean_ * predicate))
    IL2CPP_REGISTER_METHOD(0x028929D0, app::Enumerable_Iterator_1_System_Boolean_ *, Clone, (app::Enumerable_WhereEnumerableIterator_1_System_Boolean_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0298C8F0, void, Dispose, (app::Enumerable_WhereEnumerableIterator_1_System_Boolean_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0298C9B0, bool, MoveNext, (app::Enumerable_WhereEnumerableIterator_1_System_Boolean_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02892D60, app::IEnumerable_1_System_Boolean_ *, Where, (app::Enumerable_WhereEnumerableIterator_1_System_Boolean_ * this_ptr, app::Func_2_Boolean_Boolean_ * predicate))
}
