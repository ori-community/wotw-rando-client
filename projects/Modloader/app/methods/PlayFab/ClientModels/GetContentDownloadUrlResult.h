#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetContentDownloadUrlResult.h>

namespace app::classes::PlayFab::ClientModels::GetContentDownloadUrlResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GetContentDownloadUrlResult * this_ptr))
}
