namespace app {

struct PlayFabSendingProxy {
  struct PlayFabSendingProxy__Class *klass;
  struct MonitorData *monitor;
};
struct PlayFabSendingProxy__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayFabSendingProxy__StaticFields {
  struct Action_1_MoonTelemetryEvent_ * m_proxy;
  bool NewPostImpl;
};
struct PlayFabSendingProxy__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayFabSendingProxy__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayFabSendingProxy__VTable vtable;
};

struct ITimelineItem {
  struct ITimelineItem__Class *klass;
  struct MonitorData *monitor;
};
struct ITimelineItem__VTable {
  VirtualInvokeData get_Hash;
  VirtualInvokeData get_Name;
};
struct ITimelineItem__StaticFields {
};
struct ITimelineItem__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ITimelineItem__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ITimelineItem__VTable vtable;
};

struct ShaderID_MotionBlur {
  struct ShaderID_MotionBlur__Class *klass;
  struct MonitorData *monitor;
};
struct ShaderID_MotionBlur__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ShaderID_MotionBlur__StaticFields {
  int32_t _MainTex;
  int32_t _AccumOrig;
};
struct ShaderID_MotionBlur__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShaderID_MotionBlur__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShaderID_MotionBlur__VTable vtable;
};

struct INpcInteractionNode {
  struct INpcInteractionNode__Class *klass;
  struct MonitorData *monitor;
};
struct INpcInteractionNode__VTable {
  VirtualInvokeData get_CurrentLine;
};
struct INpcInteractionNode__StaticFields {
};
struct INpcInteractionNode__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct INpcInteractionNode__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct INpcInteractionNode__VTable vtable;
};

struct NativeInputSystem {
  struct NativeInputSystem__Class *klass;
  struct MonitorData *monitor;
};
struct NativeInputSystem__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct NativeInputSystem__StaticFields {
  struct NativeUpdateCallback * onUpdate;
  struct Action_1_UnityEngineInternal_Input_NativeInputUpdateType_ * onBeforeUpdate;
  struct Action_2_Int32_String_ * s_OnDeviceDiscoveredCallback;
};
struct NativeInputSystem__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NativeInputSystem__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NativeInputSystem__VTable vtable;
};

struct NavMesh {
  struct NavMesh__Class *klass;
  struct MonitorData *monitor;
};
struct NavMesh__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct NavMesh__StaticFields {
  struct NavMesh_OnNavMeshPreUpdate * onPreUpdate;
};
struct NavMesh__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NavMesh__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NavMesh__VTable vtable;
};

struct NavigationSettings {
  struct NavigationSettings__Class *klass;
  struct MonitorData *monitor;
};
struct NavigationSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct NavigationSettings__StaticFields {
  int32_t NavigationCollisionMask;
};
struct NavigationSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NavigationSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NavigationSettings__VTable vtable;
};

struct NclConstants {
  struct NclConstants__Class *klass;
  struct MonitorData *monitor;
};
struct NclConstants__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct NclConstants__StaticFields {
  struct Object * Sentinel;
  struct Object__Array * EmptyObjectArray;
  struct Uri__Array * EmptyUriArray;
  struct Byte__Array * CRLF;
  struct Byte__Array * ChunkTerminator;
};
struct NclConstants__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NclConstants__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NclConstants__VTable vtable;
};

struct NclUtilities {
  struct NclUtilities__Class *klass;
  struct MonitorData *monitor;
};
struct NclUtilities__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct NclUtilities__StaticFields {
  struct ContextCallback * s_ContextRelativeDemandCallback;
  struct IPAddress__Array * _LocalAddresses;
  struct Object * _LocalAddressesLock;
  struct String * _LocalDomainName;
};
struct NclUtilities__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NclUtilities__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NclUtilities__VTable vtable;
};

struct INearSeinReceiver {
  struct INearSeinReceiver__Class *klass;
  struct MonitorData *monitor;
};
struct INearSeinReceiver__VTable {
  VirtualInvokeData OnNearSeinEnter;
  VirtualInvokeData OnNearSeinExit;
  VirtualInvokeData OnSeinNearStay;
};
struct INearSeinReceiver__StaticFields {
};
struct INearSeinReceiver__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct INearSeinReceiver__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct INearSeinReceiver__VTable vtable;
};

