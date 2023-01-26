#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AnimationMetaDataBasedSoundPlayer.h>
#include <Modloader/app/structs/AnimationMetaData_AnimationData.h>

namespace app::classes::AnimationMetaDataBasedSoundPlayer {
    IL2CPP_REGISTER_METHOD(0x004FF0C0, void, FixedUpdate, (app::AnimationMetaDataBasedSoundPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004FF750, bool, ShouldPlaySound, (app::AnimationMetaDataBasedSoundPlayer * this_ptr, app::AnimationMetaData_AnimationData* animation_data, int32_t frame))
    IL2CPP_REGISTER_METHOD(0x004FF830, bool, ShuoldPlaySoundInFrame, (app::AnimationMetaDataBasedSoundPlayer * this_ptr, app::AnimationMetaData_AnimationData* animation_data, int32_t frame))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::AnimationMetaDataBasedSoundPlayer * this_ptr))
} // namespace app::classes::AnimationMetaDataBasedSoundPlayer
