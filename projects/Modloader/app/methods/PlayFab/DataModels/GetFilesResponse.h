#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetFilesResponse.h>

namespace app::classes::PlayFab::DataModels::GetFilesResponse {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::GetFilesResponse* this_ptr)
}
