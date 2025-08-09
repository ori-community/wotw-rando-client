#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UpdateSharedGroupDataResult.h>

namespace app::classes::PlayFab::ClientModels::UpdateSharedGroupDataResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::UpdateSharedGroupDataResult* this_ptr)
}
