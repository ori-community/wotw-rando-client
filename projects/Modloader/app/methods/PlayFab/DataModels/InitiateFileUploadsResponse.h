#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/InitiateFileUploadsResponse.h>

namespace app::classes::PlayFab::DataModels::InitiateFileUploadsResponse {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::InitiateFileUploadsResponse * this_ptr))
}
