#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UnlockContainerItemResult.h>

namespace app::classes::PlayFab::ClientModels::UnlockContainerItemResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::UnlockContainerItemResult* this_ptr)
}
