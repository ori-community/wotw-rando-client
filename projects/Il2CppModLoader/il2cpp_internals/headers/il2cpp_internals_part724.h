namespace app {

struct __declspec(align(8)) UberShaderVectorDisplay__Fields {
  bool ShowAsVector2;
  bool DrawAllAxis;
  struct String * X;
  struct String * Y;
  struct String * Z;
  struct String * W;
};
struct UberShaderVectorDisplay {
  struct UberShaderVectorDisplay__Class *klass;
  struct MonitorData *monitor;
  struct UberShaderVectorDisplay__Fields fields;
};
struct UberShaderVectorDisplay__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct UberShaderVectorDisplay__StaticFields {
};
struct UberShaderVectorDisplay__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberShaderVectorDisplay__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberShaderVectorDisplay__VTable vtable;
};

struct UberContourMeshCustomAsset__Fields {
  struct ScriptableObject__Fields _;
  struct List_1_CageStructureTool_Vertex_ * CageVertices;
  struct List_1_CageStructureTool_Edge_ * CageEdges;
  struct List_1_CageStructureTool_Face_ * CageFaces;
  struct Mesh * CustomMesh;
  struct String * TexGUID;
};
struct UberContourMeshCustomAsset {
  struct UberContourMeshCustomAsset__Class *klass;
  struct MonitorData *monitor;
  struct UberContourMeshCustomAsset__Fields fields;
};
struct UberContourMeshCustomAsset__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct UberContourMeshCustomAsset__StaticFields {
};
struct UberContourMeshCustomAsset__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberContourMeshCustomAsset__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberContourMeshCustomAsset__VTable vtable;
};

struct UberShaderCustomMesh__Fields {
  struct MonoBehaviour__Fields _;
};
struct UberShaderCustomMesh {
  struct UberShaderCustomMesh__Class *klass;
  struct MonitorData *monitor;
  struct UberShaderCustomMesh__Fields fields;
};
struct UberShaderCustomMesh__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct UberShaderCustomMesh__StaticFields {
};
struct UberShaderCustomMesh__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberShaderCustomMesh__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberShaderCustomMesh__VTable vtable;
};

struct DynamicLightsManager__Fields {
  struct MonoBehaviour__Fields _;
  struct DynamicLightsSettings * DefaultSettings;
};
struct DynamicLightsManager {
  struct DynamicLightsManager__Class *klass;
  struct MonitorData *monitor;
  struct DynamicLightsManager__Fields fields;
};
struct DynamicLightsManager__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DynamicLightsManager__StaticFields {
};
struct DynamicLightsManager__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DynamicLightsManager__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DynamicLightsManager__VTable vtable;
};

struct __declspec(align(8)) UberShaderCustomShaderModifierResult__Fields {
  struct CustomShaderModifier * Attribute;
  struct Type * LinkedType;
};
struct UberShaderCustomShaderModifierResult {
  struct UberShaderCustomShaderModifierResult__Class *klass;
  struct MonitorData *monitor;
  struct UberShaderCustomShaderModifierResult__Fields fields;
};
struct UberShaderCustomShaderModifierResult__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CompareTo;
};
struct UberShaderCustomShaderModifierResult__StaticFields {
};
struct UberShaderCustomShaderModifierResult__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberShaderCustomShaderModifierResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberShaderCustomShaderModifierResult__VTable vtable;
};

