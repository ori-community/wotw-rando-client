namespace app {
struct UberGhostTrail {
  struct UberGhostTrail__Class *klass;
  struct MonitorData *monitor;
  struct UberGhostTrail__Fields fields;
};
struct SpriteAnimator__Fields {
  struct BaseAnimator__Fields _;
  bool HideWhenNotPlaying;
  bool UseSpriteSpaceUvs;
  struct AnimationMeshingSettings * MeshSettings;
  struct AtlasSpriteTextureBinder * m_binder;
  bool m_useSpriteSpaceUvs;
  struct Renderer * m_renderer;
  bool m_editorEnabled;
  struct Mesh * m_mesh;
  struct TextureAnimation * DefaultAnimation;
  struct GameObject * DestroyTargetOnAnimationEnd;
  struct TextureAnimator * m_animator;
  struct SoundProvider * AnimationStartSound;
  struct Action * OnAnimationEndEvent;
  struct ActionMethod * AnimationEndAction;
  float PlaybackTime;
  struct MeshFilter * m_meshFilter;
  bool _HasAnimationEndedTriggered_k__BackingField;
  float m_hideCooldown;
  struct AtlasSpriteTexture * m_currentAtlasSpriteTexture;
  float m_lastTime;
  struct TextureAnimation * m_lastAnimation;
};
struct SpriteAnimator {
  struct SpriteAnimator__Class *klass;
  struct MonitorData *monitor;
  struct SpriteAnimator__Fields fields;
};
struct UberGhostTrailMeshUpdate__Fields {
  struct MonoBehaviour__Fields _;
  struct Renderer * m_targetRenderer;
  struct GameObject * m_animatorTarget;
  struct Vector3__Array * m_vertices;
  struct Vector2__Array * m_uv2;
  struct Vector2__Array * m_mainUvs;
  struct Color32__Array * m_colors;
  struct Int32__Array__Array * m_triangles;
  struct Material__Array * m_materials;
  struct Material__Array__Array * m_setMaterials;
  struct UberGhostTrailMeshUpdate_Quad__Array * m_quads;
  struct Boolean__Array * m_active;
  struct List_1_UberGhostTrailMeshUpdate_TextureUsage_ * m_textures;
  struct Dictionary_2_System_Int32_UberGhostTrailMeshUpdate_TextureInfo_ * m_instToTex;
  struct Mesh * m_trailMesh;
  float m_lastTime;
  struct AnimationCurve * m_scaleCurve;
  struct AnimationCurve * m_alphaCurve;
  struct Color32 m_col;
  struct Vector2 m_constForce;
  struct Vector2 m_localConstForce;
  struct Vector2 m_startSpeed;
  struct Vector2 m_startRandomSpeed;
  struct Vector2 m_localStartSpeed;
  struct Vector2 m_localRandomStartSpeed;
  struct Quaternion m_lastRot;
  struct Vector4 m_atlasSettings;
  int32_t m_currentSize;
  int32_t m_materialSize;
  struct UberGhostTrail * GhostTarget;
  struct Renderer * m_renderer;
  struct MeshFilter * m_meshFilter;
  float m_destroyTime;
  bool m_targetIsSpriteAnim;
  int32_t m_updateCount;
  float m_lastZ;
  int32_t m_quadCount;
  int32_t m_lastIndex;
  float m_curTime;
  int32_t m_posFrame;
  bool _Visible_k__BackingField;
};
struct UberGhostTrailMeshUpdate {
  struct UberGhostTrailMeshUpdate__Class *klass;
  struct MonitorData *monitor;
  struct UberGhostTrailMeshUpdate__Fields fields;
};
struct Material__Array__Array {
  struct Material__Array__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Material__Array * vector[32];
};
struct UberGhostTrailMeshUpdate_Quad {
  float X;
  float Y;
  float Vx;
  float Vy;
  struct Vector2 Vert1;
  struct Vector2 Vert2;
  struct Vector2 Vert3;
  struct Vector2 Vert4;
  float UvX;
  float UvY;
  float UvZ;
  float UvW;
  bool Flipped;
  float EmissionTime;
  int32_t Texture;
};
struct UberGhostTrailMeshUpdate_Quad__Boxed {
  struct UberGhostTrailMeshUpdate_Quad__Class *klass;
  struct MonitorData *monitor;
  struct UberGhostTrailMeshUpdate_Quad fields;
};
struct UberGhostTrailMeshUpdate_Quad__Array {
  struct UberGhostTrailMeshUpdate_Quad__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct UberGhostTrailMeshUpdate_Quad vector[32];
};
struct __declspec(align(8)) List_1_UberGhostTrailMeshUpdate_TextureUsage___Fields {
  struct UberGhostTrailMeshUpdate_TextureUsage__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_UberGhostTrailMeshUpdate_TextureUsage_ {
  struct List_1_UberGhostTrailMeshUpdate_TextureUsage___Class *klass;
  struct MonitorData *monitor;
  struct List_1_UberGhostTrailMeshUpdate_TextureUsage___Fields fields;
};
struct UberGhostTrailMeshUpdate_TextureUsage {
  int32_t Tex;
  int32_t Count;
  struct List_1_System_Int32_ * Quads;
};
struct UberGhostTrailMeshUpdate_TextureUsage__Boxed {
  struct UberGhostTrailMeshUpdate_TextureUsage__Class *klass;
  struct MonitorData *monitor;
  struct UberGhostTrailMeshUpdate_TextureUsage fields;
};
struct UberGhostTrailMeshUpdate_TextureUsage__Array {
  struct UberGhostTrailMeshUpdate_TextureUsage__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct UberGhostTrailMeshUpdate_TextureUsage vector[32];
};
struct IEnumerator_1_UberGhostTrailMeshUpdate_TextureUsage_ {
  struct IEnumerator_1_UberGhostTrailMeshUpdate_TextureUsage___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_System_Int32_UberGhostTrailMeshUpdate_TextureInfo___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_UberGhostTrailMeshUpdate_TextureInfo___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_Int32_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_UberGhostTrailMeshUpdate_TextureInfo_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UberGhostTrailMeshUpdate_TextureInfo_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_Int32_UberGhostTrailMeshUpdate_TextureInfo_ {
  struct Dictionary_2_System_Int32_UberGhostTrailMeshUpdate_TextureInfo___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_Int32_UberGhostTrailMeshUpdate_TextureInfo___Fields fields;
};
struct UberGhostTrailMeshUpdate_TextureInfo {
  struct Texture * Texture;
  struct Vector4 Screen;
  struct Vector4 ScreenMask;
};
struct UberGhostTrailMeshUpdate_TextureInfo__Boxed {
  struct UberGhostTrailMeshUpdate_TextureInfo__Class *klass;
  struct MonitorData *monitor;
  struct UberGhostTrailMeshUpdate_TextureInfo fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_UberGhostTrailMeshUpdate_TextureInfo_ {
  int32_t hashCode;
  int32_t next;
  int32_t key;
  struct UberGhostTrailMeshUpdate_TextureInfo value;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_UberGhostTrailMeshUpdate_TextureInfo___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_UberGhostTrailMeshUpdate_TextureInfo___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_UberGhostTrailMeshUpdate_TextureInfo_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_UberGhostTrailMeshUpdate_TextureInfo___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_UberGhostTrailMeshUpdate_TextureInfo___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_UberGhostTrailMeshUpdate_TextureInfo_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int32_UberGhostTrailMeshUpdate_TextureInfo___Fields {
  struct Dictionary_2_System_Int32_UberGhostTrailMeshUpdate_TextureInfo_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_UberGhostTrailMeshUpdate_TextureInfo_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_UberGhostTrailMeshUpdate_TextureInfo___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_UberGhostTrailMeshUpdate_TextureInfo___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UberGhostTrailMeshUpdate_TextureInfo___Fields {
  struct Dictionary_2_System_Int32_UberGhostTrailMeshUpdate_TextureInfo_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UberGhostTrailMeshUpdate_TextureInfo_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UberGhostTrailMeshUpdate_TextureInfo___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UberGhostTrailMeshUpdate_TextureInfo___Fields fields;
};
struct UberGhostTrailMeshUpdate_TextureInfo__Array {
  struct UberGhostTrailMeshUpdate_TextureInfo__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct UberGhostTrailMeshUpdate_TextureInfo vector[32];
};
struct IEnumerator_1_UberGhostTrailMeshUpdate_TextureInfo_ {
  struct IEnumerator_1_UberGhostTrailMeshUpdate_TextureInfo___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_UberGhostTrailMeshUpdate_TextureInfo_ {
  struct ICollection_1_UberGhostTrailMeshUpdate_TextureInfo___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_Int32_UberGhostTrailMeshUpdate_TextureInfo_ {
  int32_t key;
  struct UberGhostTrailMeshUpdate_TextureInfo value;
};
struct KeyValuePair_2_System_Int32_UberGhostTrailMeshUpdate_TextureInfo___Boxed {
  struct KeyValuePair_2_System_Int32_UberGhostTrailMeshUpdate_TextureInfo___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_Int32_UberGhostTrailMeshUpdate_TextureInfo_ fields;
};
struct KeyValuePair_2_System_Int32_UberGhostTrailMeshUpdate_TextureInfo___Array {
  struct KeyValuePair_2_System_Int32_UberGhostTrailMeshUpdate_TextureInfo___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_Int32_UberGhostTrailMeshUpdate_TextureInfo_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_UberGhostTrailMeshUpdate_TextureInfo_ {
  struct IEnumerator_1_KeyValuePair_2_System_Int32_UberGhostTrailMeshUpdate_TextureInfo___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_UberGhostTrailMeshUpdate_TextureInfo_ {
  struct IEnumerable_1_UberGhostTrailMeshUpdate_TextureInfo___Class *klass;
  struct MonitorData *monitor;
};
struct SpriteAnimator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData Awake;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData get_IsSuspended_1;
  VirtualInvokeData set_IsSuspended_1;
  VirtualInvokeData OnPoolSpawned;
  VirtualInvokeData OnPoolDespawned;
  VirtualInvokeData get_IsInScene;
  VirtualInvokeData set_IsInScene;
  VirtualInvokeData Convert;
  VirtualInvokeData OnPostTimeSlicedEnable;
  VirtualInvokeData OnFixedUpdate;
  VirtualInvokeData get_IsLooping;
  VirtualInvokeData get_CurrentTime;
  VirtualInvokeData set_CurrentTime;
  VirtualInvokeData OnPoolSpawned_1;
  VirtualInvokeData OnEnable;
  VirtualInvokeData OnDisable;
  VirtualInvokeData Play;
  VirtualInvokeData Stop;
  VirtualInvokeData Pause;
  VirtualInvokeData OnFixedUpdate_1;
  VirtualInvokeData CacheOriginals;
  VirtualInvokeData SampleValue;
  VirtualInvokeData UpdateDurationAndTimeCache;
  VirtualInvokeData OnStartPlay;
  VirtualInvokeData OnStopPlay;
  VirtualInvokeData get_Duration;
  VirtualInvokeData RestoreToOriginalState;
  VirtualInvokeData Convert_1;
  VirtualInvokeData GetExternalUberScreenMode;
  VirtualInvokeData GetUberTweakValue;
  VirtualInvokeData DoesProvideAtlas;
  VirtualInvokeData Update;
};
struct SpriteAnimator__StaticFields {
};
struct SpriteAnimator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpriteAnimator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpriteAnimator__VTable vtable;
};
struct UberGhostTrailMeshUpdate_Quad__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct UberGhostTrailMeshUpdate_Quad__StaticFields {
};
struct UberGhostTrailMeshUpdate_Quad__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberGhostTrailMeshUpdate_Quad__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberGhostTrailMeshUpdate_Quad__VTable vtable;
};
struct UberGhostTrailMeshUpdate_TextureUsage__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct UberGhostTrailMeshUpdate_TextureUsage__StaticFields {
};
struct UberGhostTrailMeshUpdate_TextureUsage__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberGhostTrailMeshUpdate_TextureUsage__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberGhostTrailMeshUpdate_TextureUsage__VTable vtable;
};
struct IEnumerator_1_UberGhostTrailMeshUpdate_TextureUsage___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_UberGhostTrailMeshUpdate_TextureUsage___StaticFields {
};
struct IEnumerator_1_UberGhostTrailMeshUpdate_TextureUsage___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_UberGhostTrailMeshUpdate_TextureUsage___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_UberGhostTrailMeshUpdate_TextureUsage___VTable vtable;
};
struct List_1_UberGhostTrailMeshUpdate_TextureUsage___VTable {
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
struct List_1_UberGhostTrailMeshUpdate_TextureUsage___StaticFields {
  struct UberGhostTrailMeshUpdate_TextureUsage__Array * _emptyArray;
};
struct List_1_UberGhostTrailMeshUpdate_TextureUsage___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_UberGhostTrailMeshUpdate_TextureUsage___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_UberGhostTrailMeshUpdate_TextureUsage___VTable vtable;
};
struct UberGhostTrailMeshUpdate_TextureInfo__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct UberGhostTrailMeshUpdate_TextureInfo__StaticFields {
};
struct UberGhostTrailMeshUpdate_TextureInfo__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberGhostTrailMeshUpdate_TextureInfo__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberGhostTrailMeshUpdate_TextureInfo__VTable vtable;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_UberGhostTrailMeshUpdate_TextureInfo___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_UberGhostTrailMeshUpdate_TextureInfo___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_UberGhostTrailMeshUpdate_TextureInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_UberGhostTrailMeshUpdate_TextureInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_UberGhostTrailMeshUpdate_TextureInfo___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_UberGhostTrailMeshUpdate_TextureInfo___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_TKey__get_IsReadOnly;
  VirtualInvokeData System_Collections_Generic_ICollection_TKey__Add;
  VirtualInvokeData System_Collections_Generic_ICollection_TKey__Clear;
  VirtualInvokeData System_Collections_Generic_ICollection_TKey__Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData System_Collections_Generic_ICollection_TKey__Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_TKey__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData get_Count_2;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_UberGhostTrailMeshUpdate_TextureInfo___StaticFields {
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_UberGhostTrailMeshUpdate_TextureInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_UberGhostTrailMeshUpdate_TextureInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_UberGhostTrailMeshUpdate_TextureInfo___VTable vtable;
};
struct IEnumerator_1_UberGhostTrailMeshUpdate_TextureInfo___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_UberGhostTrailMeshUpdate_TextureInfo___StaticFields {
};
struct IEnumerator_1_UberGhostTrailMeshUpdate_TextureInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_UberGhostTrailMeshUpdate_TextureInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_UberGhostTrailMeshUpdate_TextureInfo___VTable vtable;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UberGhostTrailMeshUpdate_TextureInfo___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_TValue__get_IsReadOnly;
  VirtualInvokeData System_Collections_Generic_ICollection_TValue__Add;
  VirtualInvokeData System_Collections_Generic_ICollection_TValue__Clear;
  VirtualInvokeData System_Collections_Generic_ICollection_TValue__Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData System_Collections_Generic_ICollection_TValue__Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_TValue__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData get_Count_2;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UberGhostTrailMeshUpdate_TextureInfo___StaticFields {
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UberGhostTrailMeshUpdate_TextureInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UberGhostTrailMeshUpdate_TextureInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UberGhostTrailMeshUpdate_TextureInfo___VTable vtable;
};
struct ICollection_1_UberGhostTrailMeshUpdate_TextureInfo___VTable {
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
};
struct ICollection_1_UberGhostTrailMeshUpdate_TextureInfo___StaticFields {
};
struct ICollection_1_UberGhostTrailMeshUpdate_TextureInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollection_1_UberGhostTrailMeshUpdate_TextureInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollection_1_UberGhostTrailMeshUpdate_TextureInfo___VTable vtable;
};
struct KeyValuePair_2_System_Int32_UberGhostTrailMeshUpdate_TextureInfo___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KeyValuePair_2_System_Int32_UberGhostTrailMeshUpdate_TextureInfo___StaticFields {
};
struct KeyValuePair_2_System_Int32_UberGhostTrailMeshUpdate_TextureInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeyValuePair_2_System_Int32_UberGhostTrailMeshUpdate_TextureInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeyValuePair_2_System_Int32_UberGhostTrailMeshUpdate_TextureInfo___VTable vtable;
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_UberGhostTrailMeshUpdate_TextureInfo___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_UberGhostTrailMeshUpdate_TextureInfo___StaticFields {
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_UberGhostTrailMeshUpdate_TextureInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_KeyValuePair_2_System_Int32_UberGhostTrailMeshUpdate_TextureInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_KeyValuePair_2_System_Int32_UberGhostTrailMeshUpdate_TextureInfo___VTable vtable;
};
struct IEnumerable_1_UberGhostTrailMeshUpdate_TextureInfo___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_UberGhostTrailMeshUpdate_TextureInfo___StaticFields {
};
struct IEnumerable_1_UberGhostTrailMeshUpdate_TextureInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_UberGhostTrailMeshUpdate_TextureInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_UberGhostTrailMeshUpdate_TextureInfo___VTable vtable;
};
struct Dictionary_2_System_Int32_UberGhostTrailMeshUpdate_TextureInfo___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Item;
  VirtualInvokeData set_Item;
  VirtualInvokeData System_Collections_Generic_IDictionary_TKey_TValue__get_Keys;
  VirtualInvokeData System_Collections_Generic_IDictionary_TKey_TValue__get_Values;
  VirtualInvokeData ContainsKey;
  VirtualInvokeData Add;
  VirtualInvokeData Remove;
  VirtualInvokeData TryGetValue;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add;
  VirtualInvokeData Clear;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TKey_TValue___GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_IDictionary_get_Item;
  VirtualInvokeData System_Collections_IDictionary_set_Item;
  VirtualInvokeData System_Collections_IDictionary_get_Keys;
  VirtualInvokeData System_Collections_IDictionary_get_Values;
  VirtualInvokeData System_Collections_IDictionary_Contains;
  VirtualInvokeData System_Collections_IDictionary_Add;
  VirtualInvokeData Clear_1;
  VirtualInvokeData System_Collections_IDictionary_get_IsReadOnly;
  VirtualInvokeData System_Collections_IDictionary_get_IsFixedSize;
  VirtualInvokeData System_Collections_IDictionary_GetEnumerator;
  VirtualInvokeData System_Collections_IDictionary_Remove;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData ContainsKey_1;
  VirtualInvokeData TryGetValue_1;
  VirtualInvokeData get_Item_1;
  VirtualInvokeData System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys;
  VirtualInvokeData System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values;
  VirtualInvokeData get_Count_2;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData OnDeserialization;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData OnDeserialization_1;
};
struct Dictionary_2_System_Int32_UberGhostTrailMeshUpdate_TextureInfo___StaticFields {
};
struct Dictionary_2_System_Int32_UberGhostTrailMeshUpdate_TextureInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_System_Int32_UberGhostTrailMeshUpdate_TextureInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_System_Int32_UberGhostTrailMeshUpdate_TextureInfo___VTable vtable;
};
struct UberGhostTrailMeshUpdate__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct UberGhostTrailMeshUpdate__StaticFields {
};
struct UberGhostTrailMeshUpdate__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberGhostTrailMeshUpdate__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberGhostTrailMeshUpdate__VTable vtable;
};
struct UberGhostTrail__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetExternalUberScreenMode;
  VirtualInvokeData GetUberTweakValue;
  VirtualInvokeData DoesProvideAtlas;
  VirtualInvokeData Update;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
};
struct UberGhostTrail__StaticFields {
  struct GameObject * s_trailParentPrefab;
};
struct UberGhostTrail__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberGhostTrail__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberGhostTrail__VTable vtable;
};

