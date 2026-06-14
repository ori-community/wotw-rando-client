#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ExecuteCloudScriptResult.h>
#include <Modloader/app/structs/PlayFabClientInstanceAPI_c_DisplayClass26_0_1_System_Object_.h>

namespace app::classes::PlayFab::PlayFabClientInstanceAPI___c__DisplayClass26_0_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, app::PlayFabClientInstanceAPI_c_DisplayClass26_0_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01D16B00,
        void,
        _ExecuteCloudScript_b__0,
        app::PlayFabClientInstanceAPI_c_DisplayClass26_0_1_System_Object_* this_ptr,
        app::ExecuteCloudScriptResult* wrapped_result
    )
} // namespace app::classes::PlayFab::PlayFabClientInstanceAPI___c__DisplayClass26_0_1_System_Object_
