#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_1_PlayFab_MultiplayerModels_CancelAllMatchmakingTicketsForPlayerResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_MultiplayerModels_CancelMatchmakingTicketResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_MultiplayerModels_CreateBuildWithCustomContainerResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_MultiplayerModels_CreateBuildWithManagedContainerResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_MultiplayerModels_CreateMatchmakingTicketResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_MultiplayerModels_CreateRemoteUserResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_MultiplayerModels_EmptyResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_MultiplayerModels_EnableMultiplayerServersForTitleResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_MultiplayerModels_GetAssetUploadUrlResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_MultiplayerModels_GetBuildResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_MultiplayerModels_GetContainerRegistryCredentialsResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_MultiplayerModels_GetMatchResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_MultiplayerModels_GetMatchmakingQueueResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_MultiplayerModels_GetMatchmakingTicketResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_MultiplayerModels_GetMultiplayerServerDetailsResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_MultiplayerModels_GetQueueStatisticsResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_MultiplayerModels_GetRemoteLoginEndpointResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_MultiplayerModels_GetTitleEnabledForMultiplayerServersStatusResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_MultiplayerModels_JoinMatchmakingTicketResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_MultiplayerModels_ListAssetSummariesResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_MultiplayerModels_ListBuildSummariesResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_MultiplayerModels_ListCertificateSummariesResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_MultiplayerModels_ListContainerImageTagsResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_MultiplayerModels_ListContainerImagesResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_MultiplayerModels_ListMatchmakingQueuesResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_MultiplayerModels_ListMatchmakingTicketsForPlayerResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_MultiplayerModels_ListMultiplayerServersResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_MultiplayerModels_ListQosServersResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_MultiplayerModels_ListVirtualMachineSummariesResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_MultiplayerModels_RemoveMatchmakingQueueResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_MultiplayerModels_RequestMultiplayerServerResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_MultiplayerModels_RolloverContainerRegistryCredentialsResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_MultiplayerModels_SetMatchmakingQueueResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_PlayFabError_.h>
#include <Modloader/app/structs/CancelAllMatchmakingTicketsForPlayerRequest.h>
#include <Modloader/app/structs/CancelMatchmakingTicketRequest.h>
#include <Modloader/app/structs/CreateBuildWithCustomContainerRequest.h>
#include <Modloader/app/structs/CreateBuildWithManagedContainerRequest.h>
#include <Modloader/app/structs/CreateMatchmakingTicketRequest.h>
#include <Modloader/app/structs/CreateRemoteUserRequest.h>
#include <Modloader/app/structs/CreateServerMatchmakingTicketRequest.h>
#include <Modloader/app/structs/DeleteAssetRequest.h>
#include <Modloader/app/structs/DeleteBuildRequest.h>
#include <Modloader/app/structs/DeleteCertificateRequest.h>
#include <Modloader/app/structs/DeleteRemoteUserRequest.h>
#include <Modloader/app/structs/Dictionary_2_System_String_System_String_.h>
#include <Modloader/app/structs/EnableMultiplayerServersForTitleRequest.h>
#include <Modloader/app/structs/GetAssetUploadUrlRequest.h>
#include <Modloader/app/structs/GetBuildRequest.h>
#include <Modloader/app/structs/GetContainerRegistryCredentialsRequest.h>
#include <Modloader/app/structs/GetMatchRequest.h>
#include <Modloader/app/structs/GetMatchmakingQueueRequest.h>
#include <Modloader/app/structs/GetMatchmakingTicketRequest.h>
#include <Modloader/app/structs/GetMultiplayerServerDetailsRequest.h>
#include <Modloader/app/structs/GetQueueStatisticsRequest.h>
#include <Modloader/app/structs/GetRemoteLoginEndpointRequest.h>
#include <Modloader/app/structs/GetTitleEnabledForMultiplayerServersStatusRequest.h>
#include <Modloader/app/structs/JoinMatchmakingTicketRequest.h>
#include <Modloader/app/structs/ListAssetSummariesRequest.h>
#include <Modloader/app/structs/ListBuildSummariesRequest.h>
#include <Modloader/app/structs/ListCertificateSummariesRequest.h>
#include <Modloader/app/structs/ListContainerImageTagsRequest.h>
#include <Modloader/app/structs/ListContainerImagesRequest.h>
#include <Modloader/app/structs/ListMatchmakingQueuesRequest.h>
#include <Modloader/app/structs/ListMatchmakingTicketsForPlayerRequest.h>
#include <Modloader/app/structs/ListMultiplayerServersRequest.h>
#include <Modloader/app/structs/ListQosServersRequest.h>
#include <Modloader/app/structs/ListVirtualMachineSummariesRequest.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PlayFabApiSettings.h>
#include <Modloader/app/structs/PlayFabAuthenticationContext.h>
#include <Modloader/app/structs/PlayFabMultiplayerInstanceAPI.h>
#include <Modloader/app/structs/RemoveMatchmakingQueueRequest.h>
#include <Modloader/app/structs/RequestMultiplayerServerRequest.h>
#include <Modloader/app/structs/RolloverContainerRegistryCredentialsRequest.h>
#include <Modloader/app/structs/SetMatchmakingQueueRequest.h>
#include <Modloader/app/structs/ShutdownMultiplayerServerRequest.h>
#include <Modloader/app/structs/UpdateBuildRegionsRequest.h>
#include <Modloader/app/structs/UploadCertificateRequest.h>

