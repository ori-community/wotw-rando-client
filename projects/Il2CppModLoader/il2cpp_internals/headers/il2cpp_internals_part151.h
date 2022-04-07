namespace app {
struct SendMouseEvents_HitInfo__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SendMouseEvents_HitInfo__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SendMouseEvents_HitInfo__VTable vtable;
};

struct PlayerConnectionInternal {
  struct PlayerConnectionInternal__Class *klass;
  struct MonitorData *monitor;
};
struct PlayerConnectionInternal__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData UnityEngine_IPlayerEditorConnectionNative_Initialize;
  VirtualInvokeData UnityEngine_IPlayerEditorConnectionNative_DisconnectAll;
  VirtualInvokeData UnityEngine_IPlayerEditorConnectionNative_SendMessage;
  VirtualInvokeData UnityEngine_IPlayerEditorConnectionNative_TrySendMessage;
  VirtualInvokeData UnityEngine_IPlayerEditorConnectionNative_Poll;
  VirtualInvokeData UnityEngine_IPlayerEditorConnectionNative_RegisterInternal;
  VirtualInvokeData UnityEngine_IPlayerEditorConnectionNative_UnregisterInternal;
  VirtualInvokeData UnityEngine_IPlayerEditorConnectionNative_IsConnected;
};
struct PlayerConnectionInternal__StaticFields {
};
struct PlayerConnectionInternal__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayerConnectionInternal__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayerConnectionInternal__VTable vtable;
};

struct PlayerLoopSystem_UpdateFunction__Fields {
  struct MulticastDelegate__Fields _;
};
struct PlayerLoopSystem_UpdateFunction {
  struct PlayerLoopSystem_UpdateFunction__Class *klass;
  struct MonitorData *monitor;
  struct PlayerLoopSystem_UpdateFunction__Fields fields;
};
struct PlayerLoopSystem_UpdateFunction__VTable {
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
struct PlayerLoopSystem_UpdateFunction__StaticFields {
};
struct PlayerLoopSystem_UpdateFunction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayerLoopSystem_UpdateFunction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayerLoopSystem_UpdateFunction__VTable vtable;
};

struct PlayerLoopSystem {
  struct Type * type;
  struct PlayerLoopSystem__Array * subSystemList;
  struct PlayerLoopSystem_UpdateFunction * updateDelegate;
  void * updateFunction;
  void * loopConditionFunction;
};
struct PlayerLoopSystem__Boxed {
  struct PlayerLoopSystem__Class *klass;
  struct MonitorData *monitor;
  struct PlayerLoopSystem fields;
};
struct PlayerLoopSystem__Array {
  struct PlayerLoopSystem__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct PlayerLoopSystem vector[32];
};
struct PlayerLoopSystem__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayerLoopSystem__StaticFields {
};
struct PlayerLoopSystem__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayerLoopSystem__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayerLoopSystem__VTable vtable;
};

struct __declspec(align(8)) List_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystemInternal___Fields {
  struct PlayerLoopSystemInternal__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystemInternal_ {
  struct List_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystemInternal___Class *klass;
  struct MonitorData *monitor;
  struct List_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystemInternal___Fields fields;
};
struct PlayerLoopSystemInternal {
  struct Type * type;
  struct PlayerLoopSystem_UpdateFunction * updateDelegate;
  void * updateFunction;
  void * loopConditionFunction;
  int32_t numSubSystems;
};
struct PlayerLoopSystemInternal__Boxed {
  struct PlayerLoopSystemInternal__Class *klass;
  struct MonitorData *monitor;
  struct PlayerLoopSystemInternal fields;
};
struct PlayerLoopSystemInternal__Array {
  struct PlayerLoopSystemInternal__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct PlayerLoopSystemInternal vector[32];
};
struct IEnumerator_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystemInternal_ {
  struct IEnumerator_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystemInternal___Class *klass;
  struct MonitorData *monitor;
};
struct PlayerLoopSystemInternal__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayerLoopSystemInternal__StaticFields {
};
struct PlayerLoopSystemInternal__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayerLoopSystemInternal__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayerLoopSystemInternal__VTable vtable;
};
struct IEnumerator_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystemInternal___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystemInternal___StaticFields {
};
struct IEnumerator_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystemInternal___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystemInternal___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystemInternal___VTable vtable;
};
struct List_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystemInternal___VTable {
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
struct List_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystemInternal___StaticFields {
  struct PlayerLoopSystemInternal__Array * _emptyArray;
};
struct List_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystemInternal___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystemInternal___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystemInternal___VTable vtable;
};

