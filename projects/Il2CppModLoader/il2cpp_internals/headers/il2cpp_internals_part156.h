namespace app {
struct LightmapsMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum LightmapsMode__Enum value;
};
struct __declspec(align(8)) SupportedRenderingFeatures__Fields {
  enum SupportedRenderingFeatures_ReflectionProbeSupportFlags__Enum _reflectionProbeSupportFlags_k__BackingField;
  enum SupportedRenderingFeatures_LightmapMixedBakeMode__Enum _defaultMixedLightingMode_k__BackingField;
  enum SupportedRenderingFeatures_LightmapMixedBakeMode__Enum _supportedMixedLightingModes_k__BackingField;
  enum LightmapBakeType__Enum _supportedLightmapBakeTypes_k__BackingField;
  enum LightmapsMode__Enum _supportedLightmapsModes_k__BackingField;
  bool _rendererSupportsLightProbeProxyVolumes_k__BackingField;
  bool _rendererSupportsMotionVectors_k__BackingField;
  bool _rendererSupportsReceiveShadows_k__BackingField;
  bool _rendererSupportsReflectionProbes_k__BackingField;
  bool _rendererSupportsRendererPriority_k__BackingField;
  bool _rendererOverridesEnvironmentLighting_k__BackingField;
  bool _rendererOverridesFog_k__BackingField;
  bool _rendererOverridesOtherLightingSettings_k__BackingField;
};
struct SupportedRenderingFeatures {
  struct SupportedRenderingFeatures__Class *klass;
  struct MonitorData *monitor;
  struct SupportedRenderingFeatures__Fields fields;
};
struct SupportedRenderingFeatures__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SupportedRenderingFeatures__StaticFields {
  struct SupportedRenderingFeatures * s_Active;
};
struct SupportedRenderingFeatures__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SupportedRenderingFeatures__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SupportedRenderingFeatures__VTable vtable;
};

struct __declspec(align(8)) List_1_UnityEngine_GameObject___Fields {
  struct GameObject__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_UnityEngine_GameObject_ {
  struct List_1_UnityEngine_GameObject___Class *klass;
  struct MonitorData *monitor;
  struct List_1_UnityEngine_GameObject___Fields fields;
};
struct IEnumerator_1_UnityEngine_GameObject_ {
  struct IEnumerator_1_UnityEngine_GameObject___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_UnityEngine_GameObject___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_UnityEngine_GameObject___StaticFields {
};
struct IEnumerator_1_UnityEngine_GameObject___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_UnityEngine_GameObject___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_UnityEngine_GameObject___VTable vtable;
};
struct List_1_UnityEngine_GameObject___VTable {
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
struct List_1_UnityEngine_GameObject___StaticFields {
  struct GameObject__Array * _emptyArray;
};
struct List_1_UnityEngine_GameObject___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_UnityEngine_GameObject___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_UnityEngine_GameObject___VTable vtable;
};

enum LocalPhysicsMode__Enum : int32_t {
  LocalPhysicsMode__Enum_None = 0,
  LocalPhysicsMode__Enum_Physics2D = 1,
  LocalPhysicsMode__Enum_Physics3D = 2,
};
struct LocalPhysicsMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum LocalPhysicsMode__Enum value;
};
struct CreateSceneParameters {
  enum LocalPhysicsMode__Enum m_LocalPhysicsMode;
};
struct CreateSceneParameters__Boxed {
  struct CreateSceneParameters__Class *klass;
  struct MonitorData *monitor;
  struct CreateSceneParameters fields;
};
struct CreateSceneParameters__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CreateSceneParameters__StaticFields {
};
struct CreateSceneParameters__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CreateSceneParameters__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CreateSceneParameters__VTable vtable;
};

enum UnloadSceneOptions__Enum : int32_t {
  UnloadSceneOptions__Enum_None = 0,
  UnloadSceneOptions__Enum_UnloadAllEmbeddedSceneObjects = 1,
};
struct UnloadSceneOptions__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum UnloadSceneOptions__Enum value;
};

enum LoadSceneMode__Enum : int32_t {
  LoadSceneMode__Enum_Single = 0,
  LoadSceneMode__Enum_Additive = 1,
};
struct LoadSceneMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum LoadSceneMode__Enum value;
};
struct LoadSceneParameters {
  enum LoadSceneMode__Enum m_LoadSceneMode;
  enum LocalPhysicsMode__Enum m_LocalPhysicsMode;
};
struct LoadSceneParameters__Boxed {
  struct LoadSceneParameters__Class *klass;
  struct MonitorData *monitor;
  struct LoadSceneParameters fields;
};
struct LoadSceneParameters__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LoadSceneParameters__StaticFields {
};
struct LoadSceneParameters__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LoadSceneParameters__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LoadSceneParameters__VTable vtable;
};

