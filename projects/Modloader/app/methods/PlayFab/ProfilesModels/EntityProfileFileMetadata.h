#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EntityProfileFileMetadata.h>

namespace app::classes::PlayFab::ProfilesModels::EntityProfileFileMetadata {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::EntityProfileFileMetadata * this_ptr))
}
