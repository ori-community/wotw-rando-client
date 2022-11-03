#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SpringLogic {
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IMoonSetupAnimator*, get_MoonSetupAnimator, (app::SpringLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009A6C30, void, set_MoonSetupAnimator, (app::SpringLogic * this_ptr, app::IMoonSetupAnimator* value))
    IL2CPP_REGISTER_METHOD(0x009A6D00, void, Awake, (app::SpringLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009A7020, void, OnCheckpointRestore, (app::SpringLogic * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473A550, SpringLogic_OnCheckpointRestore__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x009A7040, void, OnDestroy, (app::SpringLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009A71E0, void, JumpedOn, (app::SpringLogic * this_ptr, app::GameObject* target, app::Vector2 direction, bool is_grenade))
    IL2CPP_REGISTER_METHODINFO(0x04777BA0, SpringLogic_JumpedOn__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x009A75B0, void, Execute, (app::GameObject * target, app::Vector2 direction, float height, float stop_deceleration_multiplier))
    IL2CPP_REGISTER_METHOD(0x009A7860, void, SpringSein, (app::Vector2 direction, float height, float stop_deceleration_multiplier))
    IL2CPP_REGISTER_METHOD(0x009A7E50, void, SpringKu, (app::Vector2 direction, float height, float stop_deceleration_multiplier))
    IL2CPP_REGISTER_METHOD(0x009A8220, void, ctor, (app::SpringLogic * this_ptr))
} // namespace app::classes::SpringLogic
