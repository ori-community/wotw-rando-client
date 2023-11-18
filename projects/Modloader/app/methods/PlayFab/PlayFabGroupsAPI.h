#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AcceptGroupApplicationRequest.h>
#include <Modloader/app/structs/AcceptGroupInvitationRequest.h>
#include <Modloader/app/structs/Action_1_PlayFab_GroupsModels_ApplyToGroupResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_GroupsModels_CreateGroupResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_GroupsModels_CreateGroupRoleResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_GroupsModels_EmptyResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_GroupsModels_GetGroupResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_GroupsModels_InviteToGroupResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_GroupsModels_IsMemberResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_GroupsModels_ListGroupApplicationsResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_GroupsModels_ListGroupBlocksResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_GroupsModels_ListGroupInvitationsResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_GroupsModels_ListGroupMembersResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_GroupsModels_ListMembershipOpportunitiesResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_GroupsModels_ListMembershipResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_GroupsModels_UpdateGroupResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_GroupsModels_UpdateGroupRoleResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_PlayFabError_.h>
#include <Modloader/app/structs/AddMembersRequest.h>
#include <Modloader/app/structs/ApplyToGroupRequest.h>
#include <Modloader/app/structs/BlockEntityRequest.h>
#include <Modloader/app/structs/ChangeMemberRoleRequest.h>
#include <Modloader/app/structs/CreateGroupRequest.h>
#include <Modloader/app/structs/CreateGroupRoleRequest.h>
#include <Modloader/app/structs/DeleteGroupRequest.h>
#include <Modloader/app/structs/DeleteRoleRequest.h>
#include <Modloader/app/structs/Dictionary_2_System_String_System_String_.h>
#include <Modloader/app/structs/GetGroupRequest.h>
#include <Modloader/app/structs/InviteToGroupRequest.h>
#include <Modloader/app/structs/IsMemberRequest.h>
#include <Modloader/app/structs/ListGroupApplicationsRequest.h>
#include <Modloader/app/structs/ListGroupBlocksRequest.h>
#include <Modloader/app/structs/ListGroupInvitationsRequest.h>
#include <Modloader/app/structs/ListGroupMembersRequest.h>
#include <Modloader/app/structs/ListMembershipOpportunitiesRequest.h>
#include <Modloader/app/structs/ListMembershipRequest.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/RemoveGroupApplicationRequest.h>
#include <Modloader/app/structs/RemoveGroupInvitationRequest.h>
#include <Modloader/app/structs/RemoveMembersRequest.h>
#include <Modloader/app/structs/UnblockEntityRequest.h>
#include <Modloader/app/structs/UpdateGroupRequest.h>
#include <Modloader/app/structs/UpdateGroupRoleRequest.h>

namespace app::classes::PlayFab::PlayFabGroupsAPI {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x01A2A140, void, ForgetAllCredentials, ())
    IL2CPP_REGISTER_METHOD(0x01A2A1D0, void, AcceptGroupApplication, (app::AcceptGroupApplicationRequest * request, app::Action_1_PlayFab_GroupsModels_EmptyResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A2A2E0, void, AcceptGroupInvitation, (app::AcceptGroupInvitationRequest * request, app::Action_1_PlayFab_GroupsModels_EmptyResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A2A3F0, void, AddMembers, (app::AddMembersRequest * request, app::Action_1_PlayFab_GroupsModels_EmptyResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A2A500, void, ApplyToGroup, (app::ApplyToGroupRequest * request, app::Action_1_PlayFab_GroupsModels_ApplyToGroupResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A2A610, void, BlockEntity, (app::BlockEntityRequest * request, app::Action_1_PlayFab_GroupsModels_EmptyResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A2A720, void, ChangeMemberRole, (app::ChangeMemberRoleRequest * request, app::Action_1_PlayFab_GroupsModels_EmptyResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A2A830, void, CreateGroup, (app::CreateGroupRequest * request, app::Action_1_PlayFab_GroupsModels_CreateGroupResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A2A940, void, CreateRole, (app::CreateGroupRoleRequest * request, app::Action_1_PlayFab_GroupsModels_CreateGroupRoleResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A2AA50, void, DeleteGroup, (app::DeleteGroupRequest * request, app::Action_1_PlayFab_GroupsModels_EmptyResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A2AB60, void, DeleteRole, (app::DeleteRoleRequest * request, app::Action_1_PlayFab_GroupsModels_EmptyResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A2AC70, void, GetGroup, (app::GetGroupRequest * request, app::Action_1_PlayFab_GroupsModels_GetGroupResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A2AD80, void, InviteToGroup, (app::InviteToGroupRequest * request, app::Action_1_PlayFab_GroupsModels_InviteToGroupResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A2AE90, void, IsMember, (app::IsMemberRequest * request, app::Action_1_PlayFab_GroupsModels_IsMemberResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A2AFA0, void, ListGroupApplications, (app::ListGroupApplicationsRequest * request, app::Action_1_PlayFab_GroupsModels_ListGroupApplicationsResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A2B0B0, void, ListGroupBlocks, (app::ListGroupBlocksRequest * request, app::Action_1_PlayFab_GroupsModels_ListGroupBlocksResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A2B1C0, void, ListGroupInvitations, (app::ListGroupInvitationsRequest * request, app::Action_1_PlayFab_GroupsModels_ListGroupInvitationsResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A2B2D0, void, ListGroupMembers, (app::ListGroupMembersRequest * request, app::Action_1_PlayFab_GroupsModels_ListGroupMembersResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A2B3E0, void, ListMembership, (app::ListMembershipRequest * request, app::Action_1_PlayFab_GroupsModels_ListMembershipResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A2B4F0, void, ListMembershipOpportunities, (app::ListMembershipOpportunitiesRequest * request, app::Action_1_PlayFab_GroupsModels_ListMembershipOpportunitiesResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A2B600, void, RemoveGroupApplication, (app::RemoveGroupApplicationRequest * request, app::Action_1_PlayFab_GroupsModels_EmptyResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A2B710, void, RemoveGroupInvitation, (app::RemoveGroupInvitationRequest * request, app::Action_1_PlayFab_GroupsModels_EmptyResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A2B820, void, RemoveMembers, (app::RemoveMembersRequest * request, app::Action_1_PlayFab_GroupsModels_EmptyResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A2B930, void, UnblockEntity, (app::UnblockEntityRequest * request, app::Action_1_PlayFab_GroupsModels_EmptyResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A2BA40, void, UpdateGroup, (app::UpdateGroupRequest * request, app::Action_1_PlayFab_GroupsModels_UpdateGroupResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A2BB50, void, UpdateRole, (app::UpdateGroupRoleRequest * request, app::Action_1_PlayFab_GroupsModels_UpdateGroupRoleResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
} // namespace app::classes::PlayFab::PlayFabGroupsAPI
