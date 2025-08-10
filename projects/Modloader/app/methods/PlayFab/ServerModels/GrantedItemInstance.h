#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GrantedItemInstance.h>

namespace app::classes::PlayFab::ServerModels::GrantedItemInstance {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::GrantedItemInstance* this_ptr)
}
