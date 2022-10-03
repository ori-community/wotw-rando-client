#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::PointGizmoSettings {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_Label, (app::PointGizmoSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C3DD30, app::Color, get_Color, (app::PointGizmoSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C3DD40, void, set_Color, (app::PointGizmoSettings * this_ptr, app::Color value))
    IL2CPP_REGISTER_METHOD(0x00C3DD50, float, get_Size, (app::PointGizmoSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C3DD60, void, set_Size, (app::PointGizmoSettings * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x005C3FF0, app::GizmoHandleType__Enum, get_Handle, (app::PointGizmoSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005C4000, void, set_Handle, (app::PointGizmoSettings * this_ptr, app::GizmoHandleType__Enum value))
    IL2CPP_REGISTER_METHOD(0x00C3DD70, void, ctor, (app::PointGizmoSettings * this_ptr, app::String* label))
} // namespace app::classes::Moon::PointGizmoSettings
