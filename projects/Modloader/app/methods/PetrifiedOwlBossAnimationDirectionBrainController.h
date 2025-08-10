#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Enum.h>
#include <Modloader/app/structs/Enum__Array.h>
#include <Modloader/app/structs/PetrifiedOwlBossAnimationDirectionBrainController.h>

namespace app::classes::PetrifiedOwlBossAnimationDirectionBrainController {
    IL2CPP_REGISTER_METHOD(0x0049C110, app::Enum__Array*, GetEntries, app::PetrifiedOwlBossAnimationDirectionBrainController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0049C1A0, app::Enum, Evaluate, app::PetrifiedOwlBossAnimationDirectionBrainController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldSkip, app::PetrifiedOwlBossAnimationDirectionBrainController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::PetrifiedOwlBossAnimationDirectionBrainController* this_ptr)
} // namespace app::classes::PetrifiedOwlBossAnimationDirectionBrainController
