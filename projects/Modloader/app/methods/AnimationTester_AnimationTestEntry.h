#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::AnimationTester_AnimationTestEntry {
    IL2CPP_REGISTER_METHOD(0x00654950, int32_t, get_CurrentAnimationIndex, (app::AnimationTester_AnimationTestEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01AFD860, void, set_CurrentAnimationIndex, (app::AnimationTester_AnimationTestEntry * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x01AFD900, app::Transform*, get_Transform, (app::AnimationTester_AnimationTestEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01AFD970, void, PlayNextAnimation, (app::AnimationTester_AnimationTestEntry * this_ptr, int32_t amount_of_layers))
    IL2CPP_REGISTER_METHOD(0x01AFDB70, void, Interrupt, (app::AnimationTester_AnimationTestEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01AFDBA0, app::String*, get_ToogleName, (app::AnimationTester_AnimationTestEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00446970, bool, get_IsEnabled, (app::AnimationTester_AnimationTestEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00446980, void, set_IsEnabled, (app::AnimationTester_AnimationTestEntry * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x01AFDBD0, void, Toogle, (app::AnimationTester_AnimationTestEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01AFDC30, void, OnEnable, (app::AnimationTester_AnimationTestEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01AFDB70, void, OnDisable, (app::AnimationTester_AnimationTestEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01AFDC40, void, ctor, (app::AnimationTester_AnimationTestEntry * this_ptr))
} // namespace app::classes::AnimationTester_AnimationTestEntry
