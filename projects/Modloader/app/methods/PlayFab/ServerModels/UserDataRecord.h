#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UserDataRecord_1.h>

namespace app::classes::PlayFab::ServerModels::UserDataRecord {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::UserDataRecord_1 * this_ptr))
}
