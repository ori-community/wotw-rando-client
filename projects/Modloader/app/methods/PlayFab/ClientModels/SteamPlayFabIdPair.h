#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SteamPlayFabIdPair.h>

namespace app::classes::PlayFab::ClientModels::SteamPlayFabIdPair {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::SteamPlayFabIdPair* this_ptr)
}
