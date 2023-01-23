#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_ValueCollection_System_Int32Enum_System_Single_.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32Enum_System_Single_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Int32Enum_System_Single_.h>
#include <Modloader/app/structs/Single__Array.h>
#include <Modloader/app/structs/IEnumerator_1_System_Single_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__ValueCollection_System_Int32Enum_System_Single_ {
    IL2CPP_REGISTER_METHOD(0x026B66E0, void, ctor, (app::Dictionary_2_TKey_TValue_ValueCollection_System_Int32Enum_System_Single_ * this_ptr, app::Dictionary_2_System_Int32Enum_System_Single_* dictionary))
    IL2CPP_REGISTER_METHODINFO(0x0477B460, Dictionary_2_TKey_TValue_ValueCollection_System_Int32Enum_System_Single___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A78360, app::Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Int32Enum_System_Single_, GetEnumerator, (app::Dictionary_2_TKey_TValue_ValueCollection_System_Int32Enum_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026B67B0, void, CopyTo, (app::Dictionary_2_TKey_TValue_ValueCollection_System_Int32Enum_System_Single_ * this_ptr, app::Single__Array* array, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04714E08, Dictionary_2_TKey_TValue_ValueCollection_System_Int32Enum_System_Single__CopyTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A72C10, int32_t, get_Count, (app::Dictionary_2_TKey_TValue_ValueCollection_System_Int32Enum_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, System_Collections_Generic_ICollection_TValue__get_IsReadOnly, (app::Dictionary_2_TKey_TValue_ValueCollection_System_Int32Enum_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026B69E0, void, System_Collections_Generic_ICollection_TValue__Add, (app::Dictionary_2_TKey_TValue_ValueCollection_System_Int32Enum_System_Single_ * this_ptr, float item))
    IL2CPP_REGISTER_METHODINFO(0x047672E0, Dictionary_2_TKey_TValue_ValueCollection_System_Int32Enum_System_Single__System_Collections_Generic_ICollection_TValue__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x026B6A40, bool, System_Collections_Generic_ICollection_TValue__Remove, (app::Dictionary_2_TKey_TValue_ValueCollection_System_Int32Enum_System_Single_ * this_ptr, float item))
    IL2CPP_REGISTER_METHODINFO(0x04754030, Dictionary_2_TKey_TValue_ValueCollection_System_Int32Enum_System_Single__System_Collections_Generic_ICollection_TValue__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x026B6AA0, void, System_Collections_Generic_ICollection_TValue__Clear, (app::Dictionary_2_TKey_TValue_ValueCollection_System_Int32Enum_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04775E20, Dictionary_2_TKey_TValue_ValueCollection_System_Int32Enum_System_Single__System_Collections_Generic_ICollection_TValue__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x026AFA20, bool, System_Collections_Generic_ICollection_TValue__Contains, (app::Dictionary_2_TKey_TValue_ValueCollection_System_Int32Enum_System_Single_ * this_ptr, float item))
    IL2CPP_REGISTER_METHOD(0x01A786F0, app::IEnumerator_1_System_Single_*, System_Collections_Generic_IEnumerable_TValue__GetEnumerator, (app::Dictionary_2_TKey_TValue_ValueCollection_System_Int32Enum_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A786F0, app::IEnumerator*, IEnumerable_GetEnumerator, (app::Dictionary_2_TKey_TValue_ValueCollection_System_Int32Enum_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026B6B00, void, ICollection_CopyTo, (app::Dictionary_2_TKey_TValue_ValueCollection_System_Int32Enum_System_Single_ * this_ptr, app::Array* array, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04713398, Dictionary_2_TKey_TValue_ValueCollection_System_Int32Enum_System_Single__System_Collections_ICollection_CopyTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (app::Dictionary_2_TKey_TValue_ValueCollection_System_Int32Enum_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026B6F50, app::Object*, ICollection_get_SyncRoot, (app::Dictionary_2_TKey_TValue_ValueCollection_System_Int32Enum_System_Single_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__ValueCollection_System_Int32Enum_System_Single_
