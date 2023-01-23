#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PlayFabGroupsInstanceAPI.h>
#include <Modloader/app/structs/PlayFabApiSettings.h>
#include <Modloader/app/structs/PlayFabAuthenticationContext.h>
#include <Modloader/app/structs/AcceptGroupApplicationRequest.h>
#include <Modloader/app/structs/Action_1_PlayFab_GroupsModels_EmptyResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_PlayFabError_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Dictionary_2_System_String_System_String_.h>
#include <Modloader/app/structs/AcceptGroupInvitationRequest.h>
#include <Modloader/app/structs/AddMembersRequest.h>
#include <Modloader/app/structs/ApplyToGroupRequest.h>
#include <Modloader/app/structs/Action_1_PlayFab_GroupsModels_ApplyToGroupResponse_.h>
#include <Modloader/app/structs/BlockEntityRequest.h>
#include <Modloader/app/structs/ChangeMemberRoleRequest.h>
#include <Modloader/app/structs/CreateGroupRequest.h>
#include <Modloader/app/structs/Action_1_PlayFab_GroupsModels_CreateGroupResponse_.h>
#include <Modloader/app/structs/CreateGroupRoleRequest.h>
#include <Modloader/app/structs/Action_1_PlayFab_GroupsModels_CreateGroupRoleResponse_.h>
#include <Modloader/app/structs/DeleteGroupRequest.h>
#include <Modloader/app/structs/DeleteRoleRequest.h>
#include <Modloader/app/structs/GetGroupRequest.h>
#include <Modloader/app/structs/Action_1_PlayFab_GroupsModels_GetGroupResponse_.h>
#include <Modloader/app/structs/InviteToGroupRequest.h>
#include <Modloader/app/structs/Action_1_PlayFab_GroupsModels_InviteToGroupResponse_.h>
#include <Modloader/app/structs/IsMemberRequest.h>
#include <Modloader/app/structs/Action_1_PlayFab_GroupsModels_IsMemberResponse_.h>
#include <Modloader/app/structs/ListGroupApplicationsRequest.h>
#include <Modloader/app/structs/Action_1_PlayFab_GroupsModels_ListGroupApplicationsResponse_.h>
#include <Modloader/app/structs/ListGroupBlocksRequest.h>
#include <Modloader/app/structs/Action_1_PlayFab_GroupsModels_ListGroupBlocksResponse_.h>
#include <Modloader/app/structs/ListGroupInvitationsRequest.h>
#include <Modloader/app/structs/Action_1_PlayFab_GroupsModels_ListGroupInvitationsResponse_.h>
#include <Modloader/app/structs/ListGroupMembersRequest.h>
#include <Modloader/app/structs/Action_1_PlayFab_GroupsModels_ListGroupMembersResponse_.h>
#include <Modloader/app/structs/ListMembershipRequest.h>
#include <Modloader/app/structs/Action_1_PlayFab_GroupsModels_ListMembershipResponse_.h>
#include <Modloader/app/structs/ListMembershipOpportunitiesRequest.h>
#include <Modloader/app/structs/Action_1_PlayFab_GroupsModels_ListMembershipOpportunitiesResponse_.h>
#include <Modloader/app/structs/RemoveGroupApplicationRequest.h>
#include <Modloader/app/structs/RemoveGroupInvitationRequest.h>
#include <Modloader/app/structs/RemoveMembersRequest.h>
#include <Modloader/app/structs/UnblockEntityRequest.h>
#include <Modloader/app/structs/UpdateGroupRequest.h>
#include <Modloader/app/structs/Action_1_PlayFab_GroupsModels_UpdateGroupResponse_.h>
#include <Modloader/app/structs/UpdateGroupRoleRequest.h>
#include <Modloader/app/structs/Action_1_PlayFab_GroupsModels_UpdateGroupRoleResponse_.h>

