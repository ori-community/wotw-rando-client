#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::FloatAnimationParameter_Instance {
    IL2CPP_REGISTER_METHOD(0x00863E90, float, get_TargetValue, (app::FloatAnimationParameter_Instance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B0E300, void, set_TargetValue, (app::FloatAnimationParameter_Instance * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00573170, float, get_CurrentValue, (app::FloatAnimationParameter_Instance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A030, bool, get_PreviewMode, (app::FloatAnimationParameter_Instance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A040, void, set_PreviewMode, (app::FloatAnimationParameter_Instance * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x01B0E340, void, ctor, (app::FloatAnimationParameter_Instance * this_ptr, app::FloatAnimationParameter * parameter))
    IL2CPP_REGISTER_METHOD(0x01B0E370, void, Update, (app::FloatAnimationParameter_Instance * this_ptr, float dt))
}
