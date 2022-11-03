#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::Timeline::DisplacementWaveAnimatorEntity {
    IL2CPP_REGISTER_METHOD(0x00765EE0, void, OnStartPlayback, (app::DisplacementWaveAnimatorEntity * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00765EF0, void, TriggerWave, (app::DisplacementWaveAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007660E0, void, ctor, (app::DisplacementWaveAnimatorEntity * this_ptr))
} // namespace app::classes::Moon::Timeline::DisplacementWaveAnimatorEntity
