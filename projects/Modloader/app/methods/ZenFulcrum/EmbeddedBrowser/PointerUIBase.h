#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PointerUIBase.h>
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/BrowserCursor.h>
#include <Modloader/app/structs/BrowserInputSettings.h>
#include <Modloader/app/structs/List_1_UnityEngine_Event_.h>
#include <Modloader/app/structs/MouseButton__Enum.h>
#include <Modloader/app/structs/PointerUIBase_PointerState.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::PointerUIBase {
    IL2CPP_REGISTER_METHOD(0x0165F470, void, add_onHandlePointers, (app::PointerUIBase * this_ptr, app::Action* value))
    IL2CPP_REGISTER_METHOD(0x0165F560, void, remove_onHandlePointers, (app::PointerUIBase * this_ptr, app::Action* value))
    IL2CPP_REGISTER_METHOD(0x0165F650, void, add_onClick, (app::PointerUIBase * this_ptr, app::Action* value))
    IL2CPP_REGISTER_METHOD(0x0165F740, void, remove_onClick, (app::PointerUIBase * this_ptr, app::Action* value))
    IL2CPP_REGISTER_METHOD(0x0165F830, void, Awake, (app::PointerUIBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0165FD70, void, InputUpdate, (app::PointerUIBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0051DB50, void, OnApplicationFocus, (app::PointerUIBase * this_ptr, bool focused))
    IL2CPP_REGISTER_METHOD(0x0165FE70, void, FeedPointerState, (app::PointerUIBase * this_ptr, app::PointerUIBase_PointerState state))
    IL2CPP_REGISTER_METHOD(0x01660260, void, CalculatePointer, (app::PointerUIBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01660700, void, OnGUI, (app::PointerUIBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01660730, void, MouseIsOver, (app::PointerUIBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01660780, void, MouseIsOff, (app::PointerUIBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, CursorUpdated, (app::PointerUIBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01660890, void, ForceKeyboardHasFocus, (app::PointerUIBase * this_ptr, bool force))
    IL2CPP_REGISTER_METHOD(0x016608D0, void, OnHandlePointers, (app::PointerUIBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016609C0, void, FeedTouchPointers, (app::PointerUIBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01660B40, void, FeedMousePointer, (app::PointerUIBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01660DF0, void, FeedFPS, (app::PointerUIBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, FeedVRPointers, (app::PointerUIBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006C14C0, bool, get_MouseHasFocus, (app::PointerUIBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006C14D0, void, set_MouseHasFocus, (app::PointerUIBase * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x01661300, app::Vector2, get_MousePosition, (app::PointerUIBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01661320, void, set_MousePosition, (app::PointerUIBase * this_ptr, app::Vector2 value))
    IL2CPP_REGISTER_METHOD(0x0062C500, app::MouseButton__Enum, get_MouseButtons, (app::PointerUIBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0062C510, void, set_MouseButtons, (app::PointerUIBase * this_ptr, app::MouseButton__Enum value))
    IL2CPP_REGISTER_METHOD(0x01661350, app::Vector2, get_MouseScroll, (app::PointerUIBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EFE9D0, void, set_MouseScroll, (app::PointerUIBase * this_ptr, app::Vector2 value))
    IL2CPP_REGISTER_METHOD(0x00601090, bool, get_KeyboardHasFocus, (app::PointerUIBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0041DB70, void, set_KeyboardHasFocus, (app::PointerUIBase * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x005E07A0, app::List_1_UnityEngine_Event_*, get_KeyEvents, (app::PointerUIBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBD20, app::BrowserCursor*, get_BrowserCursor, (app::PointerUIBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBD30, void, set_BrowserCursor, (app::PointerUIBase * this_ptr, app::BrowserCursor* value))
    IL2CPP_REGISTER_METHOD(0x002FBD40, app::BrowserInputSettings*, get_InputSettings, (app::PointerUIBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBD50, void, set_InputSettings, (app::PointerUIBase * this_ptr, app::BrowserInputSettings* value))
    IL2CPP_REGISTER_METHOD(0x01661370, void, ctor, (app::PointerUIBase * this_ptr))
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::PointerUIBase
