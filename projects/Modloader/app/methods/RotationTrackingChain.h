#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RotationTrackingChain.h>

namespace app::classes::RotationTrackingChain {
    IL2CPP_REGISTER_METHOD(0x01371740, void, Update, (app::RotationTrackingChain * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::RotationTrackingChain * this_ptr))
} // namespace app::classes::RotationTrackingChain