namespace app::classes::PlayFab::PlayFabMultiplayerInstanceAPI {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_1, app::PlayFabMultiplayerInstanceAPI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor_2, app::PlayFabMultiplayerInstanceAPI* this_ptr, app::PlayFabApiSettings* settings)
    IL2CPP_REGISTER_METHOD(0x002FB940, void, ctor_3, app::PlayFabMultiplayerInstanceAPI* this_ptr, app::PlayFabAuthenticationContext* context)
    IL2CPP_REGISTER_METHOD(
        0x0058DA40,
        void,
        ctor_4,
        app::PlayFabMultiplayerInstanceAPI* this_ptr,
        app::PlayFabApiSettings* settings,
        app::PlayFabAuthenticationContext* context
    )
    IL2CPP_REGISTER_METHOD(0x002FB940, void, SetAuthenticationContext, app::PlayFabMultiplayerInstanceAPI* this_ptr, app::PlayFabAuthenticationContext* context)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::PlayFabAuthenticationContext*, GetAuthenticationContext, app::PlayFabMultiplayerInstanceAPI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017B4520, void, ForgetAllCredentials, app::PlayFabMultiplayerInstanceAPI* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01A312E0,
        void,
        CancelAllMatchmakingTicketsForPlayer,
        app::PlayFabMultiplayerInstanceAPI* this_ptr,
        app::CancelAllMatchmakingTicketsForPlayerRequest* request,
        app::Action_1_PlayFab_MultiplayerModels_CancelAllMatchmakingTicketsForPlayerResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A31400,
        void,
        CancelMatchmakingTicket,
        app::PlayFabMultiplayerInstanceAPI* this_ptr,
        app::CancelMatchmakingTicketRequest* request,
        app::Action_1_PlayFab_MultiplayerModels_CancelMatchmakingTicketResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A31520,
        void,
        CreateBuildWithCustomContainer,
        app::PlayFabMultiplayerInstanceAPI* this_ptr,
        app::CreateBuildWithCustomContainerRequest* request,
        app::Action_1_PlayFab_MultiplayerModels_CreateBuildWithCustomContainerResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A31640,
        void,
        CreateBuildWithManagedContainer,
        app::PlayFabMultiplayerInstanceAPI* this_ptr,
        app::CreateBuildWithManagedContainerRequest* request,
        app::Action_1_PlayFab_MultiplayerModels_CreateBuildWithManagedContainerResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A31760,
        void,
        CreateMatchmakingTicket,
        app::PlayFabMultiplayerInstanceAPI* this_ptr,
        app::CreateMatchmakingTicketRequest* request,
        app::Action_1_PlayFab_MultiplayerModels_CreateMatchmakingTicketResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A31880,
        void,
        CreateRemoteUser,
        app::PlayFabMultiplayerInstanceAPI* this_ptr,
        app::CreateRemoteUserRequest* request,
        app::Action_1_PlayFab_MultiplayerModels_CreateRemoteUserResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A319A0,
        void,
        CreateServerMatchmakingTicket,
        app::PlayFabMultiplayerInstanceAPI* this_ptr,
        app::CreateServerMatchmakingTicketRequest* request,
        app::Action_1_PlayFab_MultiplayerModels_CreateMatchmakingTicketResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A31AC0,
        void,
        DeleteAsset,
        app::PlayFabMultiplayerInstanceAPI* this_ptr,
        app::DeleteAssetRequest* request,
        app::Action_1_PlayFab_MultiplayerModels_EmptyResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A31BE0,
        void,
        DeleteBuild,
        app::PlayFabMultiplayerInstanceAPI* this_ptr,
        app::DeleteBuildRequest* request,
        app::Action_1_PlayFab_MultiplayerModels_EmptyResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A31D00,
        void,
        DeleteCertificate,
        app::PlayFabMultiplayerInstanceAPI* this_ptr,
        app::DeleteCertificateRequest* request,
        app::Action_1_PlayFab_MultiplayerModels_EmptyResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A31E20,
        void,
        DeleteRemoteUser,
        app::PlayFabMultiplayerInstanceAPI* this_ptr,
        app::DeleteRemoteUserRequest* request,
        app::Action_1_PlayFab_MultiplayerModels_EmptyResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A31F40,
        void,
        EnableMultiplayerServersForTitle,
        app::PlayFabMultiplayerInstanceAPI* this_ptr,
        app::EnableMultiplayerServersForTitleRequest* request,
        app::Action_1_PlayFab_MultiplayerModels_EnableMultiplayerServersForTitleResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A32060,
        void,
        GetAssetUploadUrl,
        app::PlayFabMultiplayerInstanceAPI* this_ptr,
        app::GetAssetUploadUrlRequest* request,
        app::Action_1_PlayFab_MultiplayerModels_GetAssetUploadUrlResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A32180,
        void,
        GetBuild,
        app::PlayFabMultiplayerInstanceAPI* this_ptr,
        app::GetBuildRequest* request,
        app::Action_1_PlayFab_MultiplayerModels_GetBuildResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A322A0,
        void,
        GetContainerRegistryCredentials,
        app::PlayFabMultiplayerInstanceAPI* this_ptr,
        app::GetContainerRegistryCredentialsRequest* request,
        app::Action_1_PlayFab_MultiplayerModels_GetContainerRegistryCredentialsResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A323C0,
        void,
        GetMatch,
        app::PlayFabMultiplayerInstanceAPI* this_ptr,
        app::GetMatchRequest* request,
        app::Action_1_PlayFab_MultiplayerModels_GetMatchResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A324E0,
        void,
        GetMatchmakingQueue,
        app::PlayFabMultiplayerInstanceAPI* this_ptr,
        app::GetMatchmakingQueueRequest* request,
        app::Action_1_PlayFab_MultiplayerModels_GetMatchmakingQueueResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A32600,
        void,
        GetMatchmakingTicket,
        app::PlayFabMultiplayerInstanceAPI* this_ptr,
        app::GetMatchmakingTicketRequest* request,
        app::Action_1_PlayFab_MultiplayerModels_GetMatchmakingTicketResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A32720,
        void,
        GetMultiplayerServerDetails,
        app::PlayFabMultiplayerInstanceAPI* this_ptr,
        app::GetMultiplayerServerDetailsRequest* request,
        app::Action_1_PlayFab_MultiplayerModels_GetMultiplayerServerDetailsResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A32840,
        void,
        GetQueueStatistics,
        app::PlayFabMultiplayerInstanceAPI* this_ptr,
        app::GetQueueStatisticsRequest* request,
        app::Action_1_PlayFab_MultiplayerModels_GetQueueStatisticsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A32960,
        void,
        GetRemoteLoginEndpoint,
        app::PlayFabMultiplayerInstanceAPI* this_ptr,
        app::GetRemoteLoginEndpointRequest* request,
        app::Action_1_PlayFab_MultiplayerModels_GetRemoteLoginEndpointResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A32A80,
        void,
        GetTitleEnabledForMultiplayerServersStatus,
        app::PlayFabMultiplayerInstanceAPI* this_ptr,
        app::GetTitleEnabledForMultiplayerServersStatusRequest* request,
        app::Action_1_PlayFab_MultiplayerModels_GetTitleEnabledForMultiplayerServersStatusResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A32BA0,
        void,
        JoinMatchmakingTicket,
        app::PlayFabMultiplayerInstanceAPI* this_ptr,
        app::JoinMatchmakingTicketRequest* request,
        app::Action_1_PlayFab_MultiplayerModels_JoinMatchmakingTicketResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A32CC0,
        void,
        ListArchivedMultiplayerServers,
        app::PlayFabMultiplayerInstanceAPI* this_ptr,
        app::ListMultiplayerServersRequest* request,
        app::Action_1_PlayFab_MultiplayerModels_ListMultiplayerServersResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A32DE0,
        void,
        ListAssetSummaries,
        app::PlayFabMultiplayerInstanceAPI* this_ptr,
        app::ListAssetSummariesRequest* request,
        app::Action_1_PlayFab_MultiplayerModels_ListAssetSummariesResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A32F00,
        void,
        ListBuildSummaries,
        app::PlayFabMultiplayerInstanceAPI* this_ptr,
        app::ListBuildSummariesRequest* request,
        app::Action_1_PlayFab_MultiplayerModels_ListBuildSummariesResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A33020,
        void,
        ListCertificateSummaries,
        app::PlayFabMultiplayerInstanceAPI* this_ptr,
        app::ListCertificateSummariesRequest* request,
        app::Action_1_PlayFab_MultiplayerModels_ListCertificateSummariesResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A33140,
        void,
        ListContainerImages,
        app::PlayFabMultiplayerInstanceAPI* this_ptr,
        app::ListContainerImagesRequest* request,
        app::Action_1_PlayFab_MultiplayerModels_ListContainerImagesResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A33260,
        void,
        ListContainerImageTags,
        app::PlayFabMultiplayerInstanceAPI* this_ptr,
        app::ListContainerImageTagsRequest* request,
        app::Action_1_PlayFab_MultiplayerModels_ListContainerImageTagsResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A33380,
        void,
        ListMatchmakingQueues,
        app::PlayFabMultiplayerInstanceAPI* this_ptr,
        app::ListMatchmakingQueuesRequest* request,
        app::Action_1_PlayFab_MultiplayerModels_ListMatchmakingQueuesResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A334A0,
        void,
        ListMatchmakingTicketsForPlayer,
        app::PlayFabMultiplayerInstanceAPI* this_ptr,
        app::ListMatchmakingTicketsForPlayerRequest* request,
        app::Action_1_PlayFab_MultiplayerModels_ListMatchmakingTicketsForPlayerResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A335C0,
        void,
        ListMultiplayerServers,
        app::PlayFabMultiplayerInstanceAPI* this_ptr,
        app::ListMultiplayerServersRequest* request,
        app::Action_1_PlayFab_MultiplayerModels_ListMultiplayerServersResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A336E0,
        void,
        ListQosServers,
        app::PlayFabMultiplayerInstanceAPI* this_ptr,
        app::ListQosServersRequest* request,
        app::Action_1_PlayFab_MultiplayerModels_ListQosServersResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A33800,
        void,
        ListVirtualMachineSummaries,
        app::PlayFabMultiplayerInstanceAPI* this_ptr,
        app::ListVirtualMachineSummariesRequest* request,
        app::Action_1_PlayFab_MultiplayerModels_ListVirtualMachineSummariesResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A33920,
        void,
        RemoveMatchmakingQueue,
        app::PlayFabMultiplayerInstanceAPI* this_ptr,
        app::RemoveMatchmakingQueueRequest* request,
        app::Action_1_PlayFab_MultiplayerModels_RemoveMatchmakingQueueResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A33A40,
        void,
        RequestMultiplayerServer,
        app::PlayFabMultiplayerInstanceAPI* this_ptr,
        app::RequestMultiplayerServerRequest* request,
        app::Action_1_PlayFab_MultiplayerModels_RequestMultiplayerServerResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A33B60,
        void,
        RolloverContainerRegistryCredentials,
        app::PlayFabMultiplayerInstanceAPI* this_ptr,
        app::RolloverContainerRegistryCredentialsRequest* request,
        app::Action_1_PlayFab_MultiplayerModels_RolloverContainerRegistryCredentialsResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A33C80,
        void,
        SetMatchmakingQueue,
        app::PlayFabMultiplayerInstanceAPI* this_ptr,
        app::SetMatchmakingQueueRequest* request,
        app::Action_1_PlayFab_MultiplayerModels_SetMatchmakingQueueResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A33DA0,
        void,
        ShutdownMultiplayerServer,
        app::PlayFabMultiplayerInstanceAPI* this_ptr,
        app::ShutdownMultiplayerServerRequest* request,
        app::Action_1_PlayFab_MultiplayerModels_EmptyResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A33EC0,
        void,
        UpdateBuildRegions,
        app::PlayFabMultiplayerInstanceAPI* this_ptr,
        app::UpdateBuildRegionsRequest* request,
        app::Action_1_PlayFab_MultiplayerModels_EmptyResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A33FE0,
        void,
        UploadCertificate,
        app::PlayFabMultiplayerInstanceAPI* this_ptr,
        app::UploadCertificateRequest* request,
        app::Action_1_PlayFab_MultiplayerModels_EmptyResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
} // namespace app::classes::PlayFab::PlayFabMultiplayerInstanceAPI