struct NegativeScaleFixer {
  struct NegativeScaleFixer__Class *klass;
  struct MonitorData *monitor;
};
struct NegativeScaleFixer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct NegativeScaleFixer__StaticFields {
  struct Vector3 currentVert;
};
struct NegativeScaleFixer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NegativeScaleFixer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NegativeScaleFixer__VTable vtable;
};

struct ShaderID_Negative {
  struct ShaderID_Negative__Class *klass;
  struct MonitorData *monitor;
};
struct ShaderID_Negative__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ShaderID_Negative__StaticFields {
  int32_t _Amount;
};
struct ShaderID_Negative__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShaderID_Negative__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShaderID_Negative__VTable vtable;
};

struct INestedContainer {
  struct INestedContainer__Class *klass;
  struct MonitorData *monitor;
};
struct INestedContainer__VTable {
  VirtualInvokeData get_Owner;
};
struct INestedContainer__StaticFields {
};
struct INestedContainer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct INestedContainer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct INestedContainer__VTable vtable;
};

struct INestedSite {
  struct INestedSite__Class *klass;
  struct MonitorData *monitor;
};
struct INestedSite__VTable {
  VirtualInvokeData get_FullName;
};
struct INestedSite__StaticFields {
};
struct INestedSite__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct INestedSite__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct INestedSite__VTable vtable;
};

struct NetConnectivityCheckerFactory {
  struct NetConnectivityCheckerFactory__Class *klass;
  struct MonitorData *monitor;
};
struct NetConnectivityCheckerFactory__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct NetConnectivityCheckerFactory__StaticFields {
  struct INetworkConnectivityChecker * m_networkConnectivityChecker;
};
struct NetConnectivityCheckerFactory__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NetConnectivityCheckerFactory__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NetConnectivityCheckerFactory__VTable vtable;
};

struct WebExceptionMapping {
  struct WebExceptionMapping__Class *klass;
  struct MonitorData *monitor;
};
struct WebExceptionMapping__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct WebExceptionMapping__StaticFields {
  struct String__Array * s_Mapping;
};
struct WebExceptionMapping__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WebExceptionMapping__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WebExceptionMapping__VTable vtable;
};

struct RemoteAction {
  struct RemoteAction__Class *klass;
  struct MonitorData *monitor;
};
struct RemoteAction__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RemoteAction__StaticFields {
  int32_t ACTIONS_CHECK_INTERVAL_SECONDS;
  struct Dictionary_2_System_String_List_1_System_Action_ * s_remoteActions;
  struct Thread * m_thread;
  bool s_isInited;
};
struct RemoteAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RemoteAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RemoteAction__VTable vtable;
};

struct ShaderID_NightBerry {
  struct ShaderID_NightBerry__Class *klass;
  struct MonitorData *monitor;
};
struct ShaderID_NightBerry__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ShaderID_NightBerry__StaticFields {
  int32_t _NightberryPosition;
};
struct ShaderID_NightBerry__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShaderID_NightBerry__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShaderID_NightBerry__VTable vtable;
};

enum NightCrawlerBackAttackBranches__Enum : int32_t {
  NightCrawlerBackAttackBranches__Enum_ContinueForward = 0,
  NightCrawlerBackAttackBranches__Enum_TurnAndAttack = 1,
};
struct NightCrawlerBackAttackBranches__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum NightCrawlerBackAttackBranches__Enum value;
};

enum NightCrawlerChaseIntroBranches__Enum : int32_t {
  NightCrawlerChaseIntroBranches__Enum_Regular = 0,
  NightCrawlerChaseIntroBranches__Enum_Checkpoint = 1,
};
struct NightCrawlerChaseIntroBranches__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum NightCrawlerChaseIntroBranches__Enum value;
};

enum NightCrawlerRetaliationBranches__Enum : int32_t {
  NightCrawlerRetaliationBranches__Enum_NormalFlow = 0,
  NightCrawlerRetaliationBranches__Enum_KillMove = 1,
};
struct NightCrawlerRetaliationBranches__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum NightCrawlerRetaliationBranches__Enum value;
};

