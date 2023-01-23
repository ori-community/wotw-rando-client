#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GameLobbyEndedEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::GameLobbyEndedEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GameLobbyEndedEventData * this_ptr))
}
