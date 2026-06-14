#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GUIClipContext.h>
#include <Modloader/app/structs/GUIClipContext__Boxed.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::Sini::Unity::GUIClipContext {
    IL2CPP_REGISTER_METHOD(0x00246C90, void, ctor, app::GUIClipContext__Boxed* this_ptr, app::Rect rect, app::Vector2 scroll)
    IL2CPP_REGISTER_METHOD(0x03114A40, app::GUIClipContext, Shift, app::Rect rect, app::Vector2 scroll)
    IL2CPP_REGISTER_METHOD(0x00246CB0, void, Dispose, app::GUIClipContext__Boxed* this_ptr)
} // namespace app::classes::Sini::Unity::GUIClipContext
