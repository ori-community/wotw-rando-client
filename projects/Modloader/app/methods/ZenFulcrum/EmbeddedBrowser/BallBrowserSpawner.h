#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BallBrowserSpawner.h>
#include <Modloader/app/structs/Browser.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::BallBrowserSpawner {
    IL2CPP_REGISTER_METHOD(0x01C60D90, void, Start, (app::BallBrowserSpawner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01C60E30, app::Browser*, CreateBrowser, (app::BallBrowserSpawner * this_ptr, app::Browser* parent))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::BallBrowserSpawner * this_ptr))
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::BallBrowserSpawner