struct PlayerPrefsException__Fields {
  struct Exception__Fields _;
};
struct PlayerPrefsException {
  struct PlayerPrefsException__Class *klass;
  struct MonitorData *monitor;
  struct PlayerPrefsException__Fields fields;
};
struct PlayerPrefsException__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData get_Message;
  VirtualInvokeData get_Data;
  VirtualInvokeData get_InnerException;
  VirtualInvokeData get_StackTrace;
  VirtualInvokeData get_Source;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData GetType;
};
struct PlayerPrefsException__StaticFields {
};
struct PlayerPrefsException__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayerPrefsException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayerPrefsException__VTable vtable;
};

struct Pose {
  struct Vector3 position;
  struct Quaternion rotation;
};
struct Pose__Boxed {
  struct Pose__Class *klass;
  struct MonitorData *monitor;
  struct Pose fields;
};
struct Pose__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
};
struct Pose__StaticFields {
  struct Pose k_Identity;
};
struct Pose__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Pose__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Pose__VTable vtable;
};

struct PropertyAttribute {
  struct PropertyAttribute__Class *klass;
  struct MonitorData *monitor;
};
struct PropertyAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct PropertyAttribute__StaticFields {
};
struct PropertyAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PropertyAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PropertyAttribute__VTable vtable;
};

struct __declspec(align(8)) TooltipAttribute__Fields {
  struct String * tooltip;
};
struct TooltipAttribute {
  struct TooltipAttribute__Class *klass;
  struct MonitorData *monitor;
  struct TooltipAttribute__Fields fields;
};
struct TooltipAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct TooltipAttribute__StaticFields {
};
struct TooltipAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TooltipAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TooltipAttribute__VTable vtable;
};

struct __declspec(align(8)) SpaceAttribute__Fields {
  float height;
};
struct SpaceAttribute {
  struct SpaceAttribute__Class *klass;
  struct MonitorData *monitor;
  struct SpaceAttribute__Fields fields;
};
struct SpaceAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct SpaceAttribute__StaticFields {
};
struct SpaceAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpaceAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpaceAttribute__VTable vtable;
};

struct __declspec(align(8)) HeaderAttribute__Fields {
  struct String * header;
};
struct HeaderAttribute {
  struct HeaderAttribute__Class *klass;
  struct MonitorData *monitor;
  struct HeaderAttribute__Fields fields;
};
struct HeaderAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct HeaderAttribute__StaticFields {
};
struct HeaderAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HeaderAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HeaderAttribute__VTable vtable;
};

struct __declspec(align(8)) RangeAttribute__Fields {
  float min;
  float max;
};
struct RangeAttribute {
  struct RangeAttribute__Class *klass;
  struct MonitorData *monitor;
  struct RangeAttribute__Fields fields;
};
struct RangeAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct RangeAttribute__StaticFields {
};
struct RangeAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RangeAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RangeAttribute__VTable vtable;
};

struct __declspec(align(8)) MinAttribute__Fields {
  float min;
};
struct MinAttribute {
  struct MinAttribute__Class *klass;
  struct MonitorData *monitor;
  struct MinAttribute__Fields fields;
};
struct MinAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct MinAttribute__StaticFields {
};
struct MinAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MinAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MinAttribute__VTable vtable;
};

struct __declspec(align(8)) MultilineAttribute__Fields {
  int32_t lines;
};
struct MultilineAttribute {
  struct MultilineAttribute__Class *klass;
  struct MonitorData *monitor;
  struct MultilineAttribute__Fields fields;
};
struct MultilineAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct MultilineAttribute__StaticFields {
};
struct MultilineAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MultilineAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MultilineAttribute__VTable vtable;
};

struct __declspec(align(8)) TextAreaAttribute__Fields {
  int32_t minLines;
  int32_t maxLines;
};
struct TextAreaAttribute {
  struct TextAreaAttribute__Class *klass;
  struct MonitorData *monitor;
  struct TextAreaAttribute__Fields fields;
};
struct TextAreaAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct TextAreaAttribute__StaticFields {
};
struct TextAreaAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TextAreaAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TextAreaAttribute__VTable vtable;
};

