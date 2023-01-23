#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/EntityKey_1.h>

namespace app::classes::PlayFab::ClientModels::EntityKey {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::EntityKey_1 * this_ptr))
}
