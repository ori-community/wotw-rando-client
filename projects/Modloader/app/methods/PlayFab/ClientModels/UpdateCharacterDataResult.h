#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UpdateCharacterDataResult.h>

namespace app::classes::PlayFab::ClientModels::UpdateCharacterDataResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::UpdateCharacterDataResult* this_ptr)
}
