#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AddPlayerTagResult.h>

namespace app::classes::PlayFab::ServerModels::AddPlayerTagResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::AddPlayerTagResult * this_ptr))
}
