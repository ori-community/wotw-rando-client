#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Texture2D.h>
#include <Modloader/app/structs/CursorLockMode__Enum.h>
#include <Modloader/app/structs/CursorMode__Enum.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::UnityEngine::Cursor {
    IL2CPP_REGISTER_METHOD(0x0242BB70, void, SetCursor, (app::Texture2D * texture, app::Vector2 hotspot, app::CursorMode__Enum cursor_mode))
    IL2CPP_REGISTER_METHOD(0x0242BBE0, void, set_visible, (bool value))
    IL2CPP_REGISTER_METHOD(0x0242BC30, app::CursorLockMode__Enum, get_lockState, ())
    IL2CPP_REGISTER_METHOD(0x0242BC80, void, set_lockState, (app::CursorLockMode__Enum value))
    IL2CPP_REGISTER_METHOD(0x0242BCD0, void, SetCursor_Injected, (app::Texture2D * texture, app::Vector2* hotspot, app::CursorMode__Enum cursor_mode))
} // namespace app::classes::UnityEngine::Cursor
