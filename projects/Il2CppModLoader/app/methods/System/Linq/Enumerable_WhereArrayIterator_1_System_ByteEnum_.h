#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Linq::Enumerable_WhereArrayIterator_1_System_ByteEnum_ {
    IL2CPP_REGISTER_METHOD(0x02892980, void, ctor, (app::Enumerable_WhereArrayIterator_1_System_ByteEnum_ * this_ptr, app::ByteEnum__Enum__Array * source, app::Func_2_ByteEnum_Boolean_ * predicate))
    IL2CPP_REGISTER_METHOD(0x028929D0, app::Enumerable_Iterator_1_System_ByteEnum_ *, Clone, (app::Enumerable_WhereArrayIterator_1_System_ByteEnum_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0298BF00, bool, MoveNext, (app::Enumerable_WhereArrayIterator_1_System_ByteEnum_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0298BFE0, app::IEnumerable_1_System_ByteEnum_ *, Where, (app::Enumerable_WhereArrayIterator_1_System_ByteEnum_ * this_ptr, app::Func_2_ByteEnum_Boolean_ * predicate))
}
