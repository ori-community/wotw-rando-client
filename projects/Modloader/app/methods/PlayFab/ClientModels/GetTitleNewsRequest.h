#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetTitleNewsRequest.h>

namespace app::classes::PlayFab::ClientModels::GetTitleNewsRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::GetTitleNewsRequest* this_ptr)
}
