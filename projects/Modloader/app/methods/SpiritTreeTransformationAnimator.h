#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SpiritTreeTransformationAnimator {
    IL2CPP_REGISTER_METHOD(0x00D7C4E0, void, OnEnable, (app::SpiritTreeTransformationAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D7C540, void, FixedUpdate, (app::SpiritTreeTransformationAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SpiritTreeTransformationAnimator * this_ptr))
} // namespace app::classes::SpiritTreeTransformationAnimator
