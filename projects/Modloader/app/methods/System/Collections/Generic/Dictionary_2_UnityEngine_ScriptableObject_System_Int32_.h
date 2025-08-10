#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_UnityEngine_ScriptableObject_System_Int32_.h>
#include <Modloader/app/structs/ScriptableObject.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_UnityEngine_ScriptableObject_System_Int32_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_UnityEngine_ScriptableObject_System_Int32_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, app::Dictionary_2_UnityEngine_ScriptableObject_System_Int32_* this_ptr, app::ScriptableObject* key)
    IL2CPP_REGISTER_METHOD(
        0x02BAC170,
        void,
        Add,
        app::Dictionary_2_UnityEngine_ScriptableObject_System_Int32_* this_ptr,
        app::ScriptableObject* key,
        int32_t value
    )
    IL2CPP_REGISTER_METHOD(0x02BCDB30, bool, Remove, app::Dictionary_2_UnityEngine_ScriptableObject_System_Int32_* this_ptr, app::ScriptableObject* key)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_UnityEngine_ScriptableObject_System_Int32_
