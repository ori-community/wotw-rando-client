namespace app {
struct TileFlags__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum TileFlags__Enum value;
};
enum Tile_ColliderType__Enum : int32_t {
  Tile_ColliderType__Enum_None = 0,
  Tile_ColliderType__Enum_Sprite = 1,
  Tile_ColliderType__Enum_Grid = 2,
};
struct Tile_ColliderType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Tile_ColliderType__Enum value;
};
struct Tile__Fields {
  struct TileBase__Fields _;
  struct Sprite * m_Sprite;
  struct Color m_Color;
  struct Matrix4x4 m_Transform;
  struct GameObject * m_InstancedGameObject;
  enum TileFlags__Enum m_Flags;
  enum Tile_ColliderType__Enum m_ColliderType;
};
struct Tile {
  struct Tile__Class *klass;
  struct MonitorData *monitor;
  struct Tile__Fields fields;
};
struct TileData {
  struct Sprite * m_Sprite;
  struct Color m_Color;
  struct Matrix4x4 m_Transform;
  struct GameObject * m_GameObject;
  enum TileFlags__Enum m_Flags;
  enum Tile_ColliderType__Enum m_ColliderType;
};
struct TileData__Boxed {
  struct TileData__Class *klass;
  struct MonitorData *monitor;
  struct TileData fields;
};
struct TileAnimationData {
  struct Sprite__Array * m_AnimatedSprites;
  float m_AnimationSpeed;
  float m_AnimationStartTime;
};
struct TileAnimationData__Boxed {
  struct TileAnimationData__Class *klass;
  struct MonitorData *monitor;
  struct TileAnimationData fields;
};
struct Sprite__Array {
  struct Sprite__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Sprite * vector[32];
};
struct TileData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TileData__StaticFields {
};
struct TileData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TileData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TileData__VTable vtable;
};
struct TileAnimationData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TileAnimationData__StaticFields {
};
struct TileAnimationData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TileAnimationData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TileAnimationData__VTable vtable;
};
struct TileBase__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData RefreshTile;
  VirtualInvokeData GetTileData;
  VirtualInvokeData GetTileAnimationData;
  VirtualInvokeData StartUp;
};
struct TileBase__StaticFields {
};
struct TileBase__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TileBase__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TileBase__VTable vtable;
};
struct Tile__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData RefreshTile;
  VirtualInvokeData GetTileData;
  VirtualInvokeData GetTileAnimationData;
  VirtualInvokeData StartUp;
};
struct Tile__StaticFields {
};
struct Tile__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Tile__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Tile__VTable vtable;
};

struct BaselineFunction__Fields {
  struct MulticastDelegate__Fields _;
};
struct BaselineFunction {
  struct BaselineFunction__Class *klass;
  struct MonitorData *monitor;
  struct BaselineFunction__Fields fields;
};
struct __declspec(align(8)) YogaNode__Fields {
  void * _ygNode;
  struct List_1_UnityEngine_Yoga_YogaNode_ * _children;
  struct MeasureFunction * _measureFunction;
  struct BaselineFunction * _baselineFunction;
};
struct YogaNode {
  struct YogaNode__Class *klass;
  struct MonitorData *monitor;
  struct YogaNode__Fields fields;
};
struct __declspec(align(8)) List_1_UnityEngine_Yoga_YogaNode___Fields {
  struct YogaNode__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_UnityEngine_Yoga_YogaNode_ {
  struct List_1_UnityEngine_Yoga_YogaNode___Class *klass;
  struct MonitorData *monitor;
  struct List_1_UnityEngine_Yoga_YogaNode___Fields fields;
};
struct YogaNode__Array {
  struct YogaNode__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct YogaNode * vector[32];
};
struct IEnumerator_1_UnityEngine_Yoga_YogaNode_ {
  struct IEnumerator_1_UnityEngine_Yoga_YogaNode___Class *klass;
  struct MonitorData *monitor;
};
struct MeasureFunction__Fields {
  struct MulticastDelegate__Fields _;
};
struct MeasureFunction {
  struct MeasureFunction__Class *klass;
  struct MonitorData *monitor;
  struct MeasureFunction__Fields fields;
};
struct YogaSize {
  float width;
  float height;
};
struct YogaSize__Boxed {
  struct YogaSize__Class *klass;
  struct MonitorData *monitor;
  struct YogaSize fields;
};
enum YogaMeasureMode__Enum : int32_t {
  YogaMeasureMode__Enum_Undefined = 0,
  YogaMeasureMode__Enum_Exactly = 1,
  YogaMeasureMode__Enum_AtMost = 2,
};
struct YogaMeasureMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum YogaMeasureMode__Enum value;
};
struct IEnumerator_1_UnityEngine_Yoga_YogaNode___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_UnityEngine_Yoga_YogaNode___StaticFields {
};
struct IEnumerator_1_UnityEngine_Yoga_YogaNode___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_UnityEngine_Yoga_YogaNode___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_UnityEngine_Yoga_YogaNode___VTable vtable;
};
struct List_1_UnityEngine_Yoga_YogaNode___VTable {
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
struct List_1_UnityEngine_Yoga_YogaNode___StaticFields {
  struct YogaNode__Array * _emptyArray;
};
struct List_1_UnityEngine_Yoga_YogaNode___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_UnityEngine_Yoga_YogaNode___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_UnityEngine_Yoga_YogaNode___VTable vtable;
};
struct YogaSize__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct YogaSize__StaticFields {
};
struct YogaSize__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct YogaSize__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct YogaSize__VTable vtable;
};
struct MeasureFunction__VTable {
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
struct MeasureFunction__StaticFields {
};
struct MeasureFunction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MeasureFunction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MeasureFunction__VTable vtable;
};
struct YogaNode__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
};
struct YogaNode__StaticFields {
};
struct YogaNode__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct YogaNode__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct YogaNode__VTable vtable;
};
struct BaselineFunction__VTable {
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
struct BaselineFunction__StaticFields {
};
struct BaselineFunction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BaselineFunction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BaselineFunction__VTable vtable;
};

