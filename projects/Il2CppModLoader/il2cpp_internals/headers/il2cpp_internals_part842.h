namespace app {
struct ButtonAxisInput {
  struct ButtonAxisInput__Class *klass;
  struct MonitorData *monitor;
  struct ButtonAxisInput__Fields fields;
};
struct ButtonAxisInput__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData DeclareSources;
  VirtualInvokeData Refresh;
  VirtualInvokeData GetValue;
  VirtualInvokeData DeclareSources_1;
  VirtualInvokeData AxisValue;
};
struct ButtonAxisInput__StaticFields {
};
struct ButtonAxisInput__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ButtonAxisInput__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ButtonAxisInput__VTable vtable;
};

struct __declspec(align(8)) CompoundButtonInput_c_DisplayClass8_0__Fields {
  enum KeyCode__Enum code;
};
struct CompoundButtonInput_c_DisplayClass8_0 {
  struct CompoundButtonInput_c_DisplayClass8_0__Class *klass;
  struct MonitorData *monitor;
  struct CompoundButtonInput_c_DisplayClass8_0__Fields fields;
};
struct CompoundButtonInput_c_DisplayClass8_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CompoundButtonInput_c_DisplayClass8_0__StaticFields {
};
struct CompoundButtonInput_c_DisplayClass8_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CompoundButtonInput_c_DisplayClass8_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CompoundButtonInput_c_DisplayClass8_0__VTable vtable;
};

struct CompoundButtonInput_c {
  struct CompoundButtonInput_c__Class *klass;
  struct MonitorData *monitor;
};
struct CompoundButtonInput_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CompoundButtonInput_c__StaticFields {
  struct CompoundButtonInput_c * __9;
  struct Func_2_SmartInput_IButtonInput_Boolean_ * __9__8_0;
};
struct CompoundButtonInput_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CompoundButtonInput_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CompoundButtonInput_c__VTable vtable;
};

enum XboxControllerInput_Axis__Enum : int32_t {
  XboxControllerInput_Axis__Enum_LeftStickX = 0,
  XboxControllerInput_Axis__Enum_LeftStickY = 1,
  XboxControllerInput_Axis__Enum_RightStickX = 2,
  XboxControllerInput_Axis__Enum_RightStickY = 3,
  XboxControllerInput_Axis__Enum_DpadX = 4,
  XboxControllerInput_Axis__Enum_DpadY = 5,
  XboxControllerInput_Axis__Enum_LeftTrigger = 6,
  XboxControllerInput_Axis__Enum_RightTrigger = 7,
};
struct XboxControllerInput_Axis__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum XboxControllerInput_Axis__Enum value;
};
struct ControllerAxisInput__Fields {
  struct CachedAxisInput__Fields _;
  enum XboxControllerInput_Axis__Enum m_axis;
};
struct ControllerAxisInput {
  struct ControllerAxisInput__Class *klass;
  struct MonitorData *monitor;
  struct ControllerAxisInput__Fields fields;
};
struct ControllerAxisInput__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData DeclareSources;
  VirtualInvokeData Refresh;
  VirtualInvokeData GetValue;
  VirtualInvokeData DeclareSources_1;
  VirtualInvokeData AxisValue;
};
struct ControllerAxisInput__StaticFields {
};
struct ControllerAxisInput__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ControllerAxisInput__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ControllerAxisInput__VTable vtable;
};

struct Angle {
  float m_radians;
};
struct Angle__Boxed {
  struct Angle__Class *klass;
  struct MonitorData *monitor;
  struct Angle fields;
};
struct Angle__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData ToString_1;
};
struct Angle__StaticFields {
  struct Angle zero;
  struct Angle pi;
  struct Angle twoPi;
  struct Angle piBy4;
  struct Angle piBy3;
  struct Angle piBy2;
  struct Angle pi2By3;
  struct Angle pi3By4;
  struct Angle pi5By4;
  struct Angle pi7By4;
};
struct Angle__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Angle__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Angle__VTable vtable;
};

struct FloatLUT {
  int32_t sampleCount;
  float sampleStep;
  struct Single__Array * samples;
  float timeMin;
  float timeRatio;
};
struct FloatLUT__Boxed {
  struct FloatLUT__Class *klass;
  struct MonitorData *monitor;
  struct FloatLUT fields;
};
struct FloatLUT__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FloatLUT__StaticFields {
};
struct FloatLUT__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FloatLUT__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FloatLUT__VTable vtable;
};