struct __declspec(align(8)) ColorUsageAttribute__Fields {
  bool showAlpha;
  bool hdr;
  float minBrightness;
  float maxBrightness;
  float minExposureValue;
  float maxExposureValue;
};
struct ColorUsageAttribute {
  struct ColorUsageAttribute__Class *klass;
  struct MonitorData *monitor;
  struct ColorUsageAttribute__Fields fields;
};
struct ColorUsageAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct ColorUsageAttribute__StaticFields {
};
struct ColorUsageAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ColorUsageAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ColorUsageAttribute__VTable vtable;
};

struct PropertyName {
  int32_t id;
};
struct PropertyName__Boxed {
  struct PropertyName__Class *klass;
  struct MonitorData *monitor;
  struct PropertyName fields;
};
struct PropertyName__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
};
struct PropertyName__StaticFields {
};
struct PropertyName__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PropertyName__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PropertyName__VTable vtable;
};

struct ReflectionProbe__Fields {
  struct Behaviour__Fields _;
};
struct ReflectionProbe {
  struct ReflectionProbe__Class *klass;
  struct MonitorData *monitor;
  struct ReflectionProbe__Fields fields;
};
struct Action_2_UnityEngine_ReflectionProbe_UnityEngine_ReflectionProbe_ReflectionProbeEvent___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_2_UnityEngine_ReflectionProbe_UnityEngine_ReflectionProbe_ReflectionProbeEvent_ {
  struct Action_2_UnityEngine_ReflectionProbe_UnityEngine_ReflectionProbe_ReflectionProbeEvent___Class *klass;
  struct MonitorData *monitor;
  struct Action_2_UnityEngine_ReflectionProbe_UnityEngine_ReflectionProbe_ReflectionProbeEvent___Fields fields;
};
enum ReflectionProbe_ReflectionProbeEvent__Enum : int32_t {
  ReflectionProbe_ReflectionProbeEvent__Enum_ReflectionProbeAdded = 0,
  ReflectionProbe_ReflectionProbeEvent__Enum_ReflectionProbeRemoved = 1,
};
struct ReflectionProbe_ReflectionProbeEvent__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ReflectionProbe_ReflectionProbeEvent__Enum value;
};
struct Action_1_UnityEngine_Cubemap___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_UnityEngine_Cubemap_ {
  struct Action_1_UnityEngine_Cubemap___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_UnityEngine_Cubemap___Fields fields;
};
struct Action_2_UnityEngine_ReflectionProbe_UnityEngine_ReflectionProbe_ReflectionProbeEvent___VTable {
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
struct Action_2_UnityEngine_ReflectionProbe_UnityEngine_ReflectionProbe_ReflectionProbeEvent___StaticFields {
};
struct Action_2_UnityEngine_ReflectionProbe_UnityEngine_ReflectionProbe_ReflectionProbeEvent___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_2_UnityEngine_ReflectionProbe_UnityEngine_ReflectionProbe_ReflectionProbeEvent___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_2_UnityEngine_ReflectionProbe_UnityEngine_ReflectionProbe_ReflectionProbeEvent___VTable vtable;
};
struct Action_1_UnityEngine_Cubemap___VTable {
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
struct Action_1_UnityEngine_Cubemap___StaticFields {
};
struct Action_1_UnityEngine_Cubemap___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_UnityEngine_Cubemap___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_UnityEngine_Cubemap___VTable vtable;
};
struct ReflectionProbe__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ReflectionProbe__StaticFields {
  struct Action_2_UnityEngine_ReflectionProbe_UnityEngine_ReflectionProbe_ReflectionProbeEvent_ * reflectionProbeChanged;
  struct Action_1_UnityEngine_Cubemap_ * defaultReflectionSet;
};
struct ReflectionProbe__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ReflectionProbe__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ReflectionProbe__VTable vtable;
};

