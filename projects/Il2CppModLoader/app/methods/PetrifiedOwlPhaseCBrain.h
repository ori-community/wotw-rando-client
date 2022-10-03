#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::PetrifiedOwlPhaseCBrain {
    IL2CPP_REGISTER_METHOD(0x014E6510, void, OnStartPlay, (app::PetrifiedOwlPhaseCBrain * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014E6530, void, OnFixedUpdate, (app::PetrifiedOwlPhaseCBrain * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x014E6500, void, ctor, (app::PetrifiedOwlPhaseCBrain * this_ptr))
} // namespace app::classes::PetrifiedOwlPhaseCBrain
