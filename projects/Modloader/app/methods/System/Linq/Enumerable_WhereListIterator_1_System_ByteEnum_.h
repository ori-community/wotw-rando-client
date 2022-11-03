#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Linq::Enumerable_WhereListIterator_1_System_ByteEnum_ {
    IL2CPP_REGISTER_METHOD(0x02892980, void, ctor, (app::Enumerable_WhereListIterator_1_System_ByteEnum_ * this_ptr, app::List_1_System_ByteEnum_* source, app::Func_2_ByteEnum_Boolean_* predicate))
    IL2CPP_REGISTER_METHOD(0x028929D0, app::Enumerable_Iterator_1_System_ByteEnum_*, Clone, (app::Enumerable_WhereListIterator_1_System_ByteEnum_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x028944D0, bool, MoveNext, (app::Enumerable_WhereListIterator_1_System_ByteEnum_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x028945D0, app::IEnumerable_1_System_ByteEnum_*, Where, (app::Enumerable_WhereListIterator_1_System_ByteEnum_ * this_ptr, app::Func_2_ByteEnum_Boolean_* predicate))
} // namespace app::classes::System::Linq::Enumerable_WhereListIterator_1_System_ByteEnum_
