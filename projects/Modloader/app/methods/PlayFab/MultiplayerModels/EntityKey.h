#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EntityKey_6.h>

namespace app::classes::PlayFab::MultiplayerModels::EntityKey {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::EntityKey_6* this_ptr)
}
