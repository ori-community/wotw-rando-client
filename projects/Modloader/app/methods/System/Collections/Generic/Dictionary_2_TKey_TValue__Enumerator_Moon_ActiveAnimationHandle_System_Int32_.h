#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerator_Moon_ActiveAnimationHandle_System_Int32___Boxed.h>
#include <Modloader/app/structs/DictionaryEntry.h>
#include <Modloader/app/structs/Dictionary_2_Moon_ActiveAnimationHandle_System_Int32_.h>
#include <Modloader/app/structs/KeyValuePair_2_Moon_ActiveAnimationHandle_System_Int32_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__Enumerator_Moon_ActiveAnimationHandle_System_Int32_ {
    IL2CPP_REGISTER_METHOD(0x00133A30, void, ctor, (app::Dictionary_2_TKey_TValue_Enumerator_Moon_ActiveAnimationHandle_System_Int32___Boxed * this_ptr, app::Dictionary_2_Moon_ActiveAnimationHandle_System_Int32_* dictionary, int32_t get_enumerator_ret_type))
    IL2CPP_REGISTER_METHOD(0x00134350, bool, MoveNext, (app::Dictionary_2_TKey_TValue_Enumerator_Moon_ActiveAnimationHandle_System_Int32___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00133A80, app::KeyValuePair_2_Moon_ActiveAnimationHandle_System_Int32_, get_Current, (app::Dictionary_2_TKey_TValue_Enumerator_Moon_ActiveAnimationHandle_System_Int32___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, (app::Dictionary_2_TKey_TValue_Enumerator_Moon_ActiveAnimationHandle_System_Int32___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00134360, app::Object*, IEnumerator_get_Current, (app::Dictionary_2_TKey_TValue_Enumerator_Moon_ActiveAnimationHandle_System_Int32___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00134370, void, IEnumerator_Reset, (app::Dictionary_2_TKey_TValue_Enumerator_Moon_ActiveAnimationHandle_System_Int32___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00134450, app::DictionaryEntry, IDictionaryEnumerator_get_Entry, (app::Dictionary_2_TKey_TValue_Enumerator_Moon_ActiveAnimationHandle_System_Int32___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00134480, app::Object*, IDictionaryEnumerator_get_Key, (app::Dictionary_2_TKey_TValue_Enumerator_Moon_ActiveAnimationHandle_System_Int32___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001345C0, app::Object*, IDictionaryEnumerator_get_Value, (app::Dictionary_2_TKey_TValue_Enumerator_Moon_ActiveAnimationHandle_System_Int32___Boxed * this_ptr))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__Enumerator_Moon_ActiveAnimationHandle_System_Int32_
