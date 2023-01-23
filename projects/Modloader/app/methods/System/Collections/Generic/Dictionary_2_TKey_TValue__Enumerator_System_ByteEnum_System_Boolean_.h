#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Boolean___Boxed.h>
#include <Modloader/app/structs/Dictionary_2_System_ByteEnum_System_Boolean_.h>
#include <Modloader/app/structs/KeyValuePair_2_System_ByteEnum_System_Boolean_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/DictionaryEntry.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__Enumerator_System_ByteEnum_System_Boolean_ {
    IL2CPP_REGISTER_METHOD(0x001358A0, void, ctor, (app::Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Boolean___Boxed * this_ptr, app::Dictionary_2_System_ByteEnum_System_Boolean_* dictionary, int32_t get_enumerator_ret_type))
    IL2CPP_REGISTER_METHOD(0x001358D0, bool, MoveNext, (app::Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Boolean___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04769E60, Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Boolean__MoveNext__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001358E0, app::KeyValuePair_2_System_ByteEnum_System_Boolean_, get_Current, (app::Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Boolean___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, (app::Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Boolean___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001358F0, app::Object*, IEnumerator_get_Current, (app::Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Boolean___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04734308, Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Boolean__System_Collections_IEnumerator_get_Current__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00135900, void, IEnumerator_Reset, (app::Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Boolean___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04704970, Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Boolean__System_Collections_IEnumerator_Reset__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001359D0, app::DictionaryEntry, IDictionaryEnumerator_get_Entry, (app::Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Boolean___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04707F88, Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Boolean__System_Collections_IDictionaryEnumerator_get_Entry__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00135A00, app::Object*, IDictionaryEnumerator_get_Key, (app::Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Boolean___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476C2E0, Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Boolean__System_Collections_IDictionaryEnumerator_get_Key__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00135B40, app::Object*, IDictionaryEnumerator_get_Value, (app::Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Boolean___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470DD08, Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Boolean__System_Collections_IDictionaryEnumerator_get_Value__MethodInfo)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__Enumerator_System_ByteEnum_System_Boolean_
