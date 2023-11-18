#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetUserDataResult.h>

namespace app::classes::PlayFab::ClientModels::GetUserDataResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GetUserDataResult * this_ptr))
}
