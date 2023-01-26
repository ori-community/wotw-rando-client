#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PointerUIGUI.h>
#include <Modloader/app/structs/BaseEventData.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/PointerEventData.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Ray.h>
#include <Modloader/app/structs/Texture2D.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::PointerUIGUI {
    IL2CPP_REGISTER_METHOD(0x01661A30, void, Awake, (app::PointerUIGUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01661BE0, void, OnEnable, (app::PointerUIGUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01661D40, app::IEnumerator*, WatchResize, (app::PointerUIGUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01661E90, void, UpdateTexture, (app::PointerUIGUI * this_ptr, app::Texture2D* texture))
    IL2CPP_REGISTER_METHOD(0x01661F40, app::Vector2, MapPointerToBrowser, (app::PointerUIGUI * this_ptr, app::Vector2 screen_position, int32_t pointer_id))
    IL2CPP_REGISTER_METHOD(0x016622D0, app::Vector2, MapRayToBrowser, (app::PointerUIGUI * this_ptr, app::Ray world_ray, int32_t pointer_id))
    IL2CPP_REGISTER_METHOD(0x016623B0, void, GetCurrentHitLocation, (app::PointerUIGUI * this_ptr, app::Vector3* pos, app::Quaternion* rot))
    IL2CPP_REGISTER_METHOD(0x01662480, bool, get_MouseHasFocus, (app::PointerUIGUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FD90B0, void, set_MouseHasFocus, (app::PointerUIGUI * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x016624A0, bool, get_KeyboardHasFocus, (app::PointerUIGUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016624C0, void, OnSelect, (app::PointerUIGUI * this_ptr, app::BaseEventData* event_data))
    IL2CPP_REGISTER_METHOD(0x01662520, void, OnDeselect, (app::PointerUIGUI * this_ptr, app::BaseEventData* event_data))
    IL2CPP_REGISTER_METHOD(0x00954540, void, OnPointerEnter, (app::PointerUIGUI * this_ptr, app::PointerEventData* event_data))
    IL2CPP_REGISTER_METHOD(0x00954550, void, OnPointerExit, (app::PointerUIGUI * this_ptr, app::PointerEventData* event_data))
    IL2CPP_REGISTER_METHOD(0x01662570, void, OnPointerDown, (app::PointerUIGUI * this_ptr, app::PointerEventData* event_data))
    IL2CPP_REGISTER_METHOD(0x01662680, void, ctor, (app::PointerUIGUI * this_ptr))
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::PointerUIGUI