enum SurfaceType__Enum : int32_t {
  SurfaceType__Enum_Color = 2,
  SurfaceType__Enum_ResolveColor = 4,
  SurfaceType__Enum_Depth = 8,
  SurfaceType__Enum_DepthAndStencil = 16,
};
struct SurfaceType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SurfaceType__Enum value;
};
enum SurfaceUsage__Enum : int32_t {
  SurfaceUsage__Enum_Temp = 0,
};
struct SurfaceUsage__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SurfaceUsage__Enum value;
};
enum FastMemoryFlags__Enum : int32_t {
  FastMemoryFlags__Enum_None = 0,
  FastMemoryFlags__Enum_SpillTop = 1,
  FastMemoryFlags__Enum_SpillBottom = 2,
};
struct FastMemoryFlags__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum FastMemoryFlags__Enum value;
};

enum RenderTextureReadWrite__Enum : int32_t {
  RenderTextureReadWrite__Enum_Default = 0,
  RenderTextureReadWrite__Enum_Linear = 1,
  RenderTextureReadWrite__Enum_sRGB = 2,
};
struct RenderTextureReadWrite__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum RenderTextureReadWrite__Enum value;
};
enum RenderTextureMemoryless__Enum : int32_t {
  RenderTextureMemoryless__Enum_None = 0,
  RenderTextureMemoryless__Enum_Color = 1,
  RenderTextureMemoryless__Enum_Depth = 2,
  RenderTextureMemoryless__Enum_MSAA = 4,
};
struct RenderTextureMemoryless__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum RenderTextureMemoryless__Enum value;
};

enum ShadowSamplingMode__Enum : int32_t {
  ShadowSamplingMode__Enum_CompareDepths = 0,
  ShadowSamplingMode__Enum_RawDepth = 1,
  ShadowSamplingMode__Enum_None = 2,
};
struct ShadowSamplingMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ShadowSamplingMode__Enum value;
};
enum VRTextureUsage__Enum : int32_t {
  VRTextureUsage__Enum_None = 0,
  VRTextureUsage__Enum_OneEye = 1,
  VRTextureUsage__Enum_TwoEyes = 2,
};
struct VRTextureUsage__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum VRTextureUsage__Enum value;
};
enum RenderTextureCreationFlags__Enum : int32_t {
  RenderTextureCreationFlags__Enum_MipMap = 1,
  RenderTextureCreationFlags__Enum_AutoGenerateMips = 2,
  RenderTextureCreationFlags__Enum_SRGB = 4,
  RenderTextureCreationFlags__Enum_EyeTexture = 8,
  RenderTextureCreationFlags__Enum_EnableRandomWrite = 16,
  RenderTextureCreationFlags__Enum_CreatedFromScript = 32,
  RenderTextureCreationFlags__Enum_AllowVerticalFlip = 128,
  RenderTextureCreationFlags__Enum_NoResolvedColorSurface = 256,
  RenderTextureCreationFlags__Enum_DynamicallyScalable = 1024,
  RenderTextureCreationFlags__Enum_BindMS = 2048,
};
struct RenderTextureCreationFlags__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum RenderTextureCreationFlags__Enum value;
};
struct RenderTextureDescriptor {
  int32_t _width_k__BackingField;
  int32_t _height_k__BackingField;
  int32_t _msaaSamples_k__BackingField;
  int32_t _volumeDepth_k__BackingField;
  enum RenderTextureFormat__Enum _colorFormat_k__BackingField;
  int32_t _depthBufferBits;
  enum TextureDimension__Enum _dimension_k__BackingField;
  enum ShadowSamplingMode__Enum _shadowSamplingMode_k__BackingField;
  enum VRTextureUsage__Enum _vrUsage_k__BackingField;
  enum RenderTextureCreationFlags__Enum _flags;
  enum RenderTextureMemoryless__Enum _memoryless_k__BackingField;
};
struct RenderTextureDescriptor__Boxed {
  struct RenderTextureDescriptor__Class *klass;
  struct MonitorData *monitor;
  struct RenderTextureDescriptor fields;
};
struct RenderTextureDescriptor__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RenderTextureDescriptor__StaticFields {
  struct Int32__Array * depthFormatBits;
};
struct RenderTextureDescriptor__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RenderTextureDescriptor__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RenderTextureDescriptor__VTable vtable;
};

