#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PetrifiedOwlDoubleClawBehaviour.h>

namespace app::classes::Moon::PetrifiedOwlDoubleClawBehaviour {
    IL2CPP_REGISTER_METHOD(0x00C33D90, void, OnStartBehaviour, app::PetrifiedOwlDoubleClawBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C33E00, void, OnEndBehaviour, app::PetrifiedOwlDoubleClawBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C33E40, float, GetScore, app::PetrifiedOwlDoubleClawBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C33F90, bool, EndCondition, app::PetrifiedOwlDoubleClawBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C34010, void, ctor, app::PetrifiedOwlDoubleClawBehaviour* this_ptr)
} // namespace app::classes::Moon::PetrifiedOwlDoubleClawBehaviour
