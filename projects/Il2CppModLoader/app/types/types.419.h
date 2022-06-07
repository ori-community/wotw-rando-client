namespace app {
struct UserOrigination__Enum__Boxed {
    struct UserOrigination__Enum__Class *klass;
    MonitorData *monitor;
    UserOrigination__Enum value;
    
};

struct Nullable_1_PlayFab_ClientModels_UserOrigination_ {
    UserOrigination__Enum value;
    
    bool has_value;
};

struct Nullable_1_PlayFab_ClientModels_UserOrigination___Boxed {
    struct Nullable_1_PlayFab_ClientModels_UserOrigination___Class *klass;
    MonitorData *monitor;
    struct Nullable_1_PlayFab_ClientModels_UserOrigination_ fields;
};

struct __declspec(align(8)) UserTitleInfo__Fields {
    struct String *AvatarUrl;
    struct DateTime Created;
    struct String *DisplayName;
    struct Nullable_1_DateTime_ FirstLogin;
    struct Nullable_1_Boolean_ isBanned;
    struct Nullable_1_DateTime_ LastLogin;
    struct Nullable_1_PlayFab_ClientModels_UserOrigination_ Origination;
    struct EntityKey_1 *TitlePlayerAccount;
};

struct UserTitleInfo {
    struct UserTitleInfo__Class *klass;
    MonitorData *monitor;
    struct UserTitleInfo__Fields fields;
};

struct __declspec(align(8)) EntityKey_1__Fields {
    struct String *Id;
    struct String *Type;
};

struct EntityKey_1 {
    struct EntityKey_1__Class *klass;
    MonitorData *monitor;
    struct EntityKey_1__Fields fields;
};

struct __declspec(align(8)) UserTwitchInfo__Fields {
    struct String *TwitchId;
    struct String *TwitchUserName;
};

struct UserTwitchInfo {
    struct UserTwitchInfo__Class *klass;
    MonitorData *monitor;
    struct UserTwitchInfo__Fields fields;
};

struct __declspec(align(8)) UserWindowsHelloInfo__Fields {
    struct String *WindowsHelloDeviceName;
    struct String *WindowsHelloPublicKeyHash;
};

struct UserWindowsHelloInfo {
    struct UserWindowsHelloInfo__Class *klass;
    MonitorData *monitor;
    struct UserWindowsHelloInfo__Fields fields;
};

struct __declspec(align(8)) UserXboxInfo__Fields {
    struct String *XboxUserId;
};

struct UserXboxInfo {
    struct UserXboxInfo__Class *klass;
    MonitorData *monitor;
    struct UserXboxInfo__Fields fields;
};

struct GetAccountInfoRequest__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct GetAccountInfoRequest__StaticFields {
};

struct GetAccountInfoRequest__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GetAccountInfoRequest__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GetAccountInfoRequest__VTable vtable;
};

struct UserAndroidDeviceInfo__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct UserAndroidDeviceInfo__StaticFields {
};

struct UserAndroidDeviceInfo__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UserAndroidDeviceInfo__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UserAndroidDeviceInfo__VTable vtable;
};

struct UserCustomIdInfo__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct UserCustomIdInfo__StaticFields {
};

struct UserCustomIdInfo__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UserCustomIdInfo__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UserCustomIdInfo__VTable vtable;
};

struct UserFacebookInfo__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct UserFacebookInfo__StaticFields {
};

struct UserFacebookInfo__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UserFacebookInfo__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UserFacebookInfo__VTable vtable;
};

struct UserFacebookInstantGamesIdInfo__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct UserFacebookInstantGamesIdInfo__StaticFields {
};

struct UserFacebookInstantGamesIdInfo__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UserFacebookInstantGamesIdInfo__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UserFacebookInstantGamesIdInfo__VTable vtable;
};

struct UserGameCenterInfo__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct UserGameCenterInfo__StaticFields {
};

struct UserGameCenterInfo__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UserGameCenterInfo__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UserGameCenterInfo__VTable vtable;
};

struct UserGoogleInfo__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct UserGoogleInfo__StaticFields {
};

struct UserGoogleInfo__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UserGoogleInfo__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UserGoogleInfo__VTable vtable;
};

struct UserIosDeviceInfo__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct UserIosDeviceInfo__StaticFields {
};

