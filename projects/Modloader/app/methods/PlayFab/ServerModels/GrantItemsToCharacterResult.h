#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GrantItemsToCharacterResult.h>

namespace app::classes::PlayFab::ServerModels::GrantItemsToCharacterResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::GrantItemsToCharacterResult* this_ptr)
}
