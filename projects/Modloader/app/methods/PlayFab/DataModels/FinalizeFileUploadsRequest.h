#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/FinalizeFileUploadsRequest.h>

namespace app::classes::PlayFab::DataModels::FinalizeFileUploadsRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::FinalizeFileUploadsRequest * this_ptr))
}
