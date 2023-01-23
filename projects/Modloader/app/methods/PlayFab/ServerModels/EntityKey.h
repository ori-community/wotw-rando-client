#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/EntityKey_8.h>

namespace app::classes::PlayFab::ServerModels::EntityKey {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::EntityKey_8 * this_ptr))
}