struct Canvas__Fields {
  struct Behaviour__Fields _;
};
struct Canvas {
  struct Canvas__Class *klass;
  struct MonitorData *monitor;
  struct Canvas__Fields fields;
};
struct Canvas_WillRenderCanvases__Fields {
  struct MulticastDelegate__Fields _;
};
struct Canvas_WillRenderCanvases {
  struct Canvas_WillRenderCanvases__Class *klass;
  struct MonitorData *monitor;
  struct Canvas_WillRenderCanvases__Fields fields;
};
struct Canvas_WillRenderCanvases__VTable {
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
struct Canvas_WillRenderCanvases__StaticFields {
};
struct Canvas_WillRenderCanvases__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Canvas_WillRenderCanvases__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Canvas_WillRenderCanvases__VTable vtable;
};
struct Canvas__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Canvas__StaticFields {
  struct Canvas_WillRenderCanvases * willRenderCanvases;
};
struct Canvas__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Canvas__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Canvas__VTable vtable;
};

enum RenderMode__Enum : int32_t {
  RenderMode__Enum_ScreenSpaceOverlay = 0,
  RenderMode__Enum_ScreenSpaceCamera = 1,
  RenderMode__Enum_WorldSpace = 2,
};
struct RenderMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum RenderMode__Enum value;
};

enum UISystemProfilerApi_SampleType__Enum : int32_t {
  UISystemProfilerApi_SampleType__Enum_Layout = 0,
  UISystemProfilerApi_SampleType__Enum_Render = 1,
};
struct UISystemProfilerApi_SampleType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum UISystemProfilerApi_SampleType__Enum value;
};

struct CanvasGroup__Fields {
  struct Behaviour__Fields _;
};
struct CanvasGroup {
  struct CanvasGroup__Class *klass;
  struct MonitorData *monitor;
  struct CanvasGroup__Fields fields;
};
struct CanvasGroup__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData IsRaycastLocationValid;
};
struct CanvasGroup__StaticFields {
};
struct CanvasGroup__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CanvasGroup__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CanvasGroup__VTable vtable;
};

struct CanvasRenderer__Fields {
  struct Component_1__Fields _;
  bool _isMask_k__BackingField;
};
struct CanvasRenderer {
  struct CanvasRenderer__Class *klass;
  struct MonitorData *monitor;
  struct CanvasRenderer__Fields fields;
};
struct CanvasRenderer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CanvasRenderer__StaticFields {
};
struct CanvasRenderer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CanvasRenderer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CanvasRenderer__VTable vtable;
};

enum AnalyticsSessionState__Enum : int32_t {
  AnalyticsSessionState__Enum_kSessionStopped = 0,
  AnalyticsSessionState__Enum_kSessionStarted = 1,
  AnalyticsSessionState__Enum_kSessionPaused = 2,
  AnalyticsSessionState__Enum_kSessionResumed = 3,
};
struct AnalyticsSessionState__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum AnalyticsSessionState__Enum value;
};

struct AnalyticsSessionInfo_SessionStateChanged__Fields {
  struct MulticastDelegate__Fields _;
};
struct AnalyticsSessionInfo_SessionStateChanged {
  struct AnalyticsSessionInfo_SessionStateChanged__Class *klass;
  struct MonitorData *monitor;
  struct AnalyticsSessionInfo_SessionStateChanged__Fields fields;
};
struct AnalyticsSessionInfo_SessionStateChanged__VTable {
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
struct AnalyticsSessionInfo_SessionStateChanged__StaticFields {
};
struct AnalyticsSessionInfo_SessionStateChanged__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AnalyticsSessionInfo_SessionStateChanged__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AnalyticsSessionInfo_SessionStateChanged__VTable vtable;
};

