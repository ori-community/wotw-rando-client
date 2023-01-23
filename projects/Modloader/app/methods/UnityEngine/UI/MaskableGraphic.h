#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MaskableGraphic.h>
#include <Modloader/app/structs/MaskableGraphic_CullStateChangedEvent.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/GameObject.h>

namespace app::classes::UnityEngine::UI::MaskableGraphic {
    IL2CPP_REGISTER_METHOD(0x02661200, void, ctor, (app::MaskableGraphic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F26FA0, app::MaskableGraphic_CullStateChangedEvent*, get_onCullStateChanged, (app::MaskableGraphic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBCF0, void, set_onCullStateChanged, (app::MaskableGraphic * this_ptr, app::MaskableGraphic_CullStateChangedEvent* value))
    IL2CPP_REGISTER_METHOD(0x02661400, bool, get_maskable, (app::MaskableGraphic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02661410, void, set_maskable, (app::MaskableGraphic * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x02661440, app::Material*, GetModifiedMaterial, (app::MaskableGraphic * this_ptr, app::Material* base_material))
    IL2CPP_REGISTER_METHOD(0x02661610, void, Cull, (app::MaskableGraphic * this_ptr, app::Rect clip_rect, bool valid_rect))
    IL2CPP_REGISTER_METHOD(0x02661670, void, UpdateCull, (app::MaskableGraphic * this_ptr, bool cull))
    IL2CPP_REGISTER_METHOD(0x02661810, void, SetClipRect, (app::MaskableGraphic * this_ptr, app::Rect clip_rect, bool valid_rect))
    IL2CPP_REGISTER_METHOD(0x02661900, void, OnEnable, (app::MaskableGraphic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02661A00, void, OnDisable, (app::MaskableGraphic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02661B30, void, OnTransformParentChanged, (app::MaskableGraphic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ParentMaskStateChanged, (app::MaskableGraphic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02661C90, void, OnCanvasHierarchyChanged, (app::MaskableGraphic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02661E60, app::Rect, get_rootCanvasRect, (app::MaskableGraphic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026622B0, void, UpdateClipParent, (app::MaskableGraphic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02662650, void, RecalculateClipping, (app::MaskableGraphic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02662660, void, RecalculateMasking, (app::MaskableGraphic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F4750, app::GameObject*, IClippable_get_gameObject, (app::MaskableGraphic * this_ptr))
} // namespace app::classes::UnityEngine::UI::MaskableGraphic
