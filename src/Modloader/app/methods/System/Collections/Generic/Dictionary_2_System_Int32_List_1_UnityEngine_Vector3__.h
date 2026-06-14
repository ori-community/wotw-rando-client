#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_Int32_List_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Vector3_.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_List_1_UnityEngine_Vector3__ {
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, app::Dictionary_2_System_Int32_List_1_UnityEngine_Vector3_* this_ptr, int32_t key)
    IL2CPP_REGISTER_METHOD(
        0x02BB8880,
        app::List_1_UnityEngine_Vector3_*,
        get_Item,
        app::Dictionary_2_System_Int32_List_1_UnityEngine_Vector3_* this_ptr,
        int32_t key
    )
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_System_Int32_List_1_UnityEngine_Vector3_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_List_1_UnityEngine_Vector3__
