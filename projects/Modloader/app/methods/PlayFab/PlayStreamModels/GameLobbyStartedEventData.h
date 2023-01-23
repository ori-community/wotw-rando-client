#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GameLobbyStartedEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::GameLobbyStartedEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GameLobbyStartedEventData * this_ptr))
}
