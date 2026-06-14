#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UserCustomIdInfo_1.h>

namespace app::classes::PlayFab::ServerModels::UserCustomIdInfo {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::UserCustomIdInfo_1* this_ptr)
}