struct FloatLUT_SampleCoord {
  int32_t i;
  float t;
};
struct FloatLUT_SampleCoord__Boxed {
  struct FloatLUT_SampleCoord__Class *klass;
  struct MonitorData *monitor;
  struct FloatLUT_SampleCoord fields;
};
struct FloatLUT_SampleCoord__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FloatLUT_SampleCoord__StaticFields {
};
struct FloatLUT_SampleCoord__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FloatLUT_SampleCoord__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FloatLUT_SampleCoord__VTable vtable;
};

struct AngleRange {
  struct Angle min;
  struct Angle max;
};
struct AngleRange__Boxed {
  struct AngleRange__Class *klass;
  struct MonitorData *monitor;
  struct AngleRange fields;
};
struct AngleRange__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AngleRange__StaticFields {
};
struct AngleRange__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AngleRange__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AngleRange__VTable vtable;
};

struct __declspec(align(8)) RandomSeeder__Fields {
  int32_t m_seed;
  struct Random * random;
};
struct RandomSeeder {
  struct RandomSeeder__Class *klass;
  struct MonitorData *monitor;
  struct RandomSeeder__Fields fields;
};
struct RandomSeeder__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize;
  VirtualInvokeData UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize;
};
struct RandomSeeder__StaticFields {
  struct RandomSeeder * shared;
};
struct RandomSeeder__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RandomSeeder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RandomSeeder__VTable vtable;
};

struct RectExt {
  float m_XMin;
  float m_YMin;
  float m_Width;
  float m_Height;
};
struct RectExt__Boxed {
  struct RectExt__Class *klass;
  struct MonitorData *monitor;
  struct RectExt fields;
};
struct RectExt__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RectExt__StaticFields {
};
struct RectExt__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RectExt__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RectExt__VTable vtable;
};

struct InstantiateDebugIgnore__Fields {
  struct ScriptableObject__Fields _;
  struct List_1_WeakPrefab_ * IgnoreList;
  struct HashSet_1_System_String_ * m_runtimeCache;
};
struct InstantiateDebugIgnore {
  struct InstantiateDebugIgnore__Class *klass;
  struct MonitorData *monitor;
  struct InstantiateDebugIgnore__Fields fields;
};
struct InstantiateDebugIgnore__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct InstantiateDebugIgnore__StaticFields {
};
struct InstantiateDebugIgnore__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InstantiateDebugIgnore__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InstantiateDebugIgnore__VTable vtable;
};

struct __declspec(align(8)) InstantiateDebugIgnore_c_DisplayClass4_0__Fields {
  struct String * prefabName;
};
struct InstantiateDebugIgnore_c_DisplayClass4_0 {
  struct InstantiateDebugIgnore_c_DisplayClass4_0__Class *klass;
  struct MonitorData *monitor;
  struct InstantiateDebugIgnore_c_DisplayClass4_0__Fields fields;
};
struct InstantiateDebugIgnore_c_DisplayClass4_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct InstantiateDebugIgnore_c_DisplayClass4_0__StaticFields {
};
struct InstantiateDebugIgnore_c_DisplayClass4_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InstantiateDebugIgnore_c_DisplayClass4_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InstantiateDebugIgnore_c_DisplayClass4_0__VTable vtable;
};

enum InstantiateDebugUtility_InstantiationType__Enum : int32_t {
  InstantiateDebugUtility_InstantiationType__Enum_Unpooled = 0,
  InstantiateDebugUtility_InstantiationType__Enum_InsuffientPool = 1,
  InstantiateDebugUtility_InstantiationType__Enum_ServiceMultipleRequest = 2,
  InstantiateDebugUtility_InstantiationType__Enum_Unused = 3,
};
struct InstantiateDebugUtility_InstantiationType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum InstantiateDebugUtility_InstantiationType__Enum value;
};

struct InstantiateDebugUtility_InstanceInfo {
  enum InstantiateDebugUtility_InstantiationType__Enum InstantiationType;
  struct String * Name;
  float Time;
  struct String * StackTrace;
};
struct InstantiateDebugUtility_InstanceInfo__Boxed {
  struct InstantiateDebugUtility_InstanceInfo__Class *klass;
  struct MonitorData *monitor;
  struct InstantiateDebugUtility_InstanceInfo fields;
};
struct InstantiateDebugUtility_InstanceInfo__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct InstantiateDebugUtility_InstanceInfo__StaticFields {
};
struct InstantiateDebugUtility_InstanceInfo__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InstantiateDebugUtility_InstanceInfo__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InstantiateDebugUtility_InstanceInfo__VTable vtable;
};

