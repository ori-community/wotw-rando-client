#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ActivationStateModifier {
    IL2CPP_REGISTER_METHOD(0x01B54A20, bool, get_Active, (app::ActivationStateModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B54B70, void, set_Active, (app::ActivationStateModifier * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x01B54CF0, void, Apply, (app::ActivationStateModifier * this_ptr, app::MoonReference_1_UnityEngine_GameObject_ * target, app::UberStateApplyContext__Enum context))
    IL2CPP_REGISTER_METHOD(0x01B54F60, void, ctor, (app::ActivationStateModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B55070, void, CaptureCurrentTargetState, (app::ActivationStateModifier * this_ptr, app::GameObject * target))
}
