#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CursorRendererOS.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::CursorRendererOS {
    IL2CPP_REGISTER_METHOD(0x01DD21A0, void, CursorChange, (app::CursorRendererOS * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008223A0, void, ctor, (app::CursorRendererOS * this_ptr))
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::CursorRendererOS