struct InstantiateDebugUtility {
  struct InstantiateDebugUtility__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_InstantiateDebug_InstantiateDebugUtility_InstanceInfo___Fields {
  struct InstantiateDebugUtility_InstanceInfo__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_ {
  struct List_1_InstantiateDebug_InstantiateDebugUtility_InstanceInfo___Class *klass;
  struct MonitorData *monitor;
  struct List_1_InstantiateDebug_InstantiateDebugUtility_InstanceInfo___Fields fields;
};
struct InstantiateDebugUtility_InstanceInfo__Array {
  struct InstantiateDebugUtility_InstanceInfo__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct InstantiateDebugUtility_InstanceInfo vector[32];
};
struct IEnumerator_1_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_ {
  struct IEnumerator_1_InstantiateDebug_InstantiateDebugUtility_InstanceInfo___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_InstantiateDebug_InstantiateDebugUtility_InstanceInfo___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_InstantiateDebug_InstantiateDebugUtility_InstanceInfo___StaticFields {
};
struct IEnumerator_1_InstantiateDebug_InstantiateDebugUtility_InstanceInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_InstantiateDebug_InstantiateDebugUtility_InstanceInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_InstantiateDebug_InstantiateDebugUtility_InstanceInfo___VTable vtable;
};
struct List_1_InstantiateDebug_InstantiateDebugUtility_InstanceInfo___VTable {
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
struct List_1_InstantiateDebug_InstantiateDebugUtility_InstanceInfo___StaticFields {
  struct InstantiateDebugUtility_InstanceInfo__Array * _emptyArray;
};
struct List_1_InstantiateDebug_InstantiateDebugUtility_InstanceInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_InstantiateDebug_InstantiateDebugUtility_InstanceInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_InstantiateDebug_InstantiateDebugUtility_InstanceInfo___VTable vtable;
};
struct InstantiateDebugUtility__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct InstantiateDebugUtility__StaticFields {
  struct InstantiateDebugIgnore * s_objectsIgnore;
  struct List_1_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_ * s_info;
  struct HashSet_1_System_String_ * s_requestedObjectNames;
  struct HashSet_1_System_String_ * s_allPrefabNames;
  bool m_initialized;
  bool ProfileInstantiate;
};
struct InstantiateDebugUtility__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InstantiateDebugUtility__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InstantiateDebugUtility__VTable vtable;
};

struct InstantiateDebugUtility_c {
  struct InstantiateDebugUtility_c__Class *klass;
  struct MonitorData *monitor;
};
struct Func_2_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_String___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_2_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_String_ {
  struct Func_2_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_String___Class *klass;
  struct MonitorData *monitor;
  struct Func_2_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_String___Fields fields;
};
struct Func_2_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_String___VTable {
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
struct Func_2_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_String___StaticFields {
};
struct Func_2_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_String___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Func_2_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_String___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Func_2_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_String___VTable vtable;
};
struct InstantiateDebugUtility_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct InstantiateDebugUtility_c__StaticFields {
  struct InstantiateDebugUtility_c * __9;
  struct Func_2_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_String_ * __9__21_0;
};
struct InstantiateDebugUtility_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InstantiateDebugUtility_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InstantiateDebugUtility_c__VTable vtable;
};

struct __declspec(align(8)) MetaballRenderer_VectorMetaball__Fields {
  struct Vector2 _Position_k__BackingField;
  float _Radius_k__BackingField;
  float _RadiusMultipier_k__BackingField;
  struct Vector2 _Speed_k__BackingField;
  float _Lifetime_k__BackingField;
  bool _ShouldRemove_k__BackingField;
};
struct MetaballRenderer_VectorMetaball {
  struct MetaballRenderer_VectorMetaball__Class *klass;
  struct MonitorData *monitor;
  struct MetaballRenderer_VectorMetaball__Fields fields;
};
struct MetaballRenderer_VectorMetaball__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Position;
  VirtualInvokeData set_Position;
  VirtualInvokeData get_Radius;
  VirtualInvokeData set_Radius;
  VirtualInvokeData get_RadiusMultipier;
  VirtualInvokeData set_RadiusMultipier;
  VirtualInvokeData get_Speed;
  VirtualInvokeData set_Speed;
  VirtualInvokeData get_Lifetime;
  VirtualInvokeData set_Lifetime;
  VirtualInvokeData get_ShouldRemove;
  VirtualInvokeData set_ShouldRemove;
};
struct MetaballRenderer_VectorMetaball__StaticFields {
};
struct MetaballRenderer_VectorMetaball__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MetaballRenderer_VectorMetaball__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MetaballRenderer_VectorMetaball__VTable vtable;
};

