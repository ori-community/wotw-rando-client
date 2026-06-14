#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonEffectsWispsInstantionHandler.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::Moon::EffectsFramework::Wisps::MoonEffectsWispsInstantionHandler {
    IL2CPP_REGISTER_METHOD(
        0x0120CE90,
        app::GameObject*,
        Instantiate,
        app::MoonEffectsWispsInstantionHandler* this_ptr,
        app::GameObject* original,
        app::Vector3 position,
        app::Quaternion rotation,
        bool record
    )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::MoonEffectsWispsInstantionHandler* this_ptr)
} // namespace app::classes::Moon::EffectsFramework::Wisps::MoonEffectsWispsInstantionHandler
