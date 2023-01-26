#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BrowserSystemSettings.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::BrowserSystemSettings {
    IL2CPP_REGISTER_METHOD(0x01DCE500, void, Awake, (app::BrowserSystemSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::BrowserSystemSettings * this_ptr))
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::BrowserSystemSettings
