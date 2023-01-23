#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PlayerProfileViewConstraints.h>

namespace app::classes::PlayFab::ClientModels::PlayerProfileViewConstraints {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::PlayerProfileViewConstraints * this_ptr))
}
