#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayerLeftLobbyEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::PlayerLeftLobbyEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::PlayerLeftLobbyEventData * this_ptr))
}
