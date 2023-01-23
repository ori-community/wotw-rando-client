#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Enumerable_WhereEnumerableIterator_1_System_Single_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Single_.h>
#include <Modloader/app/structs/Func_2_Single_Boolean_.h>
#include <Modloader/app/structs/Enumerable_Iterator_1_System_Single_.h>

namespace app::classes::System::Linq::Enumerable_WhereEnumerableIterator_1_System_Single_ {
    IL2CPP_REGISTER_METHOD(0x02892980, void, ctor, (app::Enumerable_WhereEnumerableIterator_1_System_Single_ * this_ptr, app::IEnumerable_1_System_Single_* source, app::Func_2_Single_Boolean_* predicate))
    IL2CPP_REGISTER_METHOD(0x028929D0, app::Enumerable_Iterator_1_System_Single_*, Clone, (app::Enumerable_WhereEnumerableIterator_1_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02893100, void, Dispose, (app::Enumerable_WhereEnumerableIterator_1_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x028931C0, bool, MoveNext, (app::Enumerable_WhereEnumerableIterator_1_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02892D60, app::IEnumerable_1_System_Single_*, Where, (app::Enumerable_WhereEnumerableIterator_1_System_Single_ * this_ptr, app::Func_2_Single_Boolean_* predicate))
} // namespace app::classes::System::Linq::Enumerable_WhereEnumerableIterator_1_System_Single_
