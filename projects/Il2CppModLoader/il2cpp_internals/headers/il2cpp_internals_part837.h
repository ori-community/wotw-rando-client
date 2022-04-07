namespace app {
struct List_1_CatlikeCoding_TextBox_MoonIconRenderer_IconObject___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_CatlikeCoding_TextBox_MoonIconRenderer_IconObject___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_CatlikeCoding_TextBox_MoonIconRenderer_IconObject___VTable vtable;
};
struct MoonIconRenderer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Prepare;
  VirtualInvokeData Add;
  VirtualInvokeData Apply;
};
struct MoonIconRenderer__StaticFields {
};
struct MoonIconRenderer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonIconRenderer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonIconRenderer__VTable vtable;
};

struct MoonIconRenderer_c {
  struct MoonIconRenderer_c__Class *klass;
  struct MonitorData *monitor;
};
struct Predicate_1_CatlikeCoding_TextBox_MoonIconRenderer_IconObject___Fields {
  struct MulticastDelegate__Fields _;
};
struct Predicate_1_CatlikeCoding_TextBox_MoonIconRenderer_IconObject_ {
  struct Predicate_1_CatlikeCoding_TextBox_MoonIconRenderer_IconObject___Class *klass;
  struct MonitorData *monitor;
  struct Predicate_1_CatlikeCoding_TextBox_MoonIconRenderer_IconObject___Fields fields;
};
struct Predicate_1_CatlikeCoding_TextBox_MoonIconRenderer_IconObject___VTable {
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
struct Predicate_1_CatlikeCoding_TextBox_MoonIconRenderer_IconObject___StaticFields {
};
struct Predicate_1_CatlikeCoding_TextBox_MoonIconRenderer_IconObject___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Predicate_1_CatlikeCoding_TextBox_MoonIconRenderer_IconObject___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Predicate_1_CatlikeCoding_TextBox_MoonIconRenderer_IconObject___VTable vtable;
};
struct MoonIconRenderer_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MoonIconRenderer_c__StaticFields {
  struct MoonIconRenderer_c * __9;
  struct Predicate_1_UnityEngine_GameObject_ * __9__9_0;
  struct Predicate_1_CatlikeCoding_TextBox_MoonIconRenderer_IconObject_ * __9__9_1;
};
struct MoonIconRenderer_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonIconRenderer_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonIconRenderer_c__VTable vtable;
};

struct MoonTextMeshRenderer__Fields {
  struct TextRenderer__Fields _;
  int32_t chunkSize;
  struct Mesh * mesh;
  struct Vector3__Array * vertices;
  struct Color32__Array * colors;
  struct Vector4__Array * uv;
  struct Vector4__Array * uv2;
  struct List_1_UnityEngine_Vector4_ * uvMain;
  struct List_1_UnityEngine_Vector4_ * uvText;
  struct Vector3__Array * normals;
  struct Int32__Array * triangles;
  bool meshResized;
  int32_t lastRendererCharCount;
  int32_t currentVertexIndex;
  float FadeSpread;
};
struct MoonTextMeshRenderer {
  struct MoonTextMeshRenderer__Class *klass;
  struct MonitorData *monitor;
  struct MoonTextMeshRenderer__Fields fields;
};
struct MoonTextMeshRenderer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Prepare;
  VirtualInvokeData Add;
  VirtualInvokeData Apply;
};
struct MoonTextMeshRenderer__StaticFields {
  struct Vector3 hidden;
};
struct MoonTextMeshRenderer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonTextMeshRenderer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonTextMeshRenderer__VTable vtable;
};

