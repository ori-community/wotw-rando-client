#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ItemInstance.h>

namespace app::classes::PlayFab::ClientModels::ItemInstance {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::ItemInstance* this_ptr)
}
