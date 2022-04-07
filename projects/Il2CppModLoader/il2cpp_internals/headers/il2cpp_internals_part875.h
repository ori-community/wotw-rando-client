namespace app {
struct List_1_Moon_dialogGraph_ChangeStateDialogDecorator_StateConditionSetupData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_Moon_dialogGraph_ChangeStateDialogDecorator_StateConditionSetupData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_Moon_dialogGraph_ChangeStateDialogDecorator_StateConditionSetupData___VTable vtable;
};
struct StateHolder_1_Moon_dialogGraph_ChangeStateDialogDecorator_StateConditionSetupData___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetSetupStates;
  VirtualInvokeData get_UseMapping;
  VirtualInvokeData get_UseDesiredValues;
  VirtualInvokeData get_UseUberState;
  VirtualInvokeData CacheSetupStates;
};
struct StateHolder_1_Moon_dialogGraph_ChangeStateDialogDecorator_StateConditionSetupData___StaticFields {
};
struct StateHolder_1_Moon_dialogGraph_ChangeStateDialogDecorator_StateConditionSetupData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct StateHolder_1_Moon_dialogGraph_ChangeStateDialogDecorator_StateConditionSetupData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct StateHolder_1_Moon_dialogGraph_ChangeStateDialogDecorator_StateConditionSetupData___VTable vtable;
};
struct ChangeStateDialogDecorator_StateConditionSetupHolder__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetSetupStates;
  VirtualInvokeData get_UseMapping;
  VirtualInvokeData get_UseDesiredValues;
  VirtualInvokeData get_UseUberState;
  VirtualInvokeData CacheSetupStates;
};
struct ChangeStateDialogDecorator_StateConditionSetupHolder__StaticFields {
};
struct ChangeStateDialogDecorator_StateConditionSetupHolder__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ChangeStateDialogDecorator_StateConditionSetupHolder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ChangeStateDialogDecorator_StateConditionSetupHolder__VTable vtable;
};
struct ChangeStateDialogDecorator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData ExecuteDecorator;
};
struct ChangeStateDialogDecorator__StaticFields {
};
struct ChangeStateDialogDecorator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ChangeStateDialogDecorator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ChangeStateDialogDecorator__VTable vtable;
};

struct IDebugRendererSubscriber {
  struct IDebugRendererSubscriber__Class *klass;
  struct MonitorData *monitor;
};
struct IDebugRendererSubscriber__VTable {
  VirtualInvokeData RenderDebug;
};
struct IDebugRendererSubscriber__StaticFields {
};
struct IDebugRendererSubscriber__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IDebugRendererSubscriber__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IDebugRendererSubscriber__VTable vtable;
};

