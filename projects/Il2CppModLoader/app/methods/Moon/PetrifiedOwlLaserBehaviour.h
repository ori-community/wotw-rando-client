#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::PetrifiedOwlLaserBehaviour {
    IL2CPP_REGISTER_METHOD(0x00C35730, void, OnStartBehaviour, (app::PetrifiedOwlLaserBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnUpdateBehaviour, (app::PetrifiedOwlLaserBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C35CA0, void, OnEndBehaviour, (app::PetrifiedOwlLaserBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C36200, float, GetScore, (app::PetrifiedOwlLaserBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C35400, bool, EndCondition, (app::PetrifiedOwlLaserBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C36230, void, OnLaserEventStart, (app::PetrifiedOwlLaserBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04760338, PetrifiedOwlLaserBehaviour_OnLaserEventStart__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00C36850, void, OnLaserEventStay, (app::PetrifiedOwlLaserBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04762448, PetrifiedOwlLaserBehaviour_OnLaserEventStay__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00C36BA0, void, OnLaserEventEnd, (app::PetrifiedOwlLaserBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475B228, PetrifiedOwlLaserBehaviour_OnLaserEventEnd__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00C36BB0, void, DestroyLasers, (app::PetrifiedOwlLaserBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C36CD0, void, OnSampleOriPositionEventStart, (app::PetrifiedOwlLaserBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04796000, PetrifiedOwlLaserBehaviour_OnSampleOriPositionEventStart__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00C36DA0, void, ctor, (app::PetrifiedOwlLaserBehaviour * this_ptr))
}