struct Motion_1__Fields {
  struct MonoBehaviour__Fields _;
  float _shutterAngle;
  int32_t _sampleCount;
  float _frameBlending;
  struct Shader * _reconstructionShader;
  struct Shader * _frameBlendingShader;
  struct Motion_ReconstructionFilter * _reconstructionFilter;
  struct Motion_FrameBlendingFilter * _frameBlendingFilter;
};
struct Motion_1 {
  struct Motion_1__Class *klass;
  struct MonitorData *monitor;
  struct Motion_1__Fields fields;
};
struct __declspec(align(8)) Motion_ReconstructionFilter__Fields {
  struct Material * _material;
  enum RenderTextureFormat__Enum _vectorRTFormat;
  enum RenderTextureFormat__Enum _packedRTFormat;
};
struct Motion_ReconstructionFilter {
  struct Motion_ReconstructionFilter__Class *klass;
  struct MonitorData *monitor;
  struct Motion_ReconstructionFilter__Fields fields;
};
struct __declspec(align(8)) Motion_FrameBlendingFilter__Fields {
  bool _useCompression;
  enum RenderTextureFormat__Enum _rawTextureFormat;
  struct Material * _material;
  struct Motion_FrameBlendingFilter_Frame__Array * _frameList;
  int32_t _lastFrameCount;
};
struct Motion_FrameBlendingFilter {
  struct Motion_FrameBlendingFilter__Class *klass;
  struct MonitorData *monitor;
  struct Motion_FrameBlendingFilter__Fields fields;
};
struct Motion_FrameBlendingFilter_Frame {
  struct RenderTexture * lumaTexture;
  struct RenderTexture * chromaTexture;
  float time;
  struct RenderBuffer__Array * _mrt;
};
struct Motion_FrameBlendingFilter_Frame__Boxed {
  struct Motion_FrameBlendingFilter_Frame__Class *klass;
  struct MonitorData *monitor;
  struct Motion_FrameBlendingFilter_Frame fields;
};
struct Motion_FrameBlendingFilter_Frame__Array {
  struct Motion_FrameBlendingFilter_Frame__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Motion_FrameBlendingFilter_Frame vector[32];
};
struct Motion_ReconstructionFilter__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Motion_ReconstructionFilter__StaticFields {
};
struct Motion_ReconstructionFilter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Motion_ReconstructionFilter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Motion_ReconstructionFilter__VTable vtable;
};
struct Motion_FrameBlendingFilter_Frame__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Motion_FrameBlendingFilter_Frame__StaticFields {
};
struct Motion_FrameBlendingFilter_Frame__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Motion_FrameBlendingFilter_Frame__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Motion_FrameBlendingFilter_Frame__VTable vtable;
};
struct Motion_FrameBlendingFilter__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Motion_FrameBlendingFilter__StaticFields {
};
struct Motion_FrameBlendingFilter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Motion_FrameBlendingFilter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Motion_FrameBlendingFilter__VTable vtable;
};
struct Motion_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Motion_1__StaticFields {
};
struct Motion_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Motion_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Motion_1__VTable vtable;
};

struct LayeredSkinnedMesh__Fields {
  struct MonoBehaviour__Fields _;
  float zOffset;
  struct SkinnedMeshRenderer * m_SkinnedMeshRenderer;
  struct Bounds m_origBounds;
};
struct LayeredSkinnedMesh {
  struct LayeredSkinnedMesh__Class *klass;
  struct MonitorData *monitor;
  struct LayeredSkinnedMesh__Fields fields;
};
struct LayeredSkinnedMesh__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LayeredSkinnedMesh__StaticFields {
};
struct LayeredSkinnedMesh__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LayeredSkinnedMesh__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LayeredSkinnedMesh__VTable vtable;
};

