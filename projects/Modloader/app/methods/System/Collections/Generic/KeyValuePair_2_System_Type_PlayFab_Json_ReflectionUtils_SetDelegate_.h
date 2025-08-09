#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/KeyValuePair_2_System_Type_PlayFab_Json_ReflectionUtils_SetDelegate___Boxed.h>
#include <Modloader/app/structs/ReflectionUtils_SetDelegate.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Collections::Generic::KeyValuePair_2_System_Type_PlayFab_Json_ReflectionUtils_SetDelegate_ {
    IL2CPP_REGISTER_METHOD(
        0x00110270,
        void,
        ctor,
        app::KeyValuePair_2_System_Type_PlayFab_Json_ReflectionUtils_SetDelegate___Boxed* this_ptr,
        app::Type* key,
        app::ReflectionUtils_SetDelegate* value
    )
    IL2CPP_REGISTER_METHOD(0x00107C00, app::Type*, get_Key, app::KeyValuePair_2_System_Type_PlayFab_Json_ReflectionUtils_SetDelegate___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00107C10,
        app::ReflectionUtils_SetDelegate*,
        get_Value,
        app::KeyValuePair_2_System_Type_PlayFab_Json_ReflectionUtils_SetDelegate___Boxed* this_ptr
    )
} // namespace app::classes::System::Collections::Generic::KeyValuePair_2_System_Type_PlayFab_Json_ReflectionUtils_SetDelegate_