struct ShaderID_NightberryPlaceholder {
  struct ShaderID_NightberryPlaceholder__Class *klass;
  struct MonitorData *monitor;
};
struct ShaderID_NightberryPlaceholder__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ShaderID_NightberryPlaceholder__StaticFields {
  int32_t _NightberryPosition;
};
struct ShaderID_NightberryPlaceholder__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShaderID_NightberryPlaceholder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShaderID_NightberryPlaceholder__VTable vtable;
};

struct ShaderID_NoiseAndGrain {
  struct ShaderID_NoiseAndGrain__Class *klass;
  struct MonitorData *monitor;
};
struct ShaderID_NoiseAndGrain__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ShaderID_NoiseAndGrain__StaticFields {
  int32_t _DX11NoiseTime;
  int32_t _NoiseTex;
  int32_t _NoisePerChannel;
  int32_t _MidGrey;
  int32_t _NoiseAmount;
  int32_t _NoiseTilingPerChannel;
  int32_t _MainTex;
};
struct ShaderID_NoiseAndGrain__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShaderID_NoiseAndGrain__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShaderID_NoiseAndGrain__VTable vtable;
};

struct ShaderID_NoiseEffect {
  struct ShaderID_NoiseEffect__Class *klass;
  struct MonitorData *monitor;
};
struct ShaderID_NoiseEffect__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ShaderID_NoiseEffect__StaticFields {
  int32_t _GrainTex;
  int32_t _ScratchTex;
  int32_t _GrainOffsetScale;
  int32_t _ScratchOffsetScale;
  int32_t _Intensity;
};
struct ShaderID_NoiseEffect__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShaderID_NoiseEffect__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShaderID_NoiseEffect__VTable vtable;
};

struct ShaderID_Noise {
  struct ShaderID_Noise__Class *klass;
  struct MonitorData *monitor;
};
struct ShaderID_Noise__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ShaderID_Noise__StaticFields {
  int32_t _Params;
};
struct ShaderID_Noise__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShaderID_Noise__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShaderID_Noise__VTable vtable;
};

struct NormalizationTableUtil {
  struct NormalizationTableUtil__Class *klass;
  struct MonitorData *monitor;
};
struct NormalizationTableUtil__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct NormalizationTableUtil__StaticFields {
  struct CodePointIndexer * Prop;
  struct CodePointIndexer * Map;
  struct CodePointIndexer * Combining;
  struct CodePointIndexer * Composite;
  struct CodePointIndexer * Helper;
};
struct NormalizationTableUtil__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NormalizationTableUtil__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NormalizationTableUtil__VTable vtable;
};

struct Normalization {
  struct Normalization__Class *klass;
  struct MonitorData *monitor;
};
struct Normalization__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Normalization__StaticFields {
  uint8_t * props;
  int32_t * mappedChars;
  int16_t * charMapIndex;
  int16_t * helperIndex;
  uint16_t * mapIdxToComposite;
  uint8_t * combiningClass;
  struct Object * forLock;
  bool isReady;
};
struct Normalization__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Normalization__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Normalization__VTable vtable;
};

struct NtlmSettings {
  struct NtlmSettings__Class *klass;
  struct MonitorData *monitor;
};
struct NtlmSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct NtlmSettings__StaticFields {
  enum NtlmAuthLevel__Enum defaultAuthLevel;
};
struct NtlmSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NtlmSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NtlmSettings__VTable vtable;
};

struct IObjectReference {
  struct IObjectReference__Class *klass;
  struct MonitorData *monitor;
};
struct IObjectReference__VTable {
  VirtualInvokeData GetRealObject;
};
struct IObjectReference__StaticFields {
};
struct IObjectReference__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IObjectReference__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IObjectReference__VTable vtable;
};

struct SerializationEventsCache {
  struct SerializationEventsCache__Class *klass;
  struct MonitorData *monitor;
};
struct SerializationEventsCache__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SerializationEventsCache__StaticFields {
  struct Hashtable * cache;
};
struct SerializationEventsCache__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SerializationEventsCache__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SerializationEventsCache__VTable vtable;
};

struct IDeserializationCallback {
  struct IDeserializationCallback__Class *klass;
  struct MonitorData *monitor;
};
struct IDeserializationCallback__VTable {
  VirtualInvokeData OnDeserialization;
};
struct IDeserializationCallback__StaticFields {
};
struct IDeserializationCallback__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IDeserializationCallback__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IDeserializationCallback__VTable vtable;
};

