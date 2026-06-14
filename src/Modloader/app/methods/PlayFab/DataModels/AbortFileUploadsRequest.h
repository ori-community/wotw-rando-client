#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AbortFileUploadsRequest.h>

namespace app::classes::PlayFab::DataModels::AbortFileUploadsRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::AbortFileUploadsRequest* this_ptr)
}
