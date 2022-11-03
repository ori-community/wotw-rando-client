#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ColorStateModifierDataWisps {
    IL2CPP_REGISTER_METHOD(0x012D3960, app::Color, get_Color, (app::ColorStateModifierDataWisps * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012D3A10, void, set_Color, (app::ColorStateModifierDataWisps * this_ptr, app::Color value))
    IL2CPP_REGISTER_METHOD(0x012D3AE0, app::ColorAnimator_ColorType__Enum, get_ColorType, (app::ColorStateModifierDataWisps * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012D3B80, void, set_ColorType, (app::ColorStateModifierDataWisps * this_ptr, app::ColorAnimator_ColorType__Enum value))
    IL2CPP_REGISTER_METHOD(0x012D3C50, void, Apply, (app::ColorStateModifierDataWisps * this_ptr, app::MoonReference_1_UnityEngine_GameObject_* target, app::UberStateApplyContext__Enum context))
    IL2CPP_REGISTER_METHOD(0x012D3E80, void, ctor, (app::ColorStateModifierDataWisps * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012D4040, void, OnTargetChange, (app::ColorStateModifierDataWisps * this_ptr, app::GameObject* old_target, app::GameObject* new_target))
    IL2CPP_REGISTER_METHOD(0x012D4140, void, CaptureCurrentTargetState, (app::ColorStateModifierDataWisps * this_ptr, app::GameObject* target))
    IL2CPP_REGISTER_METHOD(0x012D4310, app::Dictionary_2_System_Int32_System_Type_*, GetIdToTypeMap, (app::ColorStateModifierDataWisps * this_ptr))
} // namespace app::classes::ColorStateModifierDataWisps