struct UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_LoadSceneMode___Fields {
  struct MulticastDelegate__Fields _;
};
struct UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_LoadSceneMode_ {
  struct UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_LoadSceneMode___Class *klass;
  struct MonitorData *monitor;
  struct UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_LoadSceneMode___Fields fields;
};
struct UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_LoadSceneMode___VTable {
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
struct UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_LoadSceneMode___StaticFields {
};
struct UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_LoadSceneMode___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_LoadSceneMode___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_LoadSceneMode___VTable vtable;
};

struct UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___Fields {
  struct MulticastDelegate__Fields _;
};
struct UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ {
  struct UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___Class *klass;
  struct MonitorData *monitor;
  struct UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___Fields fields;
};
struct UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___VTable {
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
struct UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___StaticFields {
};
struct UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___VTable vtable;
};

struct ShaderPassName {
  int32_t m_NameIndex;
};
struct ShaderPassName__Boxed {
  struct ShaderPassName__Class *klass;
  struct MonitorData *monitor;
  struct ShaderPassName fields;
};
struct ShaderPassName__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ShaderPassName__StaticFields {
};
struct ShaderPassName__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShaderPassName__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShaderPassName__VTable vtable;
};

struct CullResults {
  struct List_1_UnityEngine_Experimental_Rendering_VisibleLight_ * visibleLights;
  struct List_1_UnityEngine_Experimental_Rendering_VisibleLight_ * visibleOffscreenVertexLights;
  struct List_1_UnityEngine_Experimental_Rendering_VisibleReflectionProbe_ * visibleReflectionProbes;
  struct RendererCullingCategoryResults__Array * visibleRendererCategories;
  struct Action_1_UnityEngine_Experimental_Rendering_RendererCullingCategoryResults_ * onRendererCategoriesReady;
  struct FilterResults visibleRenderers;
  void * cullResults;
};
struct CullResults__Boxed {
  struct CullResults__Class *klass;
  struct MonitorData *monitor;
  struct CullResults fields;
};
struct __declspec(align(8)) List_1_UnityEngine_Experimental_Rendering_VisibleLight___Fields {
  struct VisibleLight__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_UnityEngine_Experimental_Rendering_VisibleLight_ {
  struct List_1_UnityEngine_Experimental_Rendering_VisibleLight___Class *klass;
  struct MonitorData *monitor;
  struct List_1_UnityEngine_Experimental_Rendering_VisibleLight___Fields fields;
};
enum VisibleLightFlags__Enum : int32_t {
  VisibleLightFlags__Enum_None = 0,
  VisibleLightFlags__Enum_IntersectsNearPlane = 1,
  VisibleLightFlags__Enum_IntersectsFarPlane = 2,
};
struct VisibleLightFlags__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum VisibleLightFlags__Enum value;
};
struct VisibleLight {
  enum LightType__Enum lightType;
  struct Color finalColor;
  struct Rect screenRect;
  struct Matrix4x4 localToWorld;
  float range;
  float spotAngle;
  int32_t instanceId;
  enum VisibleLightFlags__Enum flags;
};
struct VisibleLight__Boxed {
  struct VisibleLight__Class *klass;
  struct MonitorData *monitor;
  struct VisibleLight fields;
};
struct VisibleLight__Array {
  struct VisibleLight__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct VisibleLight vector[32];
};
struct IEnumerator_1_UnityEngine_Experimental_Rendering_VisibleLight_ {
  struct IEnumerator_1_UnityEngine_Experimental_Rendering_VisibleLight___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_UnityEngine_Experimental_Rendering_VisibleReflectionProbe___Fields {
  struct VisibleReflectionProbe__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_UnityEngine_Experimental_Rendering_VisibleReflectionProbe_ {
  struct List_1_UnityEngine_Experimental_Rendering_VisibleReflectionProbe___Class *klass;
  struct MonitorData *monitor;
  struct List_1_UnityEngine_Experimental_Rendering_VisibleReflectionProbe___Fields fields;
};
struct VisibleReflectionProbe {
  struct Bounds bounds;
  struct Matrix4x4 localToWorld;
  struct Vector4 hdr;
  struct Vector3 center;
  float blendDistance;
  int32_t importance;
  int32_t boxProjection;
  int32_t instanceId;
  int32_t textureId;
};
struct VisibleReflectionProbe__Boxed {
  struct VisibleReflectionProbe__Class *klass;
  struct MonitorData *monitor;
  struct VisibleReflectionProbe fields;
};
struct VisibleReflectionProbe__Array {
  struct VisibleReflectionProbe__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct VisibleReflectionProbe vector[32];
};
struct IEnumerator_1_UnityEngine_Experimental_Rendering_VisibleReflectionProbe_ {
  struct IEnumerator_1_UnityEngine_Experimental_Rendering_VisibleReflectionProbe___Class *klass;
  struct MonitorData *monitor;
};
struct RendererCullingCategoryResults {
  int32_t uniqueCount;
  int32_t missedCount;
  struct RendererCullingCategoryResults_Slice__Array * slices;
};
struct RendererCullingCategoryResults__Boxed {
  struct RendererCullingCategoryResults__Class *klass;
  struct MonitorData *monitor;
  struct RendererCullingCategoryResults fields;
};
struct RendererCullingCategoryResults__Array {
  struct RendererCullingCategoryResults__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct RendererCullingCategoryResults vector[32];
};
struct RendererCullingCategoryResults_Slice {
  int32_t count;
  struct Int32__Array * ids;
};
struct RendererCullingCategoryResults_Slice__Boxed {
  struct RendererCullingCategoryResults_Slice__Class *klass;
  struct MonitorData *monitor;
  struct RendererCullingCategoryResults_Slice fields;
};
struct RendererCullingCategoryResults_Slice__Array {
  struct RendererCullingCategoryResults_Slice__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct RendererCullingCategoryResults_Slice vector[32];
};
struct Action_1_UnityEngine_Experimental_Rendering_RendererCullingCategoryResults___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_UnityEngine_Experimental_Rendering_RendererCullingCategoryResults_ {
  struct Action_1_UnityEngine_Experimental_Rendering_RendererCullingCategoryResults___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_UnityEngine_Experimental_Rendering_RendererCullingCategoryResults___Fields fields;
};
struct VisibleLight__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct VisibleLight__StaticFields {
};
struct VisibleLight__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VisibleLight__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VisibleLight__VTable vtable;
};
struct IEnumerator_1_UnityEngine_Experimental_Rendering_VisibleLight___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_UnityEngine_Experimental_Rendering_VisibleLight___StaticFields {
};
struct IEnumerator_1_UnityEngine_Experimental_Rendering_VisibleLight___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_UnityEngine_Experimental_Rendering_VisibleLight___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_UnityEngine_Experimental_Rendering_VisibleLight___VTable vtable;
};
struct List_1_UnityEngine_Experimental_Rendering_VisibleLight___VTable {
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
struct List_1_UnityEngine_Experimental_Rendering_VisibleLight___StaticFields {
  struct VisibleLight__Array * _emptyArray;
};
struct List_1_UnityEngine_Experimental_Rendering_VisibleLight___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_UnityEngine_Experimental_Rendering_VisibleLight___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_UnityEngine_Experimental_Rendering_VisibleLight___VTable vtable;
};
struct VisibleReflectionProbe__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct VisibleReflectionProbe__StaticFields {
};
struct VisibleReflectionProbe__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VisibleReflectionProbe__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VisibleReflectionProbe__VTable vtable;
};
struct IEnumerator_1_UnityEngine_Experimental_Rendering_VisibleReflectionProbe___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_UnityEngine_Experimental_Rendering_VisibleReflectionProbe___StaticFields {
};
struct IEnumerator_1_UnityEngine_Experimental_Rendering_VisibleReflectionProbe___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_UnityEngine_Experimental_Rendering_VisibleReflectionProbe___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_UnityEngine_Experimental_Rendering_VisibleReflectionProbe___VTable vtable;
};
struct List_1_UnityEngine_Experimental_Rendering_VisibleReflectionProbe___VTable {
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
struct List_1_UnityEngine_Experimental_Rendering_VisibleReflectionProbe___StaticFields {
  struct VisibleReflectionProbe__Array * _emptyArray;
};
struct List_1_UnityEngine_Experimental_Rendering_VisibleReflectionProbe___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_UnityEngine_Experimental_Rendering_VisibleReflectionProbe___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_UnityEngine_Experimental_Rendering_VisibleReflectionProbe___VTable vtable;
};
struct RendererCullingCategoryResults_Slice__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RendererCullingCategoryResults_Slice__StaticFields {
};
struct RendererCullingCategoryResults_Slice__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RendererCullingCategoryResults_Slice__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RendererCullingCategoryResults_Slice__VTable vtable;
};
struct RendererCullingCategoryResults__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RendererCullingCategoryResults__StaticFields {
};
struct RendererCullingCategoryResults__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RendererCullingCategoryResults__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RendererCullingCategoryResults__VTable vtable;
};
struct Action_1_UnityEngine_Experimental_Rendering_RendererCullingCategoryResults___VTable {
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
struct Action_1_UnityEngine_Experimental_Rendering_RendererCullingCategoryResults___StaticFields {
};
struct Action_1_UnityEngine_Experimental_Rendering_RendererCullingCategoryResults___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_UnityEngine_Experimental_Rendering_RendererCullingCategoryResults___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_UnityEngine_Experimental_Rendering_RendererCullingCategoryResults___VTable vtable;
};
struct CullResults__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CullResults__StaticFields {
};
struct CullResults__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CullResults__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CullResults__VTable vtable;
};

