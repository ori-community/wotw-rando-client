#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UpdateUserTitleDisplayNameResult.h>

namespace app::classes::PlayFab::ClientModels::UpdateUserTitleDisplayNameResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::UpdateUserTitleDisplayNameResult * this_ptr))
}
