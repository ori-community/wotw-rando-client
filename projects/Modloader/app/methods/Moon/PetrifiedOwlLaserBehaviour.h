#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PetrifiedOwlLaserBehaviour.h>

namespace app::classes::Moon::PetrifiedOwlLaserBehaviour {
    IL2CPP_REGISTER_METHOD(0x00C35730, void, OnStartBehaviour, (app::PetrifiedOwlLaserBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnUpdateBehaviour, (app::PetrifiedOwlLaserBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C35CA0, void, OnEndBehaviour, (app::PetrifiedOwlLaserBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C36200, float, GetScore, (app::PetrifiedOwlLaserBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C35400, bool, EndCondition, (app::PetrifiedOwlLaserBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C36230, void, OnLaserEventStart, (app::PetrifiedOwlLaserBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C36850, void, OnLaserEventStay, (app::PetrifiedOwlLaserBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C36BA0, void, OnLaserEventEnd, (app::PetrifiedOwlLaserBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C36BB0, void, DestroyLasers, (app::PetrifiedOwlLaserBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C36CD0, void, OnSampleOriPositionEventStart, (app::PetrifiedOwlLaserBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C36DA0, void, ctor, (app::PetrifiedOwlLaserBehaviour * this_ptr))
} // namespace app::classes::Moon::PetrifiedOwlLaserBehaviour