struct UserIosDeviceInfo__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UserIosDeviceInfo__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UserIosDeviceInfo__VTable vtable;
};

struct UserKongregateInfo__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct UserKongregateInfo__StaticFields {
};

struct UserKongregateInfo__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UserKongregateInfo__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UserKongregateInfo__VTable vtable;
};

struct UserNintendoSwitchDeviceIdInfo__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct UserNintendoSwitchDeviceIdInfo__StaticFields {
};

struct UserNintendoSwitchDeviceIdInfo__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UserNintendoSwitchDeviceIdInfo__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UserNintendoSwitchDeviceIdInfo__VTable vtable;
};

struct UserOpenIdInfo__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct UserOpenIdInfo__StaticFields {
};

struct UserOpenIdInfo__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UserOpenIdInfo__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UserOpenIdInfo__VTable vtable;
};

struct UserOpenIdInfo__Array__VTable {
};

struct UserOpenIdInfo__Array__StaticFields {
};

struct UserOpenIdInfo__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UserOpenIdInfo__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UserOpenIdInfo__Array__VTable vtable;
};

struct IEnumerator_1_PlayFab_ClientModels_UserOpenIdInfo___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_PlayFab_ClientModels_UserOpenIdInfo___StaticFields {
};

struct IEnumerator_1_PlayFab_ClientModels_UserOpenIdInfo___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_PlayFab_ClientModels_UserOpenIdInfo___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_PlayFab_ClientModels_UserOpenIdInfo___VTable vtable;
};

struct List_1_PlayFab_ClientModels_UserOpenIdInfo___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Item;
    VirtualInvokeData set_Item;
    VirtualInvokeData IndexOf;
    VirtualInvokeData Insert;
    VirtualInvokeData RemoveAt;
    VirtualInvokeData get_Count;
    VirtualInvokeData System_Collections_Generic_ICollection_T__get_IsReadOnly;
    VirtualInvokeData Add;
    VirtualInvokeData Clear;
    VirtualInvokeData Contains;
    VirtualInvokeData CopyTo;
    VirtualInvokeData Remove;
    VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
    VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
    VirtualInvokeData System_Collections_IList_get_Item;
    VirtualInvokeData System_Collections_IList_set_Item;
    VirtualInvokeData System_Collections_IList_Add;
    VirtualInvokeData System_Collections_IList_Contains;
    VirtualInvokeData Clear_1;
    VirtualInvokeData System_Collections_IList_get_IsReadOnly;
    VirtualInvokeData System_Collections_IList_get_IsFixedSize;
    VirtualInvokeData System_Collections_IList_IndexOf;
    VirtualInvokeData System_Collections_IList_Insert;
    VirtualInvokeData System_Collections_IList_Remove;
    VirtualInvokeData RemoveAt_1;
    VirtualInvokeData System_Collections_ICollection_CopyTo;
    VirtualInvokeData get_Count_1;
    VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
    VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
    VirtualInvokeData get_Item_1;
    VirtualInvokeData get_Count_2;
};

struct List_1_PlayFab_ClientModels_UserOpenIdInfo___StaticFields {
    struct UserOpenIdInfo__Array *_emptyArray;
};

struct List_1_PlayFab_ClientModels_UserOpenIdInfo___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_PlayFab_ClientModels_UserOpenIdInfo___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_PlayFab_ClientModels_UserOpenIdInfo___VTable vtable;
};

struct UserPrivateAccountInfo__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct UserPrivateAccountInfo__StaticFields {
};

struct UserPrivateAccountInfo__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UserPrivateAccountInfo__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UserPrivateAccountInfo__VTable vtable;
};

struct UserPsnInfo__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct UserPsnInfo__StaticFields {
};

struct UserPsnInfo__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UserPsnInfo__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UserPsnInfo__VTable vtable;
};

