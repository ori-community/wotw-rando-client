#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/KeyValuePair_2_System_Int32_System_Boolean_.h>
#include <Modloader/app/structs/DictionaryEntry.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_System_Boolean_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerator_System_Int32_System_Boolean___Boxed.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__Enumerator_System_Int32_System_Boolean_ {
    IL2CPP_REGISTER_METHOD(0x00107C20, app::KeyValuePair_2_System_Int32_System_Boolean_, get_Current, (app::Dictionary_2_TKey_TValue_Enumerator_System_Int32_System_Boolean___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00138530, bool, MoveNext, (app::Dictionary_2_TKey_TValue_Enumerator_System_Int32_System_Boolean___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, (app::Dictionary_2_TKey_TValue_Enumerator_System_Int32_System_Boolean___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00135C80, void, ctor, (app::Dictionary_2_TKey_TValue_Enumerator_System_Int32_System_Boolean___Boxed * this_ptr, app::Dictionary_2_System_Int32_System_Boolean_* dictionary, int32_t get_enumerator_ret_type))
    IL2CPP_REGISTER_METHOD(0x00138540, app::Object*, IEnumerator_get_Current, (app::Dictionary_2_TKey_TValue_Enumerator_System_Int32_System_Boolean___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00138550, void, IEnumerator_Reset, (app::Dictionary_2_TKey_TValue_Enumerator_System_Int32_System_Boolean___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00138620, app::DictionaryEntry, IDictionaryEnumerator_get_Entry, (app::Dictionary_2_TKey_TValue_Enumerator_System_Int32_System_Boolean___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00138650, app::Object*, IDictionaryEnumerator_get_Key, (app::Dictionary_2_TKey_TValue_Enumerator_System_Int32_System_Boolean___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00138790, app::Object*, IDictionaryEnumerator_get_Value, (app::Dictionary_2_TKey_TValue_Enumerator_System_Int32_System_Boolean___Boxed * this_ptr))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__Enumerator_System_Int32_System_Boolean_
