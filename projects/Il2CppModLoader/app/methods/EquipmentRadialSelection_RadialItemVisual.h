#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::EquipmentRadialSelection_RadialItemVisual {
    IL2CPP_REGISTER_METHOD(0x00971A60, app::Vector3, get_Position, (app::EquipmentRadialSelection_RadialItemVisual * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00971AF0, void, set_Position, (app::EquipmentRadialSelection_RadialItemVisual * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x00971B70, float, get_SmoothScale, (app::EquipmentRadialSelection_RadialItemVisual * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00971BF0, void, set_SmoothScale, (app::EquipmentRadialSelection_RadialItemVisual * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00971B70, float, get_Scale, (app::EquipmentRadialSelection_RadialItemVisual * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00971ED0, void, set_Scale, (app::EquipmentRadialSelection_RadialItemVisual * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00446960, float, get_SmoothTransparency, (app::EquipmentRadialSelection_RadialItemVisual * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00971F60, void, set_SmoothTransparency, (app::EquipmentRadialSelection_RadialItemVisual * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00446960, float, get_Transparency, (app::EquipmentRadialSelection_RadialItemVisual * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00972290, void, set_Transparency, (app::EquipmentRadialSelection_RadialItemVisual * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00724040, float, get_Angle, (app::EquipmentRadialSelection_RadialItemVisual * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00972480, void, set_Angle, (app::EquipmentRadialSelection_RadialItemVisual * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00972610, app::Vector2, get_Direction, (app::EquipmentRadialSelection_RadialItemVisual * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00972630, bool, get_IsDisabled, (app::EquipmentRadialSelection_RadialItemVisual * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00972650, void, ctor, (app::EquipmentRadialSelection_RadialItemVisual * this_ptr, app::CleverMenuItem * item, float angle, bool hide_renderers))
    IL2CPP_REGISTER_METHOD(0x009729D0, void, SetDistanceFromCenter, (app::EquipmentRadialSelection_RadialItemVisual * this_ptr, app::Vector2 center, float distance, bool imediate))
    IL2CPP_REGISTER_METHOD(0x00972E10, void, RefreshRendererList, (app::EquipmentRadialSelection_RadialItemVisual * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00973130, void, cctor, ())
}