struct ShaderID_OccludeMotionVectors {
  struct ShaderID_OccludeMotionVectors__Class *klass;
  struct MonitorData *monitor;
};
struct ShaderID_OccludeMotionVectors__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ShaderID_OccludeMotionVectors__StaticFields {
  int32_t _MainTex;
  int32_t _MotionX;
  int32_t _MotionY;
};
struct ShaderID_OccludeMotionVectors__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShaderID_OccludeMotionVectors__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShaderID_OccludeMotionVectors__VTable vtable;
};

struct OpCodeNames {
  struct OpCodeNames__Class *klass;
  struct MonitorData *monitor;
};
struct OpCodeNames__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct OpCodeNames__StaticFields {
  struct String__Array * names;
};
struct OpCodeNames__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct OpCodeNames__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct OpCodeNames__VTable vtable;
};

struct Orbs_OrbDisplayText {
  struct Orbs_OrbDisplayText__Class *klass;
  struct MonitorData *monitor;
};
struct Orbs_OrbDisplayText__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Orbs_OrbDisplayText__StaticFields {
  struct GameObject * m_orbText;
};
struct Orbs_OrbDisplayText__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Orbs_OrbDisplayText__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Orbs_OrbDisplayText__VTable vtable;
};

struct ListPool_1_UnityEngine_UIVertex_ {
  struct ListPool_1_UnityEngine_UIVertex___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) ObjectPool_1_System_Collections_Generic_List_1__5__Fields {
  struct Stack_1_List_1_UnityEngine_UIVertex_ * m_Stack;
  struct UnityAction_1_System_Collections_Generic_List_1__5 * m_ActionOnGet;
  struct UnityAction_1_System_Collections_Generic_List_1__5 * m_ActionOnRelease;
  int32_t _countAll_k__BackingField;
};
struct ObjectPool_1_System_Collections_Generic_List_1__5 {
  struct ObjectPool_1_System_Collections_Generic_List_1__5__Class *klass;
  struct MonitorData *monitor;
  struct ObjectPool_1_System_Collections_Generic_List_1__5__Fields fields;
};
struct __declspec(align(8)) Stack_1_List_1_UnityEngine_UIVertex___Fields {
  struct List_1_UnityEngine_UIVertex___Array * _array;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct Stack_1_List_1_UnityEngine_UIVertex_ {
  struct Stack_1_List_1_UnityEngine_UIVertex___Class *klass;
  struct MonitorData *monitor;
  struct Stack_1_List_1_UnityEngine_UIVertex___Fields fields;
};
struct List_1_UnityEngine_UIVertex___Array {
  struct List_1_UnityEngine_UIVertex___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct List_1_UnityEngine_UIVertex_ * vector[32];
};
struct IEnumerator_1_List_1_UnityEngine_UIVertex_ {
  struct IEnumerator_1_List_1_UnityEngine_UIVertex___Class *klass;
  struct MonitorData *monitor;
};
struct UnityAction_1_System_Collections_Generic_List_1__5__Fields {
  struct MulticastDelegate__Fields _;
};
struct UnityAction_1_System_Collections_Generic_List_1__5 {
  struct UnityAction_1_System_Collections_Generic_List_1__5__Class *klass;
  struct MonitorData *monitor;
  struct UnityAction_1_System_Collections_Generic_List_1__5__Fields fields;
};
struct IEnumerator_1_List_1_UnityEngine_UIVertex___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_List_1_UnityEngine_UIVertex___StaticFields {
};
struct IEnumerator_1_List_1_UnityEngine_UIVertex___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_List_1_UnityEngine_UIVertex___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_List_1_UnityEngine_UIVertex___VTable vtable;
};
struct Stack_1_List_1_UnityEngine_UIVertex___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData get_Count_1;
};
struct Stack_1_List_1_UnityEngine_UIVertex___StaticFields {
};
struct Stack_1_List_1_UnityEngine_UIVertex___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Stack_1_List_1_UnityEngine_UIVertex___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Stack_1_List_1_UnityEngine_UIVertex___VTable vtable;
};
struct UnityAction_1_System_Collections_Generic_List_1__5__VTable {
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
struct UnityAction_1_System_Collections_Generic_List_1__5__StaticFields {
};
struct UnityAction_1_System_Collections_Generic_List_1__5__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UnityAction_1_System_Collections_Generic_List_1__5__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UnityAction_1_System_Collections_Generic_List_1__5__VTable vtable;
};
struct ObjectPool_1_System_Collections_Generic_List_1__5__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ObjectPool_1_System_Collections_Generic_List_1__5__StaticFields {
};
struct ObjectPool_1_System_Collections_Generic_List_1__5__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ObjectPool_1_System_Collections_Generic_List_1__5__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ObjectPool_1_System_Collections_Generic_List_1__5__VTable vtable;
};
struct ListPool_1_UnityEngine_UIVertex___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ListPool_1_UnityEngine_UIVertex___StaticFields {
  struct ObjectPool_1_System_Collections_Generic_List_1__5 * s_ListPool;
  struct UnityAction_1_System_Collections_Generic_List_1__5 * __f__mg_cache0;
};
struct ListPool_1_UnityEngine_UIVertex___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ListPool_1_UnityEngine_UIVertex___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ListPool_1_UnityEngine_UIVertex___VTable vtable;
};

