#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayFabJsonSerializer.h>
#include <Modloader/app/structs/AdCampaignAttributionModel.h>
#include <Modloader/app/structs/AddFriendRequest.h>
#include <Modloader/app/structs/AddFriendResult.h>
#include <Modloader/app/structs/CharacterInventory.h>
#include <Modloader/app/structs/CharacterResult.h>
#include <Modloader/app/structs/ContactEmailInfoModel.h>
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/DeviceInfoRequest.h>
#include <Modloader/app/structs/Dictionary_2_System_String_List_1_System_String_.h>
#include <Modloader/app/structs/Dictionary_2_System_String_System_Object_.h>
#include <Modloader/app/structs/Dictionary_2_System_Type_System_Action_2_.h>
#include <Modloader/app/structs/Dictionary_2_System_Type_System_Delegate_.h>
#include <Modloader/app/structs/EmptyResponse.h>
#include <Modloader/app/structs/EntityKey_1.h>
#include <Modloader/app/structs/EntityKey_3.h>
#include <Modloader/app/structs/EntityKey_4.h>
#include <Modloader/app/structs/EntityKey_7.h>
#include <Modloader/app/structs/EntityPermissionStatement.h>
#include <Modloader/app/structs/EntityTokenResponse.h>
#include <Modloader/app/structs/EventContents.h>
#include <Modloader/app/structs/ExecuteCloudScriptRequest.h>
#include <Modloader/app/structs/ExecuteCloudScriptResult.h>
#include <Modloader/app/structs/FriendInfo.h>
#include <Modloader/app/structs/GetFileMetadata.h>
#include <Modloader/app/structs/GetFilesRequest.h>
#include <Modloader/app/structs/GetFilesResponse.h>
#include <Modloader/app/structs/GetFriendLeaderboardAroundPlayerRequest.h>
#include <Modloader/app/structs/GetFriendLeaderboardAroundPlayerResult.h>
#include <Modloader/app/structs/GetFriendLeaderboardRequest.h>
#include <Modloader/app/structs/GetFriendsListRequest.h>
#include <Modloader/app/structs/GetFriendsListResult.h>
#include <Modloader/app/structs/GetLeaderboardAroundPlayerRequest.h>
#include <Modloader/app/structs/GetLeaderboardAroundPlayerResult.h>
#include <Modloader/app/structs/GetLeaderboardRequest.h>
#include <Modloader/app/structs/GetLeaderboardResult.h>
#include <Modloader/app/structs/GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest.h>
#include <Modloader/app/structs/GetPlayFabIDsFromNintendoSwitchDeviceIdsResult.h>
#include <Modloader/app/structs/GetPlayerCombinedInfoRequestParams.h>
#include <Modloader/app/structs/GetPlayerCombinedInfoResultPayload.h>
#include <Modloader/app/structs/GetPlayerStatisticsRequest.h>
#include <Modloader/app/structs/GetPlayerStatisticsResult.h>
#include <Modloader/app/structs/Guid.h>
#include <Modloader/app/structs/HttpResponseObject.h>
#include <Modloader/app/structs/ISerializerPlugin.h>
#include <Modloader/app/structs/InitiateFileUploadMetadata.h>
#include <Modloader/app/structs/InitiateFileUploadsRequest.h>
#include <Modloader/app/structs/InitiateFileUploadsResponse.h>
#include <Modloader/app/structs/ItemInstance.h>
#include <Modloader/app/structs/JsonArray.h>
#include <Modloader/app/structs/JsonBuilder_Object.h>
#include <Modloader/app/structs/JsonBuilder_Slot.h>
#include <Modloader/app/structs/JsonObject.h>
#include <Modloader/app/structs/JsonParser_Slot.h>
#include <Modloader/app/structs/LinkNintendoSwitchDeviceIdRequest.h>
#include <Modloader/app/structs/LinkNintendoSwitchDeviceIdResult.h>
#include <Modloader/app/structs/LinkSteamAccountRequest.h>
#include <Modloader/app/structs/LinkSteamAccountResult.h>
#include <Modloader/app/structs/LinkedPlatformAccountModel.h>
#include <Modloader/app/structs/List_1_System_Object_.h>
#include <Modloader/app/structs/LocationModel.h>
#include <Modloader/app/structs/LogStatement.h>
#include <Modloader/app/structs/LoginResult.h>
#include <Modloader/app/structs/LoginWithCustomIDRequest.h>
#include <Modloader/app/structs/MembershipModel.h>
#include <Modloader/app/structs/NintendoSwitchPlayFabIdPair.h>
#include <Modloader/app/structs/Nullable_1_Boolean_.h>
#include <Modloader/app/structs/Nullable_1_Byte_.h>
#include <Modloader/app/structs/Nullable_1_DateTime_.h>
#include <Modloader/app/structs/Nullable_1_Double_.h>
#include <Modloader/app/structs/Nullable_1_Guid_.h>
#include <Modloader/app/structs/Nullable_1_Int16_.h>
#include <Modloader/app/structs/Nullable_1_Int32_.h>
#include <Modloader/app/structs/Nullable_1_Int64_.h>
#include <Modloader/app/structs/Nullable_1_SByte_.h>
#include <Modloader/app/structs/Nullable_1_Single_.h>
#include <Modloader/app/structs/Nullable_1_UInt16_.h>
#include <Modloader/app/structs/Nullable_1_UInt32_.h>
#include <Modloader/app/structs/Nullable_1_UInt64_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PlayFabAuthenticationContext.h>
#include <Modloader/app/structs/PlayFabDataGatherer.h>
#include <Modloader/app/structs/PlayFabRequestCommon.h>
#include <Modloader/app/structs/PlayerLeaderboardEntry.h>
#include <Modloader/app/structs/PlayerProfileModel.h>
#include <Modloader/app/structs/PlayerProfileViewConstraints.h>
#include <Modloader/app/structs/PushNotificationRegistrationModel.h>
#include <Modloader/app/structs/RemoveFriendRequest.h>
#include <Modloader/app/structs/RemoveFriendResult.h>
#include <Modloader/app/structs/ScriptExecutionError.h>
#include <Modloader/app/structs/SetEntityProfilePolicyRequest.h>
#include <Modloader/app/structs/SetEntityProfilePolicyResponse.h>
#include <Modloader/app/structs/StatisticModel.h>
#include <Modloader/app/structs/StatisticNameVersion.h>
#include <Modloader/app/structs/StatisticValue.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/SubscriptionModel.h>
#include <Modloader/app/structs/TagModel.h>
#include <Modloader/app/structs/UpdateUserTitleDisplayNameRequest.h>
#include <Modloader/app/structs/UpdateUserTitleDisplayNameResult.h>
#include <Modloader/app/structs/UserAccountInfo.h>
#include <Modloader/app/structs/UserAndroidDeviceInfo.h>
#include <Modloader/app/structs/UserCustomIdInfo.h>
#include <Modloader/app/structs/UserDataRecord.h>
#include <Modloader/app/structs/UserFacebookInfo.h>
#include <Modloader/app/structs/UserFacebookInstantGamesIdInfo.h>
#include <Modloader/app/structs/UserGameCenterInfo.h>
#include <Modloader/app/structs/UserGoogleInfo.h>
#include <Modloader/app/structs/UserIosDeviceInfo.h>
#include <Modloader/app/structs/UserKongregateInfo.h>
#include <Modloader/app/structs/UserNintendoSwitchDeviceIdInfo.h>
#include <Modloader/app/structs/UserOpenIdInfo.h>
#include <Modloader/app/structs/UserPrivateAccountInfo.h>
#include <Modloader/app/structs/UserPsnInfo.h>
#include <Modloader/app/structs/UserSettings.h>
#include <Modloader/app/structs/UserSteamInfo.h>
#include <Modloader/app/structs/UserTitleInfo.h>
#include <Modloader/app/structs/UserTwitchInfo.h>
#include <Modloader/app/structs/UserWindowsHelloInfo.h>
#include <Modloader/app/structs/UserXboxInfo.h>
#include <Modloader/app/structs/ValueToDateModel.h>
#include <Modloader/app/structs/VirtualCurrencyRechargeTime.h>
#include <Modloader/app/structs/WriteEventsRequest.h>
#include <Modloader/app/structs/WriteEventsResponse.h>

