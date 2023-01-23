#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ServerDetails.h>

namespace app::classes::PlayFab::MultiplayerModels::ServerDetails {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ServerDetails * this_ptr))
}
