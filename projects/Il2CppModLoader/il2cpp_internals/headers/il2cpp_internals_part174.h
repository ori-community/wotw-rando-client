namespace app {
struct NintendoSaveFileSystemAsync__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct NintendoSaveFileSystemAsync__StaticFields {
  struct Queue_1_NSAsyncQueueInfo_ * m_queue;
  bool ShouldUseAsyncQueue;
  bool ShouldUseAsyncQueueForCopy;
  struct Object * WritingLock;
  int32_t preferredCore;
  int32_t coreMask;
  int32_t s_lastPreferredCore;
  int32_t s_lastCoreMask;
  bool ShouldPrintLockDebugMessages;
};
struct NintendoSaveFileSystemAsync__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NintendoSaveFileSystemAsync__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NintendoSaveFileSystemAsync__VTable vtable;
};

struct __declspec(align(8)) NintendoSwitch__Fields {
  bool IsDoneInitializing;
  bool IsDoneHostInitializing;
};
struct NintendoSwitch {
  struct NintendoSwitch__Class *klass;
  struct MonitorData *monitor;
  struct NintendoSwitch__Fields fields;
};
struct NintendoSwitch__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct NintendoSwitch__StaticFields {
  struct NintendoSwitch * _Instance_k__BackingField;
  bool _InvalidMountSetup_k__BackingField;
};
struct NintendoSwitch__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NintendoSwitch__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NintendoSwitch__VTable vtable;
};

struct NintendoSwitchFile {
  struct NintendoSwitchFile__Class *klass;
  struct MonitorData *monitor;
};
struct NintendoSwitchFile__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct NintendoSwitchFile__StaticFields {
};
struct NintendoSwitchFile__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NintendoSwitchFile__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NintendoSwitchFile__VTable vtable;
};

struct NintendoSwitchDirectory {
  struct NintendoSwitchDirectory__Class *klass;
  struct MonitorData *monitor;
};
struct NintendoSwitchDirectory__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct NintendoSwitchDirectory__StaticFields {
};
struct NintendoSwitchDirectory__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NintendoSwitchDirectory__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NintendoSwitchDirectory__VTable vtable;
};

struct __declspec(align(8)) CatmullSpline__Fields {
  int32_t Subdivisions;
  struct List_1_UnityEngine_Vector3_ * m_catmullPoints;
};
struct CatmullSpline {
  struct CatmullSpline__Class *klass;
  struct MonitorData *monitor;
  struct CatmullSpline__Fields fields;
};
struct CatmullSpline__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CatmullSpline__StaticFields {
};
struct CatmullSpline__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CatmullSpline__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CatmullSpline__VTable vtable;
};

struct MoonTrailStressTester__Fields {
  struct MonoBehaviour__Fields _;
  struct GameObject * StressTestTrailPrefabTarget;
  int32_t AmountTarget;
  float Speed;
  struct GameObject * StressTestTrailPrefabSpline;
  int32_t AmountSpline;
  float Radius;
  struct Transform * m_transform;
};
struct MoonTrailStressTester {
  struct MoonTrailStressTester__Class *klass;
  struct MonitorData *monitor;
  struct MoonTrailStressTester__Fields fields;
};
struct MoonTrailStressTester__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MoonTrailStressTester__StaticFields {
};
struct MoonTrailStressTester__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonTrailStressTester__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonTrailStressTester__VTable vtable;
};