struct TextMeshRenderer__Fields {
  struct TextRenderer__Fields _;
  int32_t chunkSize;
  struct Mesh * mesh;
  struct Vector3__Array * vertices;
  struct Color32__Array * colors;
  struct Vector2__Array * uv;
  struct Int32__Array * triangles;
  bool meshResized;
  int32_t lastRendererCharCount;
  int32_t currentVertexIndex;
};
struct TextMeshRenderer {
  struct TextMeshRenderer__Class *klass;
  struct MonitorData *monitor;
  struct TextMeshRenderer__Fields fields;
};
enum CylinderRevolveAxis__Enum : int32_t {
  CylinderRevolveAxis__Enum_X = 0,
  CylinderRevolveAxis__Enum_Y = 1,
};
struct CylinderRevolveAxis__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum CylinderRevolveAxis__Enum value;
};
struct TextMeshCylinderRenderer__Fields {
  struct TextMeshRenderer__Fields _;
  enum CylinderRevolveAxis__Enum revolveAxis;
  float radius;
  struct TextMeshCylinderSettings * settings;
  bool fetchedSettings;
};
struct TextMeshCylinderRenderer {
  struct TextMeshCylinderRenderer__Class *klass;
  struct MonitorData *monitor;
  struct TextMeshCylinderRenderer__Fields fields;
};
struct TextMeshCylinderSettings__Fields {
  struct MonoBehaviour__Fields _;
  enum CylinderRevolveAxis__Enum revolveAxis;
  float radius;
};
struct TextMeshCylinderSettings {
  struct TextMeshCylinderSettings__Class *klass;
  struct MonitorData *monitor;
  struct TextMeshCylinderSettings__Fields fields;
};
struct TextMeshRenderer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Prepare;
  VirtualInvokeData Add;
  VirtualInvokeData Apply;
};
struct TextMeshRenderer__StaticFields {
  struct Vector3 hidden;
};
struct TextMeshRenderer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TextMeshRenderer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TextMeshRenderer__VTable vtable;
};
struct TextMeshCylinderSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TextMeshCylinderSettings__StaticFields {
};
struct TextMeshCylinderSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TextMeshCylinderSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TextMeshCylinderSettings__VTable vtable;
};
struct TextMeshCylinderRenderer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Prepare;
  VirtualInvokeData Add;
  VirtualInvokeData Apply;
};
struct TextMeshCylinderRenderer__StaticFields {
};
struct TextMeshCylinderRenderer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TextMeshCylinderRenderer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TextMeshCylinderRenderer__VTable vtable;
};

enum TorusRevolveAxis__Enum : int32_t {
  TorusRevolveAxis__Enum_X = 0,
  TorusRevolveAxis__Enum_Y = 1,
};
struct TorusRevolveAxis__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum TorusRevolveAxis__Enum value;
};
struct TextMeshTorusRenderer__Fields {
  struct TextMeshRenderer__Fields _;
  enum TorusRevolveAxis__Enum revolveAxis;
  float minorRadius;
  float majorRadius;
  struct TextMeshTorusSettings * settings;
  bool fetchedSettings;
};
struct TextMeshTorusRenderer {
  struct TextMeshTorusRenderer__Class *klass;
  struct MonitorData *monitor;
  struct TextMeshTorusRenderer__Fields fields;
};
struct TextMeshTorusSettings__Fields {
  struct MonoBehaviour__Fields _;
  enum TorusRevolveAxis__Enum revolveAxis;
  float minorRadius;
  float majorRadius;
};
struct TextMeshTorusSettings {
  struct TextMeshTorusSettings__Class *klass;
  struct MonitorData *monitor;
  struct TextMeshTorusSettings__Fields fields;
};
struct TextMeshTorusSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TextMeshTorusSettings__StaticFields {
};
struct TextMeshTorusSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TextMeshTorusSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TextMeshTorusSettings__VTable vtable;
};
struct TextMeshTorusRenderer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Prepare;
  VirtualInvokeData Add;
  VirtualInvokeData Apply;
};
struct TextMeshTorusRenderer__StaticFields {
};
struct TextMeshTorusRenderer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TextMeshTorusRenderer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TextMeshTorusRenderer__VTable vtable;
};

struct TimerExample__Fields {
  struct MonoBehaviour__Fields _;
  struct TextBox * timerBox;
  struct StringBuilder * timeText;
  int32_t textPrefixLength;
};
struct TimerExample {
  struct TimerExample__Class *klass;
  struct MonitorData *monitor;
  struct TimerExample__Fields fields;
};
struct TimerExample__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TimerExample__StaticFields {
};
struct TimerExample__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TimerExample__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TimerExample__VTable vtable;
};

struct AppId_t {
  uint32_t m_AppId;
};
struct AppId_t__Boxed {
  struct AppId_t__Class *klass;
  struct MonitorData *monitor;
  struct AppId_t fields;
};
struct AppId_t__Array {
  struct AppId_t__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct AppId_t vector[32];
};
struct AppId_t__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
  VirtualInvokeData CompareTo;
};
struct AppId_t__StaticFields {
  struct AppId_t Invalid;
};
struct AppId_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AppId_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AppId_t__VTable vtable;
};

