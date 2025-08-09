#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ListMembershipResponse.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabResultEvent_1_PlayFab_GroupsModels_ListMembershipResponse_.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabResultEvent_1_PlayFab_GroupsModels_ListMembershipResponse_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabResultEvent_1_PlayFab_GroupsModels_ListMembershipResponse_* this_ptr,
        app::ListMembershipResponse* result
    )
}
