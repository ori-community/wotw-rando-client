#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::PetrifiedOwlAnimatorBehaviour {
    IL2CPP_REGISTER_METHOD(0x00C33A70, void, OnStartBehaviour, (app::PetrifiedOwlAnimatorBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C33B60, void, OnEndBehaviour, (app::PetrifiedOwlAnimatorBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006B5650, float, GetScore, (app::PetrifiedOwlAnimatorBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C33C40, bool, EndCondition, (app::PetrifiedOwlAnimatorBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C33D70, void, ctor, (app::PetrifiedOwlAnimatorBehaviour * this_ptr))
} // namespace app::classes::Moon::PetrifiedOwlAnimatorBehaviour
