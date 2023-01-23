#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/LegacyBlendAnimationPlayer.h>

namespace app::classes::LegacyBlendAnimationPlayer {
    IL2CPP_REGISTER_METHOD(0x015DD320, void, SampleValue, (app::LegacyBlendAnimationPlayer * this_ptr, float value, bool force_sample))
    IL2CPP_REGISTER_METHOD(0x015CBD90, void, ctor, (app::LegacyBlendAnimationPlayer * this_ptr))
} // namespace app::classes::LegacyBlendAnimationPlayer
