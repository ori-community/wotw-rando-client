#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SteamPlayFabIdPair_1.h>

namespace app::classes::PlayFab::ServerModels::SteamPlayFabIdPair {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SteamPlayFabIdPair_1 * this_ptr))
}
