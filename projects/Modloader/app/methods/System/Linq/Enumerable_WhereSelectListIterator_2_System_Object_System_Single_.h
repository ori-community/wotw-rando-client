#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Enumerable_WhereSelectListIterator_2_System_Object_System_Single_.h>
#include <Modloader/app/structs/List_1_System_Object_.h>
#include <Modloader/app/structs/Func_2_Object_Boolean_.h>
#include <Modloader/app/structs/Func_2_Object_Single_.h>
#include <Modloader/app/structs/Enumerable_Iterator_1_System_Single_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Single_.h>
#include <Modloader/app/structs/Func_2_Single_Boolean_.h>

namespace app::classes::System::Linq::Enumerable_WhereSelectListIterator_2_System_Object_System_Single_ {
    IL2CPP_REGISTER_METHOD(0x02895170, void, ctor, (app::Enumerable_WhereSelectListIterator_2_System_Object_System_Single_ * this_ptr, app::List_1_System_Object_* source, app::Func_2_Object_Boolean_* predicate, app::Func_2_Object_Single_* selector))
    IL2CPP_REGISTER_METHOD(0x028951E0, app::Enumerable_Iterator_1_System_Single_*, Clone, (app::Enumerable_WhereSelectListIterator_2_System_Object_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0289B900, bool, MoveNext, (app::Enumerable_WhereSelectListIterator_2_System_Object_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0289A7C0, app::IEnumerable_1_System_Single_*, Where, (app::Enumerable_WhereSelectListIterator_2_System_Object_System_Single_ * this_ptr, app::Func_2_Single_Boolean_* predicate))
} // namespace app::classes::System::Linq::Enumerable_WhereSelectListIterator_2_System_Object_System_Single_
