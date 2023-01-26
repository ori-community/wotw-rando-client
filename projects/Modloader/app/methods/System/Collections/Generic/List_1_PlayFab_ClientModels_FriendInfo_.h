#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_T_Enumerator_PlayFab_ClientModels_FriendInfo_.h>
#include <Modloader/app/structs/FriendInfo.h>
#include <Modloader/app/structs/List_1_PlayFab_ClientModels_FriendInfo_.h>

namespace app::classes::System::Collections::Generic::List_1_PlayFab_ClientModels_FriendInfo_ {
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_PlayFab_ClientModels_FriendInfo_, GetEnumerator, (app::List_1_PlayFab_ClientModels_FriendInfo_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_PlayFab_ClientModels_FriendInfo_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_PlayFab_ClientModels_FriendInfo_ * this_ptr, app::FriendInfo* item))
} // namespace app::classes::System::Collections::Generic::List_1_PlayFab_ClientModels_FriendInfo_
