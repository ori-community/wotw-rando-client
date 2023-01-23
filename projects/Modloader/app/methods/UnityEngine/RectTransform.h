#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/RectTransform_ReapplyDrivenProperties.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/RectTransform.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3__Array.h>
#include <Modloader/app/structs/RectTransform_Edge__Enum.h>
#include <Modloader/app/structs/RectTransform_Axis__Enum.h>

namespace app::classes::UnityEngine::RectTransform {
    IL2CPP_REGISTER_METHOD(0x0296E8B0, void, add_reapplyDrivenProperties, (app::RectTransform_ReapplyDrivenProperties * value))
    IL2CPP_REGISTER_METHOD(0x0296E9B0, void, remove_reapplyDrivenProperties, (app::RectTransform_ReapplyDrivenProperties * value))
    IL2CPP_REGISTER_METHOD(0x0296EAB0, app::Rect, get_rect, (app::RectTransform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0296EB30, app::Vector2, get_anchorMin, (app::RectTransform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0296EBA0, void, set_anchorMin, (app::RectTransform * this_ptr, app::Vector2 value))
    IL2CPP_REGISTER_METHOD(0x0296EC00, app::Vector2, get_anchorMax, (app::RectTransform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0296EC70, void, set_anchorMax, (app::RectTransform * this_ptr, app::Vector2 value))
    IL2CPP_REGISTER_METHOD(0x0296ECD0, app::Vector2, get_anchoredPosition, (app::RectTransform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0296ED40, void, set_anchoredPosition, (app::RectTransform * this_ptr, app::Vector2 value))
    IL2CPP_REGISTER_METHOD(0x0296EDA0, app::Vector2, get_sizeDelta, (app::RectTransform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0296EE10, void, set_sizeDelta, (app::RectTransform * this_ptr, app::Vector2 value))
    IL2CPP_REGISTER_METHOD(0x0296EE70, app::Vector2, get_pivot, (app::RectTransform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0296EEE0, void, set_pivot, (app::RectTransform * this_ptr, app::Vector2 value))
    IL2CPP_REGISTER_METHOD(0x0296EF40, void, set_offsetMin, (app::RectTransform * this_ptr, app::Vector2 value))
    IL2CPP_REGISTER_METHOD(0x0296F2F0, void, set_offsetMax, (app::RectTransform * this_ptr, app::Vector2 value))
    IL2CPP_REGISTER_METHOD(0x0296F6B0, void, GetLocalCorners, (app::RectTransform * this_ptr, app::Vector3__Array* four_corners_array))
    IL2CPP_REGISTER_METHOD(0x0296F8F0, void, GetWorldCorners, (app::RectTransform * this_ptr, app::Vector3__Array* four_corners_array))
    IL2CPP_REGISTER_METHOD(0x0296FBF0, void, SetInsetAndSizeFromParentEdge, (app::RectTransform * this_ptr, app::RectTransform_Edge__Enum edge, float inset, float size))
    IL2CPP_REGISTER_METHOD(0x0296FFB0, void, SetSizeWithCurrentAnchors, (app::RectTransform * this_ptr, app::RectTransform_Axis__Enum axis, float size))
    IL2CPP_REGISTER_METHOD(0x029701C0, void, SendReapplyDrivenProperties, (app::RectTransform * driven))
    IL2CPP_REGISTER_METHOD(0x02970260, app::Vector2, GetParentSize, (app::RectTransform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02970420, void, get_rect_Injected, (app::RectTransform * this_ptr, app::Rect* ret))
    IL2CPP_REGISTER_METHOD(0x02970480, void, get_anchorMin_Injected, (app::RectTransform * this_ptr, app::Vector2* ret))
    IL2CPP_REGISTER_METHOD(0x029704E0, void, set_anchorMin_Injected, (app::RectTransform * this_ptr, app::Vector2* value))
    IL2CPP_REGISTER_METHOD(0x02970540, void, get_anchorMax_Injected, (app::RectTransform * this_ptr, app::Vector2* ret))
    IL2CPP_REGISTER_METHOD(0x029705A0, void, set_anchorMax_Injected, (app::RectTransform * this_ptr, app::Vector2* value))
    IL2CPP_REGISTER_METHOD(0x02970600, void, get_anchoredPosition_Injected, (app::RectTransform * this_ptr, app::Vector2* ret))
    IL2CPP_REGISTER_METHOD(0x02970660, void, set_anchoredPosition_Injected, (app::RectTransform * this_ptr, app::Vector2* value))
    IL2CPP_REGISTER_METHOD(0x029706C0, void, get_sizeDelta_Injected, (app::RectTransform * this_ptr, app::Vector2* ret))
    IL2CPP_REGISTER_METHOD(0x02970720, void, set_sizeDelta_Injected, (app::RectTransform * this_ptr, app::Vector2* value))
    IL2CPP_REGISTER_METHOD(0x02970780, void, get_pivot_Injected, (app::RectTransform * this_ptr, app::Vector2* ret))
    IL2CPP_REGISTER_METHOD(0x029707E0, void, set_pivot_Injected, (app::RectTransform * this_ptr, app::Vector2* value))
} // namespace app::classes::UnityEngine::RectTransform
