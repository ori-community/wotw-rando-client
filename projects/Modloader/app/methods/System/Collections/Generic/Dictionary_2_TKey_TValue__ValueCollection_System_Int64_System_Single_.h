#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_TKey_TValue_ValueCollection_System_Int64_System_Single_.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/Dictionary_2_System_Int64_System_Single_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Int64_System_Singl_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_System_Single_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Single__Array.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__ValueCollection_System_Int64_System_Single_ {
    IL2CPP_REGISTER_METHOD(0x026B8190, void, ctor, (app::Dictionary_2_TKey_TValue_ValueCollection_System_Int64_System_Single_ * this_ptr, app::Dictionary_2_System_Int64_System_Single_* dictionary))
    IL2CPP_REGISTER_METHOD(0x01A78360, app::Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Int64_System_Single_, GetEnumerator, (app::Dictionary_2_TKey_TValue_ValueCollection_System_Int64_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026B8260, void, CopyTo, (app::Dictionary_2_TKey_TValue_ValueCollection_System_Int64_System_Single_ * this_ptr, app::Single__Array* array, int32_t index))
    IL2CPP_REGISTER_METHOD(0x01A72C10, int32_t, get_Count, (app::Dictionary_2_TKey_TValue_ValueCollection_System_Int64_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, System_Collections_Generic_ICollection_TValue__get_IsReadOnly, (app::Dictionary_2_TKey_TValue_ValueCollection_System_Int64_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026B8490, void, System_Collections_Generic_ICollection_TValue__Add, (app::Dictionary_2_TKey_TValue_ValueCollection_System_Int64_System_Single_ * this_ptr, float item))
    IL2CPP_REGISTER_METHOD(0x026B84F0, bool, System_Collections_Generic_ICollection_TValue__Remove, (app::Dictionary_2_TKey_TValue_ValueCollection_System_Int64_System_Single_ * this_ptr, float item))
    IL2CPP_REGISTER_METHOD(0x026B8550, void, System_Collections_Generic_ICollection_TValue__Clear, (app::Dictionary_2_TKey_TValue_ValueCollection_System_Int64_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026AFA20, bool, System_Collections_Generic_ICollection_TValue__Contains, (app::Dictionary_2_TKey_TValue_ValueCollection_System_Int64_System_Single_ * this_ptr, float item))
    IL2CPP_REGISTER_METHOD(0x01A786F0, app::IEnumerator_1_System_Single_*, System_Collections_Generic_IEnumerable_TValue__GetEnumerator, (app::Dictionary_2_TKey_TValue_ValueCollection_System_Int64_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A786F0, app::IEnumerator*, IEnumerable_GetEnumerator, (app::Dictionary_2_TKey_TValue_ValueCollection_System_Int64_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026B85B0, void, ICollection_CopyTo, (app::Dictionary_2_TKey_TValue_ValueCollection_System_Int64_System_Single_ * this_ptr, app::Array* array, int32_t index))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (app::Dictionary_2_TKey_TValue_ValueCollection_System_Int64_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026B8A10, app::Object*, ICollection_get_SyncRoot, (app::Dictionary_2_TKey_TValue_ValueCollection_System_Int64_System_Single_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__ValueCollection_System_Int64_System_Single_