struct ExtensionOfNativeClassAttribute {
  struct ExtensionOfNativeClassAttribute__Class *klass;
  struct MonitorData *monitor;
};
struct ExtensionOfNativeClassAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct ExtensionOfNativeClassAttribute__StaticFields {
};
struct ExtensionOfNativeClassAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ExtensionOfNativeClassAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ExtensionOfNativeClassAttribute__VTable vtable;
};

enum GarbageCollector_Mode__Enum : int32_t {
  GarbageCollector_Mode__Enum_Disabled = 0,
  GarbageCollector_Mode__Enum_Enabled = 1,
};
struct GarbageCollector_Mode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum GarbageCollector_Mode__Enum value;
};

struct __declspec(align(8)) MovedFromAttribute__Fields {
  struct String * _Namespace_k__BackingField;
  bool _IsInDifferentAssembly_k__BackingField;
};
struct MovedFromAttribute {
  struct MovedFromAttribute__Class *klass;
  struct MonitorData *monitor;
  struct MovedFromAttribute__Fields fields;
};
struct MovedFromAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct MovedFromAttribute__StaticFields {
};
struct MovedFromAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MovedFromAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MovedFromAttribute__VTable vtable;
};

struct __declspec(align(8)) FormerlySerializedAsAttribute__Fields {
  struct String * m_oldName;
};
struct FormerlySerializedAsAttribute {
  struct FormerlySerializedAsAttribute__Class *klass;
  struct MonitorData *monitor;
  struct FormerlySerializedAsAttribute__Fields fields;
};
struct FormerlySerializedAsAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct FormerlySerializedAsAttribute__StaticFields {
};
struct FormerlySerializedAsAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FormerlySerializedAsAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FormerlySerializedAsAttribute__VTable vtable;
};