struct ShaderID_P3D_BrushPreview {
  struct ShaderID_P3D_BrushPreview__Class *klass;
  struct MonitorData *monitor;
};
struct ShaderID_P3D_BrushPreview__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ShaderID_P3D_BrushPreview__StaticFields {
  int32_t _WorldMatrix;
  int32_t _PaintMatrix;
  int32_t _CanvasResolution;
  int32_t _Tiling;
  int32_t _Offset;
  int32_t _Color;
  int32_t _Shape;
};
struct ShaderID_P3D_BrushPreview__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShaderID_P3D_BrushPreview__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShaderID_P3D_BrushPreview__VTable vtable;
};

struct P3D_Brush_SubtractiveBlend {
  struct P3D_Brush_SubtractiveBlend__Class *klass;
  struct MonitorData *monitor;
};
struct P3D_Brush_SubtractiveBlend__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct P3D_Brush_SubtractiveBlend__StaticFields {
  struct Material * s_material;
  int32_t s_textureParamId;
  int32_t s_screenCoordTransformParamId;
  int32_t s_brushColorParamId;
  int32_t s_mainTexParamId;
  int32_t s_splatRectParamId;
  int32_t s_brushOpacityParamId;
  struct Texture2D * s_mainTex;
};
struct P3D_Brush_SubtractiveBlend__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct P3D_Brush_SubtractiveBlend__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct P3D_Brush_SubtractiveBlend__VTable vtable;
};

struct P3D_Helper {
  struct P3D_Helper__Class *klass;
  struct MonitorData *monitor;
};
struct P3D_Helper__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct P3D_Helper__StaticFields {
  struct Material * clearMaterial;
};
struct P3D_Helper__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct P3D_Helper__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct P3D_Helper__VTable vtable;
};

struct ShaderID_P3D_TexturePreview {
  struct ShaderID_P3D_TexturePreview__Class *klass;
  struct MonitorData *monitor;
};
struct ShaderID_P3D_TexturePreview__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ShaderID_P3D_TexturePreview__StaticFields {
  int32_t _Matrix;
  int32_t _Texture;
  int32_t _Tint;
  int32_t _Base;
  int32_t _Opac;
};
struct ShaderID_P3D_TexturePreview__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShaderID_P3D_TexturePreview__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShaderID_P3D_TexturePreview__VTable vtable;
};

struct Packsize_ValvePackingSentinel_t {
  uint32_t m_u32;
  uint64_t m_u64;
  uint16_t m_u16;
  double m_d;
};
struct Packsize_ValvePackingSentinel_t__Boxed {
  struct Packsize_ValvePackingSentinel_t__Class *klass;
  struct MonitorData *monitor;
  struct Packsize_ValvePackingSentinel_t fields;
};
struct Packsize_ValvePackingSentinel_t__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Packsize_ValvePackingSentinel_t__StaticFields {
};
struct Packsize_ValvePackingSentinel_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Packsize_ValvePackingSentinel_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Packsize_ValvePackingSentinel_t__VTable vtable;
};}