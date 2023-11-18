#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_UInt16_List_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerator_System_UInt16_List_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Vector3_.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_UInt16_List_1_UnityEngine_Vector3__ {
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_System_UInt16_List_1_UnityEngine_Vector3_ * this_ptr, uint16_t key))
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_System_UInt16_List_1_UnityEngine_Vector3_ * this_ptr, uint16_t key, app::List_1_UnityEngine_Vector3_* value))
    IL2CPP_REGISTER_METHOD(0x02EFBF80, app::List_1_UnityEngine_Vector3_*, get_Item, (app::Dictionary_2_System_UInt16_List_1_UnityEngine_Vector3_ * this_ptr, uint16_t key))
    IL2CPP_REGISTER_METHOD(0x02BA5400, app::Dictionary_2_TKey_TValue_Enumerator_System_UInt16_List_1_UnityEngine_Vector3_, GetEnumerator, (app::Dictionary_2_System_UInt16_List_1_UnityEngine_Vector3_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_System_UInt16_List_1_UnityEngine_Vector3_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_UInt16_List_1_UnityEngine_Vector3__