struct DepotId_t {
  uint32_t m_DepotId;
};
struct DepotId_t__Boxed {
  struct DepotId_t__Class *klass;
  struct MonitorData *monitor;
  struct DepotId_t fields;
};
struct DepotId_t__Array {
  struct DepotId_t__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct DepotId_t vector[32];
};
struct DepotId_t__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
  VirtualInvokeData CompareTo;
};
struct DepotId_t__StaticFields {
  struct DepotId_t Invalid;
};
struct DepotId_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DepotId_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DepotId_t__VTable vtable;
};

struct SteamAPICall_t {
  uint64_t m_SteamAPICall;
};
struct SteamAPICall_t__Boxed {
  struct SteamAPICall_t__Class *klass;
  struct MonitorData *monitor;
  struct SteamAPICall_t fields;
};
struct SteamAPICall_t__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
  VirtualInvokeData CompareTo;
};
struct SteamAPICall_t__StaticFields {
  struct SteamAPICall_t Invalid;
};
struct SteamAPICall_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SteamAPICall_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SteamAPICall_t__VTable vtable;
};

struct HSteamPipe {
  int32_t m_HSteamPipe;
};
struct HSteamPipe__Boxed {
  struct HSteamPipe__Class *klass;
  struct MonitorData *monitor;
  struct HSteamPipe fields;
};
struct HSteamPipe__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
  VirtualInvokeData CompareTo;
};
struct HSteamPipe__StaticFields {
};
struct HSteamPipe__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HSteamPipe__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HSteamPipe__VTable vtable;
};

struct HSteamUser {
  int32_t m_HSteamUser;
};
struct HSteamUser__Boxed {
  struct HSteamUser__Class *klass;
  struct MonitorData *monitor;
  struct HSteamUser fields;
};
struct HSteamUser__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
  VirtualInvokeData CompareTo;
};
struct HSteamUser__StaticFields {
};
struct HSteamUser__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HSteamUser__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HSteamUser__VTable vtable;
};

enum EAccountType__Enum : int32_t {
  EAccountType__Enum_k_EAccountTypeInvalid = 0,
  EAccountType__Enum_k_EAccountTypeIndividual = 1,
  EAccountType__Enum_k_EAccountTypeMultiseat = 2,
  EAccountType__Enum_k_EAccountTypeGameServer = 3,
  EAccountType__Enum_k_EAccountTypeAnonGameServer = 4,
  EAccountType__Enum_k_EAccountTypePending = 5,
  EAccountType__Enum_k_EAccountTypeContentServer = 6,
  EAccountType__Enum_k_EAccountTypeClan = 7,
  EAccountType__Enum_k_EAccountTypeChat = 8,
  EAccountType__Enum_k_EAccountTypeConsoleUser = 9,
  EAccountType__Enum_k_EAccountTypeAnonUser = 10,
  EAccountType__Enum_k_EAccountTypeMax = 11,
};
struct EAccountType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum EAccountType__Enum value;
};

struct ControllerHandle_t {
  uint64_t m_ControllerHandle;
};
struct ControllerHandle_t__Boxed {
  struct ControllerHandle_t__Class *klass;
  struct MonitorData *monitor;
  struct ControllerHandle_t fields;
};
struct ControllerHandle_t__Array {
  struct ControllerHandle_t__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ControllerHandle_t vector[32];
};
struct ControllerHandle_t__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
  VirtualInvokeData CompareTo;
};
struct ControllerHandle_t__StaticFields {
};
struct ControllerHandle_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ControllerHandle_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ControllerHandle_t__VTable vtable;
};

struct ControllerActionSetHandle_t {
  uint64_t m_ControllerActionSetHandle;
};
struct ControllerActionSetHandle_t__Boxed {
  struct ControllerActionSetHandle_t__Class *klass;
  struct MonitorData *monitor;
  struct ControllerActionSetHandle_t fields;
};
struct ControllerActionSetHandle_t__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
  VirtualInvokeData CompareTo;
};
struct ControllerActionSetHandle_t__StaticFields {
};
struct ControllerActionSetHandle_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ControllerActionSetHandle_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ControllerActionSetHandle_t__VTable vtable;
};

