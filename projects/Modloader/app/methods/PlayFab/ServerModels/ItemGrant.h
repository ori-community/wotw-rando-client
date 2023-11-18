#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ItemGrant.h>

namespace app::classes::PlayFab::ServerModels::ItemGrant {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ItemGrant * this_ptr))
}
