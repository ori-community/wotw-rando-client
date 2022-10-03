#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::LandOnLogic {
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::IMoonSetupAnimator*, get_MoonSetupAnimator, (app::LandOnLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F01E50, void, set_MoonSetupAnimator, (app::LandOnLogic * this_ptr, app::IMoonSetupAnimator* value))
    IL2CPP_REGISTER_METHOD(0x00F01F20, void, Awake, (app::LandOnLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F02250, void, OnCheckpointRestore, (app::LandOnLogic * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04728548, LandOnLogic_OnCheckpointRestore__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00F02260, void, OnDestroy, (app::LandOnLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F02400, void, OnEnable, (app::LandOnLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F024A0, void, OnDisable, (app::LandOnLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F02540, void, ChangeState, (app::LandOnLogic * this_ptr, app::LandOnState__Enum new_state))
    IL2CPP_REGISTER_METHOD(0x00F02630, bool, get_IsOnScreen, (app::LandOnLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F02860, void, Break, (app::LandOnLogic * this_ptr, app::GameObject* target, app::Vector2 direction))
    IL2CPP_REGISTER_METHODINFO(0x0476E378, LandOnLogic_Break__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00F02910, void, OnFixedUpdate, (app::LandOnLogic * this_ptr, float delta))
    IL2CPP_REGISTER_METHOD(0x00F02980, void, ctor, (app::LandOnLogic * this_ptr))
} // namespace app::classes::LandOnLogic