struct __declspec(align(8)) TypeInferenceRuleAttribute__Fields {
  struct String * _rule;
};
struct TypeInferenceRuleAttribute {
  struct TypeInferenceRuleAttribute__Class *klass;
  struct MonitorData *monitor;
  struct TypeInferenceRuleAttribute__Fields fields;
};
enum TypeInferenceRules__Enum : int32_t {
  TypeInferenceRules__Enum_TypeReferencedByFirstArgument = 0,
  TypeInferenceRules__Enum_TypeReferencedBySecondArgument = 1,
  TypeInferenceRules__Enum_ArrayOfTypeReferencedByFirstArgument = 2,
  TypeInferenceRules__Enum_TypeOfFirstArgument = 3,
};
struct TypeInferenceRules__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum TypeInferenceRules__Enum value;
};
struct TypeInferenceRuleAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct TypeInferenceRuleAttribute__StaticFields {
};
struct TypeInferenceRuleAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TypeInferenceRuleAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TypeInferenceRuleAttribute__VTable vtable;
};

struct GenericStack__Fields {
  struct Stack__Fields _;
};
struct GenericStack {
  struct GenericStack__Class *klass;
  struct MonitorData *monitor;
  struct GenericStack__Fields fields;
};
struct GenericStack__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CopyTo;
  VirtualInvokeData get_Count;
  VirtualInvokeData get_SyncRoot;
  VirtualInvokeData get_IsSynchronized;
  VirtualInvokeData GetEnumerator;
  VirtualInvokeData Clone;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData get_IsSynchronized_1;
  VirtualInvokeData get_SyncRoot_1;
  VirtualInvokeData Clear;
  VirtualInvokeData Clone_1;
  VirtualInvokeData CopyTo_1;
  VirtualInvokeData GetEnumerator_1;
  VirtualInvokeData Peek;
  VirtualInvokeData Pop;
  VirtualInvokeData Push;
  VirtualInvokeData ToArray;
};
struct GenericStack__StaticFields {
};
struct GenericStack__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GenericStack__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GenericStack__VTable vtable;
};

