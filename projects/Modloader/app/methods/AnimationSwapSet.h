#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::AnimationSwapSet {
    IL2CPP_REGISTER_METHOD(0x004F4CE0, bool, get_BlockTurning, (app::AnimationSwapSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005036B0, void, Reset, (app::AnimationSwapSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00503AF0, void, Override, (app::AnimationSwapSet * this_ptr, bool block_turning))
    IL2CPP_REGISTER_METHOD(0x004140E0, void, ctor, (app::AnimationSwapSet * this_ptr))
} // namespace app::classes::AnimationSwapSet
