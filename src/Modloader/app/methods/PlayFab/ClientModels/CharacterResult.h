#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CharacterResult.h>

namespace app::classes::PlayFab::ClientModels::CharacterResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::CharacterResult* this_ptr)
}
