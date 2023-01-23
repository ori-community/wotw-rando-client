#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ClickMeshBrowserUI.h>
#include <Modloader/app/structs/MeshCollider.h>
#include <Modloader/app/structs/Ray.h>
#include <Modloader/app/structs/BrowserCursor.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/MouseButton__Enum.h>
#include <Modloader/app/structs/List_1_UnityEngine_Event_.h>
#include <Modloader/app/structs/BrowserInputSettings.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::ClickMeshBrowserUI {
    IL2CPP_REGISTER_METHOD(0x01DCE780, app::ClickMeshBrowserUI*, Create, (app::MeshCollider * mesh_collider))
    IL2CPP_REGISTER_METHOD(0x01DCE880, void, Awake, (app::ClickMeshBrowserUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DCEB90, app::Ray, get_LookRay, (app::ClickMeshBrowserUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DCEC90, void, InputUpdate, (app::ClickMeshBrowserUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DCF4C0, void, OnGUI, (app::ClickMeshBrowserUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DCF6E0, void, LookOn, (app::ClickMeshBrowserUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DCF720, void, LookOff, (app::ClickMeshBrowserUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DCF760, void, CursorUpdated, (app::ClickMeshBrowserUI * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04749F48, ClickMeshBrowserUI_CursorUpdated__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01DCF780, void, SetCursor, (app::ClickMeshBrowserUI * this_ptr, app::BrowserCursor* new_cursor))
    IL2CPP_REGISTER_METHOD(0x008C5DB0, bool, get_MouseHasFocus, (app::ClickMeshBrowserUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008C5DC0, void, set_MouseHasFocus, (app::ClickMeshBrowserUI * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x01464270, app::Vector2, get_MousePosition, (app::ClickMeshBrowserUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01464290, void, set_MousePosition, (app::ClickMeshBrowserUI * this_ptr, app::Vector2 value))
    IL2CPP_REGISTER_METHOD(0x003FF2B0, app::MouseButton__Enum, get_MouseButtons, (app::ClickMeshBrowserUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FF2C0, void, set_MouseButtons, (app::ClickMeshBrowserUI * this_ptr, app::MouseButton__Enum value))
    IL2CPP_REGISTER_METHOD(0x01056D40, app::Vector2, get_MouseScroll, (app::ClickMeshBrowserUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01056D60, void, set_MouseScroll, (app::ClickMeshBrowserUI * this_ptr, app::Vector2 value))
    IL2CPP_REGISTER_METHOD(0x0051DB40, bool, get_KeyboardHasFocus, (app::ClickMeshBrowserUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0051DB50, void, set_KeyboardHasFocus, (app::ClickMeshBrowserUI * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::List_1_UnityEngine_Event_*, get_KeyEvents, (app::ClickMeshBrowserUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBC0, app::BrowserCursor*, get_BrowserCursor, (app::ClickMeshBrowserUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBD0, void, set_BrowserCursor, (app::ClickMeshBrowserUI * this_ptr, app::BrowserCursor* value))
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::BrowserInputSettings*, get_InputSettings, (app::ClickMeshBrowserUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBF0, void, set_InputSettings, (app::ClickMeshBrowserUI * this_ptr, app::BrowserInputSettings* value))
    IL2CPP_REGISTER_METHOD(0x01DCFA20, void, ctor, (app::ClickMeshBrowserUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DCFC50, void, cctor, ())
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::ClickMeshBrowserUI