struct RemoteSettings_UpdatedEventHandler__Fields {
  struct MulticastDelegate__Fields _;
};
struct RemoteSettings_UpdatedEventHandler {
  struct RemoteSettings_UpdatedEventHandler__Class *klass;
  struct MonitorData *monitor;
  struct RemoteSettings_UpdatedEventHandler__Fields fields;
};
struct RemoteSettings_UpdatedEventHandler__VTable {
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
struct RemoteSettings_UpdatedEventHandler__StaticFields {
};
struct RemoteSettings_UpdatedEventHandler__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RemoteSettings_UpdatedEventHandler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RemoteSettings_UpdatedEventHandler__VTable vtable;
};

struct __declspec(align(8)) RemoteConfigSettings__Fields {
  void * m_Ptr;
  struct Action_1_Boolean_ * Updated;
};
struct RemoteConfigSettings {
  struct RemoteConfigSettings__Class *klass;
  struct MonitorData *monitor;
  struct RemoteConfigSettings__Fields fields;
};
struct Action_1_Boolean___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_Boolean_ {
  struct Action_1_Boolean___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_Boolean___Fields fields;
};
struct Action_1_Boolean___VTable {
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
struct Action_1_Boolean___StaticFields {
};
struct Action_1_Boolean___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_Boolean___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_Boolean___VTable vtable;
};
struct RemoteConfigSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
};
struct RemoteConfigSettings__StaticFields {
};
struct RemoteConfigSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RemoteConfigSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RemoteConfigSettings__VTable vtable;
};

struct __declspec(align(8)) WWW__Fields {
  struct UnityWebRequest * _uwr;
  struct AssetBundle * _assetBundle;
};
struct WWW {
  struct WWW__Class *klass;
  struct MonitorData *monitor;
  struct WWW__Fields fields;
};
struct WWW__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData MoveNext;
  VirtualInvokeData get_Current;
  VirtualInvokeData Reset;
  VirtualInvokeData get_keepWaiting;
  VirtualInvokeData Dispose;
};
struct WWW__StaticFields {
};
struct WWW__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WWW__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WWW__VTable vtable;
};

struct __declspec(align(8)) VFXEventAttribute__Fields {
  void * m_Ptr;
  bool m_Owner;
};
struct VFXEventAttribute {
  struct VFXEventAttribute__Class *klass;
  struct MonitorData *monitor;
  struct VFXEventAttribute__Fields fields;
};
struct VFXEventAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
};
struct VFXEventAttribute__StaticFields {
};
struct VFXEventAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VFXEventAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VFXEventAttribute__VTable vtable;
};

struct __declspec(align(8)) VFXExpressionValues__Fields {
  void * m_Ptr;
};
struct VFXExpressionValues {
  struct VFXExpressionValues__Class *klass;
  struct MonitorData *monitor;
  struct VFXExpressionValues__Fields fields;
};
struct VFXExpressionValues__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct VFXExpressionValues__StaticFields {
};
struct VFXExpressionValues__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VFXExpressionValues__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VFXExpressionValues__VTable vtable;
};

struct VFXSpawnerCallbacks__Fields {
  struct ScriptableObject__Fields _;
};
struct VFXSpawnerCallbacks {
  struct VFXSpawnerCallbacks__Class *klass;
  struct MonitorData *monitor;
  struct VFXSpawnerCallbacks__Fields fields;
};
struct VFXSpawnerCallbacks__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData __unknown;
  VirtualInvokeData __unknown_1;
  VirtualInvokeData __unknown_2;
};
struct VFXSpawnerCallbacks__StaticFields {
};
struct VFXSpawnerCallbacks__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VFXSpawnerCallbacks__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VFXSpawnerCallbacks__VTable vtable;
};

struct __declspec(align(8)) VFXSpawnerState__Fields {
  void * m_Ptr;
  bool m_Owner;
};
struct VFXSpawnerState {
  struct VFXSpawnerState__Class *klass;
  struct MonitorData *monitor;
  struct VFXSpawnerState__Fields fields;
};
struct VFXSpawnerState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
};
struct VFXSpawnerState__StaticFields {
};
struct VFXSpawnerState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VFXSpawnerState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VFXSpawnerState__VTable vtable;
};

