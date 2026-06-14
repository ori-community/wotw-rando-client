#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Light.h>
#include <Modloader/app/structs/VolumetricPointLight.h>

namespace app::classes::Moon::Rendering::VolumetricPointLight {
    IL2CPP_REGISTER_METHOD(0x002FB990, app::Light*, get_Light, app::VolumetricPointLight* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EC0860, void, Awake, app::VolumetricPointLight* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EC09A0, void, OnEnable, app::VolumetricPointLight* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EC0B40, void, OnDisable, app::VolumetricPointLight* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::VolumetricPointLight* this_ptr)
} // namespace app::classes::Moon::Rendering::VolumetricPointLight
