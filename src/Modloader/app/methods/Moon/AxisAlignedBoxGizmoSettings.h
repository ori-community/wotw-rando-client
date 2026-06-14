#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AxisAlignedBoxGizmoSettings.h>
#include <Modloader/app/structs/AxisAlignedBoxGizmoSettings_ModeType__Enum.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/GizmoHandleType__Enum.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Moon::AxisAlignedBoxGizmoSettings {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_Label, app::AxisAlignedBoxGizmoSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C3DD30, app::Color, get_FillColor, app::AxisAlignedBoxGizmoSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C3DD40, void, set_FillColor, app::AxisAlignedBoxGizmoSettings* this_ptr, app::Color value)
    IL2CPP_REGISTER_METHOD(0x00CB5CB0, app::Color, get_OutlineColor, app::AxisAlignedBoxGizmoSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CB5CC0, void, set_OutlineColor, app::AxisAlignedBoxGizmoSettings* this_ptr, app::Color value)
    IL2CPP_REGISTER_METHOD(0x00CB5CD0, app::Color, get_HandleColor, app::AxisAlignedBoxGizmoSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CB5CE0, void, set_HandleColor, app::AxisAlignedBoxGizmoSettings* this_ptr, app::Color value)
    IL2CPP_REGISTER_METHOD(0x006B5650, float, get_HandleSize, app::AxisAlignedBoxGizmoSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0098F5E0, void, set_HandleSize, app::AxisAlignedBoxGizmoSettings* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x003FD3F0, app::GizmoHandleType__Enum, get_ResizeHandle, app::AxisAlignedBoxGizmoSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00843E80, void, set_ResizeHandle, app::AxisAlignedBoxGizmoSettings* this_ptr, app::GizmoHandleType__Enum value)
    IL2CPP_REGISTER_METHOD(0x002FD490, app::GizmoHandleType__Enum, get_MoveHandle, app::AxisAlignedBoxGizmoSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FD4A0, void, set_MoveHandle, app::AxisAlignedBoxGizmoSettings* this_ptr, app::GizmoHandleType__Enum value)
    IL2CPP_REGISTER_METHOD(0x003FDCE0, app::AxisAlignedBoxGizmoSettings_ModeType__Enum, get_Mode, app::AxisAlignedBoxGizmoSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008C5DD0, void, set_Mode, app::AxisAlignedBoxGizmoSettings* this_ptr, app::AxisAlignedBoxGizmoSettings_ModeType__Enum value)
    IL2CPP_REGISTER_METHOD(0x00CB5CF0, void, ctor, app::AxisAlignedBoxGizmoSettings* this_ptr, app::String* label)
} // namespace app::classes::Moon::AxisAlignedBoxGizmoSettings