namespace app::classes::PlayFab::PlayFabGroupsInstanceAPI {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_1, (app::PlayFabGroupsInstanceAPI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor_2, (app::PlayFabGroupsInstanceAPI * this_ptr, app::PlayFabApiSettings* settings))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, ctor_3, (app::PlayFabGroupsInstanceAPI * this_ptr, app::PlayFabAuthenticationContext* context))
    IL2CPP_REGISTER_METHOD(0x0058DA40, void, ctor_4, (app::PlayFabGroupsInstanceAPI * this_ptr, app::PlayFabApiSettings* settings, app::PlayFabAuthenticationContext* context))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, SetAuthenticationContext, (app::PlayFabGroupsInstanceAPI * this_ptr, app::PlayFabAuthenticationContext* context))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::PlayFabAuthenticationContext*, GetAuthenticationContext, (app::PlayFabGroupsInstanceAPI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017B4520, void, ForgetAllCredentials, (app::PlayFabGroupsInstanceAPI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A2BC60, void, AcceptGroupApplication, (app::PlayFabGroupsInstanceAPI * this_ptr, app::AcceptGroupApplicationRequest* request, app::Action_1_PlayFab_GroupsModels_EmptyResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A2BD80, void, AcceptGroupInvitation, (app::PlayFabGroupsInstanceAPI * this_ptr, app::AcceptGroupInvitationRequest* request, app::Action_1_PlayFab_GroupsModels_EmptyResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A2BEA0, void, AddMembers, (app::PlayFabGroupsInstanceAPI * this_ptr, app::AddMembersRequest* request, app::Action_1_PlayFab_GroupsModels_EmptyResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A2BFC0, void, ApplyToGroup, (app::PlayFabGroupsInstanceAPI * this_ptr, app::ApplyToGroupRequest* request, app::Action_1_PlayFab_GroupsModels_ApplyToGroupResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A2C0E0, void, BlockEntity, (app::PlayFabGroupsInstanceAPI * this_ptr, app::BlockEntityRequest* request, app::Action_1_PlayFab_GroupsModels_EmptyResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A2C200, void, ChangeMemberRole, (app::PlayFabGroupsInstanceAPI * this_ptr, app::ChangeMemberRoleRequest* request, app::Action_1_PlayFab_GroupsModels_EmptyResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A2C320, void, CreateGroup, (app::PlayFabGroupsInstanceAPI * this_ptr, app::CreateGroupRequest* request, app::Action_1_PlayFab_GroupsModels_CreateGroupResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A2C440, void, CreateRole, (app::PlayFabGroupsInstanceAPI * this_ptr, app::CreateGroupRoleRequest* request, app::Action_1_PlayFab_GroupsModels_CreateGroupRoleResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A2C560, void, DeleteGroup, (app::PlayFabGroupsInstanceAPI * this_ptr, app::DeleteGroupRequest* request, app::Action_1_PlayFab_GroupsModels_EmptyResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A2C680, void, DeleteRole, (app::PlayFabGroupsInstanceAPI * this_ptr, app::DeleteRoleRequest* request, app::Action_1_PlayFab_GroupsModels_EmptyResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A2C7A0, void, GetGroup, (app::PlayFabGroupsInstanceAPI * this_ptr, app::GetGroupRequest* request, app::Action_1_PlayFab_GroupsModels_GetGroupResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A2C8C0, void, InviteToGroup, (app::PlayFabGroupsInstanceAPI * this_ptr, app::InviteToGroupRequest* request, app::Action_1_PlayFab_GroupsModels_InviteToGroupResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A2C9E0, void, IsMember, (app::PlayFabGroupsInstanceAPI * this_ptr, app::IsMemberRequest* request, app::Action_1_PlayFab_GroupsModels_IsMemberResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A2CB00, void, ListGroupApplications, (app::PlayFabGroupsInstanceAPI * this_ptr, app::ListGroupApplicationsRequest* request, app::Action_1_PlayFab_GroupsModels_ListGroupApplicationsResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A2CC20, void, ListGroupBlocks, (app::PlayFabGroupsInstanceAPI * this_ptr, app::ListGroupBlocksRequest* request, app::Action_1_PlayFab_GroupsModels_ListGroupBlocksResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A2CD40, void, ListGroupInvitations, (app::PlayFabGroupsInstanceAPI * this_ptr, app::ListGroupInvitationsRequest* request, app::Action_1_PlayFab_GroupsModels_ListGroupInvitationsResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A2CE60, void, ListGroupMembers, (app::PlayFabGroupsInstanceAPI * this_ptr, app::ListGroupMembersRequest* request, app::Action_1_PlayFab_GroupsModels_ListGroupMembersResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A2CF80, void, ListMembership, (app::PlayFabGroupsInstanceAPI * this_ptr, app::ListMembershipRequest* request, app::Action_1_PlayFab_GroupsModels_ListMembershipResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A2D0A0, void, ListMembershipOpportunities, (app::PlayFabGroupsInstanceAPI * this_ptr, app::ListMembershipOpportunitiesRequest* request, app::Action_1_PlayFab_GroupsModels_ListMembershipOpportunitiesResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A2D1C0, void, RemoveGroupApplication, (app::PlayFabGroupsInstanceAPI * this_ptr, app::RemoveGroupApplicationRequest* request, app::Action_1_PlayFab_GroupsModels_EmptyResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A2D2E0, void, RemoveGroupInvitation, (app::PlayFabGroupsInstanceAPI * this_ptr, app::RemoveGroupInvitationRequest* request, app::Action_1_PlayFab_GroupsModels_EmptyResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A2D400, void, RemoveMembers, (app::PlayFabGroupsInstanceAPI * this_ptr, app::RemoveMembersRequest* request, app::Action_1_PlayFab_GroupsModels_EmptyResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A2D520, void, UnblockEntity, (app::PlayFabGroupsInstanceAPI * this_ptr, app::UnblockEntityRequest* request, app::Action_1_PlayFab_GroupsModels_EmptyResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A2D640, void, UpdateGroup, (app::PlayFabGroupsInstanceAPI * this_ptr, app::UpdateGroupRequest* request, app::Action_1_PlayFab_GroupsModels_UpdateGroupResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A2D760, void, UpdateRole, (app::PlayFabGroupsInstanceAPI * this_ptr, app::UpdateGroupRoleRequest* request, app::Action_1_PlayFab_GroupsModels_UpdateGroupRoleResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
} // namespace app::classes::PlayFab::PlayFabGroupsInstanceAPI