struct WorldAnchor__Fields {
  struct Component_1__Fields _;
  struct WorldAnchor_OnTrackingChangedDelegate * OnTrackingChanged;
};
struct WorldAnchor {
  struct WorldAnchor__Class *klass;
  struct MonitorData *monitor;
  struct WorldAnchor__Fields fields;
};
struct WorldAnchor_OnTrackingChangedDelegate__Fields {
  struct MulticastDelegate__Fields _;
};
struct WorldAnchor_OnTrackingChangedDelegate {
  struct WorldAnchor_OnTrackingChangedDelegate__Class *klass;
  struct MonitorData *monitor;
  struct WorldAnchor_OnTrackingChangedDelegate__Fields fields;
};
struct WorldAnchor_OnTrackingChangedDelegate__VTable {
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
struct WorldAnchor_OnTrackingChangedDelegate__StaticFields {
};
struct WorldAnchor_OnTrackingChangedDelegate__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WorldAnchor_OnTrackingChangedDelegate__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WorldAnchor_OnTrackingChangedDelegate__VTable vtable;
};
struct WorldAnchor__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct WorldAnchor__StaticFields {
};
struct WorldAnchor__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WorldAnchor__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WorldAnchor__VTable vtable;
};

struct VideoClipPlayable {
  struct PlayableHandle m_Handle;
};
struct VideoClipPlayable__Boxed {
  struct VideoClipPlayable__Class *klass;
  struct MonitorData *monitor;
  struct VideoClipPlayable fields;
};
struct VideoClipPlayable__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetHandle;
  VirtualInvokeData Equals_1;
};
struct VideoClipPlayable__StaticFields {
};
struct VideoClipPlayable__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VideoClipPlayable__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VideoClipPlayable__VTable vtable;
};

struct VideoPlayer__Fields {
  struct Behaviour__Fields _;
  struct VideoPlayer_EventHandler * prepareCompleted;
  struct VideoPlayer_EventHandler * loopPointReached;
  struct VideoPlayer_EventHandler * started;
  struct VideoPlayer_EventHandler * frameDropped;
  struct VideoPlayer_ErrorEventHandler * errorReceived;
  struct VideoPlayer_EventHandler * seekCompleted;
  struct VideoPlayer_TimeEventHandler * clockResyncOccurred;
  struct VideoPlayer_FrameReadyEventHandler * frameReady;
};
struct VideoPlayer {
  struct VideoPlayer__Class *klass;
  struct MonitorData *monitor;
  struct VideoPlayer__Fields fields;
};
struct VideoPlayer_EventHandler__Fields {
  struct MulticastDelegate__Fields _;
};
struct VideoPlayer_EventHandler {
  struct VideoPlayer_EventHandler__Class *klass;
  struct MonitorData *monitor;
  struct VideoPlayer_EventHandler__Fields fields;
};
struct VideoPlayer_ErrorEventHandler__Fields {
  struct MulticastDelegate__Fields _;
};
struct VideoPlayer_ErrorEventHandler {
  struct VideoPlayer_ErrorEventHandler__Class *klass;
  struct MonitorData *monitor;
  struct VideoPlayer_ErrorEventHandler__Fields fields;
};
struct VideoPlayer_TimeEventHandler__Fields {
  struct MulticastDelegate__Fields _;
};
struct VideoPlayer_TimeEventHandler {
  struct VideoPlayer_TimeEventHandler__Class *klass;
  struct MonitorData *monitor;
  struct VideoPlayer_TimeEventHandler__Fields fields;
};
struct VideoPlayer_FrameReadyEventHandler__Fields {
  struct MulticastDelegate__Fields _;
};
struct VideoPlayer_FrameReadyEventHandler {
  struct VideoPlayer_FrameReadyEventHandler__Class *klass;
  struct MonitorData *monitor;
  struct VideoPlayer_FrameReadyEventHandler__Fields fields;
};
enum VideoSource__Enum : int32_t {
  VideoSource__Enum_VideoClip = 0,
  VideoSource__Enum_Url = 1,
};
struct VideoSource__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum VideoSource__Enum value;
};
struct VideoPlayer_EventHandler__VTable {
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
struct VideoPlayer_EventHandler__StaticFields {
};
struct VideoPlayer_EventHandler__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VideoPlayer_EventHandler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VideoPlayer_EventHandler__VTable vtable;
};
struct VideoPlayer_ErrorEventHandler__VTable {
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
struct VideoPlayer_ErrorEventHandler__StaticFields {
};
struct VideoPlayer_ErrorEventHandler__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VideoPlayer_ErrorEventHandler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VideoPlayer_ErrorEventHandler__VTable vtable;
};
struct VideoPlayer_TimeEventHandler__VTable {
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
struct VideoPlayer_TimeEventHandler__StaticFields {
};
struct VideoPlayer_TimeEventHandler__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VideoPlayer_TimeEventHandler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VideoPlayer_TimeEventHandler__VTable vtable;
};
struct VideoPlayer_FrameReadyEventHandler__VTable {
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
};}