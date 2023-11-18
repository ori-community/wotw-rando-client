#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PetrifiedOwlStompBehaviour.h>
#include <Modloader/app/structs/Transform.h>

namespace app::classes::Moon::PetrifiedOwlStompBehaviour {
    IL2CPP_REGISTER_METHOD(0x00C3ACB0, void, OnStartBehaviour, (app::PetrifiedOwlStompBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C3AE90, void, OnEndBehaviour, (app::PetrifiedOwlStompBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C3AED0, float, GetScore, (app::PetrifiedOwlStompBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C3AFB0, bool, EndCondition, (app::PetrifiedOwlStompBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C3B040, void, ResetBehaviour, (app::PetrifiedOwlStompBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C3B120, bool, IsSeinToTheRight, (app::PetrifiedOwlStompBehaviour * this_ptr, app::Transform* t))
    IL2CPP_REGISTER_METHOD(0x00C3B250, bool, IsSeinGrabbingInnerLeg, (app::PetrifiedOwlStompBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C3B560, void, ctor, (app::PetrifiedOwlStompBehaviour * this_ptr))
} // namespace app::classes::Moon::PetrifiedOwlStompBehaviour
