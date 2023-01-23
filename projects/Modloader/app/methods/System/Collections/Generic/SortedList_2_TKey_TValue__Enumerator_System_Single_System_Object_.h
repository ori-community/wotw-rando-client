#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SortedList_2_TKey_TValue_Enumerator_System_Single_System_Object___Boxed.h>
#include <Modloader/app/structs/SortedList_2_System_Single_System_Object_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/DictionaryEntry.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Single_System_Object_.h>

namespace app::classes::System::Collections::Generic::SortedList_2_TKey_TValue__Enumerator_System_Single_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x0022B5F0, void, ctor, (app::SortedList_2_TKey_TValue_Enumerator_System_Single_System_Object___Boxed * this_ptr, app::SortedList_2_System_Single_System_Object_* sorted_list, int32_t get_enumerator_ret_type))
    IL2CPP_REGISTER_METHOD(0x0022B630, void, Dispose, (app::SortedList_2_TKey_TValue_Enumerator_System_Single_System_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0022C3C0, app::Object*, IDictionaryEnumerator_get_Key, (app::SortedList_2_TKey_TValue_Enumerator_System_Single_System_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473C1C0, SortedList_2_TKey_TValue_Enumerator_System_Single_System_Object__System_Collections_IDictionaryEnumerator_get_Key__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0022C540, bool, MoveNext, (app::SortedList_2_TKey_TValue_Enumerator_System_Single_System_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478BEC0, SortedList_2_TKey_TValue_Enumerator_System_Single_System_Object__MoveNext__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0022C550, app::DictionaryEntry, IDictionaryEnumerator_get_Entry, (app::SortedList_2_TKey_TValue_Enumerator_System_Single_System_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04770BF8, SortedList_2_TKey_TValue_Enumerator_System_Single_System_Object__System_Collections_IDictionaryEnumerator_get_Entry__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0022C580, app::KeyValuePair_2_System_Single_System_Object_, get_Current, (app::SortedList_2_TKey_TValue_Enumerator_System_Single_System_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0022C600, app::Object*, IEnumerator_get_Current, (app::SortedList_2_TKey_TValue_Enumerator_System_Single_System_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04777C80, SortedList_2_TKey_TValue_Enumerator_System_Single_System_Object__System_Collections_IEnumerator_get_Current__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0022C610, app::Object*, IDictionaryEnumerator_get_Value, (app::SortedList_2_TKey_TValue_Enumerator_System_Single_System_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472B258, SortedList_2_TKey_TValue_Enumerator_System_Single_System_Object__System_Collections_IDictionaryEnumerator_get_Value__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0022C740, void, IEnumerator_Reset, (app::SortedList_2_TKey_TValue_Enumerator_System_Single_System_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476C448, SortedList_2_TKey_TValue_Enumerator_System_Single_System_Object__System_Collections_IEnumerator_Reset__MethodInfo)
} // namespace app::classes::System::Collections::Generic::SortedList_2_TKey_TValue__Enumerator_System_Single_System_Object_
