#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BrowserCursor.h>
#include <Modloader/app/structs/FPSBrowserUI.h>
#include <Modloader/app/structs/FPSCursorRenderer.h>
#include <Modloader/app/structs/MeshCollider.h>
#include <Modloader/app/structs/Ray.h>
#include <Modloader/app/structs/Transform.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::FPSBrowserUI {
    IL2CPP_REGISTER_METHOD(0x01DDCF60, void, Start, app::FPSBrowserUI* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01DDD010,
        app::FPSBrowserUI*,
        Create,
        app::MeshCollider* mesh_collider,
        app::Transform* world_pointer,
        app::FPSCursorRenderer* cursor_renderer
    )
    IL2CPP_REGISTER_METHOD(0x01DDD1A0, app::Ray, get_LookRay, app::FPSBrowserUI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DDD330, void, SetCursor, app::FPSBrowserUI* this_ptr, app::BrowserCursor* new_cursor)
    IL2CPP_REGISTER_METHOD(0x01DDD360, void, InputUpdate, app::FPSBrowserUI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DDD3A0, void, ctor, app::FPSBrowserUI* this_ptr)
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::FPSBrowserUI
