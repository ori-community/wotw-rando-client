#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Linq::Enumerable_WhereArrayIterator_1_System_Int32_ {
    IL2CPP_REGISTER_METHOD(0x00E77D90, app::IEnumerable_1_System_Byte_ *, Select, (app::Enumerable_WhereArrayIterator_1_System_Int32_ * this_ptr, app::Func_2_Int32_Byte_ * selector))
    IL2CPP_REGISTER_METHOD(0x02892980, void, ctor, (app::Enumerable_WhereArrayIterator_1_System_Int32_ * this_ptr, app::Int32__Array * source, app::Func_2_Int32_Boolean_ * predicate))
    IL2CPP_REGISTER_METHOD(0x028929D0, app::Enumerable_Iterator_1_System_Int32_ *, Clone, (app::Enumerable_WhereArrayIterator_1_System_Int32_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0298C350, bool, MoveNext, (app::Enumerable_WhereArrayIterator_1_System_Int32_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0298BFE0, app::IEnumerable_1_System_Int32_ *, Where, (app::Enumerable_WhereArrayIterator_1_System_Int32_ * this_ptr, app::Func_2_Int32_Boolean_ * predicate))
}
