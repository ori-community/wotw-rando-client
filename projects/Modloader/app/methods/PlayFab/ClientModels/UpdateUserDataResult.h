#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UpdateUserDataResult.h>

namespace app::classes::PlayFab::ClientModels::UpdateUserDataResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::UpdateUserDataResult* this_ptr)
}
