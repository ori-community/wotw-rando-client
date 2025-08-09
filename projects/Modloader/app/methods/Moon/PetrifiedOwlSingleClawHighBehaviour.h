#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PetrifiedOwlSingleClawHighBehaviour.h>

namespace app::classes::Moon::PetrifiedOwlSingleClawHighBehaviour {
    IL2CPP_REGISTER_METHOD(0x00C3AB10, void, OnStartBehaviour, app::PetrifiedOwlSingleClawHighBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C3AB80, void, OnEndBehaviour, app::PetrifiedOwlSingleClawHighBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C3ABC0, float, GetScore, app::PetrifiedOwlSingleClawHighBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C3A730, bool, EndCondition, app::PetrifiedOwlSingleClawHighBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C3AC80, void, ctor, app::PetrifiedOwlSingleClawHighBehaviour* this_ptr)
} // namespace app::classes::Moon::PetrifiedOwlSingleClawHighBehaviour
