#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/BrowserCursor.h>
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Texture2D.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/BrowserNative_CursorType__Enum.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::BrowserCursor {
    IL2CPP_REGISTER_METHOD(0x01C718C0, void, add_cursorChange, (app::BrowserCursor * this_ptr, app::Action* value))
    IL2CPP_REGISTER_METHOD(0x01C719B0, void, remove_cursorChange, (app::BrowserCursor * this_ptr, app::Action* value))
    IL2CPP_REGISTER_METHOD(0x01C71AA0, void, Load, ())
    IL2CPP_REGISTER_METHODINFO(0x04774F58, BrowserCursor_Load__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Texture2D*, get_Texture, (app::BrowserCursor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Texture, (app::BrowserCursor * this_ptr, app::Texture2D* value))
    IL2CPP_REGISTER_METHOD(0x00E71230, app::Vector2, get_Hotspot, (app::BrowserCursor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E71250, void, set_Hotspot, (app::BrowserCursor * this_ptr, app::Vector2 value))
    IL2CPP_REGISTER_METHOD(0x004F4CE0, bool, get_HasMouse, (app::BrowserCursor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01C72120, void, set_HasMouse, (app::BrowserCursor * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x01C72150, void, ctor, (app::BrowserCursor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01C72460, void, SetActiveCursor, (app::BrowserCursor * this_ptr, app::BrowserNative_CursorType__Enum type))
    IL2CPP_REGISTER_METHODINFO(0x0475F8E8, BrowserCursor_SetActiveCursor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01C726E0, void, SetCustomCursor, (app::BrowserCursor * this_ptr, app::Texture2D* cursor, app::Vector2 hotspot))
    IL2CPP_REGISTER_METHOD(0x01C72AB0, void, cctor, ())
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::BrowserCursor
