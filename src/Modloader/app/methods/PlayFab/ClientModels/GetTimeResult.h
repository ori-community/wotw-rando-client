#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetTimeResult.h>

namespace app::classes::PlayFab::ClientModels::GetTimeResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::GetTimeResult* this_ptr)
}
