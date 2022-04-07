namespace app {
struct Action_1_PlayFab_MultiplayerModels_CancelAllMatchmakingTicketsForPlayerResult___VTable {
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
struct Action_1_PlayFab_MultiplayerModels_CancelAllMatchmakingTicketsForPlayerResult___StaticFields {
};
struct Action_1_PlayFab_MultiplayerModels_CancelAllMatchmakingTicketsForPlayerResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_MultiplayerModels_CancelAllMatchmakingTicketsForPlayerResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_MultiplayerModels_CancelAllMatchmakingTicketsForPlayerResult___VTable vtable;
};

struct CancelMatchmakingTicketRequest__Fields {
  struct PlayFabRequestCommon__Fields _;
  struct String * QueueName;
  struct String * TicketId;
};
struct CancelMatchmakingTicketRequest {
  struct CancelMatchmakingTicketRequest__Class *klass;
  struct MonitorData *monitor;
  struct CancelMatchmakingTicketRequest__Fields fields;
};
struct Action_1_PlayFab_MultiplayerModels_CancelMatchmakingTicketResult___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_MultiplayerModels_CancelMatchmakingTicketResult_ {
  struct Action_1_PlayFab_MultiplayerModels_CancelMatchmakingTicketResult___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_MultiplayerModels_CancelMatchmakingTicketResult___Fields fields;
};
struct CancelMatchmakingTicketResult__Fields {
  struct PlayFabResultCommon__Fields _;
};
struct CancelMatchmakingTicketResult {
  struct CancelMatchmakingTicketResult__Class *klass;
  struct MonitorData *monitor;
  struct CancelMatchmakingTicketResult__Fields fields;
};
struct CancelMatchmakingTicketRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CancelMatchmakingTicketRequest__StaticFields {
};
struct CancelMatchmakingTicketRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CancelMatchmakingTicketRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CancelMatchmakingTicketRequest__VTable vtable;
};
struct CancelMatchmakingTicketResult__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CancelMatchmakingTicketResult__StaticFields {
};
struct CancelMatchmakingTicketResult__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CancelMatchmakingTicketResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CancelMatchmakingTicketResult__VTable vtable;
};
struct Action_1_PlayFab_MultiplayerModels_CancelMatchmakingTicketResult___VTable {
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
struct Action_1_PlayFab_MultiplayerModels_CancelMatchmakingTicketResult___StaticFields {
};
struct Action_1_PlayFab_MultiplayerModels_CancelMatchmakingTicketResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_MultiplayerModels_CancelMatchmakingTicketResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_MultiplayerModels_CancelMatchmakingTicketResult___VTable vtable;
};

