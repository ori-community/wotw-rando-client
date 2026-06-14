#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LinkedPlatformAccountModel.h>
#include <Modloader/app/structs/List_1_PlayFab_ClientModels_LinkedPlatformAccountModel_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_PlayFab_ClientModels_LinkedPlatformAccountModel_.h>

namespace app::classes::System::Collections::Generic::List_1_PlayFab_ClientModels_LinkedPlatformAccountModel_ {
    IL2CPP_REGISTER_METHOD(
        0x025F0B10,
        app::List_1_T_Enumerator_PlayFab_ClientModels_LinkedPlatformAccountModel_,
        GetEnumerator,
        app::List_1_PlayFab_ClientModels_LinkedPlatformAccountModel_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_PlayFab_ClientModels_LinkedPlatformAccountModel_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, app::List_1_PlayFab_ClientModels_LinkedPlatformAccountModel_* this_ptr, app::LinkedPlatformAccountModel* item)
} // namespace app::classes::System::Collections::Generic::List_1_PlayFab_ClientModels_LinkedPlatformAccountModel_
