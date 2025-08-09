#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GrantCharacterToUserResult.h>

namespace app::classes::PlayFab::ClientModels::GrantCharacterToUserResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::GrantCharacterToUserResult* this_ptr)
}