struct OccludeMotionVectors__Fields {
  struct MonoBehaviour__Fields _;
  struct Material * occludeMaterial;
  struct Material * m_occludeMat;
  float ownMotionScale;
  struct Vector3 dbgMotionVector;
  struct Vector3 m_prevPos;
  struct Vector3 ownMotion;
};
struct OccludeMotionVectors {
  struct OccludeMotionVectors__Class *klass;
  struct MonitorData *monitor;
  struct OccludeMotionVectors__Fields fields;
};
struct OccludeMotionVectors__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct OccludeMotionVectors__StaticFields {
};
struct OccludeMotionVectors__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct OccludeMotionVectors__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct OccludeMotionVectors__VTable vtable;
};

struct ControllerVibrationSetting {
  float Left;
  float Right;
  float LeftTrigger;
  float RightTrigger;
};
struct ControllerVibrationSetting__Boxed {
  struct ControllerVibrationSetting__Class *klass;
  struct MonitorData *monitor;
  struct ControllerVibrationSetting fields;
};
struct ControllerVibrationSetting__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ControllerVibrationSetting__StaticFields {
  struct ControllerVibrationSetting Zero;
};
struct ControllerVibrationSetting__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ControllerVibrationSetting__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ControllerVibrationSetting__VTable vtable;
};

enum SwitchBoostController_HandheldGPUBoostMode__Enum : int32_t {
  SwitchBoostController_HandheldGPUBoostMode__Enum_None_307mhz = 0,
  SwitchBoostController_HandheldGPUBoostMode__Enum_Boost_384mhz = 1,
  SwitchBoostController_HandheldGPUBoostMode__Enum_BatteryDraining_460mhz = 2,
};
struct SwitchBoostController_HandheldGPUBoostMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SwitchBoostController_HandheldGPUBoostMode__Enum value;
};

struct SwitchBoostController {
  struct SwitchBoostController__Class *klass;
  struct MonitorData *monitor;
};
struct SwitchBoostController__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SwitchBoostController__StaticFields {
  int32_t HISTORY_LENGTH;
  int32_t s_historyIndex;
  struct Single__Array * s_gpuHistory;
  struct Single__Array * s_drsHistory;
  int32_t s_consecutiveSamplesBelowDRSThreshold;
  int32_t s_consecutiveSamplesAboveDRSThreshold;
  int32_t s_badSamplesRequiredToIncreaseBoost;
  int32_t s_goodSamplesRequiredToDecreaseBoost;
  float s_drsThreshold;
  enum SwitchBoostController_HandheldGPUBoostMode__Enum s_handheldPerformanceConfiguration;
  bool s_cpuBoost;
  bool s_autoGpuBoost;
};
struct SwitchBoostController__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SwitchBoostController__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SwitchBoostController__VTable vtable;
};

