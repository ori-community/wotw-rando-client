#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Enumerable_Iterator_1_System_ByteEnum_.h>
#include <Modloader/app/structs/Enumerable_WhereEnumerableIterator_1_System_ByteEnum_.h>
#include <Modloader/app/structs/Func_2_ByteEnum_Boolean_.h>
#include <Modloader/app/structs/IEnumerable_1_System_ByteEnum_.h>

namespace app::classes::System::Linq::Enumerable_WhereEnumerableIterator_1_System_ByteEnum_ {
    IL2CPP_REGISTER_METHOD(
        0x02892980,
        void,
        ctor,
        app::Enumerable_WhereEnumerableIterator_1_System_ByteEnum_* this_ptr,
        app::IEnumerable_1_System_ByteEnum_* source,
        app::Func_2_ByteEnum_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(
        0x028929D0,
        app::Enumerable_Iterator_1_System_ByteEnum_*,
        Clone,
        app::Enumerable_WhereEnumerableIterator_1_System_ByteEnum_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x0298CDB0, void, Dispose, app::Enumerable_WhereEnumerableIterator_1_System_ByteEnum_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0298CE70, bool, MoveNext, app::Enumerable_WhereEnumerableIterator_1_System_ByteEnum_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02892D60,
        app::IEnumerable_1_System_ByteEnum_*,
        Where,
        app::Enumerable_WhereEnumerableIterator_1_System_ByteEnum_* this_ptr,
        app::Func_2_ByteEnum_Boolean_* predicate
    )
} // namespace app::classes::System::Linq::Enumerable_WhereEnumerableIterator_1_System_ByteEnum_
