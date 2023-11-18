#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FacebookPlayFabIdPair.h>

namespace app::classes::PlayFab::ClientModels::FacebookPlayFabIdPair {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::FacebookPlayFabIdPair * this_ptr))
}
