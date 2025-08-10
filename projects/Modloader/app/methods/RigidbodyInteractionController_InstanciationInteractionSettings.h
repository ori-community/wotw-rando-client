#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/RigidbodyInteractionController_InstanciationInteractionSettings.h>

namespace app::classes::RigidbodyInteractionController_InstanciationInteractionSettings {
    IL2CPP_REGISTER_METHOD(
        0x004E57A0,
        int32_t,
        GetPrewarmAmount,
        app::RigidbodyInteractionController_InstanciationInteractionSettings* this_ptr,
        app::GameObject* entry
    )
    IL2CPP_REGISTER_METHOD(0x00913990, void, ctor, app::RigidbodyInteractionController_InstanciationInteractionSettings* this_ptr)
} // namespace app::classes::RigidbodyInteractionController_InstanciationInteractionSettings
