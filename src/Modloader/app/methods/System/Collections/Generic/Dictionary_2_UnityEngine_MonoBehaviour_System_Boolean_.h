#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_UnityEngine_MonoBehaviour_System_Boolean_.h>
#include <Modloader/app/structs/MonoBehaviour.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_UnityEngine_MonoBehaviour_System_Boolean_ {
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, app::Dictionary_2_UnityEngine_MonoBehaviour_System_Boolean_* this_ptr, app::MonoBehaviour* key)
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, app::Dictionary_2_UnityEngine_MonoBehaviour_System_Boolean_* this_ptr, app::MonoBehaviour* key, bool value)
    IL2CPP_REGISTER_METHOD(
        0x02BC0F90,
        bool,
        TryGetValue,
        app::Dictionary_2_UnityEngine_MonoBehaviour_System_Boolean_* this_ptr,
        app::MonoBehaviour* key,
        bool* value
    )
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_UnityEngine_MonoBehaviour_System_Boolean_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_UnityEngine_MonoBehaviour_System_Boolean_
