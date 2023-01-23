#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerator_System_Object_UnityEngine_Vector3___Boxed.h>
#include <Modloader/app/structs/Dictionary_2_System_Object_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Object_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/DictionaryEntry.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__Enumerator_System_Object_UnityEngine_Vector3_ {
    IL2CPP_REGISTER_METHOD(0x00133A30, void, ctor, (app::Dictionary_2_TKey_TValue_Enumerator_System_Object_UnityEngine_Vector3___Boxed * this_ptr, app::Dictionary_2_System_Object_UnityEngine_Vector3_* dictionary, int32_t get_enumerator_ret_type))
    IL2CPP_REGISTER_METHOD(0x0013F950, bool, MoveNext, (app::Dictionary_2_TKey_TValue_Enumerator_System_Object_UnityEngine_Vector3___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04706248, Dictionary_2_TKey_TValue_Enumerator_System_Object_UnityEngine_Vector3__MoveNext__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00133A80, app::KeyValuePair_2_System_Object_UnityEngine_Vector3_, get_Current, (app::Dictionary_2_TKey_TValue_Enumerator_System_Object_UnityEngine_Vector3___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, (app::Dictionary_2_TKey_TValue_Enumerator_System_Object_UnityEngine_Vector3___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0013F960, app::Object*, IEnumerator_get_Current, (app::Dictionary_2_TKey_TValue_Enumerator_System_Object_UnityEngine_Vector3___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474DA10, Dictionary_2_TKey_TValue_Enumerator_System_Object_UnityEngine_Vector3__System_Collections_IEnumerator_get_Current__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0013F970, void, IEnumerator_Reset, (app::Dictionary_2_TKey_TValue_Enumerator_System_Object_UnityEngine_Vector3___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04782C28, Dictionary_2_TKey_TValue_Enumerator_System_Object_UnityEngine_Vector3__System_Collections_IEnumerator_Reset__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0013FA50, app::DictionaryEntry, IDictionaryEnumerator_get_Entry, (app::Dictionary_2_TKey_TValue_Enumerator_System_Object_UnityEngine_Vector3___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047815A0, Dictionary_2_TKey_TValue_Enumerator_System_Object_UnityEngine_Vector3__System_Collections_IDictionaryEnumerator_get_Entry__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0013FBE0, app::Object*, IDictionaryEnumerator_get_Key, (app::Dictionary_2_TKey_TValue_Enumerator_System_Object_UnityEngine_Vector3___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04763928, Dictionary_2_TKey_TValue_Enumerator_System_Object_UnityEngine_Vector3__System_Collections_IDictionaryEnumerator_get_Key__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0013FCD0, app::Object*, IDictionaryEnumerator_get_Value, (app::Dictionary_2_TKey_TValue_Enumerator_System_Object_UnityEngine_Vector3___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471AA88, Dictionary_2_TKey_TValue_Enumerator_System_Object_UnityEngine_Vector3__System_Collections_IDictionaryEnumerator_get_Value__MethodInfo)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__Enumerator_System_Object_UnityEngine_Vector3_
