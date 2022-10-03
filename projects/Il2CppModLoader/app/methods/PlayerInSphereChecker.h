#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::PlayerInSphereChecker {
    IL2CPP_REGISTER_METHOD(0x014108A0, bool, get_IsInside, (app::PlayerInSphereChecker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014109A0, bool, IsPositionInside, (app::PlayerInSphereChecker * this_ptr, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x01410E80, bool, WillBeInside, (app::PlayerInSphereChecker * this_ptr, float prediction_time))
    IL2CPP_REGISTER_METHOD(0x014110B0, void, FixedUpdate, (app::PlayerInSphereChecker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01411120, void, Start, (app::PlayerInSphereChecker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014111B0, bool, Validate, (app::PlayerInSphereChecker * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::PlayerInSphereChecker * this_ptr))
} // namespace app::classes::PlayerInSphereChecker