struct ControllerActionSetHandle_t__Array {
  struct ControllerActionSetHandle_t__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ControllerActionSetHandle_t vector[32];
};

struct ControllerDigitalActionHandle_t {
  uint64_t m_ControllerDigitalActionHandle;
};
struct ControllerDigitalActionHandle_t__Boxed {
  struct ControllerDigitalActionHandle_t__Class *klass;
  struct MonitorData *monitor;
  struct ControllerDigitalActionHandle_t fields;
};
struct ControllerDigitalActionHandle_t__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
  VirtualInvokeData CompareTo;
};
struct ControllerDigitalActionHandle_t__StaticFields {
};
struct ControllerDigitalActionHandle_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ControllerDigitalActionHandle_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ControllerDigitalActionHandle_t__VTable vtable;
};

struct ControllerDigitalActionData_t {
  uint8_t bState;
  uint8_t bActive;
};
struct ControllerDigitalActionData_t__Boxed {
  struct ControllerDigitalActionData_t__Class *klass;
  struct MonitorData *monitor;
  struct ControllerDigitalActionData_t fields;
};
struct ControllerDigitalActionData_t__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ControllerDigitalActionData_t__StaticFields {
};
struct ControllerDigitalActionData_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ControllerDigitalActionData_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ControllerDigitalActionData_t__VTable vtable;
};

