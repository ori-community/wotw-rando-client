#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Linq::Enumerable_WhereSelectListIterator_2_System_Collections_DictionaryEntry_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x02895170, void, ctor, (app::Enumerable_WhereSelectListIterator_2_System_Collections_DictionaryEntry_System_Object_ * this_ptr, app::List_1_System_Collections_DictionaryEntry_* source, app::Func_2_System_Collections_DictionaryEntry_Boolean_* predicate, app::Func_2_System_Collections_DictionaryEntry_Object_* selector))
    IL2CPP_REGISTER_METHOD(0x028951E0, app::Enumerable_Iterator_1_System_Object_*, Clone, (app::Enumerable_WhereSelectListIterator_2_System_Collections_DictionaryEntry_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0289A8E0, bool, MoveNext, (app::Enumerable_WhereSelectListIterator_2_System_Collections_DictionaryEntry_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0289A7C0, app::IEnumerable_1_System_Object_*, Where, (app::Enumerable_WhereSelectListIterator_2_System_Collections_DictionaryEntry_System_Object_ * this_ptr, app::Func_2_Object_Boolean_* predicate))
} // namespace app::classes::System::Linq::Enumerable_WhereSelectListIterator_2_System_Collections_DictionaryEntry_System_Object_
