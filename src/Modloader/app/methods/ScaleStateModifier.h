#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonReference_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/ScaleStateModifier.h>
#include <Modloader/app/structs/UberStateApplyContext__Enum.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::ScaleStateModifier {
    IL2CPP_REGISTER_METHOD(0x01B7A5D0, app::Vector3, get_Scale, app::ScaleStateModifier* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B7A690, void, set_Scale, app::ScaleStateModifier* this_ptr, app::Vector3 value)
    IL2CPP_REGISTER_METHOD(
        0x01B7A770,
        void,
        Apply,
        app::ScaleStateModifier* this_ptr,
        app::MoonReference_1_UnityEngine_GameObject_* target,
        app::UberStateApplyContext__Enum context
    )
    IL2CPP_REGISTER_METHOD(0x01B7A9A0, void, ctor, app::ScaleStateModifier* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B7AA90, void, OnTargetChange, app::ScaleStateModifier* this_ptr, app::GameObject* old_target, app::GameObject* new_target)
    IL2CPP_REGISTER_METHOD(0x01B7AB90, void, CaptureCurrentTargetState, app::ScaleStateModifier* this_ptr, app::GameObject* target)
} // namespace app::classes::ScaleStateModifier
