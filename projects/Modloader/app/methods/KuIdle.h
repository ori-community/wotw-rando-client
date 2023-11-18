#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/KuIdle.h>

namespace app::classes::KuIdle {
    IL2CPP_REGISTER_METHOD(0x01239C10, void, OnSetReferenceToKu, (app::KuIdle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01239C40, void, OnEnter, (app::KuIdle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01239C50, void, UpdateState, (app::KuIdle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01239E10, void, PlayIdle, (app::KuIdle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01239FB0, bool, ShouldGroundIdleAnimation, (app::KuIdle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0123A140, void, Update, (app::KuIdle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0123A180, void, ResetVerticalSpeedData, (app::KuIdle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::KuIdle * this_ptr))
} // namespace app::classes::KuIdle
