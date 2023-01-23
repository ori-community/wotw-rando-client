#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SetupStateModifierDataType__Enum.h>
#include <Modloader/app/structs/SetupModifierTargetGizmoAttribute.h>

namespace app::classes::SetupModifierTargetGizmoAttribute {
    IL2CPP_REGISTER_METHOD(0x002FC6D0, app::SetupStateModifierDataType__Enum, get_ModifierDataType, (app::SetupModifierTargetGizmoAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, (app::SetupModifierTargetGizmoAttribute * this_ptr, app::SetupStateModifierDataType__Enum modifier_data_type))
} // namespace app::classes::SetupModifierTargetGizmoAttribute