enum EControllerActionOrigin__Enum : int32_t {
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_None = 0,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_A = 1,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_B = 2,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_X = 3,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_Y = 4,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_LeftBumper = 5,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_RightBumper = 6,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_LeftGrip = 7,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_RightGrip = 8,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_Start = 9,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_Back = 10,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_LeftPad_Touch = 11,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_LeftPad_Swipe = 12,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_LeftPad_Click = 13,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_LeftPad_DPadNorth = 14,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_LeftPad_DPadSouth = 15,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_LeftPad_DPadWest = 16,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_LeftPad_DPadEast = 17,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_RightPad_Touch = 18,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_RightPad_Swipe = 19,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_RightPad_Click = 20,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_RightPad_DPadNorth = 21,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_RightPad_DPadSouth = 22,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_RightPad_DPadWest = 23,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_RightPad_DPadEast = 24,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_LeftTrigger_Pull = 25,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_LeftTrigger_Click = 26,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_RightTrigger_Pull = 27,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_RightTrigger_Click = 28,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_LeftStick_Move = 29,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_LeftStick_Click = 30,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_LeftStick_DPadNorth = 31,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_LeftStick_DPadSouth = 32,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_LeftStick_DPadWest = 33,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_LeftStick_DPadEast = 34,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_Gyro_Move = 35,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_Gyro_Pitch = 36,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_Gyro_Yaw = 37,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_Gyro_Roll = 38,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_PS4_X = 39,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_PS4_Circle = 40,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_PS4_Triangle = 41,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_PS4_Square = 42,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_PS4_LeftBumper = 43,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_PS4_RightBumper = 44,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_PS4_Options = 45,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_PS4_Share = 46,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_PS4_LeftPad_Touch = 47,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_PS4_LeftPad_Swipe = 48,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_PS4_LeftPad_Click = 49,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_PS4_LeftPad_DPadNorth = 50,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_PS4_LeftPad_DPadSouth = 51,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_PS4_LeftPad_DPadWest = 52,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_PS4_LeftPad_DPadEast = 53,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_PS4_RightPad_Touch = 54,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_PS4_RightPad_Swipe = 55,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_PS4_RightPad_Click = 56,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_PS4_RightPad_DPadNorth = 57,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_PS4_RightPad_DPadSouth = 58,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_PS4_RightPad_DPadWest = 59,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_PS4_RightPad_DPadEast = 60,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_PS4_CenterPad_Touch = 61,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_PS4_CenterPad_Swipe = 62,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_PS4_CenterPad_Click = 63,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_PS4_CenterPad_DPadNorth = 64,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_PS4_CenterPad_DPadSouth = 65,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_PS4_CenterPad_DPadWest = 66,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_PS4_CenterPad_DPadEast = 67,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_PS4_LeftTrigger_Pull = 68,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_PS4_LeftTrigger_Click = 69,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_PS4_RightTrigger_Pull = 70,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_PS4_RightTrigger_Click = 71,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_PS4_LeftStick_Move = 72,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_PS4_LeftStick_Click = 73,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_PS4_LeftStick_DPadNorth = 74,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_PS4_LeftStick_DPadSouth = 75,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_PS4_LeftStick_DPadWest = 76,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_PS4_LeftStick_DPadEast = 77,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_PS4_RightStick_Move = 78,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_PS4_RightStick_Click = 79,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_PS4_RightStick_DPadNorth = 80,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_PS4_RightStick_DPadSouth = 81,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_PS4_RightStick_DPadWest = 82,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_PS4_RightStick_DPadEast = 83,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_PS4_DPad_North = 84,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_PS4_DPad_South = 85,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_PS4_DPad_West = 86,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_PS4_DPad_East = 87,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_PS4_Gyro_Move = 88,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_PS4_Gyro_Pitch = 89,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_PS4_Gyro_Yaw = 90,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_PS4_Gyro_Roll = 91,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_XBoxOne_A = 92,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_XBoxOne_B = 93,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_XBoxOne_X = 94,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_XBoxOne_Y = 95,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_XBoxOne_LeftBumper = 96,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_XBoxOne_RightBumper = 97,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_XBoxOne_Menu = 98,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_XBoxOne_View = 99,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_XBoxOne_LeftTrigger_Pull = 100,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_XBoxOne_LeftTrigger_Click = 101,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_XBoxOne_RightTrigger_Pull = 102,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_XBoxOne_RightTrigger_Click = 103,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_XBoxOne_LeftStick_Move = 104,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_XBoxOne_LeftStick_Click = 105,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_XBoxOne_LeftStick_DPadNorth = 106,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_XBoxOne_LeftStick_DPadSouth = 107,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_XBoxOne_LeftStick_DPadWest = 108,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_XBoxOne_LeftStick_DPadEast = 109,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_XBoxOne_RightStick_Move = 110,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_XBoxOne_RightStick_Click = 111,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_XBoxOne_RightStick_DPadNorth = 112,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_XBoxOne_RightStick_DPadSouth = 113,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_XBoxOne_RightStick_DPadWest = 114,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_XBoxOne_RightStick_DPadEast = 115,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_XBoxOne_DPad_North = 116,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_XBoxOne_DPad_South = 117,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_XBoxOne_DPad_West = 118,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_XBoxOne_DPad_East = 119,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_XBox360_A = 120,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_XBox360_B = 121,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_XBox360_X = 122,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_XBox360_Y = 123,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_XBox360_LeftBumper = 124,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_XBox360_RightBumper = 125,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_XBox360_Start = 126,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_XBox360_Back = 127,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_XBox360_LeftTrigger_Pull = 128,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_XBox360_LeftTrigger_Click = 129,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_XBox360_RightTrigger_Pull = 130,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_XBox360_RightTrigger_Click = 131,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_XBox360_LeftStick_Move = 132,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_XBox360_LeftStick_Click = 133,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_XBox360_LeftStick_DPadNorth = 134,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_XBox360_LeftStick_DPadSouth = 135,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_XBox360_LeftStick_DPadWest = 136,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_XBox360_LeftStick_DPadEast = 137,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_XBox360_RightStick_Move = 138,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_XBox360_RightStick_Click = 139,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_XBox360_RightStick_DPadNorth = 140,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_XBox360_RightStick_DPadSouth = 141,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_XBox360_RightStick_DPadWest = 142,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_XBox360_RightStick_DPadEast = 143,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_XBox360_DPad_North = 144,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_XBox360_DPad_South = 145,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_XBox360_DPad_West = 146,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_XBox360_DPad_East = 147,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_SteamV2_A = 148,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_SteamV2_B = 149,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_SteamV2_X = 150,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_SteamV2_Y = 151,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_SteamV2_LeftBumper = 152,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_SteamV2_RightBumper = 153,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_SteamV2_LeftGrip_Lower = 154,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_SteamV2_LeftGrip_Upper = 155,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_SteamV2_RightGrip_Lower = 156,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_SteamV2_RightGrip_Upper = 157,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_SteamV2_LeftBumper_Pressure = 158,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_SteamV2_RightBumper_Pressure = 159,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_SteamV2_LeftGrip_Pressure = 160,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_SteamV2_RightGrip_Pressure = 161,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_SteamV2_LeftGrip_Upper_Pressure = 162,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_SteamV2_RightGrip_Upper_Pressure = 163,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_SteamV2_Start = 164,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_SteamV2_Back = 165,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_SteamV2_LeftPad_Touch = 166,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_SteamV2_LeftPad_Swipe = 167,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_SteamV2_LeftPad_Click = 168,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_SteamV2_LeftPad_Pressure = 169,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_SteamV2_LeftPad_DPadNorth = 170,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_SteamV2_LeftPad_DPadSouth = 171,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_SteamV2_LeftPad_DPadWest = 172,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_SteamV2_LeftPad_DPadEast = 173,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_SteamV2_RightPad_Touch = 174,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_SteamV2_RightPad_Swipe = 175,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_SteamV2_RightPad_Click = 176,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_SteamV2_RightPad_Pressure = 177,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_SteamV2_RightPad_DPadNorth = 178,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_SteamV2_RightPad_DPadSouth = 179,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_SteamV2_RightPad_DPadWest = 180,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_SteamV2_RightPad_DPadEast = 181,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_SteamV2_LeftTrigger_Pull = 182,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_SteamV2_LeftTrigger_Click = 183,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_SteamV2_RightTrigger_Pull = 184,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_SteamV2_RightTrigger_Click = 185,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_SteamV2_LeftStick_Move = 186,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_SteamV2_LeftStick_Click = 187,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_SteamV2_LeftStick_DPadNorth = 188,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_SteamV2_LeftStick_DPadSouth = 189,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_SteamV2_LeftStick_DPadWest = 190,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_SteamV2_LeftStick_DPadEast = 191,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_SteamV2_Gyro_Move = 192,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_SteamV2_Gyro_Pitch = 193,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_SteamV2_Gyro_Yaw = 194,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_SteamV2_Gyro_Roll = 195,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_Switch_A = 196,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_Switch_B = 197,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_Switch_X = 198,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_Switch_Y = 199,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_Switch_LeftBumper = 200,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_Switch_RightBumper = 201,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_Switch_Plus = 202,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_Switch_Minus = 203,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_Switch_Capture = 204,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_Switch_LeftTrigger_Pull = 205,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_Switch_LeftTrigger_Click = 206,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_Switch_RightTrigger_Pull = 207,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_Switch_RightTrigger_Click = 208,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_Switch_LeftStick_Move = 209,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_Switch_LeftStick_Click = 210,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_Switch_LeftStick_DPadNorth = 211,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_Switch_LeftStick_DPadSouth = 212,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_Switch_LeftStick_DPadWest = 213,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_Switch_LeftStick_DPadEast = 214,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_Switch_RightStick_Move = 215,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_Switch_RightStick_Click = 216,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_Switch_RightStick_DPadNorth = 217,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_Switch_RightStick_DPadSouth = 218,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_Switch_RightStick_DPadWest = 219,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_Switch_RightStick_DPadEast = 220,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_Switch_DPad_North = 221,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_Switch_DPad_South = 222,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_Switch_DPad_West = 223,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_Switch_DPad_East = 224,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_Switch_ProGyro_Move = 225,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_Switch_ProGyro_Pitch = 226,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_Switch_ProGyro_Yaw = 227,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_Switch_ProGyro_Roll = 228,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_Switch_RightGyro_Move = 229,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_Switch_RightGyro_Pitch = 230,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_Switch_RightGyro_Yaw = 231,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_Switch_RightGyro_Roll = 232,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_Switch_LeftGyro_Move = 233,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_Switch_LeftGyro_Pitch = 234,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_Switch_LeftGyro_Yaw = 235,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_Switch_LeftGyro_Roll = 236,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_Switch_LeftGrip_Lower = 237,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_Switch_LeftGrip_Upper = 238,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_Switch_RightGrip_Lower = 239,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_Switch_RightGrip_Upper = 240,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_PS4_DPad_Move = 241,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_XBoxOne_DPad_Move = 242,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_XBox360_DPad_Move = 243,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_Switch_DPad_Move = 244,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_Count = 245,
  EControllerActionOrigin__Enum_k_EControllerActionOrigin_MaximumPossibleValue = 32767,
};
struct EControllerActionOrigin__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum EControllerActionOrigin__Enum value;
};
struct EControllerActionOrigin__Enum__Array {
  struct EControllerActionOrigin__Enum__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  enum EControllerActionOrigin__Enum vector[32];
};

