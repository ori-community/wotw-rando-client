#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PetrifiedOwlFeedingGroundsPOwlController.h>
#include <Modloader/app/structs/PetrifiedOwlFeedingGroundsPOwlController_PetrifiedOwlFeedingGroundsPOwlState__Enum.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::PetrifiedOwlFeedingGrounds::PetrifiedOwlFeedingGroundsPOwlController {
    IL2CPP_REGISTER_METHOD(0x014E2CA0, void, OnEnable, (app::PetrifiedOwlFeedingGroundsPOwlController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Start, (app::PetrifiedOwlFeedingGroundsPOwlController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014E2DF0, void, Update, (app::PetrifiedOwlFeedingGroundsPOwlController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014E3000, void, SetState, (app::PetrifiedOwlFeedingGroundsPOwlController * this_ptr, app::PetrifiedOwlFeedingGroundsPOwlController_PetrifiedOwlFeedingGroundsPOwlState__Enum new_state))
    IL2CPP_REGISTER_METHOD(0x014E34C0, void, Init, (app::PetrifiedOwlFeedingGroundsPOwlController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014E3520, void, Idle, (app::PetrifiedOwlFeedingGroundsPOwlController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014E3530, void, Eat, (app::PetrifiedOwlFeedingGroundsPOwlController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014E3600, void, Freeze, (app::PetrifiedOwlFeedingGroundsPOwlController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014E36C0, void, Kill, (app::PetrifiedOwlFeedingGroundsPOwlController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Pause, (app::PetrifiedOwlFeedingGroundsPOwlController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014E37A0, void, Final, (app::PetrifiedOwlFeedingGroundsPOwlController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014E38D0, void, Stop, (app::PetrifiedOwlFeedingGroundsPOwlController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014E3950, app::String*, GetStateToString, (app::PetrifiedOwlFeedingGroundsPOwlController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::PetrifiedOwlFeedingGroundsPOwlController * this_ptr))
} // namespace app::classes::PetrifiedOwlFeedingGrounds::PetrifiedOwlFeedingGroundsPOwlController
