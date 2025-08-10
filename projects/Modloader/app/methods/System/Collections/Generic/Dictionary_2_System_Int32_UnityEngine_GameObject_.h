#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_Int32_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerator_System_Int32_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/GameObject.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_UnityEngine_GameObject_ {
    IL2CPP_REGISTER_METHOD(0x0283B2A0, int32_t, get_Count, app::Dictionary_2_System_Int32_UnityEngine_GameObject_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, app::Dictionary_2_System_Int32_UnityEngine_GameObject_* this_ptr, int32_t key, app::GameObject* value)
    IL2CPP_REGISTER_METHOD(
        0x02BA5400,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Int32_UnityEngine_GameObject_,
        GetEnumerator,
        app::Dictionary_2_System_Int32_UnityEngine_GameObject_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x02BBA360, bool, Remove, app::Dictionary_2_System_Int32_UnityEngine_GameObject_* this_ptr, int32_t key)
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_System_Int32_UnityEngine_GameObject_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0283B3E0,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UnityEngine_GameObject_*,
        get_Values,
        app::Dictionary_2_System_Int32_UnityEngine_GameObject_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, app::Dictionary_2_System_Int32_UnityEngine_GameObject_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_UnityEngine_GameObject_
