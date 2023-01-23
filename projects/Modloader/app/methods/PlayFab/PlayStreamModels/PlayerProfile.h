#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PlayerProfile_1.h>

namespace app::classes::PlayFab::PlayStreamModels::PlayerProfile {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::PlayerProfile_1 * this_ptr))
}
