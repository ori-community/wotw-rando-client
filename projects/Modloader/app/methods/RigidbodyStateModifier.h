#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/RigidbodyStateModifier.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/MoonReference_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/UberStateApplyContext__Enum.h>
#include <Modloader/app/structs/GameObject.h>

namespace app::classes::RigidbodyStateModifier {
    IL2CPP_REGISTER_METHOD(0x01B789A0, app::Vector3, get_Position, (app::RigidbodyStateModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B78A60, void, set_Position, (app::RigidbodyStateModifier * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x01B78B40, app::Vector3, get_RotationEuler, (app::RigidbodyStateModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B78C00, void, set_RotationEuler, (app::RigidbodyStateModifier * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x01B78CE0, app::Quaternion, get_RotationQuaternion, (app::RigidbodyStateModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B78DE0, void, set_RotationQuaternion, (app::RigidbodyStateModifier * this_ptr, app::Quaternion value))
    IL2CPP_REGISTER_METHOD(0x01B78ED0, float, get_RotationEulerZ, (app::RigidbodyStateModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B78F70, void, set_RotationEulerZ, (app::RigidbodyStateModifier * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x01B79070, void, Apply, (app::RigidbodyStateModifier * this_ptr, app::MoonReference_1_UnityEngine_GameObject_* target, app::UberStateApplyContext__Enum context))
    IL2CPP_REGISTER_METHOD(0x01B794E0, void, ctor, (app::RigidbodyStateModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B79600, void, CaptureCurrentTargetState, (app::RigidbodyStateModifier * this_ptr, app::GameObject* target))
} // namespace app::classes::RigidbodyStateModifier
