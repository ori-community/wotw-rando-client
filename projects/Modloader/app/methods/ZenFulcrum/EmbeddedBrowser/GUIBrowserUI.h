#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BaseEventData.h>
#include <Modloader/app/structs/BrowserCursor.h>
#include <Modloader/app/structs/BrowserInputSettings.h>
#include <Modloader/app/structs/GUIBrowserUI.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/List_1_UnityEngine_Event_.h>
#include <Modloader/app/structs/MouseButton__Enum.h>
#include <Modloader/app/structs/PointerEventData.h>
#include <Modloader/app/structs/Texture2D.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::GUIBrowserUI {
    IL2CPP_REGISTER_METHOD(0x01DDE910, void, Awake, app::GUIBrowserUI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DDED70, void, OnEnable, app::GUIBrowserUI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DDEED0, app::IEnumerator*, WatchResize, app::GUIBrowserUI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DDF020, void, UpdateTexture, app::GUIBrowserUI* this_ptr, app::Texture2D* texture)
    IL2CPP_REGISTER_METHOD(0x01DDF0D0, void, InputUpdate, app::GUIBrowserUI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DDF9F0, void, OnGUI, app::GUIBrowserUI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DDFC10, void, SetCursor, app::GUIBrowserUI* this_ptr, app::BrowserCursor* new_cursor)
    IL2CPP_REGISTER_METHOD(0x01DDFEB0, bool, get_MouseHasFocus, app::GUIBrowserUI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01464330, app::Vector2, get_MousePosition, app::GUIBrowserUI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01464350, void, set_MousePosition, app::GUIBrowserUI* this_ptr, app::Vector2 value)
    IL2CPP_REGISTER_METHOD(0x003FF7D0, app::MouseButton__Enum, get_MouseButtons, app::GUIBrowserUI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0111BFC0, void, set_MouseButtons, app::GUIBrowserUI* this_ptr, app::MouseButton__Enum value)
    IL2CPP_REGISTER_METHOD(0x01DDFEC0, app::Vector2, get_MouseScroll, app::GUIBrowserUI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DDFEE0, void, set_MouseScroll, app::GUIBrowserUI* this_ptr, app::Vector2 value)
    IL2CPP_REGISTER_METHOD(0x01DDFF00, bool, get_KeyboardHasFocus, app::GUIBrowserUI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::List_1_UnityEngine_Event_*, get_KeyEvents, app::GUIBrowserUI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC20, app::BrowserCursor*, get_BrowserCursor, app::GUIBrowserUI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC30, void, set_BrowserCursor, app::GUIBrowserUI* this_ptr, app::BrowserCursor* value)
    IL2CPP_REGISTER_METHOD(0x002FBC40, app::BrowserInputSettings*, get_InputSettings, app::GUIBrowserUI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC50, void, set_InputSettings, app::GUIBrowserUI* this_ptr, app::BrowserInputSettings* value)
    IL2CPP_REGISTER_METHOD(0x0050B250, void, OnSelect, app::GUIBrowserUI* this_ptr, app::BaseEventData* event_data)
    IL2CPP_REGISTER_METHOD(0x0109C540, void, OnDeselect, app::GUIBrowserUI* this_ptr, app::BaseEventData* event_data)
    IL2CPP_REGISTER_METHOD(0x01DDFF20, void, OnPointerEnter, app::GUIBrowserUI* this_ptr, app::PointerEventData* event_data)
    IL2CPP_REGISTER_METHOD(0x01DDFF40, void, OnPointerExit, app::GUIBrowserUI* this_ptr, app::PointerEventData* event_data)
    IL2CPP_REGISTER_METHOD(0x01DDFF60, void, OnPointerDown, app::GUIBrowserUI* this_ptr, app::PointerEventData* event_data)
    IL2CPP_REGISTER_METHOD(0x01DE0070, void, ctor, app::GUIBrowserUI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DE02A0, void, _Awake_b__4_0, app::GUIBrowserUI* this_ptr)
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::GUIBrowserUI
