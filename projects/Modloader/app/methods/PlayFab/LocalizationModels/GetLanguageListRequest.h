#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetLanguageListRequest.h>

namespace app::classes::PlayFab::LocalizationModels::GetLanguageListRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::GetLanguageListRequest* this_ptr)
}
