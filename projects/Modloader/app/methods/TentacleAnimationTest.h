#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::TentacleAnimationTest {
    IL2CPP_REGISTER_METHOD(0x00CEB810, void, Start, (app::TentacleAnimationTest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CEB820, void, InitializeBendLinks, (app::TentacleAnimationTest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CEBBA0, void, FixedUpdate, (app::TentacleAnimationTest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CED5E0, app::Vector3, Reproject, (app::TentacleAnimationTest * this_ptr, app::Vector3 point))
    IL2CPP_REGISTER_METHOD(0x00CED800, void, ctor, (app::TentacleAnimationTest * this_ptr))
} // namespace app::classes::TentacleAnimationTest
