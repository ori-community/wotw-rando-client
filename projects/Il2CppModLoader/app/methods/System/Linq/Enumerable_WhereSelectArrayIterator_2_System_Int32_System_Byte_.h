#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Linq::Enumerable_WhereSelectArrayIterator_2_System_Int32_System_Byte_ {
    IL2CPP_REGISTER_METHOD(0x02895170, void, ctor, (app::Enumerable_WhereSelectArrayIterator_2_System_Int32_System_Byte_ * this_ptr, app::Int32__Array * source, app::Func_2_Int32_Boolean_ * predicate, app::Func_2_Int32_Byte_ * selector))
    IL2CPP_REGISTER_METHOD(0x028951E0, app::Enumerable_Iterator_1_System_Byte_ *, Clone, (app::Enumerable_WhereSelectArrayIterator_2_System_Int32_System_Byte_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02895660, bool, MoveNext, (app::Enumerable_WhereSelectArrayIterator_2_System_Int32_System_Byte_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02895050, app::IEnumerable_1_System_Byte_ *, Where, (app::Enumerable_WhereSelectArrayIterator_2_System_Int32_System_Byte_ * this_ptr, app::Func_2_Byte_Boolean_ * predicate))
}
