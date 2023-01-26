#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GooglePlayFabIdPair.h>

namespace app::classes::PlayFab::ClientModels::GooglePlayFabIdPair {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GooglePlayFabIdPair * this_ptr))
}
