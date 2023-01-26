#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerator_System_Int32_PoolTransformPosition___Boxed.h>
#include <Modloader/app/structs/DictionaryEntry.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_PoolTransformPosition_.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Int32_PoolTransformPosition_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__Enumerator_System_Int32_PoolTransformPosition_ {
    IL2CPP_REGISTER_METHOD(0x001380F0, void, ctor, (app::Dictionary_2_TKey_TValue_Enumerator_System_Int32_PoolTransformPosition___Boxed * this_ptr, app::Dictionary_2_System_Int32_PoolTransformPosition_* dictionary, int32_t get_enumerator_ret_type))
    IL2CPP_REGISTER_METHOD(0x00138140, bool, MoveNext, (app::Dictionary_2_TKey_TValue_Enumerator_System_Int32_PoolTransformPosition___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00138150, app::KeyValuePair_2_System_Int32_PoolTransformPosition_, get_Current, (app::Dictionary_2_TKey_TValue_Enumerator_System_Int32_PoolTransformPosition___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, (app::Dictionary_2_TKey_TValue_Enumerator_System_Int32_PoolTransformPosition___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00138180, app::Object*, IEnumerator_get_Current, (app::Dictionary_2_TKey_TValue_Enumerator_System_Int32_PoolTransformPosition___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00138190, void, IEnumerator_Reset, (app::Dictionary_2_TKey_TValue_Enumerator_System_Int32_PoolTransformPosition___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00138270, app::DictionaryEntry, IDictionaryEnumerator_get_Entry, (app::Dictionary_2_TKey_TValue_Enumerator_System_Int32_PoolTransformPosition___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001382A0, app::Object*, IDictionaryEnumerator_get_Key, (app::Dictionary_2_TKey_TValue_Enumerator_System_Int32_PoolTransformPosition___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001383E0, app::Object*, IDictionaryEnumerator_get_Value, (app::Dictionary_2_TKey_TValue_Enumerator_System_Int32_PoolTransformPosition___Boxed * this_ptr))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__Enumerator_System_Int32_PoolTransformPosition_