enum ContainerFlavor__Enum : int32_t {
  ContainerFlavor__Enum_ManagedWindowsServerCore = 0,
  ContainerFlavor__Enum_CustomLinux = 1,
  ContainerFlavor__Enum_ManagedWindowsServerCorePreview = 2,
};
struct ContainerFlavor__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ContainerFlavor__Enum value;
};
struct Nullable_1_PlayFab_MultiplayerModels_ContainerFlavor_ {
  enum ContainerFlavor__Enum value;
  bool has_value;
};
struct Nullable_1_PlayFab_MultiplayerModels_ContainerFlavor___Boxed {
  struct Nullable_1_PlayFab_MultiplayerModels_ContainerFlavor___Class *klass;
  struct MonitorData *monitor;
  struct Nullable_1_PlayFab_MultiplayerModels_ContainerFlavor_ fields;
};
enum AzureVmSize__Enum : int32_t {
  AzureVmSize__Enum_Standard_D1_v2 = 0,
  AzureVmSize__Enum_Standard_D2_v2 = 1,
  AzureVmSize__Enum_Standard_D3_v2 = 2,
  AzureVmSize__Enum_Standard_D4_v2 = 3,
  AzureVmSize__Enum_Standard_D5_v2 = 4,
  AzureVmSize__Enum_Standard_A1_v2 = 5,
  AzureVmSize__Enum_Standard_A2_v2 = 6,
  AzureVmSize__Enum_Standard_A4_v2 = 7,
  AzureVmSize__Enum_Standard_A8_v2 = 8,
  AzureVmSize__Enum_Standard_F1 = 9,
  AzureVmSize__Enum_Standard_F2 = 10,
  AzureVmSize__Enum_Standard_F4 = 11,
  AzureVmSize__Enum_Standard_F8 = 12,
  AzureVmSize__Enum_Standard_F16 = 13,
  AzureVmSize__Enum_Standard_F2s_v2 = 14,
  AzureVmSize__Enum_Standard_F4s_v2 = 15,
  AzureVmSize__Enum_Standard_F8s_v2 = 16,
  AzureVmSize__Enum_Standard_F16s_v2 = 17,
  AzureVmSize__Enum_Standard_A1 = 18,
  AzureVmSize__Enum_Standard_A2 = 19,
  AzureVmSize__Enum_Standard_A3 = 20,
  AzureVmSize__Enum_Standard_A4 = 21,
};
struct AzureVmSize__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum AzureVmSize__Enum value;
};
struct Nullable_1_PlayFab_MultiplayerModels_AzureVmSize_ {
  enum AzureVmSize__Enum value;
  bool has_value;
};
struct Nullable_1_PlayFab_MultiplayerModels_AzureVmSize___Boxed {
  struct Nullable_1_PlayFab_MultiplayerModels_AzureVmSize___Class *klass;
  struct MonitorData *monitor;
  struct Nullable_1_PlayFab_MultiplayerModels_AzureVmSize_ fields;
};
struct CreateBuildWithCustomContainerRequest__Fields {
  struct PlayFabRequestCommon__Fields _;
  struct String * BuildName;
  struct Nullable_1_PlayFab_MultiplayerModels_ContainerFlavor_ ContainerFlavor;
  struct String * ContainerRepositoryName;
  struct String * ContainerRunCommand;
  struct String * ContainerTag;
  struct List_1_PlayFab_MultiplayerModels_AssetReferenceParams_ * GameAssetReferences;
  struct List_1_PlayFab_MultiplayerModels_GameCertificateReferenceParams_ * GameCertificateReferences;
  struct Dictionary_2_System_String_System_String_ * Metadata;
  int32_t MultiplayerServerCountPerVm;
  struct List_1_PlayFab_MultiplayerModels_Port_ * Ports;
  struct List_1_PlayFab_MultiplayerModels_BuildRegionParams_ * RegionConfigurations;
  struct Nullable_1_PlayFab_MultiplayerModels_AzureVmSize_ VmSize;
};
struct CreateBuildWithCustomContainerRequest {
  struct CreateBuildWithCustomContainerRequest__Class *klass;
  struct MonitorData *monitor;
  struct CreateBuildWithCustomContainerRequest__Fields fields;
};
struct __declspec(align(8)) List_1_PlayFab_MultiplayerModels_AssetReferenceParams___Fields {
  struct AssetReferenceParams__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PlayFab_MultiplayerModels_AssetReferenceParams_ {
  struct List_1_PlayFab_MultiplayerModels_AssetReferenceParams___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PlayFab_MultiplayerModels_AssetReferenceParams___Fields fields;
};
struct __declspec(align(8)) AssetReferenceParams__Fields {
  struct String * FileName;
  struct String * MountPath;
};
struct AssetReferenceParams {
  struct AssetReferenceParams__Class *klass;
  struct MonitorData *monitor;
  struct AssetReferenceParams__Fields fields;
};
struct AssetReferenceParams__Array {
  struct AssetReferenceParams__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct AssetReferenceParams * vector[32];
};
struct IEnumerator_1_PlayFab_MultiplayerModels_AssetReferenceParams_ {
  struct IEnumerator_1_PlayFab_MultiplayerModels_AssetReferenceParams___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_PlayFab_MultiplayerModels_GameCertificateReferenceParams___Fields {
  struct GameCertificateReferenceParams__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PlayFab_MultiplayerModels_GameCertificateReferenceParams_ {
  struct List_1_PlayFab_MultiplayerModels_GameCertificateReferenceParams___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PlayFab_MultiplayerModels_GameCertificateReferenceParams___Fields fields;
};
struct __declspec(align(8)) GameCertificateReferenceParams__Fields {
  struct String * GsdkAlias;
  struct String * Name;
};
struct GameCertificateReferenceParams {
  struct GameCertificateReferenceParams__Class *klass;
  struct MonitorData *monitor;
  struct GameCertificateReferenceParams__Fields fields;
};
struct GameCertificateReferenceParams__Array {
  struct GameCertificateReferenceParams__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct GameCertificateReferenceParams * vector[32];
};
struct IEnumerator_1_PlayFab_MultiplayerModels_GameCertificateReferenceParams_ {
  struct IEnumerator_1_PlayFab_MultiplayerModels_GameCertificateReferenceParams___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_PlayFab_MultiplayerModels_Port___Fields {
  struct Port__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PlayFab_MultiplayerModels_Port_ {
  struct List_1_PlayFab_MultiplayerModels_Port___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PlayFab_MultiplayerModels_Port___Fields fields;
};
enum ProtocolType__Enum_1 : int32_t {
  ProtocolType__Enum_1_TCP = 0,
  ProtocolType__Enum_1_UDP = 1,
};
struct ProtocolType__Enum_1__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ProtocolType__Enum_1 value;
};
struct __declspec(align(8)) Port__Fields {
  struct String * Name;
  int32_t Num;
  enum ProtocolType__Enum_1 Protocol;
};
struct Port {
  struct Port__Class *klass;
  struct MonitorData *monitor;
  struct Port__Fields fields;
};
struct Port__Array {
  struct Port__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Port * vector[32];
};
struct IEnumerator_1_PlayFab_MultiplayerModels_Port_ {
  struct IEnumerator_1_PlayFab_MultiplayerModels_Port___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_PlayFab_MultiplayerModels_BuildRegionParams___Fields {
  struct BuildRegionParams__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PlayFab_MultiplayerModels_BuildRegionParams_ {
  struct List_1_PlayFab_MultiplayerModels_BuildRegionParams___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PlayFab_MultiplayerModels_BuildRegionParams___Fields fields;
};
enum AzureRegion__Enum : int32_t {
  AzureRegion__Enum_AustraliaEast = 0,
  AzureRegion__Enum_AustraliaSoutheast = 1,
  AzureRegion__Enum_BrazilSouth = 2,
  AzureRegion__Enum_CentralUs = 3,
  AzureRegion__Enum_EastAsia = 4,
  AzureRegion__Enum_EastUs = 5,
  AzureRegion__Enum_EastUs2 = 6,
  AzureRegion__Enum_JapanEast = 7,
  AzureRegion__Enum_JapanWest = 8,
  AzureRegion__Enum_NorthCentralUs = 9,
  AzureRegion__Enum_NorthEurope = 10,
  AzureRegion__Enum_SouthCentralUs = 11,
  AzureRegion__Enum_SoutheastAsia = 12,
  AzureRegion__Enum_WestEurope = 13,
  AzureRegion__Enum_WestUs = 14,
  AzureRegion__Enum_ChinaEast2 = 15,
  AzureRegion__Enum_ChinaNorth2 = 16,
};
struct AzureRegion__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum AzureRegion__Enum value;
};
struct __declspec(align(8)) BuildRegionParams__Fields {
  int32_t MaxServers;
  enum AzureRegion__Enum Region;
  int32_t StandbyServers;
};
struct BuildRegionParams {
  struct BuildRegionParams__Class *klass;
  struct MonitorData *monitor;
  struct BuildRegionParams__Fields fields;
};
struct BuildRegionParams__Array {
  struct BuildRegionParams__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct BuildRegionParams * vector[32];
};
struct IEnumerator_1_PlayFab_MultiplayerModels_BuildRegionParams_ {
  struct IEnumerator_1_PlayFab_MultiplayerModels_BuildRegionParams___Class *klass;
  struct MonitorData *monitor;
};
struct Action_1_PlayFab_MultiplayerModels_CreateBuildWithCustomContainerResponse___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_MultiplayerModels_CreateBuildWithCustomContainerResponse_ {
  struct Action_1_PlayFab_MultiplayerModels_CreateBuildWithCustomContainerResponse___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_MultiplayerModels_CreateBuildWithCustomContainerResponse___Fields fields;
};
struct CreateBuildWithCustomContainerResponse__Fields {
  struct PlayFabResultCommon__Fields _;
  struct String * BuildId;
  struct String * BuildName;
  struct Nullable_1_PlayFab_MultiplayerModels_ContainerFlavor_ ContainerFlavor;
  struct String * ContainerRunCommand;
  struct Nullable_1_DateTime_ CreationTime;
  struct ContainerImageReference * CustomGameContainerImage;
  struct List_1_PlayFab_MultiplayerModels_AssetReference_ * GameAssetReferences;
  struct List_1_PlayFab_MultiplayerModels_GameCertificateReference_ * GameCertificateReferences;
  struct Dictionary_2_System_String_System_String_ * Metadata;
  int32_t MultiplayerServerCountPerVm;
  struct List_1_PlayFab_MultiplayerModels_Port_ * Ports;
  struct List_1_PlayFab_MultiplayerModels_BuildRegion_ * RegionConfigurations;
  struct Nullable_1_PlayFab_MultiplayerModels_AzureVmSize_ VmSize;
};
struct CreateBuildWithCustomContainerResponse {
  struct CreateBuildWithCustomContainerResponse__Class *klass;
  struct MonitorData *monitor;
  struct CreateBuildWithCustomContainerResponse__Fields fields;
};
struct __declspec(align(8)) ContainerImageReference__Fields {
  struct String * ImageName;
  struct String * Tag;
};
struct ContainerImageReference {
  struct ContainerImageReference__Class *klass;
  struct MonitorData *monitor;
  struct ContainerImageReference__Fields fields;
};
struct __declspec(align(8)) List_1_PlayFab_MultiplayerModels_AssetReference___Fields {
  struct AssetReference__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PlayFab_MultiplayerModels_AssetReference_ {
  struct List_1_PlayFab_MultiplayerModels_AssetReference___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PlayFab_MultiplayerModels_AssetReference___Fields fields;
};
struct __declspec(align(8)) AssetReference__Fields {
  struct String * FileName;
  struct String * MountPath;
};
struct AssetReference {
  struct AssetReference__Class *klass;
  struct MonitorData *monitor;
  struct AssetReference__Fields fields;
};
struct AssetReference__Array {
  struct AssetReference__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct AssetReference * vector[32];
};
struct IEnumerator_1_PlayFab_MultiplayerModels_AssetReference_ {
  struct IEnumerator_1_PlayFab_MultiplayerModels_AssetReference___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_PlayFab_MultiplayerModels_GameCertificateReference___Fields {
  struct GameCertificateReference__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PlayFab_MultiplayerModels_GameCertificateReference_ {
  struct List_1_PlayFab_MultiplayerModels_GameCertificateReference___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PlayFab_MultiplayerModels_GameCertificateReference___Fields fields;
};
struct __declspec(align(8)) GameCertificateReference__Fields {
  struct String * GsdkAlias;
  struct String * Name;
};
struct GameCertificateReference {
  struct GameCertificateReference__Class *klass;
  struct MonitorData *monitor;
  struct GameCertificateReference__Fields fields;
};
struct GameCertificateReference__Array {
  struct GameCertificateReference__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct GameCertificateReference * vector[32];
};
struct IEnumerator_1_PlayFab_MultiplayerModels_GameCertificateReference_ {
  struct IEnumerator_1_PlayFab_MultiplayerModels_GameCertificateReference___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_PlayFab_MultiplayerModels_BuildRegion___Fields {
  struct BuildRegion__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PlayFab_MultiplayerModels_BuildRegion_ {
  struct List_1_PlayFab_MultiplayerModels_BuildRegion___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PlayFab_MultiplayerModels_BuildRegion___Fields fields;
};
struct Nullable_1_PlayFab_MultiplayerModels_AzureRegion_ {
  enum AzureRegion__Enum value;
  bool has_value;
};
struct Nullable_1_PlayFab_MultiplayerModels_AzureRegion___Boxed {
  struct Nullable_1_PlayFab_MultiplayerModels_AzureRegion___Class *klass;
  struct MonitorData *monitor;
  struct Nullable_1_PlayFab_MultiplayerModels_AzureRegion_ fields;
};
struct __declspec(align(8)) BuildRegion__Fields {
  struct CurrentServerStats * CurrentServerStats;
  int32_t MaxServers;
  struct Nullable_1_PlayFab_MultiplayerModels_AzureRegion_ Region;
  int32_t StandbyServers;
  struct String * Status;
};
struct BuildRegion {
  struct BuildRegion__Class *klass;
  struct MonitorData *monitor;
  struct BuildRegion__Fields fields;
};
struct BuildRegion__Array {
  struct BuildRegion__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct BuildRegion * vector[32];
};
struct __declspec(align(8)) CurrentServerStats__Fields {
  int32_t Active;
  int32_t Propping;
  int32_t StandingBy;
  int32_t Total;
};
struct CurrentServerStats {
  struct CurrentServerStats__Class *klass;
  struct MonitorData *monitor;
  struct CurrentServerStats__Fields fields;
};
struct IEnumerator_1_PlayFab_MultiplayerModels_BuildRegion_ {
  struct IEnumerator_1_PlayFab_MultiplayerModels_BuildRegion___Class *klass;
  struct MonitorData *monitor;
};
struct Nullable_1_PlayFab_MultiplayerModels_ContainerFlavor___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Nullable_1_PlayFab_MultiplayerModels_ContainerFlavor___StaticFields {
};
struct Nullable_1_PlayFab_MultiplayerModels_ContainerFlavor___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Nullable_1_PlayFab_MultiplayerModels_ContainerFlavor___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Nullable_1_PlayFab_MultiplayerModels_ContainerFlavor___VTable vtable;
};
struct AssetReferenceParams__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AssetReferenceParams__StaticFields {
};
struct AssetReferenceParams__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AssetReferenceParams__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AssetReferenceParams__VTable vtable;
};
struct IEnumerator_1_PlayFab_MultiplayerModels_AssetReferenceParams___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_PlayFab_MultiplayerModels_AssetReferenceParams___StaticFields {
};
struct IEnumerator_1_PlayFab_MultiplayerModels_AssetReferenceParams___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_PlayFab_MultiplayerModels_AssetReferenceParams___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_PlayFab_MultiplayerModels_AssetReferenceParams___VTable vtable;
};
struct List_1_PlayFab_MultiplayerModels_AssetReferenceParams___VTable {
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
struct List_1_PlayFab_MultiplayerModels_AssetReferenceParams___StaticFields {
  struct AssetReferenceParams__Array * _emptyArray;
};
struct List_1_PlayFab_MultiplayerModels_AssetReferenceParams___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_PlayFab_MultiplayerModels_AssetReferenceParams___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_PlayFab_MultiplayerModels_AssetReferenceParams___VTable vtable;
};
struct GameCertificateReferenceParams__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GameCertificateReferenceParams__StaticFields {
};
struct GameCertificateReferenceParams__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GameCertificateReferenceParams__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GameCertificateReferenceParams__VTable vtable;
};
struct IEnumerator_1_PlayFab_MultiplayerModels_GameCertificateReferenceParams___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_PlayFab_MultiplayerModels_GameCertificateReferenceParams___StaticFields {
};
struct IEnumerator_1_PlayFab_MultiplayerModels_GameCertificateReferenceParams___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_PlayFab_MultiplayerModels_GameCertificateReferenceParams___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_PlayFab_MultiplayerModels_GameCertificateReferenceParams___VTable vtable;
};
struct List_1_PlayFab_MultiplayerModels_GameCertificateReferenceParams___VTable {
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
struct List_1_PlayFab_MultiplayerModels_GameCertificateReferenceParams___StaticFields {
  struct GameCertificateReferenceParams__Array * _emptyArray;
};
struct List_1_PlayFab_MultiplayerModels_GameCertificateReferenceParams___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_PlayFab_MultiplayerModels_GameCertificateReferenceParams___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_PlayFab_MultiplayerModels_GameCertificateReferenceParams___VTable vtable;
};
struct Port__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Port__StaticFields {
};
struct Port__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Port__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Port__VTable vtable;
};
struct IEnumerator_1_PlayFab_MultiplayerModels_Port___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_PlayFab_MultiplayerModels_Port___StaticFields {
};
struct IEnumerator_1_PlayFab_MultiplayerModels_Port___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_PlayFab_MultiplayerModels_Port___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_PlayFab_MultiplayerModels_Port___VTable vtable;
};
struct List_1_PlayFab_MultiplayerModels_Port___VTable {
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
struct List_1_PlayFab_MultiplayerModels_Port___StaticFields {
  struct Port__Array * _emptyArray;
};
struct List_1_PlayFab_MultiplayerModels_Port___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_PlayFab_MultiplayerModels_Port___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_PlayFab_MultiplayerModels_Port___VTable vtable;
};
struct BuildRegionParams__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct BuildRegionParams__StaticFields {
};
struct BuildRegionParams__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BuildRegionParams__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BuildRegionParams__VTable vtable;
};
struct IEnumerator_1_PlayFab_MultiplayerModels_BuildRegionParams___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_PlayFab_MultiplayerModels_BuildRegionParams___StaticFields {
};
struct IEnumerator_1_PlayFab_MultiplayerModels_BuildRegionParams___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_PlayFab_MultiplayerModels_BuildRegionParams___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_PlayFab_MultiplayerModels_BuildRegionParams___VTable vtable;
};
struct List_1_PlayFab_MultiplayerModels_BuildRegionParams___VTable {
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
struct List_1_PlayFab_MultiplayerModels_BuildRegionParams___StaticFields {
  struct BuildRegionParams__Array * _emptyArray;
};
struct List_1_PlayFab_MultiplayerModels_BuildRegionParams___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_PlayFab_MultiplayerModels_BuildRegionParams___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_PlayFab_MultiplayerModels_BuildRegionParams___VTable vtable;
};
struct Nullable_1_PlayFab_MultiplayerModels_AzureVmSize___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Nullable_1_PlayFab_MultiplayerModels_AzureVmSize___StaticFields {
};
struct Nullable_1_PlayFab_MultiplayerModels_AzureVmSize___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Nullable_1_PlayFab_MultiplayerModels_AzureVmSize___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Nullable_1_PlayFab_MultiplayerModels_AzureVmSize___VTable vtable;
};
struct CreateBuildWithCustomContainerRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CreateBuildWithCustomContainerRequest__StaticFields {
};
struct CreateBuildWithCustomContainerRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CreateBuildWithCustomContainerRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CreateBuildWithCustomContainerRequest__VTable vtable;
};
struct ContainerImageReference__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ContainerImageReference__StaticFields {
};
struct ContainerImageReference__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ContainerImageReference__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ContainerImageReference__VTable vtable;
};
struct AssetReference__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AssetReference__StaticFields {
};
struct AssetReference__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AssetReference__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AssetReference__VTable vtable;
};
struct IEnumerator_1_PlayFab_MultiplayerModels_AssetReference___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_PlayFab_MultiplayerModels_AssetReference___StaticFields {
};
struct IEnumerator_1_PlayFab_MultiplayerModels_AssetReference___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_PlayFab_MultiplayerModels_AssetReference___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_PlayFab_MultiplayerModels_AssetReference___VTable vtable;
};
struct List_1_PlayFab_MultiplayerModels_AssetReference___VTable {
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
struct List_1_PlayFab_MultiplayerModels_AssetReference___StaticFields {
  struct AssetReference__Array * _emptyArray;
};
struct List_1_PlayFab_MultiplayerModels_AssetReference___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_PlayFab_MultiplayerModels_AssetReference___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_PlayFab_MultiplayerModels_AssetReference___VTable vtable;
};
struct GameCertificateReference__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GameCertificateReference__StaticFields {
};
struct GameCertificateReference__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GameCertificateReference__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GameCertificateReference__VTable vtable;
};
struct IEnumerator_1_PlayFab_MultiplayerModels_GameCertificateReference___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_PlayFab_MultiplayerModels_GameCertificateReference___StaticFields {
};
struct IEnumerator_1_PlayFab_MultiplayerModels_GameCertificateReference___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_PlayFab_MultiplayerModels_GameCertificateReference___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_PlayFab_MultiplayerModels_GameCertificateReference___VTable vtable;
};
struct List_1_PlayFab_MultiplayerModels_GameCertificateReference___VTable {
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
};}