struct UberShaderFindTypes {
  struct UberShaderFindTypes__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_UberShaderCustomShaderModifierResult___Fields {
  struct UberShaderCustomShaderModifierResult__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_UberShaderCustomShaderModifierResult_ {
  struct List_1_UberShaderCustomShaderModifierResult___Class *klass;
  struct MonitorData *monitor;
  struct List_1_UberShaderCustomShaderModifierResult___Fields fields;
};
struct UberShaderCustomShaderModifierResult__Array {
  struct UberShaderCustomShaderModifierResult__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct UberShaderCustomShaderModifierResult * vector[32];
};
struct IEnumerator_1_UberShaderCustomShaderModifierResult_ {
  struct IEnumerator_1_UberShaderCustomShaderModifierResult___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_UberShaderCustomShaderBlockResult___Fields {
  struct UberShaderCustomShaderBlockResult__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_UberShaderCustomShaderBlockResult_ {
  struct List_1_UberShaderCustomShaderBlockResult___Class *klass;
  struct MonitorData *monitor;
  struct List_1_UberShaderCustomShaderBlockResult___Fields fields;
};
struct UberShaderCustomShaderBlockResult {
  struct CustomShaderBlock * Attribute;
  struct Type * LinkedType;
};
struct UberShaderCustomShaderBlockResult__Boxed {
  struct UberShaderCustomShaderBlockResult__Class *klass;
  struct MonitorData *monitor;
  struct UberShaderCustomShaderBlockResult fields;
};
struct UberShaderCustomShaderBlockResult__Array {
  struct UberShaderCustomShaderBlockResult__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct UberShaderCustomShaderBlockResult vector[32];
};
struct IEnumerator_1_UberShaderCustomShaderBlockResult_ {
  struct IEnumerator_1_UberShaderCustomShaderBlockResult___Class *klass;
  struct MonitorData *monitor;
};
struct GUIContent__Array {
  struct GUIContent__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct GUIContent * vector[32];
};
struct IEnumerator_1_UberShaderCustomShaderModifierResult___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_UberShaderCustomShaderModifierResult___StaticFields {
};
struct IEnumerator_1_UberShaderCustomShaderModifierResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_UberShaderCustomShaderModifierResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_UberShaderCustomShaderModifierResult___VTable vtable;
};
struct List_1_UberShaderCustomShaderModifierResult___VTable {
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
struct List_1_UberShaderCustomShaderModifierResult___StaticFields {
  struct UberShaderCustomShaderModifierResult__Array * _emptyArray;
};
struct List_1_UberShaderCustomShaderModifierResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_UberShaderCustomShaderModifierResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_UberShaderCustomShaderModifierResult___VTable vtable;
};
struct UberShaderCustomShaderBlockResult__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct UberShaderCustomShaderBlockResult__StaticFields {
};
struct UberShaderCustomShaderBlockResult__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberShaderCustomShaderBlockResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberShaderCustomShaderBlockResult__VTable vtable;
};
struct IEnumerator_1_UberShaderCustomShaderBlockResult___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_UberShaderCustomShaderBlockResult___StaticFields {
};
struct IEnumerator_1_UberShaderCustomShaderBlockResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_UberShaderCustomShaderBlockResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_UberShaderCustomShaderBlockResult___VTable vtable;
};
struct List_1_UberShaderCustomShaderBlockResult___VTable {
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
struct List_1_UberShaderCustomShaderBlockResult___StaticFields {
  struct UberShaderCustomShaderBlockResult__Array * _emptyArray;
};
struct List_1_UberShaderCustomShaderBlockResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_UberShaderCustomShaderBlockResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_UberShaderCustomShaderBlockResult___VTable vtable;
};
struct UberShaderFindTypes__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct UberShaderFindTypes__StaticFields {
  struct IEnumerable_1_System_Type_ * s_collection;
  struct List_1_UberShaderCustomShaderModifierResult_ * Modifiers;
  struct List_1_UberShaderCustomShaderBlockResult_ * Blocks;
  struct GUIContent__Array * m_blocks;
  struct GUIContent__Array * m_mods;
};
struct UberShaderFindTypes__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberShaderFindTypes__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberShaderFindTypes__VTable vtable;
};
struct EnvironmentLightingManager__Fields {
  struct MonoBehaviour__Fields _;
  struct AllContainer_1_EnvironmentLight_ * AllLights;
};
struct EnvironmentLightingManager {
  struct EnvironmentLightingManager__Class *klass;
  struct MonitorData *monitor;
  struct EnvironmentLightingManager__Fields fields;
};
struct __declspec(align(8)) AllContainer_1_EnvironmentLight___Fields {
  struct List_1_EnvironmentLight_ * m_objects;
};
struct AllContainer_1_EnvironmentLight_ {
  struct AllContainer_1_EnvironmentLight___Class *klass;
  struct MonitorData *monitor;
  struct AllContainer_1_EnvironmentLight___Fields fields;
};
struct __declspec(align(8)) List_1_EnvironmentLight___Fields {
  struct EnvironmentLight__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_EnvironmentLight_ {
  struct List_1_EnvironmentLight___Class *klass;
  struct MonitorData *monitor;
  struct List_1_EnvironmentLight___Fields fields;
};
struct EnvironmentLight__Array {
  struct EnvironmentLight__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct EnvironmentLight * vector[32];
};
struct IEnumerator_1_EnvironmentLight_ {
  struct IEnumerator_1_EnvironmentLight___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_EnvironmentLight___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_EnvironmentLight___StaticFields {
};
struct IEnumerator_1_EnvironmentLight___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_EnvironmentLight___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_EnvironmentLight___VTable vtable;
};
struct List_1_EnvironmentLight___VTable {
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
struct List_1_EnvironmentLight___StaticFields {
  struct EnvironmentLight__Array * _emptyArray;
};
struct List_1_EnvironmentLight___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_EnvironmentLight___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_EnvironmentLight___VTable vtable;
};
struct AllContainer_1_EnvironmentLight___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AllContainer_1_EnvironmentLight___StaticFields {
};
struct AllContainer_1_EnvironmentLight___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AllContainer_1_EnvironmentLight___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AllContainer_1_EnvironmentLight___VTable vtable;
};
struct EnvironmentLightingManager__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct EnvironmentLightingManager__StaticFields {
  struct EnvironmentLightingManager * Instance;
};
struct EnvironmentLightingManager__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EnvironmentLightingManager__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EnvironmentLightingManager__VTable vtable;
};

