#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ConnectedPlayer.h>

namespace app::classes::PlayFab::MultiplayerModels::ConnectedPlayer {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::ConnectedPlayer* this_ptr)
}
