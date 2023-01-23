#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/RotationStateModifierData.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/MoonReference_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/UberStateApplyContext__Enum.h>
#include <Modloader/app/structs/GameObject.h>

namespace app::classes::RotationStateModifierData {
    IL2CPP_REGISTER_METHOD(0x01B799C0, app::Vector3, get_RotationEuler, (app::RotationStateModifierData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B79A80, void, set_RotationEuler, (app::RotationStateModifierData * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x01B79B60, app::Quaternion, get_RotationQuartenion, (app::RotationStateModifierData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B79C60, void, set_RotationQuartenion, (app::RotationStateModifierData * this_ptr, app::Quaternion value))
    IL2CPP_REGISTER_METHOD(0x01B79D50, float, get_RotationEulerZ, (app::RotationStateModifierData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B79DF0, void, set_RotationEulerZ, (app::RotationStateModifierData * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x01B79EF0, void, Apply, (app::RotationStateModifierData * this_ptr, app::MoonReference_1_UnityEngine_GameObject_* target, app::UberStateApplyContext__Enum context))
    IL2CPP_REGISTER_METHOD(0x01B7A180, void, ctor, (app::RotationStateModifierData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B7A270, void, OnTargetChange, (app::RotationStateModifierData * this_ptr, app::GameObject* old_target, app::GameObject* new_target))
    IL2CPP_REGISTER_METHOD(0x01B7A370, void, CaptureCurrentTargetState, (app::RotationStateModifierData * this_ptr, app::GameObject* target))
} // namespace app::classes::RotationStateModifierData
