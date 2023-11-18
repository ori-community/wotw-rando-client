#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CharacterResult_1.h>

namespace app::classes::PlayFab::ServerModels::CharacterResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::CharacterResult_1 * this_ptr))
}