struct ControllerAnalogActionHandle_t {
  uint64_t m_ControllerAnalogActionHandle;
};
struct ControllerAnalogActionHandle_t__Boxed {
  struct ControllerAnalogActionHandle_t__Class *klass;
  struct MonitorData *monitor;
  struct ControllerAnalogActionHandle_t fields;
};
struct ControllerAnalogActionHandle_t__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
  VirtualInvokeData CompareTo;
};
struct ControllerAnalogActionHandle_t__StaticFields {
};
struct ControllerAnalogActionHandle_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ControllerAnalogActionHandle_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ControllerAnalogActionHandle_t__VTable vtable;
};

enum EControllerSourceMode__Enum : int32_t {
  EControllerSourceMode__Enum_k_EControllerSourceMode_None = 0,
  EControllerSourceMode__Enum_k_EControllerSourceMode_Dpad = 1,
  EControllerSourceMode__Enum_k_EControllerSourceMode_Buttons = 2,
  EControllerSourceMode__Enum_k_EControllerSourceMode_FourButtons = 3,
  EControllerSourceMode__Enum_k_EControllerSourceMode_AbsoluteMouse = 4,
  EControllerSourceMode__Enum_k_EControllerSourceMode_RelativeMouse = 5,
  EControllerSourceMode__Enum_k_EControllerSourceMode_JoystickMove = 6,
  EControllerSourceMode__Enum_k_EControllerSourceMode_JoystickMouse = 7,
  EControllerSourceMode__Enum_k_EControllerSourceMode_JoystickCamera = 8,
  EControllerSourceMode__Enum_k_EControllerSourceMode_ScrollWheel = 9,
  EControllerSourceMode__Enum_k_EControllerSourceMode_Trigger = 10,
  EControllerSourceMode__Enum_k_EControllerSourceMode_TouchMenu = 11,
  EControllerSourceMode__Enum_k_EControllerSourceMode_MouseJoystick = 12,
  EControllerSourceMode__Enum_k_EControllerSourceMode_MouseRegion = 13,
  EControllerSourceMode__Enum_k_EControllerSourceMode_RadialMenu = 14,
  EControllerSourceMode__Enum_k_EControllerSourceMode_SingleButton = 15,
  EControllerSourceMode__Enum_k_EControllerSourceMode_Switches = 16,
};
struct EControllerSourceMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum EControllerSourceMode__Enum value;
};
struct ControllerAnalogActionData_t {
  enum EControllerSourceMode__Enum eMode;
  float x;
  float y;
  uint8_t bActive;
};
struct ControllerAnalogActionData_t__Boxed {
  struct ControllerAnalogActionData_t__Class *klass;
  struct MonitorData *monitor;
  struct ControllerAnalogActionData_t fields;
};
struct ControllerAnalogActionData_t__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ControllerAnalogActionData_t__StaticFields {
};
struct ControllerAnalogActionData_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ControllerAnalogActionData_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ControllerAnalogActionData_t__VTable vtable;
};

struct ControllerMotionData_t {
  float rotQuatX;
  float rotQuatY;
  float rotQuatZ;
  float rotQuatW;
  float posAccelX;
  float posAccelY;
  float posAccelZ;
  float rotVelX;
  float rotVelY;
  float rotVelZ;
};
struct ControllerMotionData_t__Boxed {
  struct ControllerMotionData_t__Class *klass;
  struct MonitorData *monitor;
  struct ControllerMotionData_t fields;
};
struct ControllerMotionData_t__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ControllerMotionData_t__StaticFields {
};
struct ControllerMotionData_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ControllerMotionData_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ControllerMotionData_t__VTable vtable;
};

enum ESteamControllerPad__Enum : int32_t {
  ESteamControllerPad__Enum_k_ESteamControllerPad_Left = 0,
  ESteamControllerPad__Enum_k_ESteamControllerPad_Right = 1,
};}