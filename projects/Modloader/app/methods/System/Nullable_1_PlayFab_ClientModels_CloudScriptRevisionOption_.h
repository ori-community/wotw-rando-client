#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CloudScriptRevisionOption__Enum.h>
#include <Modloader/app/structs/Nullable_1_PlayFab_ClientModels_CloudScriptRevisionOption___Boxed.h>

namespace app::classes::System::Nullable_1_PlayFab_ClientModels_CloudScriptRevisionOption_ {
    IL2CPP_REGISTER_METHOD(0x001F6090, bool, get_HasValue, app::Nullable_1_PlayFab_ClientModels_CloudScriptRevisionOption___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0020E5F0,
        app::CloudScriptRevisionOption__Enum,
        get_Value,
        app::Nullable_1_PlayFab_ClientModels_CloudScriptRevisionOption___Boxed* this_ptr
    )
} // namespace app::classes::System::Nullable_1_PlayFab_ClientModels_CloudScriptRevisionOption_
