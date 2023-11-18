#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayerProfileModel_1.h>

namespace app::classes::PlayFab::ServerModels::PlayerProfileModel {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::PlayerProfileModel_1 * this_ptr))
}
