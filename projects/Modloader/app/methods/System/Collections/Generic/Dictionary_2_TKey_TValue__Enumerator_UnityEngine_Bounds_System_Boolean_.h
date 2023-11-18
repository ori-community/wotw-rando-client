#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerator_UnityEngine_Bounds_System_Boolean___Boxed.h>
#include <Modloader/app/structs/DictionaryEntry.h>
#include <Modloader/app/structs/Dictionary_2_UnityEngine_Bounds_System_Boolean_.h>
#include <Modloader/app/structs/KeyValuePair_2_UnityEngine_Bounds_System_Boolean_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__Enumerator_UnityEngine_Bounds_System_Boolean_ {
    IL2CPP_REGISTER_METHOD(0x00142590, void, ctor, (app::Dictionary_2_TKey_TValue_Enumerator_UnityEngine_Bounds_System_Boolean___Boxed * this_ptr, app::Dictionary_2_UnityEngine_Bounds_System_Boolean_* dictionary, int32_t get_enumerator_ret_type))
    IL2CPP_REGISTER_METHOD(0x001425D0, bool, MoveNext, (app::Dictionary_2_TKey_TValue_Enumerator_UnityEngine_Bounds_System_Boolean___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001425E0, app::KeyValuePair_2_UnityEngine_Bounds_System_Boolean_, get_Current, (app::Dictionary_2_TKey_TValue_Enumerator_UnityEngine_Bounds_System_Boolean___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, (app::Dictionary_2_TKey_TValue_Enumerator_UnityEngine_Bounds_System_Boolean___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00142600, app::Object*, IEnumerator_get_Current, (app::Dictionary_2_TKey_TValue_Enumerator_UnityEngine_Bounds_System_Boolean___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00142610, void, IEnumerator_Reset, (app::Dictionary_2_TKey_TValue_Enumerator_UnityEngine_Bounds_System_Boolean___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001426F0, app::DictionaryEntry, IDictionaryEnumerator_get_Entry, (app::Dictionary_2_TKey_TValue_Enumerator_UnityEngine_Bounds_System_Boolean___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00142720, app::Object*, IDictionaryEnumerator_get_Key, (app::Dictionary_2_TKey_TValue_Enumerator_UnityEngine_Bounds_System_Boolean___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00142870, app::Object*, IDictionaryEnumerator_get_Value, (app::Dictionary_2_TKey_TValue_Enumerator_UnityEngine_Bounds_System_Boolean___Boxed * this_ptr))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__Enumerator_UnityEngine_Bounds_System_Boolean_
