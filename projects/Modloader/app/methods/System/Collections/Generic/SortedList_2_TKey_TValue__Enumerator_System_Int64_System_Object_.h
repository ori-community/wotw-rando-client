#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SortedList_2_TKey_TValue_Enumerator_System_Int64_System_Object___Boxed.h>
#include <Modloader/app/structs/DictionaryEntry.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Int64_System_Object_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SortedList_2_System_Int64_System_Object_.h>

namespace app::classes::System::Collections::Generic::SortedList_2_TKey_TValue__Enumerator_System_Int64_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x0022BA80, void, ctor, (app::SortedList_2_TKey_TValue_Enumerator_System_Int64_System_Object___Boxed * this_ptr, app::SortedList_2_System_Int64_System_Object_* sorted_list, int32_t get_enumerator_ret_type))
    IL2CPP_REGISTER_METHOD(0x0022BAC0, void, Dispose, (app::SortedList_2_TKey_TValue_Enumerator_System_Int64_System_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0022BAE0, app::Object*, IDictionaryEnumerator_get_Key, (app::SortedList_2_TKey_TValue_Enumerator_System_Int64_System_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0022BC60, bool, MoveNext, (app::SortedList_2_TKey_TValue_Enumerator_System_Int64_System_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0022BC70, app::DictionaryEntry, IDictionaryEnumerator_get_Entry, (app::SortedList_2_TKey_TValue_Enumerator_System_Int64_System_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0022BCA0, app::KeyValuePair_2_System_Int64_System_Object_, get_Current, (app::SortedList_2_TKey_TValue_Enumerator_System_Int64_System_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0022BD00, app::Object*, IEnumerator_get_Current, (app::SortedList_2_TKey_TValue_Enumerator_System_Int64_System_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0022BD10, app::Object*, IDictionaryEnumerator_get_Value, (app::SortedList_2_TKey_TValue_Enumerator_System_Int64_System_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0022BE40, void, IEnumerator_Reset, (app::SortedList_2_TKey_TValue_Enumerator_System_Int64_System_Object___Boxed * this_ptr))
} // namespace app::classes::System::Collections::Generic::SortedList_2_TKey_TValue__Enumerator_System_Int64_System_Object_