struct __declspec(align(8)) DebugRenderer__Fields {
  struct List_1_Moon_VisualDebug_IDebugRendererSubscriber_ * m_subscribers;
  struct IPool_1_LineEntity_ * m_lineEntityPool;
  struct HashSet_1_Moon_VisualDebug_IRenderEntity_ * m_renderEntities;
};
struct DebugRenderer {
  struct DebugRenderer__Class *klass;
  struct MonitorData *monitor;
  struct DebugRenderer__Fields fields;
};
struct __declspec(align(8)) List_1_Moon_VisualDebug_IDebugRendererSubscriber___Fields {
  struct IDebugRendererSubscriber__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_VisualDebug_IDebugRendererSubscriber_ {
  struct List_1_Moon_VisualDebug_IDebugRendererSubscriber___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_VisualDebug_IDebugRendererSubscriber___Fields fields;
};
struct IDebugRendererSubscriber__Array {
  struct IDebugRendererSubscriber__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct IDebugRendererSubscriber * vector[32];
};
struct IEnumerator_1_Moon_VisualDebug_IDebugRendererSubscriber_ {
  struct IEnumerator_1_Moon_VisualDebug_IDebugRendererSubscriber___Class *klass;
  struct MonitorData *monitor;
};
struct IPool_1_LineEntity_ {
  struct IPool_1_LineEntity___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) HashSet_1_Moon_VisualDebug_IRenderEntity___Fields {
  struct Int32__Array * _buckets;
  struct HashSet_1_T_Slot_Moon_VisualDebug_IRenderEntity___Array * _slots;
  int32_t _count;
  int32_t _lastIndex;
  int32_t _freeList;
  struct IEqualityComparer_1_Moon_VisualDebug_IRenderEntity_ * _comparer;
  int32_t _version;
  struct SerializationInfo * _siInfo;
};
struct HashSet_1_Moon_VisualDebug_IRenderEntity_ {
  struct HashSet_1_Moon_VisualDebug_IRenderEntity___Class *klass;
  struct MonitorData *monitor;
  struct HashSet_1_Moon_VisualDebug_IRenderEntity___Fields fields;
};
struct HashSet_1_T_Slot_Moon_VisualDebug_IRenderEntity_ {
  int32_t hashCode;
  int32_t next;
  struct IRenderEntity * value;
};
struct HashSet_1_T_Slot_Moon_VisualDebug_IRenderEntity___Boxed {
  struct HashSet_1_T_Slot_Moon_VisualDebug_IRenderEntity___Class *klass;
  struct MonitorData *monitor;
  struct HashSet_1_T_Slot_Moon_VisualDebug_IRenderEntity_ fields;
};
struct HashSet_1_T_Slot_Moon_VisualDebug_IRenderEntity___Array {
  struct HashSet_1_T_Slot_Moon_VisualDebug_IRenderEntity___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct HashSet_1_T_Slot_Moon_VisualDebug_IRenderEntity_ vector[32];
};
struct IRenderEntity {
  struct IRenderEntity__Class *klass;
  struct MonitorData *monitor;
};
struct IEqualityComparer_1_Moon_VisualDebug_IRenderEntity_ {
  struct IEqualityComparer_1_Moon_VisualDebug_IRenderEntity___Class *klass;
  struct MonitorData *monitor;
};
struct IRenderEntity__Array {
  struct IRenderEntity__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct IRenderEntity * vector[32];
};
struct IEnumerator_1_Moon_VisualDebug_IRenderEntity_ {
  struct IEnumerator_1_Moon_VisualDebug_IRenderEntity___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_Moon_VisualDebug_IRenderEntity_ {
  struct IEnumerable_1_Moon_VisualDebug_IRenderEntity___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_Moon_VisualDebug_IDebugRendererSubscriber___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Moon_VisualDebug_IDebugRendererSubscriber___StaticFields {
};
struct IEnumerator_1_Moon_VisualDebug_IDebugRendererSubscriber___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Moon_VisualDebug_IDebugRendererSubscriber___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Moon_VisualDebug_IDebugRendererSubscriber___VTable vtable;
};
struct List_1_Moon_VisualDebug_IDebugRendererSubscriber___VTable {
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
struct List_1_Moon_VisualDebug_IDebugRendererSubscriber___StaticFields {
  struct IDebugRendererSubscriber__Array * _emptyArray;
};
struct List_1_Moon_VisualDebug_IDebugRendererSubscriber___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_Moon_VisualDebug_IDebugRendererSubscriber___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_Moon_VisualDebug_IDebugRendererSubscriber___VTable vtable;
};
struct IPool_1_LineEntity___VTable {
  VirtualInvokeData Get;
  VirtualInvokeData Put;
};
struct IPool_1_LineEntity___StaticFields {
};
struct IPool_1_LineEntity___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IPool_1_LineEntity___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IPool_1_LineEntity___VTable vtable;
};
struct IRenderEntity__VTable {
  VirtualInvokeData Render;
  VirtualInvokeData GetHashCode;
};
struct IRenderEntity__StaticFields {
};
struct IRenderEntity__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IRenderEntity__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IRenderEntity__VTable vtable;
};
struct HashSet_1_T_Slot_Moon_VisualDebug_IRenderEntity___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct HashSet_1_T_Slot_Moon_VisualDebug_IRenderEntity___StaticFields {
};
struct HashSet_1_T_Slot_Moon_VisualDebug_IRenderEntity___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HashSet_1_T_Slot_Moon_VisualDebug_IRenderEntity___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HashSet_1_T_Slot_Moon_VisualDebug_IRenderEntity___VTable vtable;
};
struct IEqualityComparer_1_Moon_VisualDebug_IRenderEntity___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData GetHashCode;
};
struct IEqualityComparer_1_Moon_VisualDebug_IRenderEntity___StaticFields {
};
struct IEqualityComparer_1_Moon_VisualDebug_IRenderEntity___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEqualityComparer_1_Moon_VisualDebug_IRenderEntity___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEqualityComparer_1_Moon_VisualDebug_IRenderEntity___VTable vtable;
};
struct IEnumerator_1_Moon_VisualDebug_IRenderEntity___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Moon_VisualDebug_IRenderEntity___StaticFields {
};
struct IEnumerator_1_Moon_VisualDebug_IRenderEntity___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Moon_VisualDebug_IRenderEntity___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Moon_VisualDebug_IRenderEntity___VTable vtable;
};
struct IEnumerable_1_Moon_VisualDebug_IRenderEntity___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_Moon_VisualDebug_IRenderEntity___StaticFields {
};
struct IEnumerable_1_Moon_VisualDebug_IRenderEntity___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_Moon_VisualDebug_IRenderEntity___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_Moon_VisualDebug_IRenderEntity___VTable vtable;
};
struct HashSet_1_Moon_VisualDebug_IRenderEntity___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_T__get_IsReadOnly;
  VirtualInvokeData System_Collections_Generic_ICollection_T__Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData OnDeserialization;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData OnDeserialization_1;
  VirtualInvokeData Add;
  VirtualInvokeData UnionWith;
};
struct HashSet_1_Moon_VisualDebug_IRenderEntity___StaticFields {
};
struct HashSet_1_Moon_VisualDebug_IRenderEntity___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HashSet_1_Moon_VisualDebug_IRenderEntity___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HashSet_1_Moon_VisualDebug_IRenderEntity___VTable vtable;
};
struct DebugRenderer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DebugRenderer__StaticFields {
  struct Vector3 s_boundsMin;
  struct Vector3 s_boundsMax;
  struct Vector3 s_bottomLeft;
  struct Vector3 s_topLeft;
  struct Vector3 s_topRight;
  struct Vector3 s_bottomRight;
  struct Material * s_material;
  struct Material * s_meshMaterial;
  struct Material * s_transparentColorMaterial;
  struct DebugRenderer * s_instance;
  bool s_enabled;
  bool s_didGLBegin;
  int32_t s_curMode;
  struct Camera * s_curCamera;
  struct MoonRenderContext * s_curContext;
  enum RenderingType__Enum s_curRenderingType;
};
struct DebugRenderer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DebugRenderer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DebugRenderer__VTable vtable;
};