enum SpeechError__Enum : int32_t {
  SpeechError__Enum_NoError = 0,
  SpeechError__Enum_TopicLanguageNotSupported = 1,
  SpeechError__Enum_GrammarLanguageMismatch = 2,
  SpeechError__Enum_GrammarCompilationFailure = 3,
  SpeechError__Enum_AudioQualityFailure = 4,
  SpeechError__Enum_PauseLimitExceeded = 5,
  SpeechError__Enum_TimeoutExceeded = 6,
  SpeechError__Enum_NetworkFailure = 7,
  SpeechError__Enum_MicrophoneUnavailable = 8,
  SpeechError__Enum_UnknownError = 9,
};
struct SpeechError__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SpeechError__Enum value;
};

enum SpeechSystemStatus__Enum : int32_t {
  SpeechSystemStatus__Enum_Stopped = 0,
  SpeechSystemStatus__Enum_Running = 1,
  SpeechSystemStatus__Enum_Failed = 2,
};
struct SpeechSystemStatus__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SpeechSystemStatus__Enum value;
};

struct PhraseRecognitionSystem_ErrorDelegate__Fields {
  struct MulticastDelegate__Fields _;
};
struct PhraseRecognitionSystem_ErrorDelegate {
  struct PhraseRecognitionSystem_ErrorDelegate__Class *klass;
  struct MonitorData *monitor;
  struct PhraseRecognitionSystem_ErrorDelegate__Fields fields;
};
struct PhraseRecognitionSystem_ErrorDelegate__VTable {
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
struct PhraseRecognitionSystem_ErrorDelegate__StaticFields {
};
struct PhraseRecognitionSystem_ErrorDelegate__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PhraseRecognitionSystem_ErrorDelegate__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PhraseRecognitionSystem_ErrorDelegate__VTable vtable;
};

struct PhraseRecognitionSystem_StatusDelegate__Fields {
  struct MulticastDelegate__Fields _;
};
struct PhraseRecognitionSystem_StatusDelegate {
  struct PhraseRecognitionSystem_StatusDelegate__Class *klass;
  struct MonitorData *monitor;
  struct PhraseRecognitionSystem_StatusDelegate__Fields fields;
};
struct PhraseRecognitionSystem_StatusDelegate__VTable {
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
struct PhraseRecognitionSystem_StatusDelegate__StaticFields {
};
struct PhraseRecognitionSystem_StatusDelegate__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PhraseRecognitionSystem_StatusDelegate__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PhraseRecognitionSystem_StatusDelegate__VTable vtable;
};

struct __declspec(align(8)) PhraseRecognizer__Fields {
  void * m_Recognizer;
  struct PhraseRecognizer_PhraseRecognizedDelegate * OnPhraseRecognized;
};
struct PhraseRecognizer {
  struct PhraseRecognizer__Class *klass;
  struct MonitorData *monitor;
  struct PhraseRecognizer__Fields fields;
};
struct PhraseRecognizer_PhraseRecognizedDelegate__Fields {
  struct MulticastDelegate__Fields _;
};
struct PhraseRecognizer_PhraseRecognizedDelegate {
  struct PhraseRecognizer_PhraseRecognizedDelegate__Class *klass;
  struct MonitorData *monitor;
  struct PhraseRecognizer_PhraseRecognizedDelegate__Fields fields;
};
enum ConfidenceLevel__Enum : int32_t {
  ConfidenceLevel__Enum_High = 0,
  ConfidenceLevel__Enum_Medium = 1,
  ConfidenceLevel__Enum_Low = 2,
  ConfidenceLevel__Enum_Rejected = 3,
};
struct ConfidenceLevel__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ConfidenceLevel__Enum value;
};
struct PhraseRecognizedEventArgs {
  enum ConfidenceLevel__Enum confidence;
  struct SemanticMeaning__Array * semanticMeanings;
  struct String * text;
  struct DateTime phraseStartTime;
  struct TimeSpan phraseDuration;
};
struct PhraseRecognizedEventArgs__Boxed {
  struct PhraseRecognizedEventArgs__Class *klass;
  struct MonitorData *monitor;
  struct PhraseRecognizedEventArgs fields;
};
struct SemanticMeaning {
  struct String * key;
  struct String__Array * values;
};
struct SemanticMeaning__Boxed {
  struct SemanticMeaning__Class *klass;
  struct MonitorData *monitor;
  struct SemanticMeaning fields;
};
struct SemanticMeaning__Array {
  struct SemanticMeaning__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct SemanticMeaning vector[32];
};
struct SemanticMeaning__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};}