struct TitleActivationStatus__Enum__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CompareTo;
    VirtualInvokeData ToString_1;
    VirtualInvokeData GetTypeCode;
    VirtualInvokeData System_IConvertible_ToBoolean;
    VirtualInvokeData System_IConvertible_ToChar;
    VirtualInvokeData System_IConvertible_ToSByte;
    VirtualInvokeData System_IConvertible_ToByte;
    VirtualInvokeData System_IConvertible_ToInt16;
    VirtualInvokeData System_IConvertible_ToUInt16;
    VirtualInvokeData System_IConvertible_ToInt32;
    VirtualInvokeData System_IConvertible_ToUInt32;
    VirtualInvokeData System_IConvertible_ToInt64;
    VirtualInvokeData System_IConvertible_ToUInt64;
    VirtualInvokeData System_IConvertible_ToSingle;
    VirtualInvokeData System_IConvertible_ToDouble;
    VirtualInvokeData System_IConvertible_ToDecimal;
    VirtualInvokeData System_IConvertible_ToDateTime;
    VirtualInvokeData ToString_2;
    VirtualInvokeData System_IConvertible_ToType;
};

struct TitleActivationStatus__Enum__StaticFields {
};

struct TitleActivationStatus__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TitleActivationStatus__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TitleActivationStatus__Enum__VTable vtable;
};

struct Nullable_1_PlayFab_ClientModels_TitleActivationStatus___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Nullable_1_PlayFab_ClientModels_TitleActivationStatus___StaticFields {
};

struct Nullable_1_PlayFab_ClientModels_TitleActivationStatus___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Nullable_1_PlayFab_ClientModels_TitleActivationStatus___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Nullable_1_PlayFab_ClientModels_TitleActivationStatus___VTable vtable;
};

struct Currency__Enum__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CompareTo;
    VirtualInvokeData ToString_1;
    VirtualInvokeData GetTypeCode;
    VirtualInvokeData System_IConvertible_ToBoolean;
    VirtualInvokeData System_IConvertible_ToChar;
    VirtualInvokeData System_IConvertible_ToSByte;
    VirtualInvokeData System_IConvertible_ToByte;
    VirtualInvokeData System_IConvertible_ToInt16;
    VirtualInvokeData System_IConvertible_ToUInt16;
    VirtualInvokeData System_IConvertible_ToInt32;
    VirtualInvokeData System_IConvertible_ToUInt32;
    VirtualInvokeData System_IConvertible_ToInt64;
    VirtualInvokeData System_IConvertible_ToUInt64;
    VirtualInvokeData System_IConvertible_ToSingle;
    VirtualInvokeData System_IConvertible_ToDouble;
    VirtualInvokeData System_IConvertible_ToDecimal;
    VirtualInvokeData System_IConvertible_ToDateTime;
    VirtualInvokeData ToString_2;
    VirtualInvokeData System_IConvertible_ToType;
};

struct Currency__Enum__StaticFields {
};

struct Currency__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Currency__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Currency__Enum__VTable vtable;
};

struct Nullable_1_PlayFab_ClientModels_Currency___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Nullable_1_PlayFab_ClientModels_Currency___StaticFields {
};

struct Nullable_1_PlayFab_ClientModels_Currency___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Nullable_1_PlayFab_ClientModels_Currency___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Nullable_1_PlayFab_ClientModels_Currency___VTable vtable;
};

struct UserSteamInfo__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct UserSteamInfo__StaticFields {
};

struct UserSteamInfo__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UserSteamInfo__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UserSteamInfo__VTable vtable;
};

struct UserOrigination__Enum__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CompareTo;
    VirtualInvokeData ToString_1;
    VirtualInvokeData GetTypeCode;
    VirtualInvokeData System_IConvertible_ToBoolean;
    VirtualInvokeData System_IConvertible_ToChar;
    VirtualInvokeData System_IConvertible_ToSByte;
    VirtualInvokeData System_IConvertible_ToByte;
    VirtualInvokeData System_IConvertible_ToInt16;
    VirtualInvokeData System_IConvertible_ToUInt16;
    VirtualInvokeData System_IConvertible_ToInt32;
    VirtualInvokeData System_IConvertible_ToUInt32;
    VirtualInvokeData System_IConvertible_ToInt64;
    VirtualInvokeData System_IConvertible_ToUInt64;
    VirtualInvokeData System_IConvertible_ToSingle;
    VirtualInvokeData System_IConvertible_ToDouble;
    VirtualInvokeData System_IConvertible_ToDecimal;
    VirtualInvokeData System_IConvertible_ToDateTime;
    VirtualInvokeData ToString_2;
    VirtualInvokeData System_IConvertible_ToType;
};

struct UserOrigination__Enum__StaticFields {
};

struct UserOrigination__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UserOrigination__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UserOrigination__Enum__VTable vtable;
};

