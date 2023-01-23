#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/IEnumerable_1_System_Byte_.h>
#include <Modloader/app/structs/Enumerable_WhereSelectArrayIterator_2_System_Object_System_Int32_.h>
#include <Modloader/app/structs/Func_2_Int32_Byte_.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/Func_2_Object_Boolean_.h>
#include <Modloader/app/structs/Func_2_Object_Int32_.h>
#include <Modloader/app/structs/Enumerable_Iterator_1_System_Int32_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Int32_.h>
#include <Modloader/app/structs/Func_2_Int32_Boolean_.h>

namespace app::classes::System::Linq::Enumerable_WhereSelectArrayIterator_2_System_Object_System_Int32_ {
    IL2CPP_REGISTER_METHOD(0x00E775A0, app::IEnumerable_1_System_Byte_*, Select, (app::Enumerable_WhereSelectArrayIterator_2_System_Object_System_Int32_ * this_ptr, app::Func_2_Int32_Byte_* selector))
    IL2CPP_REGISTER_METHOD(0x02895170, void, ctor, (app::Enumerable_WhereSelectArrayIterator_2_System_Object_System_Int32_ * this_ptr, app::Object__Array* source, app::Func_2_Object_Boolean_* predicate, app::Func_2_Object_Int32_* selector))
    IL2CPP_REGISTER_METHOD(0x028951E0, app::Enumerable_Iterator_1_System_Int32_*, Clone, (app::Enumerable_WhereSelectArrayIterator_2_System_Object_System_Int32_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02895C60, bool, MoveNext, (app::Enumerable_WhereSelectArrayIterator_2_System_Object_System_Int32_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02895050, app::IEnumerable_1_System_Int32_*, Where, (app::Enumerable_WhereSelectArrayIterator_2_System_Object_System_Int32_ * this_ptr, app::Func_2_Int32_Boolean_* predicate))
} // namespace app::classes::System::Linq::Enumerable_WhereSelectArrayIterator_2_System_Object_System_Int32_