struct TransformProvider__Fields {
  struct MonoBehaviour__Fields _;
  struct MoonReference_1_UnityEngine_Transform_ * Transform;
};
struct TransformProvider {
  struct TransformProvider__Class *klass;
  struct MonitorData *monitor;
  struct TransformProvider__Fields fields;
};
struct __declspec(align(8)) MoonReference_1_UnityEngine_Transform___Fields {
  struct MoonTypeData m_data;
  bool m_isInitialized;
  bool m_isStatic;
  bool m_canResolve;
  struct IMoonTypeResolver * m_resolver;
  struct IMoonType_1_UnityEngine_Transform_ * m_cachedProxyType;
  struct Transform * m_volatileValue;
};
struct MoonReference_1_UnityEngine_Transform_ {
  struct MoonReference_1_UnityEngine_Transform___Class *klass;
  struct MonitorData *monitor;
  struct MoonReference_1_UnityEngine_Transform___Fields fields;
};
struct IMoonType_1_UnityEngine_Transform_ {
  struct IMoonType_1_UnityEngine_Transform___Class *klass;
  struct MonitorData *monitor;
};
struct IMoonType_1_UnityEngine_Transform___VTable {
  VirtualInvokeData Resolve;
  VirtualInvokeData SafeResolve;
  VirtualInvokeData TryResolve;
};
struct IMoonType_1_UnityEngine_Transform___StaticFields {
};
struct IMoonType_1_UnityEngine_Transform___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IMoonType_1_UnityEngine_Transform___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IMoonType_1_UnityEngine_Transform___VTable vtable;
};
struct MoonReference_1_UnityEngine_Transform___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Resolve;
  VirtualInvokeData SafeResolve;
  VirtualInvokeData TryResolve;
  VirtualInvokeData get_IsStaticValue;
  VirtualInvokeData GetTypeData;
  VirtualInvokeData CanResolve;
  VirtualInvokeData get_IsCrossSceneReference;
  VirtualInvokeData OnBeforeSerialize;
  VirtualInvokeData OnAfterDeserialize;
};
struct MoonReference_1_UnityEngine_Transform___StaticFields {
};
struct MoonReference_1_UnityEngine_Transform___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonReference_1_UnityEngine_Transform___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonReference_1_UnityEngine_Transform___VTable vtable;
};
struct TransformProvider__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TransformProvider__StaticFields {
};
struct TransformProvider__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TransformProvider__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TransformProvider__VTable vtable;
};

enum CompareMethod__Enum : int32_t {
  CompareMethod__Enum_EqualTo = 0,
  CompareMethod__Enum_GreaterThan = 1,
  CompareMethod__Enum_LessThan = 2,
  CompareMethod__Enum_GreaterOrEqualTo = 3,
  CompareMethod__Enum_LessOrEqualTo = 4,
};
struct CompareMethod__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum CompareMethod__Enum value;
};

enum OperationMethod__Enum : int32_t {
  OperationMethod__Enum_Set = 0,
  OperationMethod__Enum_Add = 1,
  OperationMethod__Enum_Subtract = 2,
  OperationMethod__Enum_Multiply = 3,
  OperationMethod__Enum_Divide = 4,
};
struct OperationMethod__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum OperationMethod__Enum value;
};

struct __declspec(align(8)) GameTimeExtensions_ExecuteAfterAsync_d_1__Fields {
  int32_t __1__state;
  struct Object * __2__current;
  float time;
  struct Action * action;
};
struct GameTimeExtensions_ExecuteAfterAsync_d_1 {
  struct GameTimeExtensions_ExecuteAfterAsync_d_1__Class *klass;
  struct MonitorData *monitor;
  struct GameTimeExtensions_ExecuteAfterAsync_d_1__Fields fields;
};
struct GameTimeExtensions_ExecuteAfterAsync_d_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_Generic_IEnumerator_System_Object__get_Current;
  VirtualInvokeData System_IDisposable_Dispose;
  VirtualInvokeData MoveNext;
  VirtualInvokeData System_Collections_IEnumerator_get_Current;
  VirtualInvokeData System_Collections_IEnumerator_Reset;
};
struct GameTimeExtensions_ExecuteAfterAsync_d_1__StaticFields {
};
struct GameTimeExtensions_ExecuteAfterAsync_d_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GameTimeExtensions_ExecuteAfterAsync_d_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GameTimeExtensions_ExecuteAfterAsync_d_1__VTable vtable;
};

struct __declspec(align(8)) GUIContext__Fields {
  struct Color m_backgroundColor;
  struct Color m_color;
  struct Color m_contentColor;
  int32_t m_depth;
  struct Matrix4x4 m_matrix;
  struct GUISkin * m_skin;
  struct String * m_tooltip;
  bool m_enabled;
};
struct GUIContext {
  struct GUIContext__Class *klass;
  struct MonitorData *monitor;
  struct GUIContext__Fields fields;
};
struct GUIContext__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
};
struct GUIContext__StaticFields {
};
struct GUIContext__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GUIContext__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GUIContext__VTable vtable;
};

