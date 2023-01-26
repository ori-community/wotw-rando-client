#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetFilesRequest.h>

namespace app::classes::PlayFab::DataModels::GetFilesRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GetFilesRequest * this_ptr))
}
