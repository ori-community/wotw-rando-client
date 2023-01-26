#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GrantCharacterToUserResult_1.h>

namespace app::classes::PlayFab::ServerModels::GrantCharacterToUserResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GrantCharacterToUserResult_1 * this_ptr))
}
