#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UserPsnInfo.h>

namespace app::classes::PlayFab::ClientModels::UserPsnInfo {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::UserPsnInfo * this_ptr))
}