struct DebugRenderer_c {
  struct DebugRenderer_c__Class *klass;
  struct MonitorData *monitor;
};
struct Func_1_Moon_VisualDebug_LineEntity___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_1_Moon_VisualDebug_LineEntity_ {
  struct Func_1_Moon_VisualDebug_LineEntity___Class *klass;
  struct MonitorData *monitor;
  struct Func_1_Moon_VisualDebug_LineEntity___Fields fields;
};
struct __declspec(align(8)) Entity_1__Fields {
  struct Color Color;
};
struct Entity_1 {
  struct Entity_1__Class *klass;
  struct MonitorData *monitor;
  struct Entity_1__Fields fields;
};
struct LineEntity__Fields {
  struct Entity_1__Fields _;
  struct Vector3 Start;
  struct Vector3 End;
};
struct LineEntity {
  struct LineEntity__Class *klass;
  struct MonitorData *monitor;
  struct LineEntity__Fields fields;
};
struct Entity_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData __unknown;
  VirtualInvokeData ToString;
  VirtualInvokeData Render;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData Equals_1;
  VirtualInvokeData __unknown_1;
  VirtualInvokeData __unknown_2;
};
struct Entity_1__StaticFields {
};
struct Entity_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Entity_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Entity_1__VTable vtable;
};
struct LineEntity__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Render;
  VirtualInvokeData GetHashCode_1;
  VirtualInvokeData Equals_1;
  VirtualInvokeData get_Mode;
  VirtualInvokeData Render_1;
};
struct LineEntity__StaticFields {
};
struct LineEntity__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LineEntity__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LineEntity__VTable vtable;
};
struct Func_1_Moon_VisualDebug_LineEntity___VTable {
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
struct Func_1_Moon_VisualDebug_LineEntity___StaticFields {
};
struct Func_1_Moon_VisualDebug_LineEntity___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Func_1_Moon_VisualDebug_LineEntity___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Func_1_Moon_VisualDebug_LineEntity___VTable vtable;
};
struct DebugRenderer_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DebugRenderer_c__StaticFields {
  struct DebugRenderer_c * __9;
  struct Func_1_Moon_VisualDebug_LineEntity_ * __9__51_0;
};
struct DebugRenderer_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DebugRenderer_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DebugRenderer_c__VTable vtable;
};

