#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EntityKey.h>

namespace app::classes::PlayFab::AuthenticationModels::EntityKey {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::EntityKey* this_ptr)
}
