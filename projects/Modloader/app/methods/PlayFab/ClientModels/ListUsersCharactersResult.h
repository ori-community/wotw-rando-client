#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ListUsersCharactersResult.h>

namespace app::classes::PlayFab::ClientModels::ListUsersCharactersResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::ListUsersCharactersResult* this_ptr)
}
