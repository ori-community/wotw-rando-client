#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ConcurrentDictionary_2_TKey_TValue_DictionaryEnumerator_System_Guid_System_Object_.h>
#include <Modloader/app/structs/ConcurrentDictionary_2_System_Guid_System_Object_.h>
#include <Modloader/app/structs/DictionaryEntry.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Concurrent::ConcurrentDictionary_2_TKey_TValue__DictionaryEnumerator_System_Guid_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x02ADC8C0, void, ctor, (app::ConcurrentDictionary_2_TKey_TValue_DictionaryEnumerator_System_Guid_System_Object_ * this_ptr, app::ConcurrentDictionary_2_System_Guid_System_Object_* dictionary))
    IL2CPP_REGISTER_METHOD(0x02ADC910, app::DictionaryEntry, get_Entry, (app::ConcurrentDictionary_2_TKey_TValue_DictionaryEnumerator_System_Guid_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02ADCA30, app::Object*, get_Key, (app::ConcurrentDictionary_2_TKey_TValue_DictionaryEnumerator_System_Guid_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02ADCAE0, app::Object*, get_Value, (app::ConcurrentDictionary_2_TKey_TValue_DictionaryEnumerator_System_Guid_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02ADD320, app::Object*, get_Current, (app::ConcurrentDictionary_2_TKey_TValue_DictionaryEnumerator_System_Guid_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02ADD3E0, bool, MoveNext, (app::ConcurrentDictionary_2_TKey_TValue_DictionaryEnumerator_System_Guid_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02ADD470, void, Reset, (app::ConcurrentDictionary_2_TKey_TValue_DictionaryEnumerator_System_Guid_System_Object_ * this_ptr))
} // namespace app::classes::System::Collections::Concurrent::ConcurrentDictionary_2_TKey_TValue__DictionaryEnumerator_System_Guid_System_Object_
