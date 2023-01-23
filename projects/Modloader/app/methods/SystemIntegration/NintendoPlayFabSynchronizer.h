#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/NintendoPlayFabSynchronizer.h>
#include <Modloader/app/structs/GetFriendsListResult.h>
#include <Modloader/app/structs/GetPlayFabIDsFromNintendoSwitchDeviceIdsResult.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/PlayFabError.h>

namespace app::classes::SystemIntegration::NintendoPlayFabSynchronizer {
    IL2CPP_REGISTER_METHOD(0x00516E50, app::NintendoPlayFabSynchronizer*, get_Instance, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Initialize, (app::NintendoPlayFabSynchronizer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, LinkID, (app::NintendoPlayFabSynchronizer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00517030, void, SyncIfNecessary, (app::NintendoPlayFabSynchronizer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005171E0, void, StartFriendSync, (app::NintendoPlayFabSynchronizer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005171F0, void, InvalidateSync, (app::NintendoPlayFabSynchronizer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00517200, void, GetPlayFabFriends, (app::NintendoPlayFabSynchronizer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPlayFabFriendsRetrieved, (app::NintendoPlayFabSynchronizer * this_ptr, app::GetFriendsListResult* friend_list_result))
    IL2CPP_REGISTER_METHODINFO(0x047115A0, NintendoPlayFabSynchronizer_OnPlayFabFriendsRetrieved__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00517720, void, OnAllFriendDataRetrieved, (app::NintendoPlayFabSynchronizer * this_ptr, app::GetPlayFabIDsFromNintendoSwitchDeviceIdsResult* pair_result, app::GetFriendsListResult* friend_list_result))
    IL2CPP_REGISTER_METHOD(0x00517C60, void, AddFriend, (app::NintendoPlayFabSynchronizer * this_ptr, app::String* play_fab_id))
    IL2CPP_REGISTER_METHOD(0x005182C0, void, RemoveFriend, (app::NintendoPlayFabSynchronizer * this_ptr, app::String* play_fab_id))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::NintendoPlayFabSynchronizer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00518920, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x005189B0, void, _GetPlayFabFriends_b__15_0, (app::NintendoPlayFabSynchronizer * this_ptr, app::PlayFabError* error))
    IL2CPP_REGISTER_METHODINFO(0x04775650, NintendoPlayFabSynchronizer__GetPlayFabFriends_b__15_0__MethodInfo)
} // namespace app::classes::SystemIntegration::NintendoPlayFabSynchronizer
