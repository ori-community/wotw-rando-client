#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetFileMetadata.h>

namespace app::classes::PlayFab::DataModels::GetFileMetadata {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::GetFileMetadata* this_ptr)
}
