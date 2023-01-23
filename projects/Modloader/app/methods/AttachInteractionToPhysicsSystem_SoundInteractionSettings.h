#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/AttachInteractionToPhysicsSystem_SoundInteractionSettings.h>

namespace app::classes::AttachInteractionToPhysicsSystem_SoundInteractionSettings {
    IL2CPP_REGISTER_METHOD(0x0043C0F0, float, CalculateRtpcValue, (app::AttachInteractionToPhysicsSystem_SoundInteractionSettings * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04793E80, AttachInteractionToPhysicsSystem_SoundInteractionSettings_CalculateRtpcValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00847D20, void, ctor, (app::AttachInteractionToPhysicsSystem_SoundInteractionSettings * this_ptr))
} // namespace app::classes::AttachInteractionToPhysicsSystem_SoundInteractionSettings
