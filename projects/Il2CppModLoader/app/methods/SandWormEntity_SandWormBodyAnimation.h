#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::SandWormEntity_SandWormBodyAnimation {
    IL2CPP_REGISTER_METHOD(0x00A28F40, float, get_Time, (app::SandWormEntity_SandWormBodyAnimation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C1ABF0, void, set_Time, (app::SandWormEntity_SandWormBodyAnimation * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00C1AC00, bool, get_FinishedPlaying, (app::SandWormEntity_SandWormBodyAnimation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C1AC30, float, get_Duration, (app::SandWormEntity_SandWormBodyAnimation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C1ADF0, void, Reset, (app::SandWormEntity_SandWormBodyAnimation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C1AE00, float, GetHeadRotation, (app::SandWormEntity_SandWormBodyAnimation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C1AE80, float, GetWidthNoiseAmplitude, (app::SandWormEntity_SandWormBodyAnimation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C1AF00, float, GetNoiseWidthFrequency, (app::SandWormEntity_SandWormBodyAnimation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C1AF80, float, GetMouth, (app::SandWormEntity_SandWormBodyAnimation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SandWormEntity_SandWormBodyAnimation * this_ptr))
} // namespace app::classes::SandWormEntity_SandWormBodyAnimation
