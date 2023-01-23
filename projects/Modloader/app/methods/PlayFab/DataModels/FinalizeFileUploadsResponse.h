#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/FinalizeFileUploadsResponse.h>

namespace app::classes::PlayFab::DataModels::FinalizeFileUploadsResponse {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::FinalizeFileUploadsResponse * this_ptr))
}
