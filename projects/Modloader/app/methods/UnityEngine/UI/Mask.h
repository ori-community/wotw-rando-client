#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Mask_1.h>
#include <Modloader/app/structs/RectTransform.h>
#include <Modloader/app/structs/Graphic.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Camera.h>
#include <Modloader/app/structs/Material.h>

namespace app::classes::UnityEngine::UI::Mask {
    IL2CPP_REGISTER_METHOD(0x008223A0, void, ctor, (app::Mask_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0265F370, app::RectTransform*, get_rectTransform, (app::Mask_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0265F400, bool, get_showMaskGraphic, (app::Mask_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0265F410, void, set_showMaskGraphic, (app::Mask_1 * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0265F500, app::Graphic*, get_graphic, (app::Mask_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0265F590, bool, MaskEnabled, (app::Mask_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSiblingGraphicEnabledDisabled, (app::Mask_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0265F660, void, OnEnable, (app::Mask_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0265F7C0, void, OnDisable, (app::Mask_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0265F9F0, bool, IsRaycastLocationValid, (app::Mask_1 * this_ptr, app::Vector2 sp, app::Camera* event_camera))
    IL2CPP_REGISTER_METHOD(0x0265FB80, app::Material*, GetModifiedMaterial, (app::Mask_1 * this_ptr, app::Material* base_material))
} // namespace app::classes::UnityEngine::UI::Mask