struct GUIClipContext {
};
struct GUIClipContext__Boxed {
  struct GUIClipContext__Class *klass;
  struct MonitorData *monitor;
  struct GUIClipContext fields;
};
struct GUIClipContext__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
};
struct GUIClipContext__StaticFields {
};
struct GUIClipContext__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GUIClipContext__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GUIClipContext__VTable vtable;
};

struct GUIGroup {
};
struct GUIGroup__Boxed {
  struct GUIGroup__Class *klass;
  struct MonitorData *monitor;
  struct GUIGroup fields;
};
struct GUIGroup__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
};
struct GUIGroup__StaticFields {
};
struct GUIGroup__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GUIGroup__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GUIGroup__VTable vtable;
};

struct GUIContextNonAlloc {
  struct Color m_backgroundColor;
  struct Color m_color;
  struct Color m_contentColor;
  int32_t m_depth;
  struct Matrix4x4 m_matrix;
  struct GUISkin * m_skin;
  struct String * m_tooltip;
  bool m_enabled;
};
struct GUIContextNonAlloc__Boxed {
  struct GUIContextNonAlloc__Class *klass;
  struct MonitorData *monitor;
  struct GUIContextNonAlloc fields;
};
struct GUIContextNonAlloc__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
};
struct GUIContextNonAlloc__StaticFields {
};
struct GUIContextNonAlloc__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GUIContextNonAlloc__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GUIContextNonAlloc__VTable vtable;
};

struct __declspec(align(8)) RectExtensions_c_DisplayClass75_0__Fields {
  float x;
  float y;
};
struct RectExtensions_c_DisplayClass75_0 {
  struct RectExtensions_c_DisplayClass75_0__Class *klass;
  struct MonitorData *monitor;
  struct RectExtensions_c_DisplayClass75_0__Fields fields;
};
struct RectExtensions_c_DisplayClass75_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RectExtensions_c_DisplayClass75_0__StaticFields {
};
struct RectExtensions_c_DisplayClass75_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RectExtensions_c_DisplayClass75_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RectExtensions_c_DisplayClass75_0__VTable vtable;
};

struct RectExtensions_c {
  struct RectExtensions_c__Class *klass;
  struct MonitorData *monitor;
};
struct Func_2_UnityEngine_Rect_Single___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_2_UnityEngine_Rect_Single_ {
  struct Func_2_UnityEngine_Rect_Single___Class *klass;
  struct MonitorData *monitor;
  struct Func_2_UnityEngine_Rect_Single___Fields fields;
};
struct Func_2_UnityEngine_Rect_Single___VTable {
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
struct Func_2_UnityEngine_Rect_Single___StaticFields {
};
struct Func_2_UnityEngine_Rect_Single___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Func_2_UnityEngine_Rect_Single___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Func_2_UnityEngine_Rect_Single___VTable vtable;
};
struct RectExtensions_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RectExtensions_c__StaticFields {
  struct RectExtensions_c * __9;
  struct Func_2_UnityEngine_Rect_Single_ * __9__75_0;
  struct Func_2_UnityEngine_Rect_Single_ * __9__75_1;
};
struct RectExtensions_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RectExtensions_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RectExtensions_c__VTable vtable;
};

struct __declspec(align(8)) BitMaskAttribute__Fields {
  struct Type * propType;
};
struct BitMaskAttribute {
  struct BitMaskAttribute__Class *klass;
  struct MonitorData *monitor;
  struct BitMaskAttribute__Fields fields;
};
struct BitMaskAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct BitMaskAttribute__StaticFields {
};
struct BitMaskAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BitMaskAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BitMaskAttribute__VTable vtable;
};