struct JumpSustainHelper__Fields {
  struct MonoBehaviour__Fields _;
  struct MessageProvider * WallJumpMessageProvider;
  struct MessageProvider * GroundJumpMessageProvider;
  int32_t m_minimumJumpsToAnalyze;
  float m_minimumHeightGain;
  float m_analysisDelay;
  float m_hintThreshold;
  bool m_analyzingWallJumps;
  bool m_sustaining;
  int32_t m_jumpCount;
  float m_sustainTime;
  float m_uselessSustainTime;
  float m_fallTime;
  float m_currentStateTime;
  float m_startY;
  float m_lastHintTime;
  struct Queue_1_System_Single_ * m_pastResults;
  struct String * m_lastResult;
  bool m_analyzingGroundJumps;
  bool m_jumpDelegateSet;
  bool m_groundSustaining;
  struct HashSet_1_UnityEngine_Vector2_ * m_recentFailedGroupJumpLocations;
  struct Vector2 m_lastGroundJumpLocation;
  float m_groundSustainTime;
};
struct JumpSustainHelper {
  struct JumpSustainHelper__Class *klass;
  struct MonitorData *monitor;
  struct JumpSustainHelper__Fields fields;
};
struct __declspec(align(8)) Queue_1_System_Single___Fields {
  struct Single__Array * _array;
  int32_t _head;
  int32_t _tail;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct Queue_1_System_Single_ {
  struct Queue_1_System_Single___Class *klass;
  struct MonitorData *monitor;
  struct Queue_1_System_Single___Fields fields;
};
struct __declspec(align(8)) HashSet_1_UnityEngine_Vector2___Fields {
  struct Int32__Array * _buckets;
  struct HashSet_1_T_Slot_UnityEngine_Vector2___Array * _slots;
  int32_t _count;
  int32_t _lastIndex;
  int32_t _freeList;
  struct IEqualityComparer_1_UnityEngine_Vector2_ * _comparer;
  int32_t _version;
  struct SerializationInfo * _siInfo;
};
struct HashSet_1_UnityEngine_Vector2_ {
  struct HashSet_1_UnityEngine_Vector2___Class *klass;
  struct MonitorData *monitor;
  struct HashSet_1_UnityEngine_Vector2___Fields fields;
};
struct HashSet_1_T_Slot_UnityEngine_Vector2_ {
  int32_t hashCode;
  int32_t next;
  struct Vector2 value;
};
struct HashSet_1_T_Slot_UnityEngine_Vector2___Boxed {
  struct HashSet_1_T_Slot_UnityEngine_Vector2___Class *klass;
  struct MonitorData *monitor;
  struct HashSet_1_T_Slot_UnityEngine_Vector2_ fields;
};
struct HashSet_1_T_Slot_UnityEngine_Vector2___Array {
  struct HashSet_1_T_Slot_UnityEngine_Vector2___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct HashSet_1_T_Slot_UnityEngine_Vector2_ vector[32];
};
struct IEqualityComparer_1_UnityEngine_Vector2_ {
  struct IEqualityComparer_1_UnityEngine_Vector2___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_UnityEngine_Vector2_ {
  struct IEnumerable_1_UnityEngine_Vector2___Class *klass;
  struct MonitorData *monitor;
};
struct Queue_1_System_Single___VTable {
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
struct Queue_1_System_Single___StaticFields {
};
struct Queue_1_System_Single___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Queue_1_System_Single___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Queue_1_System_Single___VTable vtable;
};
struct HashSet_1_T_Slot_UnityEngine_Vector2___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct HashSet_1_T_Slot_UnityEngine_Vector2___StaticFields {
};
struct HashSet_1_T_Slot_UnityEngine_Vector2___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HashSet_1_T_Slot_UnityEngine_Vector2___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HashSet_1_T_Slot_UnityEngine_Vector2___VTable vtable;
};
struct IEqualityComparer_1_UnityEngine_Vector2___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData GetHashCode;
};
struct IEqualityComparer_1_UnityEngine_Vector2___StaticFields {
};
struct IEqualityComparer_1_UnityEngine_Vector2___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEqualityComparer_1_UnityEngine_Vector2___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEqualityComparer_1_UnityEngine_Vector2___VTable vtable;
};
struct IEnumerable_1_UnityEngine_Vector2___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_UnityEngine_Vector2___StaticFields {
};
struct IEnumerable_1_UnityEngine_Vector2___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_UnityEngine_Vector2___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_UnityEngine_Vector2___VTable vtable;
};
struct HashSet_1_UnityEngine_Vector2___VTable {
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
struct HashSet_1_UnityEngine_Vector2___StaticFields {
};
struct HashSet_1_UnityEngine_Vector2___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HashSet_1_UnityEngine_Vector2___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HashSet_1_UnityEngine_Vector2___VTable vtable;
};
struct JumpSustainHelper__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct JumpSustainHelper__StaticFields {
  bool ShowDebug;
};
struct JumpSustainHelper__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct JumpSustainHelper__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct JumpSustainHelper__VTable vtable;
};

