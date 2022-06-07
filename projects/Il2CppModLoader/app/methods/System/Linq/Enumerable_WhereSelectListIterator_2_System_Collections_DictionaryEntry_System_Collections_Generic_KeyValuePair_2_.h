#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Linq::Enumerable_WhereSelectListIterator_2_System_Collections_DictionaryEntry_System_Collections_Generic_KeyValuePair_2_ {
    IL2CPP_REGISTER_METHOD(0x00E776D0, app::IEnumerable_1_System_Object_ *, Select, (app::Enumerable_WhereSelectListIterator_2_System_Collections_DictionaryEntry_System_Collections_Generic_KeyValuePair_2_ * this_ptr, app::Func_2_System_Collections_Generic_KeyValuePair_2_Object_ * selector))
    IL2CPP_REGISTER_METHOD(0x02894D90, void, ctor, (app::Enumerable_WhereSelectListIterator_2_System_Collections_DictionaryEntry_System_Collections_Generic_KeyValuePair_2_ * this_ptr, app::List_1_System_Collections_DictionaryEntry_ * source, app::Func_2_System_Collections_DictionaryEntry_Boolean_ * predicate, app::Func_2_System_Collections_DictionaryEntry_System_Collections_Generic_KeyValuePair_2_ * selector))
    IL2CPP_REGISTER_METHOD(0x02894E00, app::Enumerable_Iterator_1_System_Collections_Generic_KeyValuePair_2_ *, Clone, (app::Enumerable_WhereSelectListIterator_2_System_Collections_DictionaryEntry_System_Collections_Generic_KeyValuePair_2_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0289A5D0, bool, MoveNext, (app::Enumerable_WhereSelectListIterator_2_System_Collections_DictionaryEntry_System_Collections_Generic_KeyValuePair_2_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0289A7C0, app::IEnumerable_1_KeyValuePair_2_System_Object_System_Object_ *, Where, (app::Enumerable_WhereSelectListIterator_2_System_Collections_DictionaryEntry_System_Collections_Generic_KeyValuePair_2_ * this_ptr, app::Func_2_System_Collections_Generic_KeyValuePair_2_Boolean__3 * predicate))
}