struct __declspec(align(8)) LehmerRng__Fields {
  uint32_t m_x;
};
struct LehmerRng {
  struct LehmerRng__Class *klass;
  struct MonitorData *monitor;
  struct LehmerRng__Fields fields;
};
struct LehmerRng__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetNext;
  VirtualInvokeData GetNextFloat;
  VirtualInvokeData GetInRange;
  VirtualInvokeData GetFloatInRange;
};
struct LehmerRng__StaticFields {
};
struct LehmerRng__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LehmerRng__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LehmerRng__VTable vtable;
};

struct __declspec(align(8)) FilteredRandomRange__Fields {
  uint32_t m_min;
  uint32_t m_max;
  uint32_t m_repeatingRunLength;
  struct IRng * m_rng;
  struct UInt32__Array * m_history;
};
struct FilteredRandomRange {
  struct FilteredRandomRange__Class *klass;
  struct MonitorData *monitor;
  struct FilteredRandomRange__Fields fields;
};
struct IRng {
  struct IRng__Class *klass;
  struct MonitorData *monitor;
};
struct IRng__VTable {
  VirtualInvokeData GetNext;
  VirtualInvokeData GetNextFloat;
  VirtualInvokeData GetInRange;
  VirtualInvokeData GetFloatInRange;
};
struct IRng__StaticFields {
};
struct IRng__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IRng__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IRng__VTable vtable;
};
struct FilteredRandomRange__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FilteredRandomRange__StaticFields {
};
struct FilteredRandomRange__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FilteredRandomRange__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FilteredRandomRange__VTable vtable;
};

struct ReflectionExtensions_c {
  struct ReflectionExtensions_c__Class *klass;
  struct MonitorData *monitor;
};
struct ReflectionExtensions_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ReflectionExtensions_c__StaticFields {
  struct ReflectionExtensions_c * __9;
  struct Func_2_Type_Boolean_ * __9__0_0;
};
struct ReflectionExtensions_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ReflectionExtensions_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ReflectionExtensions_c__VTable vtable;
};

struct CollisionEventHandler__Fields {
  struct MonoBehaviour__Fields _;
  struct Action_1_UnityEngine_Collision_ * CollisionEnterEvent;
  struct Action_1_UnityEngine_Collision_ * CollisionStayEvent;
  struct Action_1_UnityEngine_Collision_ * CollisionExitEvent;
};
struct CollisionEventHandler {
  struct CollisionEventHandler__Class *klass;
  struct MonitorData *monitor;
  struct CollisionEventHandler__Fields fields;
};
struct Action_1_UnityEngine_Collision___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_UnityEngine_Collision_ {
  struct Action_1_UnityEngine_Collision___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_UnityEngine_Collision___Fields fields;
};
struct Action_1_UnityEngine_Collision___VTable {
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
struct Action_1_UnityEngine_Collision___StaticFields {
};
struct Action_1_UnityEngine_Collision___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_UnityEngine_Collision___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_UnityEngine_Collision___VTable vtable;
};
struct CollisionEventHandler__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CollisionEventHandler__StaticFields {
};
struct CollisionEventHandler__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CollisionEventHandler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CollisionEventHandler__VTable vtable;
};

struct CollisionEventHandler_c {
  struct CollisionEventHandler_c__Class *klass;
  struct MonitorData *monitor;
};
struct CollisionEventHandler_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CollisionEventHandler_c__StaticFields {
  struct CollisionEventHandler_c * __9;
  struct Action_1_UnityEngine_Collision_ * __9__6_0;
  struct Action_1_UnityEngine_Collision_ * __9__6_1;
  struct Action_1_UnityEngine_Collision_ * __9__6_2;
};
struct CollisionEventHandler_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CollisionEventHandler_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CollisionEventHandler_c__VTable vtable;
};

