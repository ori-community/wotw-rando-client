#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_String_PlayFab_ClientModels_UserDataRecord_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UserDataRecord.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_PlayFab_ClientModels_UserDataRecord_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_System_String_PlayFab_ClientModels_UserDataRecord_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02BAC140,
        void,
        set_Item,
        app::Dictionary_2_System_String_PlayFab_ClientModels_UserDataRecord_* this_ptr,
        app::String* key,
        app::UserDataRecord* value
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_PlayFab_ClientModels_UserDataRecord_
