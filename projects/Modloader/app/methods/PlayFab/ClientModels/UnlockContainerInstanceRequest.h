#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UnlockContainerInstanceRequest.h>

namespace app::classes::PlayFab::ClientModels::UnlockContainerInstanceRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::UnlockContainerInstanceRequest* this_ptr)
}
