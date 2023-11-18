#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_UnityEngine_GameObject_System_Int32_.h>
#include <Modloader/app/structs/GameObject.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_UnityEngine_GameObject_System_Int32_ {
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_UnityEngine_GameObject_System_Int32_ * this_ptr, app::GameObject* key))
    IL2CPP_REGISTER_METHOD(0x02BAC140, void, set_Item, (app::Dictionary_2_UnityEngine_GameObject_System_Int32_ * this_ptr, app::GameObject* key, int32_t value))
    IL2CPP_REGISTER_METHOD(0x02BCC050, int32_t, get_Item, (app::Dictionary_2_UnityEngine_GameObject_System_Int32_ * this_ptr, app::GameObject* key))
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_UnityEngine_GameObject_System_Int32_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_UnityEngine_GameObject_System_Int32_
