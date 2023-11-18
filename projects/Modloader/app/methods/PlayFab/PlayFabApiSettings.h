#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Dictionary_2_System_String_System_String_.h>
#include <Modloader/app/structs/PlayFabApiSettings.h>

namespace app::classes::PlayFab::PlayFabApiSettings {
    IL2CPP_REGISTER_METHOD(0x017B3E00, app::String*, GetFullUrl, (app::PlayFabApiSettings * this_ptr, app::String* api_call, app::Dictionary_2_System_String_System_String_* get_params))
    IL2CPP_REGISTER_METHOD(0x017B3EC0, void, ctor, (app::PlayFabApiSettings * this_ptr))
} // namespace app::classes::PlayFab::PlayFabApiSettings
