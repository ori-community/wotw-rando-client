#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::PositionStateModifier {
    IL2CPP_REGISTER_METHOD(0x01B781A0, app::Vector3, get_Position, (app::PositionStateModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B78260, void, set_Position, (app::PositionStateModifier * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x01B78340, void, Apply, (app::PositionStateModifier * this_ptr, app::MoonReference_1_UnityEngine_GameObject_ * target, app::UberStateApplyContext__Enum context))
    IL2CPP_REGISTER_METHOD(0x01B78580, void, ctor, (app::PositionStateModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B78670, void, OnTargetChange, (app::PositionStateModifier * this_ptr, app::GameObject * old_target, app::GameObject * new_target))
    IL2CPP_REGISTER_METHOD(0x01B78770, void, CaptureCurrentTargetState, (app::PositionStateModifier * this_ptr, app::GameObject * target))
}
