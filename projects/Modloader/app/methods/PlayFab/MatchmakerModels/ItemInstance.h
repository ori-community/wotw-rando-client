#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ItemInstance_1.h>

namespace app::classes::PlayFab::MatchmakerModels::ItemInstance {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::ItemInstance_1* this_ptr)
}