struct UberExplosionActor__Fields {
  struct MonoBehaviour__Fields _;
  bool ExplodeAtStart;
  float OutwardSpeed;
  struct Vector4 ExplodeStrength;
  float Radius;
  bool m_explodedAtStart;
};
struct UberExplosionActor {
  struct UberExplosionActor__Class *klass;
  struct MonitorData *monitor;
  struct UberExplosionActor__Fields fields;
};
struct UberExplosionActor__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnPoolSpawned;
  VirtualInvokeData OnPoolDespawned;
};
struct UberExplosionActor__StaticFields {
};
struct UberExplosionActor__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberExplosionActor__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberExplosionActor__VTable vtable;
};

struct UberInteractionManager__Fields {
  struct MonoBehaviour__Fields _;
  bool DoInteractions;
  struct List_1_UberInteractionManager_InteractionCurve_ * Curves;
  float MagnitudePower;
  float PlayDelayTime;
  float ExplosionProcessingBudgetMs;
  bool Debug;
  struct List_1_UberInteractionActor_ * m_actors;
  struct Boolean__Array * m_interactorActive;
  struct IInteractable__Array * m_interactables;
  struct UberInteractionManager_InteractionInfo__Array * m_interactionInfos;
  struct Stopwatch * m_stopwatch;
  struct UberInteractionManagerAccelerator * m_accelerator;
  int64_t m_nextAcceleratorQueryId;
  bool m_acceleratorFullErrorPrinted;
  int32_t m_minBoundIndex;
  int32_t m_interactionCount;
  struct List_1_IInteractable_ * m_toRegister;
  struct UberInteractionManager_ExplosionApplications * m_explosionApplications;
  struct List_1_UberInteractionManager_ActorInfo_ * m_actorQueue;
  struct List_1_UberInteractionManager_ActorInfo_ * m_resolveWaterQueue;
  struct List_1_UnityEngine_Vector3_ * m_positions;
  struct List_1_UberInteractionManager_ActorInfo_ * m_processingQueue;
  struct ShaderAnimationTimeDriver * m_timeDriver;
  struct UberInteractionManager_ExplosionApplicationComparer * m_explosionApplicationComparer;
};
struct UberInteractionManager {
  struct UberInteractionManager__Class *klass;
  struct MonitorData *monitor;
  struct UberInteractionManager__Fields fields;
};
struct __declspec(align(8)) List_1_UberInteractionManager_InteractionCurve___Fields {
  struct UberInteractionManager_InteractionCurve__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_UberInteractionManager_InteractionCurve_ {
  struct List_1_UberInteractionManager_InteractionCurve___Class *klass;
  struct MonitorData *monitor;
  struct List_1_UberInteractionManager_InteractionCurve___Fields fields;
};
struct __declspec(align(8)) UberInteractionManager_InteractionCurve__Fields {
  enum UberInteractionManager_InteractionCurveType__Enum Type;
  struct AnimationCurve * Curve;
  struct Texture2D * m_curveTex;
  float _Scale_k__BackingField;
  int32_t m_curveName;
  int32_t m_curveSettingsName;
};
struct UberInteractionManager_InteractionCurve {
  struct UberInteractionManager_InteractionCurve__Class *klass;
  struct MonitorData *monitor;
  struct UberInteractionManager_InteractionCurve__Fields fields;
};
struct UberInteractionManager_InteractionCurve__Array {
  struct UberInteractionManager_InteractionCurve__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct UberInteractionManager_InteractionCurve * vector[32];
};
struct IEnumerator_1_UberInteractionManager_InteractionCurve_ {
  struct IEnumerator_1_UberInteractionManager_InteractionCurve___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_UberInteractionActor___Fields {
  struct UberInteractionActor__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_UberInteractionActor_ {
  struct List_1_UberInteractionActor___Class *klass;
  struct MonitorData *monitor;
  struct List_1_UberInteractionActor___Fields fields;
};
struct UberInteractionActor__Array {
  struct UberInteractionActor__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct UberInteractionActor * vector[32];
};
struct IEnumerator_1_UberInteractionActor_ {
  struct IEnumerator_1_UberInteractionActor___Class *klass;
  struct MonitorData *monitor;
};
struct IInteractable {
  struct IInteractable__Class *klass;
  struct MonitorData *monitor;
};
struct IInteractable__Array {
  struct IInteractable__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct IInteractable * vector[32];
};
struct UberInteractionManager_InteractionInfo {
  float X;
  float Y;
  float Z;
  float MaxRadius;
  int32_t Version;
  int64_t LastAccelerationQueryId;
};
struct UberInteractionManager_InteractionInfo__Boxed {
  struct UberInteractionManager_InteractionInfo__Class *klass;
  struct MonitorData *monitor;
  struct UberInteractionManager_InteractionInfo fields;
};
struct UberInteractionManager_InteractionInfo__Array {
  struct UberInteractionManager_InteractionInfo__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct UberInteractionManager_InteractionInfo vector[32];
};
struct __declspec(align(8)) UberInteractionManagerAccelerator__Fields {
  float _CellSize_k__BackingField;
  float _InvCellSize_k__BackingField;
  struct UberInteractionManagerAccelerator_Cell__Array * m_cells;
  struct UberInteractionManagerAccelerator_CellInteractionData__Array * m_dynamicObjects;
  int32_t m_splitCount;
};
struct UberInteractionManagerAccelerator {
  struct UberInteractionManagerAccelerator__Class *klass;
  struct MonitorData *monitor;
  struct UberInteractionManagerAccelerator__Fields fields;
};
struct __declspec(align(8)) UberInteractionManagerAccelerator_Cell__Fields {
  struct UberInteractionManagerAccelerator_CellInteractionData__Array * Interactions;
};
struct UberInteractionManagerAccelerator_Cell {
  struct UberInteractionManagerAccelerator_Cell__Class *klass;
  struct MonitorData *monitor;
  struct UberInteractionManagerAccelerator_Cell__Fields fields;
};
struct UberInteractionManagerAccelerator_Cell__Array {
  struct UberInteractionManagerAccelerator_Cell__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct UberInteractionManagerAccelerator_Cell * vector[32];
};
struct UberInteractionManagerAccelerator_CellInteractionData {
  int32_t InteractionId;
  int32_t InteractionVersion;
};
struct UberInteractionManagerAccelerator_CellInteractionData__Boxed {
  struct UberInteractionManagerAccelerator_CellInteractionData__Class *klass;
  struct MonitorData *monitor;
  struct UberInteractionManagerAccelerator_CellInteractionData fields;
};
struct UberInteractionManagerAccelerator_CellInteractionData__Array {
  struct UberInteractionManagerAccelerator_CellInteractionData__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct UberInteractionManagerAccelerator_CellInteractionData vector[32];
};
struct __declspec(align(8)) List_1_IInteractable___Fields {
  struct IInteractable__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_IInteractable_ {
  struct List_1_IInteractable___Class *klass;
  struct MonitorData *monitor;
  struct List_1_IInteractable___Fields fields;
};
struct IEnumerator_1_IInteractable_ {
  struct IEnumerator_1_IInteractable___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) UberInteractionManager_ExplosionApplications__Fields {
  struct UberInteractionManager_ExplosionApplication__Array * Applications;
  int32_t ActiveCount;
  float LowestTimePending;
};
struct UberInteractionManager_ExplosionApplications {
  struct UberInteractionManager_ExplosionApplications__Class *klass;
  struct MonitorData *monitor;
  struct UberInteractionManager_ExplosionApplications__Fields fields;
};
struct UberInteractionManager_ExplosionApplication {
  float Time;
  struct IInteractable * Apply;
  struct Vector4 Strength;
  struct Vector3 Pos;
  struct Vector3 Velocity;
  bool ForcePlay;
};
struct UberInteractionManager_ExplosionApplication__Boxed {
  struct UberInteractionManager_ExplosionApplication__Class *klass;
  struct MonitorData *monitor;
  struct UberInteractionManager_ExplosionApplication fields;
};
struct UberInteractionManager_ExplosionApplication__Array {
  struct UberInteractionManager_ExplosionApplication__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct UberInteractionManager_ExplosionApplication vector[32];
};
struct __declspec(align(8)) List_1_UberInteractionManager_ActorInfo___Fields {
  struct UberInteractionManager_ActorInfo__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_UberInteractionManager_ActorInfo_ {
  struct List_1_UberInteractionManager_ActorInfo___Class *klass;
  struct MonitorData *monitor;
  struct List_1_UberInteractionManager_ActorInfo___Fields fields;
};
struct UberInteractionManager_ActorInfo {
  struct UberInteractionActor * Actor;
  struct Vector3 Velocity;
  struct Vector3 PrevPos;
};
struct UberInteractionManager_ActorInfo__Boxed {
  struct UberInteractionManager_ActorInfo__Class *klass;
  struct MonitorData *monitor;
  struct UberInteractionManager_ActorInfo fields;
};
struct UberInteractionManager_ActorInfo__Array {
  struct UberInteractionManager_ActorInfo__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct UberInteractionManager_ActorInfo vector[32];
};
struct IEnumerator_1_UberInteractionManager_ActorInfo_ {
  struct IEnumerator_1_UberInteractionManager_ActorInfo___Class *klass;
  struct MonitorData *monitor;
};
struct ShaderAnimationTimeDriver__Fields {
  struct MonoBehaviour__Fields _;
  float GameTimeMultiplier;
  float m_time;
  bool m_isSuspended;
  enum SuspendableMask__Enum m_suspensionMask;
};
struct ShaderAnimationTimeDriver {
  struct ShaderAnimationTimeDriver__Class *klass;
  struct MonitorData *monitor;
  struct ShaderAnimationTimeDriver__Fields fields;
};
struct UberInteractionManager_ExplosionApplicationComparer {
  struct UberInteractionManager_ExplosionApplicationComparer__Class *klass;
  struct MonitorData *monitor;
};
struct UberInteractionManager_InteractionCurve__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct UberInteractionManager_InteractionCurve__StaticFields {
};
struct UberInteractionManager_InteractionCurve__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberInteractionManager_InteractionCurve__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberInteractionManager_InteractionCurve__VTable vtable;
};
struct IEnumerator_1_UberInteractionManager_InteractionCurve___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_UberInteractionManager_InteractionCurve___StaticFields {
};
struct IEnumerator_1_UberInteractionManager_InteractionCurve___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_UberInteractionManager_InteractionCurve___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_UberInteractionManager_InteractionCurve___VTable vtable;
};
struct List_1_UberInteractionManager_InteractionCurve___VTable {
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
struct List_1_UberInteractionManager_InteractionCurve___StaticFields {
  struct UberInteractionManager_InteractionCurve__Array * _emptyArray;
};
struct List_1_UberInteractionManager_InteractionCurve___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_UberInteractionManager_InteractionCurve___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_UberInteractionManager_InteractionCurve___VTable vtable;
};
struct IEnumerator_1_UberInteractionActor___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_UberInteractionActor___StaticFields {
};
struct IEnumerator_1_UberInteractionActor___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_UberInteractionActor___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_UberInteractionActor___VTable vtable;
};
struct List_1_UberInteractionActor___VTable {
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
struct List_1_UberInteractionActor___StaticFields {
  struct UberInteractionActor__Array * _emptyArray;
};
struct List_1_UberInteractionActor___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_UberInteractionActor___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_UberInteractionActor___VTable vtable;
};
struct IInteractable__VTable {
  VirtualInvokeData SetInteraction;
  VirtualInvokeData RemoveInteraction;
  VirtualInvokeData DoesOverlap;
  VirtualInvokeData GetPosition;
  VirtualInvokeData GetExplodePoint;
  VirtualInvokeData MaxRadius;
  VirtualInvokeData OnRegistered;
  VirtualInvokeData IsWater;
  VirtualInvokeData get_Index;
  VirtualInvokeData set_Index;
  VirtualInvokeData get_IsRegistered;
  VirtualInvokeData set_IsRegistered;
  VirtualInvokeData get_Bounds;
  VirtualInvokeData get_IsStatic;
};
struct IInteractable__StaticFields {
};
struct IInteractable__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IInteractable__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IInteractable__VTable vtable;
};
struct UberInteractionManager_InteractionInfo__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct UberInteractionManager_InteractionInfo__StaticFields {
};
struct UberInteractionManager_InteractionInfo__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberInteractionManager_InteractionInfo__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberInteractionManager_InteractionInfo__VTable vtable;
};
struct UberInteractionManagerAccelerator_CellInteractionData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct UberInteractionManagerAccelerator_CellInteractionData__StaticFields {
};
struct UberInteractionManagerAccelerator_CellInteractionData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberInteractionManagerAccelerator_CellInteractionData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberInteractionManagerAccelerator_CellInteractionData__VTable vtable;
};
struct UberInteractionManagerAccelerator_Cell__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct UberInteractionManagerAccelerator_Cell__StaticFields {
};
struct UberInteractionManagerAccelerator_Cell__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberInteractionManagerAccelerator_Cell__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberInteractionManagerAccelerator_Cell__VTable vtable;
};
struct UberInteractionManagerAccelerator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
}