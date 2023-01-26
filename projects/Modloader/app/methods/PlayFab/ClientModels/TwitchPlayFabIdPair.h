#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TwitchPlayFabIdPair.h>

namespace app::classes::PlayFab::ClientModels::TwitchPlayFabIdPair {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::TwitchPlayFabIdPair * this_ptr))
}
