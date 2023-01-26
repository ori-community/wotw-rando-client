#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LinkedPlatformAccountModel.h>

namespace app::classes::PlayFab::ClientModels::LinkedPlatformAccountModel {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::LinkedPlatformAccountModel * this_ptr))
}
