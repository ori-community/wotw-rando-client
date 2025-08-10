#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PetrifiedOwlBossLavaController.h>

namespace app::classes::PetrifiedOwlBossLavaController {
    IL2CPP_REGISTER_METHOD(0x01776990, float, get_Height, app::PetrifiedOwlBossLavaController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01776A10, bool, ShouldGoUp, app::PetrifiedOwlBossLavaController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01776A20, bool, ShouldGoDown, app::PetrifiedOwlBossLavaController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01776A30, void, Awake, app::PetrifiedOwlBossLavaController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01776C50, void, OnDestroy, app::PetrifiedOwlBossLavaController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01776DF0, void, OnPostRestoreCheckpoint, app::PetrifiedOwlBossLavaController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01776E00, void, Reset, app::PetrifiedOwlBossLavaController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01776F30, void, FixedUpdate, app::PetrifiedOwlBossLavaController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01777280, void, UpdateTimedLowering, app::PetrifiedOwlBossLavaController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01777390, void, RaiseLava, app::PetrifiedOwlBossLavaController* this_ptr, float duration)
    IL2CPP_REGISTER_METHOD(0x017773A0, void, LowerLava, app::PetrifiedOwlBossLavaController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017773B0, void, ctor, app::PetrifiedOwlBossLavaController* this_ptr)
} // namespace app::classes::PetrifiedOwlBossLavaController