struct SwitchController__Fields {
  struct MonoBehaviour__Fields _;
  struct SwitchController_VibrationData * m_vibrationData;
  int64_t m_prevSize;
  float m_reloadTimer;
};
struct SwitchController {
  struct SwitchController__Class *klass;
  struct MonitorData *monitor;
  struct SwitchController__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_System_UInt32_frameworks_Switch_SwitchController_VibrationDataEntry___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_UInt32_frameworks_Switch_SwitchController_VibrationDataEntry___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_UInt32_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_UInt32_frameworks_Switch_SwitchController_VibrationDataEntry_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_UInt32_frameworks_Switch_SwitchController_VibrationDataEntry_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_UInt32_frameworks_Switch_SwitchController_VibrationDataEntry_ {
  struct Dictionary_2_System_UInt32_frameworks_Switch_SwitchController_VibrationDataEntry___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_UInt32_frameworks_Switch_SwitchController_VibrationDataEntry___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_UInt32_frameworks_Switch_SwitchController_VibrationDataEntry_ {
  int32_t hashCode;
  int32_t next;
  uint32_t key;
  struct SwitchController_VibrationDataEntry * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_UInt32_frameworks_Switch_SwitchController_VibrationDataEntry___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_UInt32_frameworks_Switch_SwitchController_VibrationDataEntry___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_UInt32_frameworks_Switch_SwitchController_VibrationDataEntry_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_UInt32_frameworks_Switch_SwitchController_VibrationDataEntry___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_UInt32_frameworks_Switch_SwitchController_VibrationDataEntry___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_UInt32_frameworks_Switch_SwitchController_VibrationDataEntry_ vector[32];
};
struct __declspec(align(8)) SwitchController_VibrationDataEntry__Fields {
  struct String * name;
  uint32_t id;
  int32_t length;
  int32_t offset;
  float modifier;
  bool enabled;
  struct Byte__Array * data;
};
struct SwitchController_VibrationDataEntry {
  struct SwitchController_VibrationDataEntry__Class *klass;
  struct MonitorData *monitor;
  struct SwitchController_VibrationDataEntry__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_UInt32_frameworks_Switch_SwitchController_VibrationDataEntry___Fields {
  struct Dictionary_2_System_UInt32_frameworks_Switch_SwitchController_VibrationDataEntry_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_UInt32_frameworks_Switch_SwitchController_VibrationDataEntry_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_UInt32_frameworks_Switch_SwitchController_VibrationDataEntry___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_UInt32_frameworks_Switch_SwitchController_VibrationDataEntry___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_UInt32_frameworks_Switch_SwitchController_VibrationDataEntry___Fields {
  struct Dictionary_2_System_UInt32_frameworks_Switch_SwitchController_VibrationDataEntry_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_UInt32_frameworks_Switch_SwitchController_VibrationDataEntry_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_UInt32_frameworks_Switch_SwitchController_VibrationDataEntry___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_UInt32_frameworks_Switch_SwitchController_VibrationDataEntry___Fields fields;
};
struct SwitchController_VibrationDataEntry__Array {
  struct SwitchController_VibrationDataEntry__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct SwitchController_VibrationDataEntry * vector[32];
};
struct IEnumerator_1_frameworks_Switch_SwitchController_VibrationDataEntry_ {
  struct IEnumerator_1_frameworks_Switch_SwitchController_VibrationDataEntry___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_frameworks_Switch_SwitchController_VibrationDataEntry_ {
  struct ICollection_1_frameworks_Switch_SwitchController_VibrationDataEntry___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_UInt32_frameworks_Switch_SwitchController_VibrationDataEntry_ {
  uint32_t key;
  struct SwitchController_VibrationDataEntry * value;
};
struct KeyValuePair_2_System_UInt32_frameworks_Switch_SwitchController_VibrationDataEntry___Boxed {
  struct KeyValuePair_2_System_UInt32_frameworks_Switch_SwitchController_VibrationDataEntry___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_UInt32_frameworks_Switch_SwitchController_VibrationDataEntry_ fields;
};
struct KeyValuePair_2_System_UInt32_frameworks_Switch_SwitchController_VibrationDataEntry___Array {
  struct KeyValuePair_2_System_UInt32_frameworks_Switch_SwitchController_VibrationDataEntry___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_UInt32_frameworks_Switch_SwitchController_VibrationDataEntry_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_UInt32_frameworks_Switch_SwitchController_VibrationDataEntry_ {
  struct IEnumerator_1_KeyValuePair_2_System_UInt32_frameworks_Switch_SwitchController_VibrationDataEntry___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_frameworks_Switch_SwitchController_VibrationDataEntry_ {
  struct IEnumerable_1_frameworks_Switch_SwitchController_VibrationDataEntry___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) SwitchController_VibrationData__Fields {
  struct SwitchController_VibrationDataEntry__Array * dataEntries;
};
struct SwitchController_VibrationData {
  struct SwitchController_VibrationData__Class *klass;
  struct MonitorData *monitor;
  struct SwitchController_VibrationData__Fields fields;
};
struct SwitchController_VibrationDataEntry__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SwitchController_VibrationDataEntry__StaticFields {
};
struct SwitchController_VibrationDataEntry__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SwitchController_VibrationDataEntry__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SwitchController_VibrationDataEntry__VTable vtable;
};
struct Dictionary_2_TKey_TValue_Entry_System_UInt32_frameworks_Switch_SwitchController_VibrationDataEntry___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_System_UInt32_frameworks_Switch_SwitchController_VibrationDataEntry___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_System_UInt32_frameworks_Switch_SwitchController_VibrationDataEntry___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_System_UInt32_frameworks_Switch_SwitchController_VibrationDataEntry___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_System_UInt32_frameworks_Switch_SwitchController_VibrationDataEntry___VTable vtable;
};}