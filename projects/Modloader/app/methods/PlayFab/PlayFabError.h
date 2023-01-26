#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/PlayFabError.h>

namespace app::classes::PlayFab::PlayFabError {
    IL2CPP_REGISTER_METHOD(0x01A27450, app::String*, ToString, (app::PlayFabError * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A27980, app::String*, GenerateErrorReport, (app::PlayFabError * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::PlayFabError * this_ptr))
} // namespace app::classes::PlayFab::PlayFabError