enum ClearFlags__Enum : int32_t {
  ClearFlags__Enum_None = 0,
  ClearFlags__Enum_Color = 1,
  ClearFlags__Enum_Depth = 2,
  ClearFlags__Enum_Stencil = 4,
  ClearFlags__Enum_Fast = 8,
  ClearFlags__Enum_DepthStencil = 6,
  ClearFlags__Enum_All = 7,
};
struct ClearFlags__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ClearFlags__Enum value;
};

struct __declspec(align(8)) Sampler__Fields {
  void * m_Ptr;
};
struct Sampler {
  struct Sampler__Class *klass;
  struct MonitorData *monitor;
  struct Sampler__Fields fields;
};
struct CustomSampler__Fields {
  struct Sampler__Fields _;
};
struct CustomSampler {
  struct CustomSampler__Class *klass;
  struct MonitorData *monitor;
  struct CustomSampler__Fields fields;
};
struct Sampler__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Sampler__StaticFields {
  struct Sampler * s_InvalidSampler;
};
struct Sampler__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Sampler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Sampler__VTable vtable;
};
struct CustomSampler__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CustomSampler__StaticFields {
  struct CustomSampler * s_InvalidCustomSampler;
};
struct CustomSampler__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CustomSampler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CustomSampler__VTable vtable;
};

struct RenderTargetIdentifier__Array {
  struct RenderTargetIdentifier__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct RenderTargetIdentifier vector[32];
};

enum RenderBufferLoadAction__Enum : int32_t {
  RenderBufferLoadAction__Enum_Load = 0,
  RenderBufferLoadAction__Enum_Clear = 1,
  RenderBufferLoadAction__Enum_DontCare = 2,
};
struct RenderBufferLoadAction__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum RenderBufferLoadAction__Enum value;
};
enum RenderBufferStoreAction__Enum : int32_t {
  RenderBufferStoreAction__Enum_Store = 0,
  RenderBufferStoreAction__Enum_Resolve = 1,
  RenderBufferStoreAction__Enum_StoreAndResolve = 2,
  RenderBufferStoreAction__Enum_DontCare = 3,
};
struct RenderBufferStoreAction__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum RenderBufferStoreAction__Enum value;
};

struct RenderBufferLoadAction__Enum__Array {
  struct RenderBufferLoadAction__Enum__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  enum RenderBufferLoadAction__Enum vector[32];
};
struct RenderBufferStoreAction__Enum__Array {
  struct RenderBufferStoreAction__Enum__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  enum RenderBufferStoreAction__Enum vector[32];
};

struct Object_1__Array {
  struct Object_1__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Object_1 * vector[32];
};

struct PreserveAttribute {
  struct PreserveAttribute__Class *klass;
  struct MonitorData *monitor;
};
enum RuntimeInitializeLoadType__Enum : int32_t {
  RuntimeInitializeLoadType__Enum_AfterSceneLoad = 0,
  RuntimeInitializeLoadType__Enum_BeforeSceneLoad = 1,
};
struct RuntimeInitializeLoadType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum RuntimeInitializeLoadType__Enum value;
};
struct __declspec(align(8)) RuntimeInitializeOnLoadMethodAttribute__Fields {
  enum RuntimeInitializeLoadType__Enum _loadType_k__BackingField;
};
struct RuntimeInitializeOnLoadMethodAttribute {
  struct RuntimeInitializeOnLoadMethodAttribute__Class *klass;
  struct MonitorData *monitor;
  struct RuntimeInitializeOnLoadMethodAttribute__Fields fields;
};
struct PreserveAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct PreserveAttribute__StaticFields {
};
struct PreserveAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PreserveAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PreserveAttribute__VTable vtable;
};
struct RuntimeInitializeOnLoadMethodAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct RuntimeInitializeOnLoadMethodAttribute__StaticFields {
};
struct RuntimeInitializeOnLoadMethodAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RuntimeInitializeOnLoadMethodAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RuntimeInitializeOnLoadMethodAttribute__VTable vtable;
};

struct ScriptableRenderContext {
  void * m_Ptr;
};
struct ScriptableRenderContext__Boxed {
  struct ScriptableRenderContext__Class *klass;
  struct MonitorData *monitor;
  struct ScriptableRenderContext fields;
};
struct ScriptableRenderContext__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ScriptableRenderContext__StaticFields {
};
struct ScriptableRenderContext__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ScriptableRenderContext__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ScriptableRenderContext__VTable vtable;
};

struct FilterResults {
  void * m_CullResults;
};}