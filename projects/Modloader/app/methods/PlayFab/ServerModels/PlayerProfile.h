#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayerProfile.h>

namespace app::classes::PlayFab::ServerModels::PlayerProfile {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::PlayerProfile* this_ptr)
}