enum ArtOptimizer_OptimizerState__Enum : int32_t {
  ArtOptimizer_OptimizerState__Enum_Idle = 0,
  ArtOptimizer_OptimizerState__Enum_GettingReady = 1,
  ArtOptimizer_OptimizerState__Enum_PrepareSamples = 2,
  ArtOptimizer_OptimizerState__Enum_Processing = 3,
  ArtOptimizer_OptimizerState__Enum_Done = 4,
};
struct ArtOptimizer_OptimizerState__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ArtOptimizer_OptimizerState__Enum value;
};
struct ArtOptimizer__Fields {
  struct MonoBehaviour__Fields _;
  bool CustomSelection;
  struct String * SceneGuid;
  struct Action * OnEnterGettingReady;
  struct Action * OnEnterMoving;
  struct Action * OnEnterDone;
  enum ArtOptimizer_OptimizerState__Enum m_currentState;
  struct OptimizationCache * m_cache;
  struct ArtOptimizationDataModel * m_dataModel;
  struct SceneRoot * m_currentSceneRoot;
  struct String * m_outputFolder;
  int32_t m_currentOperation;
  int32_t m_overallOperations;
  float m_scanningStatrTime;
  bool m_oldEnableDistortion;
  struct PreparationTask_1 * m_preparationTask;
  struct CompositeTask * m_prepareSamplesTask;
  struct CompositeTask * m_processingTask;
  struct IList_1_UberShaderComponent_ * m_uberShaders;
  struct List_1_UnityEngine_Vector3_ * m_cameraSamplePoints;
};
struct ArtOptimizer {
  struct ArtOptimizer__Class *klass;
  struct MonitorData *monitor;
  struct ArtOptimizer__Fields fields;
};
struct __declspec(align(8)) OptimizationCache__Fields {
  struct ReadOnlyCollection_1_UberShaderComponent_ * UberShaders;
  struct List_1_UberShaderComponent_ * m_uberShaderComponents;
  struct List_1_UnityEngine_ParticleSystem_ * m_particleSystems;
  struct List_1_UberWaterControl_ * m_waterControls;
  struct List_1_Moon_Utilities_ObjectDisabler_ * m_objectDisablers;
  struct List_1_NewSetupStateController_ * m_breakableSetups;
};
struct OptimizationCache {
  struct OptimizationCache__Class *klass;
  struct MonitorData *monitor;
  struct OptimizationCache__Fields fields;
};
struct __declspec(align(8)) ReadOnlyCollection_1_UberShaderComponent___Fields {
  struct IList_1_UberShaderComponent_ * list;
  struct Object * _syncRoot;
};
struct ReadOnlyCollection_1_UberShaderComponent_ {
  struct ReadOnlyCollection_1_UberShaderComponent___Class *klass;
  struct MonitorData *monitor;
  struct ReadOnlyCollection_1_UberShaderComponent___Fields fields;
};
struct IList_1_UberShaderComponent_ {
  struct IList_1_UberShaderComponent___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_Moon_Utilities_ObjectDisabler___Fields {
  struct ObjectDisabler__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_Utilities_ObjectDisabler_ {
  struct List_1_Moon_Utilities_ObjectDisabler___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_Utilities_ObjectDisabler___Fields fields;
};
struct ObjectDisabler__Array {
  struct ObjectDisabler__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ObjectDisabler * vector[32];
};
struct IEnumerator_1_Moon_Utilities_ObjectDisabler_ {
  struct IEnumerator_1_Moon_Utilities_ObjectDisabler___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_NewSetupStateController___Fields {
  struct NewSetupStateController__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_NewSetupStateController_ {
  struct List_1_NewSetupStateController___Class *klass;
  struct MonitorData *monitor;
  struct List_1_NewSetupStateController___Fields fields;
};
struct NewSetupStateController__Array {
  struct NewSetupStateController__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct NewSetupStateController * vector[32];
};
struct IEnumerator_1_NewSetupStateController_ {
  struct IEnumerator_1_NewSetupStateController___Class *klass;
  struct MonitorData *monitor;
};
struct PreparationTask_1__Fields {
  struct SimpleTask__Fields _;
  int32_t m_framesForDelay;
  bool m_playerSetup;
  struct List_1_EntityPlaceholder_ * m_entities;
};
struct PreparationTask_1 {
  struct PreparationTask_1__Class *klass;
  struct MonitorData *monitor;
  struct PreparationTask_1__Fields fields;
};
struct IList_1_UberShaderComponent___VTable {
  VirtualInvokeData get_Item;
  VirtualInvokeData set_Item;
  VirtualInvokeData IndexOf;
  VirtualInvokeData Insert;
  VirtualInvokeData RemoveAt;
};
struct IList_1_UberShaderComponent___StaticFields {
};
struct IList_1_UberShaderComponent___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IList_1_UberShaderComponent___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IList_1_UberShaderComponent___VTable vtable;
};
struct ReadOnlyCollection_1_UberShaderComponent___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_Generic_IList_T__get_Item;
  VirtualInvokeData System_Collections_Generic_IList_T__set_Item;
  VirtualInvokeData IndexOf;
  VirtualInvokeData System_Collections_Generic_IList_T__Insert;
  VirtualInvokeData System_Collections_Generic_IList_T__RemoveAt;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_T__get_IsReadOnly;
  VirtualInvokeData System_Collections_Generic_ICollection_T__Add;
  VirtualInvokeData System_Collections_Generic_ICollection_T__Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData System_Collections_Generic_ICollection_T__Remove;
  VirtualInvokeData GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_IList_get_Item;
  VirtualInvokeData System_Collections_IList_set_Item;
  VirtualInvokeData System_Collections_IList_Add;
  VirtualInvokeData System_Collections_IList_Contains;
  VirtualInvokeData System_Collections_IList_Clear;
  VirtualInvokeData System_Collections_IList_get_IsReadOnly;
  VirtualInvokeData System_Collections_IList_get_IsFixedSize;
  VirtualInvokeData System_Collections_IList_IndexOf;
  VirtualInvokeData System_Collections_IList_Insert;
  VirtualInvokeData System_Collections_IList_Remove;
  VirtualInvokeData System_Collections_IList_RemoveAt;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData get_Item;
  VirtualInvokeData get_Count_2;
};
struct ReadOnlyCollection_1_UberShaderComponent___StaticFields {
};
struct ReadOnlyCollection_1_UberShaderComponent___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ReadOnlyCollection_1_UberShaderComponent___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ReadOnlyCollection_1_UberShaderComponent___VTable vtable;
};
struct IEnumerator_1_Moon_Utilities_ObjectDisabler___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Moon_Utilities_ObjectDisabler___StaticFields {
};
struct IEnumerator_1_Moon_Utilities_ObjectDisabler___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Moon_Utilities_ObjectDisabler___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Moon_Utilities_ObjectDisabler___VTable vtable;
};
struct List_1_Moon_Utilities_ObjectDisabler___VTable {
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
struct List_1_Moon_Utilities_ObjectDisabler___StaticFields {
  struct ObjectDisabler__Array * _emptyArray;
};
struct List_1_Moon_Utilities_ObjectDisabler___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_Moon_Utilities_ObjectDisabler___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_Moon_Utilities_ObjectDisabler___VTable vtable;
};
struct IEnumerator_1_NewSetupStateController___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_NewSetupStateController___StaticFields {
};
struct IEnumerator_1_NewSetupStateController___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_NewSetupStateController___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_NewSetupStateController___VTable vtable;
};
struct List_1_NewSetupStateController___VTable {
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
struct List_1_NewSetupStateController___StaticFields {
  struct NewSetupStateController__Array * _emptyArray;
};
struct List_1_NewSetupStateController___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_NewSetupStateController___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_NewSetupStateController___VTable vtable;
};
struct OptimizationCache__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct OptimizationCache__StaticFields {
};
struct OptimizationCache__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct OptimizationCache__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct OptimizationCache__VTable vtable;
};
struct PreparationTask_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_IsFinished;
  VirtualInvokeData get_State;
  VirtualInvokeData SetNext;
  VirtualInvokeData Update;
  VirtualInvokeData OnEnterContext;
  VirtualInvokeData Update_1;
  VirtualInvokeData OnEnterContext_1;
};
struct PreparationTask_1__StaticFields {
};
struct PreparationTask_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PreparationTask_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PreparationTask_1__VTable vtable;
};
struct ArtOptimizer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ArtOptimizer__StaticFields {
  struct String * CurrentTaskDescription;
  float CurrentProgress;
  struct Sample * CurrentSample;
  bool _IsStopped_k__BackingField;
};
struct ArtOptimizer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ArtOptimizer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ArtOptimizer__VTable vtable;
};

