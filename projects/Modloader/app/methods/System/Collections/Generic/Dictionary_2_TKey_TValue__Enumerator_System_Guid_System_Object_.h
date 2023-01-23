#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerator_System_Guid_System_Object___Boxed.h>
#include <Modloader/app/structs/Dictionary_2_System_Guid_System_Object_.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Guid_System_Object_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/DictionaryEntry.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__Enumerator_System_Guid_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x00133A30, void, ctor, (app::Dictionary_2_TKey_TValue_Enumerator_System_Guid_System_Object___Boxed * this_ptr, app::Dictionary_2_System_Guid_System_Object_* dictionary, int32_t get_enumerator_ret_type))
    IL2CPP_REGISTER_METHOD(0x00137130, bool, MoveNext, (app::Dictionary_2_TKey_TValue_Enumerator_System_Guid_System_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04742D28, Dictionary_2_TKey_TValue_Enumerator_System_Guid_System_Object__MoveNext__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00133A80, app::KeyValuePair_2_System_Guid_System_Object_, get_Current, (app::Dictionary_2_TKey_TValue_Enumerator_System_Guid_System_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, (app::Dictionary_2_TKey_TValue_Enumerator_System_Guid_System_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00137140, app::Object*, IEnumerator_get_Current, (app::Dictionary_2_TKey_TValue_Enumerator_System_Guid_System_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047915C8, Dictionary_2_TKey_TValue_Enumerator_System_Guid_System_Object__System_Collections_IEnumerator_get_Current__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00137150, void, IEnumerator_Reset, (app::Dictionary_2_TKey_TValue_Enumerator_System_Guid_System_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471B960, Dictionary_2_TKey_TValue_Enumerator_System_Guid_System_Object__System_Collections_IEnumerator_Reset__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00137230, app::DictionaryEntry, IDictionaryEnumerator_get_Entry, (app::Dictionary_2_TKey_TValue_Enumerator_System_Guid_System_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04784C80, Dictionary_2_TKey_TValue_Enumerator_System_Guid_System_Object__System_Collections_IDictionaryEnumerator_get_Entry__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001373B0, app::Object*, IDictionaryEnumerator_get_Key, (app::Dictionary_2_TKey_TValue_Enumerator_System_Guid_System_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04715760, Dictionary_2_TKey_TValue_Enumerator_System_Guid_System_Object__System_Collections_IDictionaryEnumerator_get_Key__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001374F0, app::Object*, IDictionaryEnumerator_get_Value, (app::Dictionary_2_TKey_TValue_Enumerator_System_Guid_System_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476D298, Dictionary_2_TKey_TValue_Enumerator_System_Guid_System_Object__System_Collections_IDictionaryEnumerator_get_Value__MethodInfo)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__Enumerator_System_Guid_System_Object_
