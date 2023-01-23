#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UserKongregateInfo_1.h>

namespace app::classes::PlayFab::ServerModels::UserKongregateInfo {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::UserKongregateInfo_1 * this_ptr))
}
