#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ServerCustomIDPlayFabIDPair.h>

namespace app::classes::PlayFab::ServerModels::ServerCustomIDPlayFabIDPair {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ServerCustomIDPlayFabIDPair * this_ptr))
}
