#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetPlayerProfileResult.h>

namespace app::classes::PlayFab::ClientModels::GetPlayerProfileResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::GetPlayerProfileResult* this_ptr)
}