namespace app::classes::SystemIntegration::Synchronizer::Telemetry::PlayFabJsonSerializer {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::PlayFabJsonSerializer * this_ptr, app::ISerializerPlugin* underlying))
    IL2CPP_REGISTER_METHOD(0x0053B730, void, Initialize, ())
    IL2CPP_REGISTER_METHOD(0x0053B8F0, app::Object*, DeserializeObject_1, (app::PlayFabJsonSerializer * this_ptr, app::String* serialized))
    IL2CPP_REGISTER_METHOD(0x0053B9A0, app::String*, SerializeObject_1, (app::PlayFabJsonSerializer * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x0053BBF0, app::String*, SerializeObject_2, (app::PlayFabJsonSerializer * this_ptr, app::Object* obj, app::Object* serializer_strategy))
    IL2CPP_REGISTER_METHOD(0x0053BCF0, void, AddGeneratedSerializers, (app::Dictionary_2_System_Type_System_Action_2_ * serializers))
    IL2CPP_REGISTER_METHOD(0x0053D740, void, AddGeneratedDeserializers, (app::Dictionary_2_System_Type_System_Delegate_ * deserializers))
    IL2CPP_REGISTER_METHOD(0x005417A0, void, SerializeToSlot, (app::JsonBuilder_Slot slot, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x00542200, void, SerializeObjList, (app::JsonBuilder_Slot slot, app::List_1_System_Object_* value))
    IL2CPP_REGISTER_METHOD(0x00542420, void, SerializeDictionary, (app::JsonBuilder_Slot slot, app::Dictionary_2_System_String_System_Object_* value))
    IL2CPP_REGISTER_METHOD(0x00542660, void, SerializeJsonObject, (app::JsonBuilder_Slot slot, app::JsonObject* value))
    IL2CPP_REGISTER_METHOD(0x005427C0, void, SerializeAuthenticationContext, (app::JsonBuilder_Slot slot, app::PlayFabAuthenticationContext* value))
    IL2CPP_REGISTER_METHOD(0x00542A70, void, SerializeEntityKey, (app::JsonBuilder_Slot slot, app::EntityKey_4* entity))
    IL2CPP_REGISTER_METHOD(0x00542C00, void, SerializeEventContents, (app::JsonBuilder_Slot slot, app::EventContents* evt))
    IL2CPP_REGISTER_METHOD(0x00543000, app::Object*, DeserializeToObject, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x005431D0, app::Dictionary_2_System_String_System_Object_*, DeserializeToDict, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x005435C0, app::List_1_System_Object_*, DeserializeToList, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x00543960, app::JsonObject*, DeserializeToJsonObject, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x00543B60, app::JsonArray*, DeserializeToJsonArray, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x00543EF0, app::Dictionary_2_System_String_List_1_System_String_*, DeserializeToDictOfListOfString, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x00544630, app::PlayFabAuthenticationContext*, DeserializeAuthenticationContext, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x00544B60, app::String*, DeserializeString, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x00544B70, app::DateTime, DeserializeDateTime, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x00544C50, app::Guid, DeserializeGuid, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x00544D20, bool, DeserializeBool, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x00544D30, int8_t, DeserializeI8, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x00544D30, uint8_t, DeserializeU8, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x00544D30, int16_t, DeserializeI16, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x00544D30, uint16_t, DeserializeU16, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x00544D30, int32_t, DeserializeI32, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x00544D50, uint32_t, DeserializeU32, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x00544D50, int64_t, DeserializeI64, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x00544D70, uint64_t, DeserializeU64, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x00544DB0, float, DeserializeF32, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x00544DD0, double, DeserializeF64, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x00544DE0, app::Nullable_1_DateTime_, DeserializeOptDateTime, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x00544EF0, app::Nullable_1_Guid_, DeserializeOptGuid, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x00544FF0, app::Nullable_1_Boolean_, DeserializeOptBool, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x00545080, app::Nullable_1_SByte_, DeserializeOptI8, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x00545140, app::Nullable_1_Byte_, DeserializeOptU8, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x00545200, app::Nullable_1_Int16_, DeserializeOptI16, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x005452D0, app::Nullable_1_UInt16_, DeserializeOptU16, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x005453A0, app::Nullable_1_Int32_, DeserializeOptI32, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x00545470, app::Nullable_1_UInt32_, DeserializeOptU32, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x00545540, app::Nullable_1_Int64_, DeserializeOptI64, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x00545610, app::Nullable_1_UInt64_, DeserializeOptU64, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x00545710, app::Nullable_1_Single_, DeserializeOptF32, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x005457E0, app::Nullable_1_Double_, DeserializeOptF64, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x00545810, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x0054C130, void, SerializeBase_PlayFab_SharedModels_PlayFabRequestCommon, (app::JsonBuilder_Object obj, app::PlayFabRequestCommon* value))
    IL2CPP_REGISTER_METHOD(0x0054C220, void, Serialize_PlayFab_ClientModels_AddFriendRequest, (app::JsonBuilder_Slot slot, app::AddFriendRequest* value))
    IL2CPP_REGISTER_METHOD(0x0054C450, void, Serialize_PlayFab_ClientModels_DeviceInfoRequest, (app::JsonBuilder_Slot slot, app::DeviceInfoRequest* value))
    IL2CPP_REGISTER_METHOD(0x0054C610, void, Serialize_PlayFab_ClientModels_ExecuteCloudScriptRequest, (app::JsonBuilder_Slot slot, app::ExecuteCloudScriptRequest* value))
    IL2CPP_REGISTER_METHOD(0x0054CAC0, void, Serialize_PlayFab_ClientModels_GetFriendLeaderboardAroundPlayerRequest, (app::JsonBuilder_Slot slot, app::GetFriendLeaderboardAroundPlayerRequest* value))
    IL2CPP_REGISTER_METHOD(0x0054D150, void, Serialize_PlayFab_ClientModels_GetFriendLeaderboardRequest, (app::JsonBuilder_Slot slot, app::GetFriendLeaderboardRequest* value))
    IL2CPP_REGISTER_METHOD(0x0054D820, void, Serialize_PlayFab_ClientModels_GetFriendsListRequest, (app::JsonBuilder_Slot slot, app::GetFriendsListRequest* value))
    IL2CPP_REGISTER_METHOD(0x0054DC10, void, Serialize_PlayFab_ClientModels_GetLeaderboardAroundPlayerRequest, (app::JsonBuilder_Slot slot, app::GetLeaderboardAroundPlayerRequest* value))
    IL2CPP_REGISTER_METHOD(0x0054E0B0, void, Serialize_PlayFab_ClientModels_GetLeaderboardRequest, (app::JsonBuilder_Slot slot, app::GetLeaderboardRequest* value))
    IL2CPP_REGISTER_METHOD(0x0054E590, void, Serialize_PlayFab_ClientModels_GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest, (app::JsonBuilder_Slot slot, app::GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest* value))
    IL2CPP_REGISTER_METHOD(0x0054E8B0, void, Serialize_PlayFab_ClientModels_GetPlayerCombinedInfoRequestParams, (app::JsonBuilder_Slot slot, app::GetPlayerCombinedInfoRequestParams* value))
    IL2CPP_REGISTER_METHOD(0x0054F2A0, void, Serialize_PlayFab_ClientModels_GetPlayerStatisticsRequest, (app::JsonBuilder_Slot slot, app::GetPlayerStatisticsRequest* value))
    IL2CPP_REGISTER_METHOD(0x0054F790, void, Serialize_PlayFab_ClientModels_LinkNintendoSwitchDeviceIdRequest, (app::JsonBuilder_Slot slot, app::LinkNintendoSwitchDeviceIdRequest* value))
    IL2CPP_REGISTER_METHOD(0x0054FA40, void, Serialize_PlayFab_ClientModels_LinkSteamAccountRequest, (app::JsonBuilder_Slot slot, app::LinkSteamAccountRequest* value))
    IL2CPP_REGISTER_METHOD(0x0054FCF0, void, Serialize_PlayFab_ClientModels_LoginWithCustomIDRequest, (app::JsonBuilder_Slot slot, app::LoginWithCustomIDRequest* value))
    IL2CPP_REGISTER_METHOD(0x00550060, void, Serialize_PlayFab_ClientModels_PlayerProfileViewConstraints, (app::JsonBuilder_Slot slot, app::PlayerProfileViewConstraints* value))
    IL2CPP_REGISTER_METHOD(0x00550430, void, Serialize_PlayFab_ClientModels_RemoveFriendRequest, (app::JsonBuilder_Slot slot, app::RemoveFriendRequest* value))
    IL2CPP_REGISTER_METHOD(0x005505F0, void, Serialize_PlayFab_ClientModels_StatisticNameVersion, (app::JsonBuilder_Slot slot, app::StatisticNameVersion* value))
    IL2CPP_REGISTER_METHOD(0x005507A0, void, Serialize_PlayFab_ClientModels_UpdateUserTitleDisplayNameRequest, (app::JsonBuilder_Slot slot, app::UpdateUserTitleDisplayNameRequest* value))
    IL2CPP_REGISTER_METHOD(0x00550960, void, Serialize_PlayFab_DataModels_EntityKey, (app::JsonBuilder_Slot slot, app::EntityKey_3* value))
    IL2CPP_REGISTER_METHOD(0x00550AF0, void, Serialize_PlayFab_DataModels_GetFilesRequest, (app::JsonBuilder_Slot slot, app::GetFilesRequest* value))
    IL2CPP_REGISTER_METHOD(0x00550CB0, void, Serialize_PlayFab_DataModels_InitiateFileUploadsRequest, (app::JsonBuilder_Slot slot, app::InitiateFileUploadsRequest* value))
    IL2CPP_REGISTER_METHOD(0x00551180, void, Serialize_PlayFab_EventsModels_WriteEventsRequest, (app::JsonBuilder_Slot slot, app::WriteEventsRequest* value))
    IL2CPP_REGISTER_METHOD(0x005514C0, void, Serialize_PlayFab_PlayFabDataGatherer, (app::JsonBuilder_Slot slot, app::PlayFabDataGatherer* value))
    IL2CPP_REGISTER_METHOD(0x00551D30, void, Serialize_PlayFab_ProfilesModels_EntityKey, (app::JsonBuilder_Slot slot, app::EntityKey_7* value))
    IL2CPP_REGISTER_METHOD(0x00551EC0, void, Serialize_PlayFab_ProfilesModels_EntityPermissionStatement, (app::JsonBuilder_Slot slot, app::EntityPermissionStatement* value))
    IL2CPP_REGISTER_METHOD(0x00552170, void, Serialize_PlayFab_ProfilesModels_SetEntityProfilePolicyRequest, (app::JsonBuilder_Slot slot, app::SetEntityProfilePolicyRequest* value))
    IL2CPP_REGISTER_METHOD(0x005524E0, void, Serialize_PlayFab_SharedModels_PlayFabRequestCommon, (app::JsonBuilder_Slot slot, app::PlayFabRequestCommon* value))
    IL2CPP_REGISTER_METHOD(0x00552670, app::AdCampaignAttributionModel*, Deserialize_PlayFab_ClientModels_AdCampaignAttributionModel, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x00552B90, app::AddFriendResult*, Deserialize_PlayFab_ClientModels_AddFriendResult, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x00553000, app::CharacterInventory*, Deserialize_PlayFab_ClientModels_CharacterInventory, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x005536A0, app::CharacterResult*, Deserialize_PlayFab_ClientModels_CharacterResult, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x00553CA0, app::ContactEmailInfoModel*, Deserialize_PlayFab_ClientModels_ContactEmailInfoModel, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x00554380, app::EmptyResponse*, Deserialize_PlayFab_ClientModels_EmptyResponse, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x005547B0, app::EntityKey_1*, Deserialize_PlayFab_ClientModels_EntityKey, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x00554C80, app::EntityTokenResponse*, Deserialize_PlayFab_ClientModels_EntityTokenResponse, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x005551F0, app::ExecuteCloudScriptResult*, Deserialize_PlayFab_ClientModels_ExecuteCloudScriptResult, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x00555DE0, app::FriendInfo*, Deserialize_PlayFab_ClientModels_FriendInfo, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x00556800, app::GetFriendLeaderboardAroundPlayerResult*, Deserialize_PlayFab_ClientModels_GetFriendLeaderboardAroundPlayerResult, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x00556FA0, app::GetFriendsListResult*, Deserialize_PlayFab_ClientModels_GetFriendsListResult, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x00557640, app::GetLeaderboardAroundPlayerResult*, Deserialize_PlayFab_ClientModels_GetLeaderboardAroundPlayerResult, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x00557DE0, app::GetLeaderboardResult*, Deserialize_PlayFab_ClientModels_GetLeaderboardResult, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x00558580, app::GetPlayFabIDsFromNintendoSwitchDeviceIdsResult*, Deserialize_PlayFab_ClientModels_GetPlayFabIDsFromNintendoSwitchDeviceIdsResult, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x00558C20, app::GetPlayerCombinedInfoResultPayload*, Deserialize_PlayFab_ClientModels_GetPlayerCombinedInfoResultPayload, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x0055A890, app::GetPlayerStatisticsResult*, Deserialize_PlayFab_ClientModels_GetPlayerStatisticsResult, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x0055AF40, app::ItemInstance*, Deserialize_PlayFab_ClientModels_ItemInstance, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x0055BF20, app::LinkNintendoSwitchDeviceIdResult*, Deserialize_PlayFab_ClientModels_LinkNintendoSwitchDeviceIdResult, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x0055C350, app::LinkSteamAccountResult*, Deserialize_PlayFab_ClientModels_LinkSteamAccountResult, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x0055C780, app::LinkedPlatformAccountModel*, Deserialize_PlayFab_ClientModels_LinkedPlatformAccountModel, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x0055CEF0, app::LocationModel*, Deserialize_PlayFab_ClientModels_LocationModel, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x0055D7F0, app::LogStatement*, Deserialize_PlayFab_ClientModels_LogStatement, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x0055DD10, app::LoginResult*, Deserialize_PlayFab_ClientModels_LoginResult, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x0055E430, app::MembershipModel*, Deserialize_PlayFab_ClientModels_MembershipModel, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x0055EBD0, app::NintendoSwitchPlayFabIdPair*, Deserialize_PlayFab_ClientModels_NintendoSwitchPlayFabIdPair, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x0055F0A0, app::PlayerLeaderboardEntry*, Deserialize_PlayFab_ClientModels_PlayerLeaderboardEntry, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x0055F6F0, app::PlayerProfileModel*, Deserialize_PlayFab_ClientModels_PlayerProfileModel, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x00561590, app::PushNotificationRegistrationModel*, Deserialize_PlayFab_ClientModels_PushNotificationRegistrationModel, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x00561BE0, app::RemoveFriendResult*, Deserialize_PlayFab_ClientModels_RemoveFriendResult, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x00562010, app::ScriptExecutionError*, Deserialize_PlayFab_ClientModels_ScriptExecutionError, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x00562570, app::StatisticModel*, Deserialize_PlayFab_ClientModels_StatisticModel, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x00562AD0, app::StatisticValue*, Deserialize_PlayFab_ClientModels_StatisticValue, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x00563030, app::SubscriptionModel*, Deserialize_PlayFab_ClientModels_SubscriptionModel, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x005638A0, app::TagModel*, Deserialize_PlayFab_ClientModels_TagModel, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x00563CD0, app::UpdateUserTitleDisplayNameResult*, Deserialize_PlayFab_ClientModels_UpdateUserTitleDisplayNameResult, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x005641A0, app::UserAccountInfo*, Deserialize_PlayFab_ClientModels_UserAccountInfo, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x00564DF0, app::UserAndroidDeviceInfo*, Deserialize_PlayFab_ClientModels_UserAndroidDeviceInfo, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x00565220, app::UserCustomIdInfo*, Deserialize_PlayFab_ClientModels_UserCustomIdInfo, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x00565650, app::UserDataRecord*, Deserialize_PlayFab_ClientModels_UserDataRecord, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x00565CF0, app::UserFacebookInfo*, Deserialize_PlayFab_ClientModels_UserFacebookInfo, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x005661C0, app::UserFacebookInstantGamesIdInfo*, Deserialize_PlayFab_ClientModels_UserFacebookInstantGamesIdInfo, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x005665F0, app::UserGameCenterInfo*, Deserialize_PlayFab_ClientModels_UserGameCenterInfo, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x00566A20, app::UserGoogleInfo*, Deserialize_PlayFab_ClientModels_UserGoogleInfo, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x00567020, app::UserIosDeviceInfo*, Deserialize_PlayFab_ClientModels_UserIosDeviceInfo, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x00567450, app::UserKongregateInfo*, Deserialize_PlayFab_ClientModels_UserKongregateInfo, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x00567920, app::UserNintendoSwitchDeviceIdInfo*, Deserialize_PlayFab_ClientModels_UserNintendoSwitchDeviceIdInfo, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x00567D50, app::UserOpenIdInfo*, Deserialize_PlayFab_ClientModels_UserOpenIdInfo, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x005682B0, app::UserPrivateAccountInfo*, Deserialize_PlayFab_ClientModels_UserPrivateAccountInfo, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x005686E0, app::UserPsnInfo*, Deserialize_PlayFab_ClientModels_UserPsnInfo, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x00568BB0, app::UserSettings*, Deserialize_PlayFab_ClientModels_UserSettings, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x00569020, app::UserSteamInfo*, Deserialize_PlayFab_ClientModels_UserSteamInfo, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x00569900, app::UserTitleInfo*, Deserialize_PlayFab_ClientModels_UserTitleInfo, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x0056A190, app::UserTwitchInfo*, Deserialize_PlayFab_ClientModels_UserTwitchInfo, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x0056A660, app::UserWindowsHelloInfo*, Deserialize_PlayFab_ClientModels_UserWindowsHelloInfo, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x0056AB30, app::UserXboxInfo*, Deserialize_PlayFab_ClientModels_UserXboxInfo, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x0056AF60, app::ValueToDateModel*, Deserialize_PlayFab_ClientModels_ValueToDateModel, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x0056B4C0, app::VirtualCurrencyRechargeTime*, Deserialize_PlayFab_ClientModels_VirtualCurrencyRechargeTime, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x0056B9E0, app::EntityKey_3*, Deserialize_PlayFab_DataModels_EntityKey, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x0056BEB0, app::GetFileMetadata*, Deserialize_PlayFab_DataModels_GetFileMetadata, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x0056C500, app::GetFilesResponse*, Deserialize_PlayFab_DataModels_GetFilesResponse, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x0056CCF0, app::InitiateFileUploadMetadata*, Deserialize_PlayFab_DataModels_InitiateFileUploadMetadata, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x0056D1C0, app::InitiateFileUploadsResponse*, Deserialize_PlayFab_DataModels_InitiateFileUploadsResponse, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x0056D950, app::WriteEventsResponse*, Deserialize_PlayFab_EventsModels_WriteEventsResponse, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x0056E040, app::EntityPermissionStatement*, Deserialize_PlayFab_ProfilesModels_EntityPermissionStatement, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x0056E830, app::SetEntityProfilePolicyResponse*, Deserialize_PlayFab_ProfilesModels_SetEntityProfilePolicyResponse, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x0056EED0, app::HttpResponseObject*, Deserialize_PlayFab_SharedModels_HttpResponseObject, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x0056F480, app::PlayFabRequestCommon*, Deserialize_PlayFab_SharedModels_PlayFabRequestCommon, (app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x0157B4D0, app::Object*, DeserializeObject_2, (app::PlayFabJsonSerializer * this_ptr, app::String* serialized))
    IL2CPP_REGISTER_METHOD(0x0157BAF0, app::Object*, DeserializeObject_3, (app::PlayFabJsonSerializer * this_ptr, app::String* serialized, app::Object* serializer_strategy))
    IL2CPP_REGISTER_METHOD(0x015E1F40, void, SerializeDictionaryGeneric, (app::JsonBuilder_Slot slot, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x0157AE50, bool, DeserializeObject_4, (app::PlayFabJsonSerializer * this_ptr, app::String* serialized))
} // namespace app::classes::SystemIntegration::Synchronizer::Telemetry::PlayFabJsonSerializer
