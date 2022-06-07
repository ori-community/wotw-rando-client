#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Sini::Unity::GUIClipContext {
    IL2CPP_REGISTER_METHOD(0x00246C90, void, ctor, (app::GUIClipContext__Boxed * this_ptr, app::Rect rect, app::Vector2 scroll))
    IL2CPP_REGISTER_METHOD(0x03114A40, app::GUIClipContext, Shift, (app::Rect rect, app::Vector2 scroll))
    IL2CPP_REGISTER_METHOD(0x00246CB0, void, Dispose, (app::GUIClipContext__Boxed * this_ptr))
}
