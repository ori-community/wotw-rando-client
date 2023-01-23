#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PetrifiedOwlShakeOffBehaviour.h>
#include <Modloader/app/structs/Transform.h>

namespace app::classes::Moon::PetrifiedOwlShakeOffBehaviour {
    IL2CPP_REGISTER_METHOD(0x00C37D60, void, OnStartBehaviour, (app::PetrifiedOwlShakeOffBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C38400, void, OnEndBehaviour, (app::PetrifiedOwlShakeOffBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C389F0, float, GetScore, (app::PetrifiedOwlShakeOffBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C38B60, bool, EndCondition, (app::PetrifiedOwlShakeOffBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C38BF0, void, ResetBehaviour, (app::PetrifiedOwlShakeOffBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C38CD0, bool, IsSeinToTheRight, (app::PetrifiedOwlShakeOffBehaviour * this_ptr, app::Transform* t))
    IL2CPP_REGISTER_METHOD(0x00C38E00, bool, IsSeinBelowShakeOffThreshold, (app::PetrifiedOwlShakeOffBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C38F30, bool, IsSeinGrabbingOuterLeg, (app::PetrifiedOwlShakeOffBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C391F0, void, OnPushEventStart, (app::PetrifiedOwlShakeOffBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04777450, PetrifiedOwlShakeOffBehaviour_OnPushEventStart__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00C392E0, void, OnPushEventStay, (app::PetrifiedOwlShakeOffBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473C5D0, PetrifiedOwlShakeOffBehaviour_OnPushEventStay__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00C393E0, void, OnPushEventEnd, (app::PetrifiedOwlShakeOffBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04795350, PetrifiedOwlShakeOffBehaviour_OnPushEventEnd__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00C39670, void, ctor, (app::PetrifiedOwlShakeOffBehaviour * this_ptr))
} // namespace app::classes::Moon::PetrifiedOwlShakeOffBehaviour
