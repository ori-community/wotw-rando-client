#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/AbortFileUploadsResponse.h>

namespace app::classes::PlayFab::DataModels::AbortFileUploadsResponse {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::AbortFileUploadsResponse * this_ptr))
}
