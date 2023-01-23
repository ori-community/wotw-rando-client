#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/IEnumerable_1_System_Object_.h>
#include <Modloader/app/structs/Enumerable_WhereEnumerableIterator_1_System_Collections_Generic_KeyValuePair_2_.h>
#include <Modloader/app/structs/Func_2_System_Collections_Generic_KeyValuePair_2_Object_.h>
#include <Modloader/app/structs/IEnumerable_1_KeyValuePair_2_System_Object_System_Object_.h>
#include <Modloader/app/structs/Func_2_System_Collections_Generic_KeyValuePair_2_Boolean__3.h>
#include <Modloader/app/structs/Enumerable_Iterator_1_System_Collections_Generic_KeyValuePair_2_.h>

namespace app::classes::System::Linq::Enumerable_WhereEnumerableIterator_1_System_Collections_Generic_KeyValuePair_2_ {
    IL2CPP_REGISTER_METHOD(0x00E77C70, app::IEnumerable_1_System_Object_*, Select, (app::Enumerable_WhereEnumerableIterator_1_System_Collections_Generic_KeyValuePair_2_ * this_ptr, app::Func_2_System_Collections_Generic_KeyValuePair_2_Object_* selector))
    IL2CPP_REGISTER_METHOD(0x02893370, void, ctor, (app::Enumerable_WhereEnumerableIterator_1_System_Collections_Generic_KeyValuePair_2_ * this_ptr, app::IEnumerable_1_KeyValuePair_2_System_Object_System_Object_* source, app::Func_2_System_Collections_Generic_KeyValuePair_2_Boolean__3* predicate))
    IL2CPP_REGISTER_METHOD(0x028933C0, app::Enumerable_Iterator_1_System_Collections_Generic_KeyValuePair_2_*, Clone, (app::Enumerable_WhereEnumerableIterator_1_System_Collections_Generic_KeyValuePair_2_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0298D010, void, Dispose, (app::Enumerable_WhereEnumerableIterator_1_System_Collections_Generic_KeyValuePair_2_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0298D0D0, bool, MoveNext, (app::Enumerable_WhereEnumerableIterator_1_System_Collections_Generic_KeyValuePair_2_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02893770, app::IEnumerable_1_KeyValuePair_2_System_Object_System_Object_*, Where, (app::Enumerable_WhereEnumerableIterator_1_System_Collections_Generic_KeyValuePair_2_ * this_ptr, app::Func_2_System_Collections_Generic_KeyValuePair_2_Boolean__3* predicate))
} // namespace app::classes::System::Linq::Enumerable_WhereEnumerableIterator_1_System_Collections_Generic_KeyValuePair_2_
