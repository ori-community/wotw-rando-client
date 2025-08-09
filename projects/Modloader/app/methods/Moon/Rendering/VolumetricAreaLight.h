#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/VolumetricAreaLight.h>

namespace app::classes::Moon::Rendering::VolumetricAreaLight {
    IL2CPP_REGISTER_METHOD(0x00EBFC50, app::Vector3, get_WorldPos, app::VolumetricAreaLight* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EBFFC0, app::Vector3, get_Size, app::VolumetricAreaLight* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EC00E0, void, Awake, app::VolumetricAreaLight* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EC01D0, void, OnEnable, app::VolumetricAreaLight* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EC0370, void, OnDisable, app::VolumetricAreaLight* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Serialize, app::VolumetricAreaLight* this_ptr, app::Archive* ar)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, app::VolumetricAreaLight* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EC04C0, void, ctor, app::VolumetricAreaLight* this_ptr)
} // namespace app::classes::Moon::Rendering::VolumetricAreaLight
