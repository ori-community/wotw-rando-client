#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::UberStateVisualization::ObjectUberStateWrapper {
    IL2CPP_REGISTER_METHOD(0x0199AEF0, void, ctor, (app::ObjectUberStateWrapper * this_ptr, app::IUberState* state))
    IL2CPP_REGISTER_METHOD(0x0052A030, bool, get_IsActive, (app::ObjectUberStateWrapper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0199AF90, void, set_IsActive, (app::ObjectUberStateWrapper * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0199B040, void, OnGui, (app::ObjectUberStateWrapper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0199B110, void, HandleInput, (app::ObjectUberStateWrapper * this_ptr, app::ControllerInput* input))
} // namespace app::classes::Moon::UberStateVisualization::ObjectUberStateWrapper
