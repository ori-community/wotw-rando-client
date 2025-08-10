#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InitiateFileUploadMetadata.h>

namespace app::classes::PlayFab::DataModels::InitiateFileUploadMetadata {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::InitiateFileUploadMetadata* this_ptr)
}
