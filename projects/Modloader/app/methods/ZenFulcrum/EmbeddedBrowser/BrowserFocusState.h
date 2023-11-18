#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BrowserFocusState.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::BrowserFocusState {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::BrowserFocusState * this_ptr))
}
