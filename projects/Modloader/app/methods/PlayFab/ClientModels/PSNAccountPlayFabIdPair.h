#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PSNAccountPlayFabIdPair.h>

namespace app::classes::PlayFab::ClientModels::PSNAccountPlayFabIdPair {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::PSNAccountPlayFabIdPair * this_ptr))
}
