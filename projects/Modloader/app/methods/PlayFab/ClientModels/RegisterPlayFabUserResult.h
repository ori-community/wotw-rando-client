#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RegisterPlayFabUserResult.h>

namespace app::classes::PlayFab::ClientModels::RegisterPlayFabUserResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::RegisterPlayFabUserResult * this_ptr))
}
