#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_UnityEngine_GameObject_LeashMarkEffect_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameObject_LeashMarkEffect_.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/LeashMarkEffect.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_UnityEngine_GameObject_LeashMarkEffect_ {
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_UnityEngine_GameObject_LeashMarkEffect_ * this_ptr, app::GameObject* key))
    IL2CPP_REGISTER_METHOD(0x02BD24D0, app::LeashMarkEffect*, get_Item, (app::Dictionary_2_UnityEngine_GameObject_LeashMarkEffect_ * this_ptr, app::GameObject* key))
    IL2CPP_REGISTER_METHOD(0x02BD3EC0, bool, Remove, (app::Dictionary_2_UnityEngine_GameObject_LeashMarkEffect_ * this_ptr, app::GameObject* key))
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_UnityEngine_GameObject_LeashMarkEffect_ * this_ptr, app::GameObject* key, app::LeashMarkEffect* value))
    IL2CPP_REGISTER_METHOD(0x0283B2B0, app::Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameObject_LeashMarkEffect_*, get_Keys, (app::Dictionary_2_UnityEngine_GameObject_LeashMarkEffect_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_UnityEngine_GameObject_LeashMarkEffect_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_UnityEngine_GameObject_LeashMarkEffect_
