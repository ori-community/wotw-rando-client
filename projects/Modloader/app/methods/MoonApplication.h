#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IDisposable.h>

namespace app::classes::MoonApplication {
    IL2CPP_REGISTER_METHOD(0x025739C0, app::IDisposable*, SimulateBuildingPlayerScope, ())
    IL2CPP_REGISTER_METHOD(0x02573C70, bool, get_IsBuildingPlayer, ())
    IL2CPP_REGISTER_METHOD(0x02573D10, void, cctor, ())
} // namespace app::classes::MoonApplication