struct ArtOptimizer_c {
  struct ArtOptimizer_c__Class *klass;
  struct MonitorData *monitor;
};
struct ArtOptimizer_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ArtOptimizer_c__StaticFields {
  struct ArtOptimizer_c * __9;
  struct Action * __9__47_0;
  struct Action * __9__47_1;
  struct Action * __9__47_2;
};
struct ArtOptimizer_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ArtOptimizer_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ArtOptimizer_c__VTable vtable;
};

struct __declspec(align(8)) ArtOptimizerDataContainer_c_DisplayClass18_0__Fields {
  struct ArtOptimizerDataContainer * __4__this;
  struct List_1_Moon_ArtOptimization_SerializableUberShaderWrapper_ * nonSkippedObjs;
};
struct ArtOptimizerDataContainer_c_DisplayClass18_0 {
  struct ArtOptimizerDataContainer_c_DisplayClass18_0__Class *klass;
  struct MonitorData *monitor;
  struct ArtOptimizerDataContainer_c_DisplayClass18_0__Fields fields;
};
struct ArtOptimizerDataContainer_c_DisplayClass18_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ArtOptimizerDataContainer_c_DisplayClass18_0__StaticFields {
};
struct ArtOptimizerDataContainer_c_DisplayClass18_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ArtOptimizerDataContainer_c_DisplayClass18_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ArtOptimizerDataContainer_c_DisplayClass18_0__VTable vtable;
};

