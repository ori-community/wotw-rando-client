#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CursorRendererBase.h>
#include <Modloader/app/structs/IEnumerator.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::CursorRendererBase {
    IL2CPP_REGISTER_METHOD(0x01DD1CA0, void, OnEnable, (app::CursorRendererBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DD1DF0, app::IEnumerator*, Setup, (app::CursorRendererBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::CursorRendererBase * this_ptr))
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::CursorRendererBase