struct Nullable_1_PlayFab_ClientModels_UserOrigination___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Nullable_1_PlayFab_ClientModels_UserOrigination___StaticFields {
};

struct Nullable_1_PlayFab_ClientModels_UserOrigination___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Nullable_1_PlayFab_ClientModels_UserOrigination___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Nullable_1_PlayFab_ClientModels_UserOrigination___VTable vtable;
};

struct EntityKey_1__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct EntityKey_1__StaticFields {
};

struct EntityKey_1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EntityKey_1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EntityKey_1__VTable vtable;
};

struct UserTitleInfo__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct UserTitleInfo__StaticFields {
};

struct UserTitleInfo__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UserTitleInfo__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UserTitleInfo__VTable vtable;
};

struct UserTwitchInfo__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct UserTwitchInfo__StaticFields {
};

struct UserTwitchInfo__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UserTwitchInfo__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UserTwitchInfo__VTable vtable;
};

struct UserWindowsHelloInfo__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct UserWindowsHelloInfo__StaticFields {
};

struct UserWindowsHelloInfo__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UserWindowsHelloInfo__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UserWindowsHelloInfo__VTable vtable;
};

struct UserXboxInfo__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct UserXboxInfo__StaticFields {
};

struct UserXboxInfo__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UserXboxInfo__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UserXboxInfo__VTable vtable;
};

struct UserAccountInfo__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct UserAccountInfo__StaticFields {
};

struct UserAccountInfo__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UserAccountInfo__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UserAccountInfo__VTable vtable;
};

struct GetAccountInfoResult__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct GetAccountInfoResult__StaticFields {
};

struct GetAccountInfoResult__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GetAccountInfoResult__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GetAccountInfoResult__VTable vtable;
};

struct Action_1_PlayFab_ClientModels_GetAccountInfoResult___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Clone;
    VirtualInvokeData GetObjectData;
    VirtualInvokeData Clone_1;
    VirtualInvokeData GetMethodImpl;
    VirtualInvokeData GetObjectData_1;
    VirtualInvokeData GetInvocationList;
    VirtualInvokeData CombineImpl;
    VirtualInvokeData RemoveImpl;
    VirtualInvokeData Invoke;
    VirtualInvokeData BeginInvoke;
    VirtualInvokeData EndInvoke;
};

struct Action_1_PlayFab_ClientModels_GetAccountInfoResult___StaticFields {
};

struct Action_1_PlayFab_ClientModels_GetAccountInfoResult___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_1_PlayFab_ClientModels_GetAccountInfoResult___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Action_1_PlayFab_ClientModels_GetAccountInfoResult___VTable vtable;
};

struct ListUsersCharactersRequest__Fields {
    struct PlayFabRequestCommon__Fields _;
    struct String *PlayFabId;
};

struct ListUsersCharactersRequest {
    struct ListUsersCharactersRequest__Class *klass;
    MonitorData *monitor;
    struct ListUsersCharactersRequest__Fields fields;
};

struct Action_1_PlayFab_ClientModels_ListUsersCharactersResult___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_1_PlayFab_ClientModels_ListUsersCharactersResult_ {
    struct Action_1_PlayFab_ClientModels_ListUsersCharactersResult___Class *klass;
    MonitorData *monitor;
    struct Action_1_PlayFab_ClientModels_ListUsersCharactersResult___Fields fields;
};

struct ListUsersCharactersResult__Fields {
    struct PlayFabResultCommon__Fields _;
    struct List_1_PlayFab_ClientModels_CharacterResult_ *Characters;
};

struct ListUsersCharactersResult {
    struct ListUsersCharactersResult__Class *klass;
    MonitorData *monitor;
    struct ListUsersCharactersResult__Fields fields;
};

