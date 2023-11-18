#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/KongregatePlayFabIdPair.h>

namespace app::classes::PlayFab::ClientModels::KongregatePlayFabIdPair {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::KongregatePlayFabIdPair * this_ptr))
}
