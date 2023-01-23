#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Enumerable_WhereSelectEnumerableIterator_2_System_Int32_System_Byte_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Int32_.h>
#include <Modloader/app/structs/Func_2_Int32_Boolean_.h>
#include <Modloader/app/structs/Func_2_Int32_Byte_.h>
#include <Modloader/app/structs/Enumerable_Iterator_1_System_Byte_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Byte_.h>
#include <Modloader/app/structs/Func_2_Byte_Boolean_.h>

namespace app::classes::System::Linq::Enumerable_WhereSelectEnumerableIterator_2_System_Int32_System_Byte_ {
    IL2CPP_REGISTER_METHOD(0x02895170, void, ctor, (app::Enumerable_WhereSelectEnumerableIterator_2_System_Int32_System_Byte_ * this_ptr, app::IEnumerable_1_System_Int32_* source, app::Func_2_Int32_Boolean_* predicate, app::Func_2_Int32_Byte_* selector))
    IL2CPP_REGISTER_METHOD(0x028951E0, app::Enumerable_Iterator_1_System_Byte_*, Clone, (app::Enumerable_WhereSelectEnumerableIterator_2_System_Int32_System_Byte_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x028981A0, void, Dispose, (app::Enumerable_WhereSelectEnumerableIterator_2_System_Int32_System_Byte_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02898260, bool, MoveNext, (app::Enumerable_WhereSelectEnumerableIterator_2_System_Int32_System_Byte_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02896570, app::IEnumerable_1_System_Byte_*, Where, (app::Enumerable_WhereSelectEnumerableIterator_2_System_Int32_System_Byte_ * this_ptr, app::Func_2_Byte_Boolean_* predicate))
} // namespace app::classes::System::Linq::Enumerable_WhereSelectEnumerableIterator_2_System_Int32_System_Byte_
