#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UserDataRecord.h>

namespace app::classes::PlayFab::ClientModels::UserDataRecord {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::UserDataRecord * this_ptr))
}