struct __declspec(align(8)) ArtOptimizerDataContainer_c_DisplayClass18_1__Fields {
  struct List_1_Moon_ArtOptimization_SerializableUberSaderModifierWrapper_ * skippedModifiers;
  struct List_1_Moon_ArtOptimization_SerializableUberSaderModifierWrapper_ * ignoredModifiers;
  struct List_1_Moon_ArtOptimization_SerializableUberSaderModifierWrapper_ * modifiersFromObjectsBelowLimit;
};
struct ArtOptimizerDataContainer_c_DisplayClass18_1 {
  struct ArtOptimizerDataContainer_c_DisplayClass18_1__Class *klass;
  struct MonitorData *monitor;
  struct ArtOptimizerDataContainer_c_DisplayClass18_1__Fields fields;
};
struct ArtOptimizerDataContainer_c_DisplayClass18_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ArtOptimizerDataContainer_c_DisplayClass18_1__StaticFields {
};
struct ArtOptimizerDataContainer_c_DisplayClass18_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ArtOptimizerDataContainer_c_DisplayClass18_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ArtOptimizerDataContainer_c_DisplayClass18_1__VTable vtable;
};

struct ArtOptimizerDataContainer_c {
  struct ArtOptimizerDataContainer_c__Class *klass;
  struct MonitorData *monitor;
};
struct Func_2_Moon_ArtOptimization_SerializableUberShaderWrapper_System_Collections_Generic_IEnumerable_1___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_2_Moon_ArtOptimization_SerializableUberShaderWrapper_System_Collections_Generic_IEnumerable_1_ {
  struct Func_2_Moon_ArtOptimization_SerializableUberShaderWrapper_System_Collections_Generic_IEnumerable_1___Class *klass;
  struct MonitorData *monitor;
  struct Func_2_Moon_ArtOptimization_SerializableUberShaderWrapper_System_Collections_Generic_IEnumerable_1___Fields fields;
};
struct Func_2_Moon_ArtOptimization_SerializableUberSaderModifierWrapper_Boolean___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_2_Moon_ArtOptimization_SerializableUberSaderModifierWrapper_Boolean_ {
  struct Func_2_Moon_ArtOptimization_SerializableUberSaderModifierWrapper_Boolean___Class *klass;
  struct MonitorData *monitor;
  struct Func_2_Moon_ArtOptimization_SerializableUberSaderModifierWrapper_Boolean___Fields fields;
};
struct Func_2_Moon_ArtOptimization_SerializableUberShaderWrapper_System_Collections_Generic_IEnumerable_1___VTable {
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
struct Func_2_Moon_ArtOptimization_SerializableUberShaderWrapper_System_Collections_Generic_IEnumerable_1___StaticFields {
};
struct Func_2_Moon_ArtOptimization_SerializableUberShaderWrapper_System_Collections_Generic_IEnumerable_1___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Func_2_Moon_ArtOptimization_SerializableUberShaderWrapper_System_Collections_Generic_IEnumerable_1___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Func_2_Moon_ArtOptimization_SerializableUberShaderWrapper_System_Collections_Generic_IEnumerable_1___VTable vtable;
};
struct Func_2_Moon_ArtOptimization_SerializableUberSaderModifierWrapper_Boolean___VTable {
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