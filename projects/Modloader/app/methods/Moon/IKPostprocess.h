#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IKPostprocess.h>
#include <Modloader/app/structs/MoonAnimator.h>
#include <Modloader/app/structs/Transform.h>

namespace app::classes::Moon::IKPostprocess {
    IL2CPP_REGISTER_METHOD(0x003FF7B0, int32_t, get_Order, (app::IKPostprocess * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01101010, app::Transform*, get_StartBone, (app::IKPostprocess * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01101250, app::Transform*, get_EndBone, (app::IKPostprocess * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01101490, void, OnAddedToAnimator, (app::IKPostprocess * this_ptr, app::MoonAnimator* animator))
    IL2CPP_REGISTER_METHOD(0x01101870, void, ScaleBones, (app::IKPostprocess * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01101C30, void, Process, (app::IKPostprocess * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x008A2C20, void, ctor, (app::IKPostprocess * this_ptr))
} // namespace app::classes::Moon::IKPostprocess
