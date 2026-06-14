#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ListMembershipOpportunitiesResponse.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabResultEvent_1_PlayFab_GroupsModel_ListMembershipOpportunitiesRespons_.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabResultEvent_1_PlayFab_GroupsModels_ListMembershipOpportunitiesResponse_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabResultEvent_1_PlayFab_GroupsModels_ListMembershipOpportunitiesResponse_* this_ptr,
        app::ListMembershipOpportunitiesResponse* result
    )
}
