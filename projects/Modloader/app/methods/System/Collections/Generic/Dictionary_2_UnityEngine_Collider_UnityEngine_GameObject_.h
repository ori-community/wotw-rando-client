#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_UnityEngine_Collider_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/GameObject.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_UnityEngine_Collider_UnityEngine_GameObject_ {
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, (app::Dictionary_2_UnityEngine_Collider_UnityEngine_GameObject_ * this_ptr, app::Collider* key, app::GameObject** value))
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_UnityEngine_Collider_UnityEngine_GameObject_ * this_ptr, app::Collider* key, app::GameObject* value))
    IL2CPP_REGISTER_METHOD(0x02259DF0, void, ctor, (app::Dictionary_2_UnityEngine_Collider_UnityEngine_GameObject_ * this_ptr, int32_t capacity))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_UnityEngine_Collider_UnityEngine_GameObject_
