#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetTitleNewsResult.h>

namespace app::classes::PlayFab::ClientModels::GetTitleNewsResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GetTitleNewsResult * this_ptr))
}
