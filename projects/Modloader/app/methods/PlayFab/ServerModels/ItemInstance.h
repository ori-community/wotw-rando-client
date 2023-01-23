#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ItemInstance_2.h>

namespace app::classes::PlayFab::ServerModels::ItemInstance {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ItemInstance_2 * this_ptr))
}
