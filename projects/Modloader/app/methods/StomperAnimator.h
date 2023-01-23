#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/IMoonSetupVisuals.h>
#include <Modloader/app/structs/StomperAnimator.h>
#include <Modloader/app/structs/StomperVisuals_SoundEvent__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Rigidbody.h>

namespace app::classes::StomperAnimator {
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonSetupVisuals*, get_MoonSetupVisuals, (app::StomperAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00658D10, void, set_MoonSetupVisuals, (app::StomperAnimator * this_ptr, app::IMoonSetupVisuals* value))
    IL2CPP_REGISTER_METHOD(0x00658DE0, void, PlaySound, (app::StomperAnimator * this_ptr, app::StomperVisuals_SoundEvent__Enum sound_event))
    IL2CPP_REGISTER_METHOD(0x00658EB0, void, StopSound, (app::StomperAnimator * this_ptr, app::StomperVisuals_SoundEvent__Enum sound_event))
    IL2CPP_REGISTER_METHOD(0x00658FA0, void, SpawnStompDust, (app::StomperAnimator * this_ptr, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x00659170, void, SetVisualsFixedJoint, (app::StomperAnimator * this_ptr, app::Rigidbody* body))
    IL2CPP_REGISTER_METHOD(0x00659320, void, PlayTriggerStomperTimeline, (app::StomperAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00659440, void, PlayStomperFallingTimeline, (app::StomperAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::StomperAnimator * this_ptr))
} // namespace app::classes::StomperAnimator
