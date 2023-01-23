#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/EntityKey_3.h>

namespace app::classes::PlayFab::DataModels::EntityKey {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::EntityKey_3 * this_ptr))
}
