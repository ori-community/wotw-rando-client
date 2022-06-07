#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ZenFulcrum::EmbeddedBrowser::CursorRendererBase {
    IL2CPP_REGISTER_METHOD(0x01DD1CA0, void, OnEnable, (app::CursorRendererBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DD1DF0, app::IEnumerator *, Setup, (app::CursorRendererBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::CursorRendererBase * this_ptr))
}