struct MoonTrail_MoonTrailParticle {
  struct Vector3 Position;
  struct Vector3 Normal;
  struct Vector3 Binormal;
  struct Vector3 Tangent;
  struct Color Color;
  float Lifetime;
  float OriginalLifetime;
  float Thickness;
  float InitialThickness;
  float TempLenghtFromStart;
};
struct MoonTrail_MoonTrailParticle__Boxed {
  struct MoonTrail_MoonTrailParticle__Class *klass;
  struct MonitorData *monitor;
  struct MoonTrail_MoonTrailParticle fields;
};
struct MoonTrail_MoonTrailParticle__Array {
  struct MoonTrail_MoonTrailParticle__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MoonTrail_MoonTrailParticle vector[32];
};
struct MoonTrail_MoonTrailParticle__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MoonTrail_MoonTrailParticle__StaticFields {
};
struct MoonTrail_MoonTrailParticle__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonTrail_MoonTrailParticle__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonTrail_MoonTrailParticle__VTable vtable;
};

enum MoonTrail_TwoTargetsFolowMode__Enum : int32_t {
  MoonTrail_TwoTargetsFolowMode__Enum_DistanceIsThickness = 0,
  MoonTrail_TwoTargetsFolowMode__Enum_TightFollow = 1,
};
struct MoonTrail_TwoTargetsFolowMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MoonTrail_TwoTargetsFolowMode__Enum value;
};
enum MoonTrail_UVMode__Enum : int32_t {
  MoonTrail_UVMode__Enum_Default = 0,
  MoonTrail_UVMode__Enum_HighQuality = 1,
};
struct MoonTrail_UVMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MoonTrail_UVMode__Enum value;
};
struct MoonTrail__Fields {
  struct MonoBehaviour__Fields _;
  struct MoonReference_1_UnityEngine_Transform_ * Target;
  struct MoonReference_1_UnityEngine_Transform_ * SecondaryTarget;
  enum MoonTrail_TwoTargetsFolowMode__Enum TwoTargetsMode;
  int32_t TightFollowTangentSmoothness;
  enum MoonTrail_UVMode__Enum UVMappingMode;
  int32_t AmountOfDynamicParticles;
  bool Emit;
  float InitialThickness;
  struct Color InitialColor;
  bool EmitAtStart;
  float Resolution;
  float Lifetime;
  float NormalInterpolationSpeed;
  bool UseThicknessOverTime;
  struct AnimationCurve * ThicknessOverTime;
  bool UseColorOverTime;
  struct Gradient * AlphaOverTime;
  struct Gradient * AuxiliaryAOverTime;
  struct Gradient * AuxiliaryBOverTime;
  bool FlattenVerticesForUvInterpolation;
  struct MonoBehaviour * BakedPathProviderSourceFirstTarget;
  struct MonoBehaviour * BakedPathProviderSourceSecondTarget;
  float PathSampleInterval;
  bool Force2DNormals;
  bool FollowTransform;
  bool Debug;
  bool TimelineEditorEmit;
  float m_splineBendAmount;
  float m_splineBendSpeed;
  struct CatmullSpline * m_spline;
  float m_minDistanceSqr;
  float m_minDistance;
  struct Vector3__Array * m_controlPoints;
  bool m_hasControlPoints;
  struct Vector3 m_previusTargetPosition;
  struct Vector3 m_targetDelta;
  struct Vector3 m_targetSpeed;
  struct Vector3 m_lastNonZeroDelta;
  struct Vector3 m_lastEmissionTargetPosition;
  struct Vector3 m_originalTransformPosition;
  struct Vector3 m_transformDelta;
  bool m_wasEmiting;
  float m_randomOffset;
  struct MoonTrail_MoonTrailParticle__Array * m_trailParticlesBuffer;
  int32_t m_trailParticlesBufferIdx0;
  int32_t m_trailParticlesBufferIdx1;
  struct Color__Array * m_rasterizedGradients;
  bool m_useRasterizedGradients;
  struct Vector3 m_lastControllPointOffset;
  float m_uvStep;
  float m_trailLenght;
  struct TrailPathProvider * m_firstTargetPathProvider;
  struct TrailPathProvider * m_secondTargetPathProvider;
  float m_pathProviderTimer;
  struct List_1_Moon_MoonTrail_SimulationFrameData_ * m_simulationFrames;
  int32_t m_simulationFrameIndex;
  struct Renderer * m_renderer;
  struct MeshFilter * m_meshFilter;
  struct MaterialPropertyBlock * m_materialPropertyBlock;
  struct Bounds m_localRotationInvariantBounds;
  struct IMaterialPropertyBlockProvider * m_materialPropertyBlockProvider;
  struct Bounds _Bounds_k__BackingField;
  bool _IsSuspended_k__BackingField;
  int32_t _FramesToSkip_k__BackingField;
  struct Camera * m_camera;
};
struct MoonTrail {
  struct MoonTrail__Class *klass;
  struct MonitorData *monitor;
  struct MoonTrail__Fields fields;
};
struct __declspec(align(8)) Stack_1_Moon_MoonTrail_MoonTrailParticle___Fields {
  struct MoonTrail_MoonTrailParticle__Array__Array * _array;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct Stack_1_Moon_MoonTrail_MoonTrailParticle_ {
  struct Stack_1_Moon_MoonTrail_MoonTrailParticle___Class *klass;
  struct MonitorData *monitor;
  struct Stack_1_Moon_MoonTrail_MoonTrailParticle___Fields fields;
};
struct MoonTrail_MoonTrailParticle__Array__Array {
  struct MoonTrail_MoonTrailParticle__Array__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MoonTrail_MoonTrailParticle__Array * vector[32];
};
struct IEnumerator_1_Moon_MoonTrail_MoonTrailParticle_ {
  struct IEnumerator_1_Moon_MoonTrail_MoonTrailParticle___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_Moon_MoonTrail___Fields {
  struct MoonTrail__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_MoonTrail_ {
  struct List_1_Moon_MoonTrail___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_MoonTrail___Fields fields;
};
struct MoonTrail__Array {
  struct MoonTrail__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MoonTrail * vector[32];
};
struct IEnumerator_1_Moon_MoonTrail_ {
  struct IEnumerator_1_Moon_MoonTrail___Class *klass;
  struct MonitorData *monitor;
};
struct TrailPathProvider {
  struct TrailPathProvider__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_Moon_MoonTrail_SimulationFrameData___Fields {
  struct MoonTrail_SimulationFrameData__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_MoonTrail_SimulationFrameData_ {
  struct List_1_Moon_MoonTrail_SimulationFrameData___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_MoonTrail_SimulationFrameData___Fields fields;
};
struct MoonTrail_SimulationFrameData {
  struct Vector3 TargetALocalPosition;
  struct Vector3 TargetBLocalPosition;
  float DeltaTime;
};
struct MoonTrail_SimulationFrameData__Boxed {
  struct MoonTrail_SimulationFrameData__Class *klass;
  struct MonitorData *monitor;
  struct MoonTrail_SimulationFrameData fields;
};
struct MoonTrail_SimulationFrameData__Array {
  struct MoonTrail_SimulationFrameData__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MoonTrail_SimulationFrameData vector[32];
};
struct IEnumerator_1_Moon_MoonTrail_SimulationFrameData_ {
  struct IEnumerator_1_Moon_MoonTrail_SimulationFrameData___Class *klass;
  struct MonitorData *monitor;
};
struct IMaterialPropertyBlockProvider {
  struct IMaterialPropertyBlockProvider__Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_Moon_MoonTrail_MoonTrailParticle___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Moon_MoonTrail_MoonTrailParticle___StaticFields {
};
struct IEnumerator_1_Moon_MoonTrail_MoonTrailParticle___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Moon_MoonTrail_MoonTrailParticle___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Moon_MoonTrail_MoonTrailParticle___VTable vtable;
};
struct Stack_1_Moon_MoonTrail_MoonTrailParticle___VTable {
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
struct Stack_1_Moon_MoonTrail_MoonTrailParticle___StaticFields {
};
struct Stack_1_Moon_MoonTrail_MoonTrailParticle___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Stack_1_Moon_MoonTrail_MoonTrailParticle___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Stack_1_Moon_MoonTrail_MoonTrailParticle___VTable vtable;
};
struct IEnumerator_1_Moon_MoonTrail___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Moon_MoonTrail___StaticFields {
};
struct IEnumerator_1_Moon_MoonTrail___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Moon_MoonTrail___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Moon_MoonTrail___VTable vtable;
};
struct List_1_Moon_MoonTrail___VTable {
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