#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::RootMotion::Demos::SimpleAimingSystem {
    IL2CPP_REGISTER_METHOD(0x02230240, void, Start, (app::SimpleAimingSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02230300, void, LateUpdate, (app::SimpleAimingSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022304F0, void, Pose, (app::SimpleAimingSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02230AA0, void, LimitAimTarget, (app::SimpleAimingSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02230EA0, void, DirectCrossFade, (app::SimpleAimingSystem * this_ptr, app::String* state, float target))
    IL2CPP_REGISTER_METHOD(0x022310A0, void, ctor, (app::SimpleAimingSystem * this_ptr))
} // namespace app::classes::RootMotion::Demos::SimpleAimingSystem