struct __declspec(align(8)) List_1_PlayFab_ClientModels_CharacterResult___Fields {
    struct CharacterResult__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_PlayFab_ClientModels_CharacterResult_ {
    struct List_1_PlayFab_ClientModels_CharacterResult___Class *klass;
    MonitorData *monitor;
    struct List_1_PlayFab_ClientModels_CharacterResult___Fields fields;
};

struct CharacterResult__Fields {
    struct PlayFabResultCommon__Fields _;
    struct String *CharacterId;
    struct String *CharacterName;
    struct String *CharacterType;
};

struct CharacterResult {
    struct CharacterResult__Class *klass;
    MonitorData *monitor;
    struct CharacterResult__Fields fields;
};

struct CharacterResult__Array {
    struct CharacterResult__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct CharacterResult *vector[32];
};

struct IEnumerator_1_PlayFab_ClientModels_CharacterResult_ {
    struct IEnumerator_1_PlayFab_ClientModels_CharacterResult___Class *klass;
    MonitorData *monitor;
};

struct ListUsersCharactersRequest__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ListUsersCharactersRequest__StaticFields {
};

struct ListUsersCharactersRequest__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ListUsersCharactersRequest__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ListUsersCharactersRequest__VTable vtable;
};

struct CharacterResult__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct CharacterResult__StaticFields {
};

struct CharacterResult__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CharacterResult__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CharacterResult__VTable vtable;
};

struct CharacterResult__Array__VTable {
};

struct CharacterResult__Array__StaticFields {
};

struct CharacterResult__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CharacterResult__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CharacterResult__Array__VTable vtable;
};

struct IEnumerator_1_PlayFab_ClientModels_CharacterResult___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_PlayFab_ClientModels_CharacterResult___StaticFields {
};

struct IEnumerator_1_PlayFab_ClientModels_CharacterResult___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_PlayFab_ClientModels_CharacterResult___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_PlayFab_ClientModels_CharacterResult___VTable vtable;
};

struct List_1_PlayFab_ClientModels_CharacterResult___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Item;
    VirtualInvokeData set_Item;
    VirtualInvokeData IndexOf;
    VirtualInvokeData Insert;
    VirtualInvokeData RemoveAt;
    VirtualInvokeData get_Count;
    VirtualInvokeData System_Collections_Generic_ICollection_T__get_IsReadOnly;
    VirtualInvokeData Add;
    VirtualInvokeData Clear;
    VirtualInvokeData Contains;
    VirtualInvokeData CopyTo;
    VirtualInvokeData Remove;
    VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
    VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
    VirtualInvokeData System_Collections_IList_get_Item;
    VirtualInvokeData System_Collections_IList_set_Item;
    VirtualInvokeData System_Collections_IList_Add;
    VirtualInvokeData System_Collections_IList_Contains;
    VirtualInvokeData Clear_1;
    VirtualInvokeData System_Collections_IList_get_IsReadOnly;
    VirtualInvokeData System_Collections_IList_get_IsFixedSize;
    VirtualInvokeData System_Collections_IList_IndexOf;
    VirtualInvokeData System_Collections_IList_Insert;
    VirtualInvokeData System_Collections_IList_Remove;
    VirtualInvokeData RemoveAt_1;
    VirtualInvokeData System_Collections_ICollection_CopyTo;
    VirtualInvokeData get_Count_1;
    VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
    VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
    VirtualInvokeData get_Item_1;
    VirtualInvokeData get_Count_2;
};

struct List_1_PlayFab_ClientModels_CharacterResult___StaticFields {
    struct CharacterResult__Array *_emptyArray;
};

struct List_1_PlayFab_ClientModels_CharacterResult___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_PlayFab_ClientModels_CharacterResult___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_PlayFab_ClientModels_CharacterResult___VTable vtable;
};

struct ListUsersCharactersResult__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ListUsersCharactersResult__StaticFields {
};

struct ListUsersCharactersResult__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ListUsersCharactersResult__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ListUsersCharactersResult__VTable vtable;
};

struct Action_1_PlayFab_ClientModels_ListUsersCharactersResult___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Clone;
    VirtualInvokeData GetObjectData;
    VirtualInvokeData Clone_1;
    VirtualInvokeData GetMethodImpl;
    VirtualInvokeData GetObjectData_1;
    VirtualInvokeData GetInvocationList;
    VirtualInvokeData CombineImpl;
    VirtualInvokeData RemoveImpl;
    VirtualInvokeData Invoke;
    VirtualInvokeData BeginInvoke;
    VirtualInvokeData EndInvoke;
};

struct Action_1_PlayFab_ClientModels_ListUsersCharactersResult___StaticFields {
};

struct Action_1_PlayFab_ClientModels_ListUsersCharactersResult___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_1_PlayFab_ClientModels_ListUsersCharactersResult___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Action_1_PlayFab_ClientModels_ListUsersCharactersResult___VTable vtable;
};

}
