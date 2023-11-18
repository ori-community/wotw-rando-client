#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetLanguageListResponse.h>

namespace app::classes::PlayFab::LocalizationModels::GetLanguageListResponse {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GetLanguageListResponse * this_ptr))
}
