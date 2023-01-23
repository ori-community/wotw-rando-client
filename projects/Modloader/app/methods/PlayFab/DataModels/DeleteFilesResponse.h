#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DeleteFilesResponse.h>

namespace app::classes::PlayFab::DataModels::DeleteFilesResponse {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DeleteFilesResponse * this_ptr))
}
