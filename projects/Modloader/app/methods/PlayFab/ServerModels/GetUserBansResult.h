#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetUserBansResult.h>

namespace app::classes::PlayFab::ServerModels::GetUserBansResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::GetUserBansResult* this_ptr)
}
