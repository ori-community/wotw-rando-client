#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/StandaloneShutdown.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::StandaloneShutdown {
    IL2CPP_REGISTER_METHOD(0x0166CB70, void, Create, ())
    IL2CPP_REGISTER_METHOD(0x0166CD30, void, OnApplicationQuit, (app::StandaloneShutdown * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::StandaloneShutdown * this_ptr))
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::StandaloneShutdown
