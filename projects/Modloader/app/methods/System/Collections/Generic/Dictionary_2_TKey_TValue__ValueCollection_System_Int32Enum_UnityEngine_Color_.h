#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_TKey_TValue_ValueCollection_System_Int32Enum_UnityEngine_Color_.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/Color__Array.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32Enum_UnityEngine_Color_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValu_ValueCollectio_TKe_TValu_Enumerato_Syste_Int32Enu_UnityEngin_Colo_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_UnityEngine_Color_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__ValueCollection_System_Int32Enum_UnityEngine_Color_ {
    IL2CPP_REGISTER_METHOD(0x026B6FE0, void, ctor, (app::Dictionary_2_TKey_TValue_ValueCollection_System_Int32Enum_UnityEngine_Color_ * this_ptr, app::Dictionary_2_System_Int32Enum_UnityEngine_Color_* dictionary))
    IL2CPP_REGISTER_METHOD(0x01A7A830, app::Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Int32Enum_UnityEngine_Color_, GetEnumerator, (app::Dictionary_2_TKey_TValue_ValueCollection_System_Int32Enum_UnityEngine_Color_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026B70B0, void, CopyTo, (app::Dictionary_2_TKey_TValue_ValueCollection_System_Int32Enum_UnityEngine_Color_ * this_ptr, app::Color__Array* array, int32_t index))
    IL2CPP_REGISTER_METHOD(0x01A72C10, int32_t, get_Count, (app::Dictionary_2_TKey_TValue_ValueCollection_System_Int32Enum_UnityEngine_Color_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, System_Collections_Generic_ICollection_TValue__get_IsReadOnly, (app::Dictionary_2_TKey_TValue_ValueCollection_System_Int32Enum_UnityEngine_Color_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026B72E0, void, System_Collections_Generic_ICollection_TValue__Add, (app::Dictionary_2_TKey_TValue_ValueCollection_System_Int32Enum_UnityEngine_Color_ * this_ptr, app::Color item))
    IL2CPP_REGISTER_METHOD(0x026B7340, bool, System_Collections_Generic_ICollection_TValue__Remove, (app::Dictionary_2_TKey_TValue_ValueCollection_System_Int32Enum_UnityEngine_Color_ * this_ptr, app::Color item))
    IL2CPP_REGISTER_METHOD(0x026B73A0, void, System_Collections_Generic_ICollection_TValue__Clear, (app::Dictionary_2_TKey_TValue_ValueCollection_System_Int32Enum_UnityEngine_Color_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A7AB60, bool, System_Collections_Generic_ICollection_TValue__Contains, (app::Dictionary_2_TKey_TValue_ValueCollection_System_Int32Enum_UnityEngine_Color_ * this_ptr, app::Color item))
    IL2CPP_REGISTER_METHOD(0x01A7AC00, app::IEnumerator_1_UnityEngine_Color_*, System_Collections_Generic_IEnumerable_TValue__GetEnumerator, (app::Dictionary_2_TKey_TValue_ValueCollection_System_Int32Enum_UnityEngine_Color_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A7AC00, app::IEnumerator*, IEnumerable_GetEnumerator, (app::Dictionary_2_TKey_TValue_ValueCollection_System_Int32Enum_UnityEngine_Color_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026B7400, void, ICollection_CopyTo, (app::Dictionary_2_TKey_TValue_ValueCollection_System_Int32Enum_UnityEngine_Color_ * this_ptr, app::Array* array, int32_t index))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (app::Dictionary_2_TKey_TValue_ValueCollection_System_Int32Enum_UnityEngine_Color_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026B7840, app::Object*, ICollection_get_SyncRoot, (app::Dictionary_2_TKey_TValue_ValueCollection_System_Int32Enum_UnityEngine_Color_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__ValueCollection_System_Int32Enum_UnityEngine_Color_
