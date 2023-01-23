#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UserPsnInfo_1.h>

namespace app::classes::PlayFab::ServerModels::UserPsnInfo {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::UserPsnInfo_1 * this_ptr))
}
