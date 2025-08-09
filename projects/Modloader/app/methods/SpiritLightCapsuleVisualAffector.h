#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GameplayCamera.h>
#include <Modloader/app/structs/SpiritLightCapsuleVisualAffector.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::SpiritLightCapsuleVisualAffector {
    IL2CPP_REGISTER_METHOD(0x00D61010, app::Vector3, get_StartPointPosition, app::SpiritLightCapsuleVisualAffector* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D61180, app::Vector3, get_EndPointPosition, app::SpiritLightCapsuleVisualAffector* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D612F0, float, get_LightIntensityInThisFrame, app::SpiritLightCapsuleVisualAffector* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D61330, float, get_LightStartRadiusInThisFrame, app::SpiritLightCapsuleVisualAffector* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D61370, float, get_LightEndRadiusInThisFrame, app::SpiritLightCapsuleVisualAffector* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D613B0, bool, IsVisibleInCamera, app::SpiritLightCapsuleVisualAffector* this_ptr, app::GameplayCamera* gameplay_camera)
    IL2CPP_REGISTER_METHOD(0x00980110, void, OnEnable, app::SpiritLightCapsuleVisualAffector* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CC2AF0, void, OnDisable, app::SpiritLightCapsuleVisualAffector* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D616C0, void, OnActivate, app::SpiritLightCapsuleVisualAffector* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D61780, void, OnDeactivate, app::SpiritLightCapsuleVisualAffector* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D61840, void, ctor, app::SpiritLightCapsuleVisualAffector* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D61860, void, cctor, )
} // namespace app::classes::SpiritLightCapsuleVisualAffector