struct SwimBoostHelper__Fields {
  struct MonoBehaviour__Fields _;
  struct MessageProvider * MessageProvider;
  int32_t m_spamThreshold;
  bool m_analyzing;
  bool m_analyzingSpam;
  float m_hintTimer;
  float m_swimTime;
  int32_t m_boostPresses;
};
struct SwimBoostHelper {
  struct SwimBoostHelper__Class *klass;
  struct MonitorData *monitor;
  struct SwimBoostHelper__Fields fields;
};
struct SwimBoostHelper__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SwimBoostHelper__StaticFields {
};
struct SwimBoostHelper__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SwimBoostHelper__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SwimBoostHelper__VTable vtable;
};

enum LauncherPlantEntity_State__Enum : int32_t {
  LauncherPlantEntity_State__Enum_Opened = 0,
  LauncherPlantEntity_State__Enum_Closing = 1,
  LauncherPlantEntity_State__Enum_Closed = 2,
  LauncherPlantEntity_State__Enum_Launching = 3,
  LauncherPlantEntity_State__Enum_PostLaunch = 4,
  LauncherPlantEntity_State__Enum_LaunchDelay = 5,
  LauncherPlantEntity_State__Enum_Opening = 6,
};
struct LauncherPlantEntity_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum LauncherPlantEntity_State__Enum value;
};
struct LauncherPlantEntity__Fields {
  struct MonoBehaviour__Fields _;
  bool Controllable;
  bool UseJumpButton;
  struct Vector3 launchVelocity;
  bool randomEnemyVelocity;
  struct MessageProvider * pressJumpMessage;
  struct MessageProvider * controlAngleMessage;
  struct MessageBox * m_hintBox;
  float controlSpeed;
  float minAngle;
  float maxAngle;
  float launchReleaseRadius;
  struct MoonMath_VerletDynamicsValue * angleDynamics;
  struct PlayerInsideZoneChecker * collisionBox;
  struct Vector3 playerCatchAnchor;
  float launchDelayTime;
  struct SoftCollider * softCollider;
  float previewGravity;
  float previewMaxFallSpeed;
  struct MoonAnimator * Animator;
  struct LegacyTimelineSequence * openedTimeline;
  struct LegacyTimelineSequence * closedTimeline;
  struct LegacyTimelineSequence * swallowTimeline;
  struct LegacyTimelineSequence * launchTimeline;
  struct TimelineEventTrigger * hideTrigger;
  struct TimelineEventTrigger * releaseTrigger;
  struct FloatAnimationParameter * launchAngleParameter;
  struct Transform * characterJoint;
  struct AnimationPostprocess * touchPostprocess;
  struct ParticleSystem * ParticleSystem;
  struct LineRenderer * lineRenderer;
  float lineAlpha;
  int32_t previewStepsPerLineSegment;
  struct Transform * lineJoint;
  struct Transform * tip1;
  struct Transform * tip2;
  struct Transform * tip3;
  enum LauncherPlantEntity_State__Enum m_State;
  float m_stateTime;
  float m_launchSpeed;
  bool m_launchingPlayer;
  struct ILaunchable * m_Launchable;
  struct Collider * m_launchingCollider;
  float m_lineAlpha;
};
struct LauncherPlantEntity {
  struct LauncherPlantEntity__Class *klass;
  struct MonitorData *monitor;
  struct LauncherPlantEntity__Fields fields;
};
struct SoftCollider__Fields {
  struct MonoBehaviour__Fields _;
  struct Vector2 pushForce;
  float maxSpeed;
  struct SphereCollider * Collider;
  struct Rigidbody * Rigidbody;
  struct Action_2_UnityEngine_Collider_UnityEngine_Vector2_ * OnSoftCollisionEnter;
  struct Action_2_UnityEngine_Collider_UnityEngine_Vector2_ * OnSoftCollisionStay;
  struct Action_1_UnityEngine_Collider_ * OnSoftCollisionExit;
  struct Vector3 m_pushForce;
};
struct SoftCollider {
  struct SoftCollider__Class *klass;
  struct MonitorData *monitor;
  struct SoftCollider__Fields fields;
};
struct Action_2_UnityEngine_Collider_UnityEngine_Vector2___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_2_UnityEngine_Collider_UnityEngine_Vector2_ {
  struct Action_2_UnityEngine_Collider_UnityEngine_Vector2___Class *klass;
  struct MonitorData *monitor;
  struct Action_2_UnityEngine_Collider_UnityEngine_Vector2___Fields fields;
};
struct ILaunchable {
  struct ILaunchable__Class *klass;
  struct MonitorData *monitor;
};
struct Action_2_UnityEngine_Collider_UnityEngine_Vector2___VTable {
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