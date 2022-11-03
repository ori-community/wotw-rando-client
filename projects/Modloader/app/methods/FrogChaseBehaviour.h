#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::FrogChaseBehaviour {
    IL2CPP_REGISTER_METHOD(0x016464C0, void, OnEntityInitialized, (app::FrogChaseBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01646590, void, AssignLocomotionData, (app::FrogChaseBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016469A0, void, ctor, (app::FrogChaseBehaviour * this_ptr))
} // namespace app::classes::FrogChaseBehaviour
