#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PetrifiedOwlSingleClawBehaviour.h>

namespace app::classes::Moon::PetrifiedOwlSingleClawBehaviour {
    IL2CPP_REGISTER_METHOD(0x00C3A1E0, void, Awake, (app::PetrifiedOwlSingleClawBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C3A280, void, OnStartBehaviour, (app::PetrifiedOwlSingleClawBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C3A490, void, OnEndBehaviour, (app::PetrifiedOwlSingleClawBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C3A670, float, GetScore, (app::PetrifiedOwlSingleClawBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C3A730, bool, EndCondition, (app::PetrifiedOwlSingleClawBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C3A7B0, void, UpdateIKFollowPointPosition, (app::PetrifiedOwlSingleClawBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C3AAD0, void, ctor, (app::PetrifiedOwlSingleClawBehaviour * this_ptr))
} // namespace app::classes::Moon::PetrifiedOwlSingleClawBehaviour
