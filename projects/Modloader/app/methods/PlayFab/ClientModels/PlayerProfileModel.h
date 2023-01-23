#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PlayerProfileModel.h>

namespace app::classes::PlayFab::ClientModels::PlayerProfileModel {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::PlayerProfileModel * this_ptr))
}
