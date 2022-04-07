namespace app {
struct __declspec(align(8)) SeinNestedPrefab__Fields {
  struct SeinCharacter * Sein;
  struct GameObject * m_prefab;
  struct GameObject * m_gameObject;
};
struct SeinNestedPrefab {
  struct SeinNestedPrefab__Class *klass;
  struct MonitorData *monitor;
  struct SeinNestedPrefab__Fields fields;
};
struct SeinNestedPrefab__Array {
  struct SeinNestedPrefab__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct SeinNestedPrefab * vector[32];
};
struct __declspec(align(8)) List_1_CharacterAnimationSystem_CharacterAnimationState___Fields {
  struct CharacterAnimationSystem_CharacterAnimationState__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_CharacterAnimationSystem_CharacterAnimationState_ {
  struct List_1_CharacterAnimationSystem_CharacterAnimationState___Class *klass;
  struct MonitorData *monitor;
  struct List_1_CharacterAnimationSystem_CharacterAnimationState___Fields fields;
};
struct __declspec(align(8)) CharacterAnimationSystem_CharacterAnimationState__Fields {
  int32_t Layer;
  struct TextureAnimationWithTransitions * Animation;
  struct String * AnimationName;
  struct Func_1_Boolean_ * ConditionFunction;
  bool PlayOnce;
  struct Action * OnStopPlaying;
  struct Action * OnStartPlaying;
  bool KeepFrame;
  bool m_onStopPlayingActionInvoked;
};
struct CharacterAnimationSystem_CharacterAnimationState {
  struct CharacterAnimationSystem_CharacterAnimationState__Class *klass;
  struct MonitorData *monitor;
  struct CharacterAnimationSystem_CharacterAnimationState__Fields fields;
};
struct CharacterAnimationSystem_CharacterAnimationState__Array {
  struct CharacterAnimationSystem_CharacterAnimationState__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct CharacterAnimationSystem_CharacterAnimationState * vector[32];
};
struct IEnumerator_1_CharacterAnimationSystem_CharacterAnimationState_ {
  struct IEnumerator_1_CharacterAnimationSystem_CharacterAnimationState___Class *klass;
  struct MonitorData *monitor;
};
struct SpriteAnimatorWithTransitions__Fields {
  struct Suspendable__Fields _;
  bool UseSpriteSpaceUvs;
  bool m_useSpriteSpaceUvs;
  struct TextureAnimationWithTransitions_TextureAnimationPair * m_transition;
  struct Mesh * m_mesh;
  struct Renderer * m_renderer;
  bool m_editorEnabled;
  struct AnimationMeshingSettings * MeshSettings;
  struct AtlasSpriteTextureBinder * m_binder;
  float m_lastTime;
  struct AtlasSpriteTexture * m_lastTexture;
  struct TextureAnimationWithTransitions * DefaultAnimation;
  struct TextureAnimationWithTransitions * CurrentTextureAnimationTransitions;
  struct TextureAnimationWithTransitions * PreviousTextureAnimationTransitions;
  struct TextureAnimator * m_animator;
  bool Flip;
  bool m_isInScene;
  struct Action_1_TextureAnimation_ * OnAnimationEndEvent;
  struct Action_1_TextureAnimation_ * OnAnimationLoopEvent;
  bool m_isSuspended;
  struct MeshFilter * m_meshFilter;
};
struct SpriteAnimatorWithTransitions {
  struct SpriteAnimatorWithTransitions__Class *klass;
  struct MonitorData *monitor;
  struct SpriteAnimatorWithTransitions__Fields fields;
};
struct __declspec(align(8)) AnimationMeshingSettings__Fields {
  int32_t XDivisions;
  int32_t YDivisions;
};
struct AnimationMeshingSettings {
  struct AnimationMeshingSettings__Class *klass;
  struct MonitorData *monitor;
  struct AnimationMeshingSettings__Fields fields;
};
struct __declspec(align(8)) AtlasSpriteTextureBinder__Fields {
  struct Vector3__Array * m_vertices;
  struct Vector2__Array * m_uvs;
  struct Int32__Array * m_triangles;
  bool m_spriceSpaceuvs;
  struct Mesh * m_mesh;
  struct MeshFilter * m_lastFilter;
  int32_t m_frame;
  int32_t m_divX;
  int32_t m_divY;
  enum UberScreenMode__Enum m_lastMode;
  struct Atlas * m_lastAtlas;
  struct Renderer * m_lastRenderer;
};
struct AtlasSpriteTextureBinder {
  struct AtlasSpriteTextureBinder__Class *klass;
  struct MonitorData *monitor;
  struct AtlasSpriteTextureBinder__Fields fields;
};
struct __declspec(align(8)) TextureAnimator__Fields {
  float _SpeedMultiplier_k__BackingField;
  struct Action * OnAnimationStart;
  int32_t m_currentLoop;
  struct TextureAnimation * m_animation;
  float m_time;
};
struct TextureAnimator {
  struct TextureAnimator__Class *klass;
  struct MonitorData *monitor;
  struct TextureAnimator__Fields fields;
};
struct Action_1_TextureAnimation___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_TextureAnimation_ {
  struct Action_1_TextureAnimation___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_TextureAnimation___Fields fields;
};
struct GhostCharacterAbilitiesPlugin__Fields {
  struct IGhostRecorderPlugin__Fields _;
};
struct GhostCharacterAbilitiesPlugin {
  struct GhostCharacterAbilitiesPlugin__Class *klass;
  struct MonitorData *monitor;
  struct GhostCharacterAbilitiesPlugin__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_System_Int32_RecordableObjectPuppet___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_RecordableObjectPuppet___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_Int32_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_RecordableObjectPuppet_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_RecordableObjectPuppet_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_Int32_RecordableObjectPuppet_ {
  struct Dictionary_2_System_Int32_RecordableObjectPuppet___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_Int32_RecordableObjectPuppet___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_RecordableObjectPuppet_ {
  int32_t hashCode;
  int32_t next;
  int32_t key;
  struct RecordableObjectPuppet * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_RecordableObjectPuppet___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_RecordableObjectPuppet___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_RecordableObjectPuppet_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_RecordableObjectPuppet___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_RecordableObjectPuppet___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_RecordableObjectPuppet_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int32_RecordableObjectPuppet___Fields {
  struct Dictionary_2_System_Int32_RecordableObjectPuppet_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_RecordableObjectPuppet_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_RecordableObjectPuppet___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_RecordableObjectPuppet___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int32_RecordableObjectPuppet___Fields {
  struct Dictionary_2_System_Int32_RecordableObjectPuppet_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_RecordableObjectPuppet_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_RecordableObjectPuppet___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_RecordableObjectPuppet___Fields fields;
};
struct ICollection_1_RecordableObjectPuppet_ {
  struct ICollection_1_RecordableObjectPuppet___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_Int32_RecordableObjectPuppet_ {
  int32_t key;
  struct RecordableObjectPuppet * value;
};
struct KeyValuePair_2_System_Int32_RecordableObjectPuppet___Boxed {
  struct KeyValuePair_2_System_Int32_RecordableObjectPuppet___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_Int32_RecordableObjectPuppet_ fields;
};
struct KeyValuePair_2_System_Int32_RecordableObjectPuppet___Array {
  struct KeyValuePair_2_System_Int32_RecordableObjectPuppet___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_Int32_RecordableObjectPuppet_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_RecordableObjectPuppet_ {
  struct IEnumerator_1_KeyValuePair_2_System_Int32_RecordableObjectPuppet___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_RecordableObjectPuppet_ {
  struct IEnumerable_1_RecordableObjectPuppet___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_System_Int32_Dictionary_2_System_Int32_System_Action_1___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_Dictionary_2_System_Int32_System_Action_1___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_Int32_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Dictionary_2_System_Int32_System_Action_1_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Dictionary_2_System_Int32_System_Action_1_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_Int32_Dictionary_2_System_Int32_System_Action_1_ {
  struct Dictionary_2_System_Int32_Dictionary_2_System_Int32_System_Action_1___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_Int32_Dictionary_2_System_Int32_System_Action_1___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_Dictionary_2_System_Int32_System_Action_1_ {
  int32_t hashCode;
  int32_t next;
  int32_t key;
  struct Dictionary_2_System_Int32_System_Action_1_ * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_Dictionary_2_System_Int32_System_Action_1___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_Dictionary_2_System_Int32_System_Action_1___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_Dictionary_2_System_Int32_System_Action_1_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_Dictionary_2_System_Int32_System_Action_1___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_Dictionary_2_System_Int32_System_Action_1___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_Dictionary_2_System_Int32_System_Action_1_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_System_Int32_System_Action_1___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Action_1___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_Int32_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Action_1_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Action_1_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_Int32_System_Action_1_ {
  struct Dictionary_2_System_Int32_System_Action_1___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_Int32_System_Action_1___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Action_1_ {
  int32_t hashCode;
  int32_t next;
  int32_t key;
  struct Action_1_Single_ * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Action_1___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Action_1___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Action_1_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Action_1___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Action_1___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Action_1_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Action_1___Fields {
  struct Dictionary_2_System_Int32_System_Action_1_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Action_1_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Action_1___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Action_1___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Action_1___Fields {
  struct Dictionary_2_System_Int32_System_Action_1_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Action_1_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Action_1___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Action_1___Fields fields;
};
struct Action_1_Single___Array {
  struct Action_1_Single___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Action_1_Single_ * vector[32];
};
struct IEnumerator_1_System_Action_1__1 {
  struct IEnumerator_1_System_Action_1__1__Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_System_Action_1_ {
  struct ICollection_1_System_Action_1___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_Int32_System_Action_1_ {
  int32_t key;
  struct Action_1_Single_ * value;
};
struct KeyValuePair_2_System_Int32_System_Action_1___Boxed {
  struct KeyValuePair_2_System_Int32_System_Action_1___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_Int32_System_Action_1_ fields;
};
struct KeyValuePair_2_System_Int32_System_Action_1___Array {
  struct KeyValuePair_2_System_Int32_System_Action_1___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_Int32_System_Action_1_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_System_Action_1_ {
  struct IEnumerator_1_KeyValuePair_2_System_Int32_System_Action_1___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_System_Action_1_ {
  struct IEnumerable_1_System_Action_1___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Dictionary_2_System_Int32_System_Action_1___Fields {
  struct Dictionary_2_System_Int32_Dictionary_2_System_Int32_System_Action_1_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Dictionary_2_System_Int32_System_Action_1_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Dictionary_2_System_Int32_System_Action_1___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Dictionary_2_System_Int32_System_Action_1___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Dictionary_2_System_Int32_System_Action_1___Fields {
  struct Dictionary_2_System_Int32_Dictionary_2_System_Int32_System_Action_1_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Dictionary_2_System_Int32_System_Action_1_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Dictionary_2_System_Int32_System_Action_1___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Dictionary_2_System_Int32_System_Action_1___Fields fields;
};
struct Dictionary_2_System_Int32_System_Action_1___Array {
  struct Dictionary_2_System_Int32_System_Action_1___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_System_Int32_System_Action_1_ * vector[32];
};
struct IEnumerator_1_Dictionary_2_System_Int32_System_Action_1_ {
  struct IEnumerator_1_Dictionary_2_System_Int32_System_Action_1___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_Dictionary_2_System_Int32_System_Action_1_ {
  struct ICollection_1_Dictionary_2_System_Int32_System_Action_1___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_Int32_Dictionary_2_System_Int32_System_Action_1_ {
  int32_t key;
  struct Dictionary_2_System_Int32_System_Action_1_ * value;
};
struct KeyValuePair_2_System_Int32_Dictionary_2_System_Int32_System_Action_1___Boxed {
  struct KeyValuePair_2_System_Int32_Dictionary_2_System_Int32_System_Action_1___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_Int32_Dictionary_2_System_Int32_System_Action_1_ fields;
};
struct KeyValuePair_2_System_Int32_Dictionary_2_System_Int32_System_Action_1___Array {
  struct KeyValuePair_2_System_Int32_Dictionary_2_System_Int32_System_Action_1___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_Int32_Dictionary_2_System_Int32_System_Action_1_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_Dictionary_2_System_Int32_System_Action_1_ {
  struct IEnumerator_1_KeyValuePair_2_System_Int32_Dictionary_2_System_Int32_System_Action_1___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_Dictionary_2_System_Int32_System_Action_1_ {
  struct IEnumerable_1_Dictionary_2_System_Int32_System_Action_1___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_System_Int32_Dictionary_2_System_Int32_System_Action_1__1__Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_Dictionary_2_System_Int32_System_Action_1__1__Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_Int32_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Dictionary_2_System_Int32_System_Action_1__1 * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Dictionary_2_System_Int32_System_Action_1__1 * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_Int32_Dictionary_2_System_Int32_System_Action_1__1 {
  struct Dictionary_2_System_Int32_Dictionary_2_System_Int32_System_Action_1__1__Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_Int32_Dictionary_2_System_Int32_System_Action_1__1__Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_Dictionary_2_System_Int32_System_Action_1__1 {
  int32_t hashCode;
  int32_t next;
  int32_t key;
  struct Dictionary_2_System_Int32_System_Action_1__1 * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_Dictionary_2_System_Int32_System_Action_1__1__Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_Dictionary_2_System_Int32_System_Action_1__1__Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_Dictionary_2_System_Int32_System_Action_1__1 fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_Dictionary_2_System_Int32_System_Action_1__1__Array {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_Dictionary_2_System_Int32_System_Action_1__1__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_Dictionary_2_System_Int32_System_Action_1__1 vector[32];
};
struct __declspec(align(8)) Dictionary_2_System_Int32_System_Action_1__1__Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Action_1__1__Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_Int32_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Action_1__1 * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Action_1__1 * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_Int32_System_Action_1__1 {
  struct Dictionary_2_System_Int32_System_Action_1__1__Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_Int32_System_Action_1__1__Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Action_1__1 {
  int32_t hashCode;
  int32_t next;
  int32_t key;
  struct Action_1_Int32_ * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Action_1__1__Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Action_1__1__Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Action_1__1 fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Action_1__1__Array {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Action_1__1__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Action_1__1 vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Action_1__1__Fields {
  struct Dictionary_2_System_Int32_System_Action_1__1 * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Action_1__1 {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Action_1__1__Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Action_1__1__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Action_1__1__Fields {
  struct Dictionary_2_System_Int32_System_Action_1__1 * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Action_1__1 {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Action_1__1__Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Action_1__1__Fields fields;
};
struct Action_1_Int32___Array {
  struct Action_1_Int32___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Action_1_Int32_ * vector[32];
};
struct IEnumerator_1_System_Action_1__2 {
  struct IEnumerator_1_System_Action_1__2__Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_System_Action_1__1 {
  struct ICollection_1_System_Action_1__1__Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_Int32_System_Action_1__1 {
  int32_t key;
  struct Action_1_Int32_ * value;
};
struct KeyValuePair_2_System_Int32_System_Action_1__1__Boxed {
  struct KeyValuePair_2_System_Int32_System_Action_1__1__Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_Int32_System_Action_1__1 fields;
};
struct KeyValuePair_2_System_Int32_System_Action_1__1__Array {
  struct KeyValuePair_2_System_Int32_System_Action_1__1__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_Int32_System_Action_1__1 vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_System_Action_1__1 {
  struct IEnumerator_1_KeyValuePair_2_System_Int32_System_Action_1__1__Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_System_Action_1__1 {
  struct IEnumerable_1_System_Action_1__1__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Dictionary_2_System_Int32_System_Action_1__1__Fields {
  struct Dictionary_2_System_Int32_Dictionary_2_System_Int32_System_Action_1__1 * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Dictionary_2_System_Int32_System_Action_1__1 {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Dictionary_2_System_Int32_System_Action_1__1__Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Dictionary_2_System_Int32_System_Action_1__1__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Dictionary_2_System_Int32_System_Action_1__1__Fields {
  struct Dictionary_2_System_Int32_Dictionary_2_System_Int32_System_Action_1__1 * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Dictionary_2_System_Int32_System_Action_1__1 {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Dictionary_2_System_Int32_System_Action_1__1__Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Dictionary_2_System_Int32_System_Action_1__1__Fields fields;
};
struct Dictionary_2_System_Int32_System_Action_1__1__Array {
  struct Dictionary_2_System_Int32_System_Action_1__1__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_System_Int32_System_Action_1__1 * vector[32];
};
struct IEnumerator_1_Dictionary_2_System_Int32_System_Action_1__1 {
  struct IEnumerator_1_Dictionary_2_System_Int32_System_Action_1__1__Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_Dictionary_2_System_Int32_System_Action_1__1 {
  struct ICollection_1_Dictionary_2_System_Int32_System_Action_1__1__Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_Int32_Dictionary_2_System_Int32_System_Action_1__1 {
  int32_t key;
  struct Dictionary_2_System_Int32_System_Action_1__1 * value;
};
struct KeyValuePair_2_System_Int32_Dictionary_2_System_Int32_System_Action_1__1__Boxed {
  struct KeyValuePair_2_System_Int32_Dictionary_2_System_Int32_System_Action_1__1__Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_Int32_Dictionary_2_System_Int32_System_Action_1__1 fields;
};
struct KeyValuePair_2_System_Int32_Dictionary_2_System_Int32_System_Action_1__1__Array {
  struct KeyValuePair_2_System_Int32_Dictionary_2_System_Int32_System_Action_1__1__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_Int32_Dictionary_2_System_Int32_System_Action_1__1 vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_Dictionary_2_System_Int32_System_Action_1__1 {
  struct IEnumerator_1_KeyValuePair_2_System_Int32_Dictionary_2_System_Int32_System_Action_1__1__Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_Dictionary_2_System_Int32_System_Action_1__1 {
  struct IEnumerable_1_Dictionary_2_System_Int32_System_Action_1__1__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_System_Int32_Dictionary_2_System_Int32_System_Action_1__2__Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_Dictionary_2_System_Int32_System_Action_1__2__Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_Int32_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Dictionary_2_System_Int32_System_Action_1__2 * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Dictionary_2_System_Int32_System_Action_1__2 * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_Int32_Dictionary_2_System_Int32_System_Action_1__2 {
  struct Dictionary_2_System_Int32_Dictionary_2_System_Int32_System_Action_1__2__Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_Int32_Dictionary_2_System_Int32_System_Action_1__2__Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_Dictionary_2_System_Int32_System_Action_1__2 {
  int32_t hashCode;
  int32_t next;
  int32_t key;
  struct Dictionary_2_System_Int32_System_Action_1__2 * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_Dictionary_2_System_Int32_System_Action_1__2__Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_Dictionary_2_System_Int32_System_Action_1__2__Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_Dictionary_2_System_Int32_System_Action_1__2 fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_Dictionary_2_System_Int32_System_Action_1__2__Array {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_Dictionary_2_System_Int32_System_Action_1__2__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_Dictionary_2_System_Int32_System_Action_1__2 vector[32];
};
struct __declspec(align(8)) Dictionary_2_System_Int32_System_Action_1__2__Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Action_1__2__Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_Int32_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Action_1__2 * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Action_1__2 * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_Int32_System_Action_1__2 {
  struct Dictionary_2_System_Int32_System_Action_1__2__Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_Int32_System_Action_1__2__Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Action_1__2 {
  int32_t hashCode;
  int32_t next;
  int32_t key;
  struct Action_1_Boolean_ * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Action_1__2__Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Action_1__2__Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Action_1__2 fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Action_1__2__Array {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Action_1__2__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Action_1__2 vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Action_1__2__Fields {
  struct Dictionary_2_System_Int32_System_Action_1__2 * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Action_1__2 {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Action_1__2__Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Action_1__2__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Action_1__2__Fields {
  struct Dictionary_2_System_Int32_System_Action_1__2 * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Action_1__2 {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Action_1__2__Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Action_1__2__Fields fields;
};
struct Action_1_Boolean___Array {
  struct Action_1_Boolean___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Action_1_Boolean_ * vector[32];
};
struct IEnumerator_1_System_Action_1__3 {
  struct IEnumerator_1_System_Action_1__3__Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_System_Action_1__2 {
  struct ICollection_1_System_Action_1__2__Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_Int32_System_Action_1__2 {
  int32_t key;
  struct Action_1_Boolean_ * value;
};
struct KeyValuePair_2_System_Int32_System_Action_1__2__Boxed {
  struct KeyValuePair_2_System_Int32_System_Action_1__2__Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_Int32_System_Action_1__2 fields;
};
struct KeyValuePair_2_System_Int32_System_Action_1__2__Array {
  struct KeyValuePair_2_System_Int32_System_Action_1__2__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_Int32_System_Action_1__2 vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_System_Action_1__2 {
  struct IEnumerator_1_KeyValuePair_2_System_Int32_System_Action_1__2__Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_System_Action_1__2 {
  struct IEnumerable_1_System_Action_1__2__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Dictionary_2_System_Int32_System_Action_1__2__Fields {
  struct Dictionary_2_System_Int32_Dictionary_2_System_Int32_System_Action_1__2 * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Dictionary_2_System_Int32_System_Action_1__2 {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Dictionary_2_System_Int32_System_Action_1__2__Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Dictionary_2_System_Int32_System_Action_1__2__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Dictionary_2_System_Int32_System_Action_1__2__Fields {
  struct Dictionary_2_System_Int32_Dictionary_2_System_Int32_System_Action_1__2 * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Dictionary_2_System_Int32_System_Action_1__2 {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Dictionary_2_System_Int32_System_Action_1__2__Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Dictionary_2_System_Int32_System_Action_1__2__Fields fields;
};
struct Dictionary_2_System_Int32_System_Action_1__2__Array {
  struct Dictionary_2_System_Int32_System_Action_1__2__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_System_Int32_System_Action_1__2 * vector[32];
};
struct IEnumerator_1_Dictionary_2_System_Int32_System_Action_1__2 {
  struct IEnumerator_1_Dictionary_2_System_Int32_System_Action_1__2__Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_Dictionary_2_System_Int32_System_Action_1__2 {
  struct ICollection_1_Dictionary_2_System_Int32_System_Action_1__2__Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_Int32_Dictionary_2_System_Int32_System_Action_1__2 {
  int32_t key;
  struct Dictionary_2_System_Int32_System_Action_1__2 * value;
};
struct KeyValuePair_2_System_Int32_Dictionary_2_System_Int32_System_Action_1__2__Boxed {
  struct KeyValuePair_2_System_Int32_Dictionary_2_System_Int32_System_Action_1__2__Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_Int32_Dictionary_2_System_Int32_System_Action_1__2 fields;
};
struct KeyValuePair_2_System_Int32_Dictionary_2_System_Int32_System_Action_1__2__Array {
  struct KeyValuePair_2_System_Int32_Dictionary_2_System_Int32_System_Action_1__2__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_Int32_Dictionary_2_System_Int32_System_Action_1__2 vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_Dictionary_2_System_Int32_System_Action_1__2 {
  struct IEnumerator_1_KeyValuePair_2_System_Int32_Dictionary_2_System_Int32_System_Action_1__2__Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_Dictionary_2_System_Int32_System_Action_1__2 {
  struct IEnumerable_1_Dictionary_2_System_Int32_System_Action_1__2__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) GenericPuppet_GhostGenericResourcesReflectionCache__Fields {
  struct Dictionary_2_System_Int32_GhostGenericResourceAttribute_ * m_cache;
};
struct GenericPuppet_GhostGenericResourcesReflectionCache {
  struct GenericPuppet_GhostGenericResourcesReflectionCache__Class *klass;
  struct MonitorData *monitor;
  struct GenericPuppet_GhostGenericResourcesReflectionCache__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_System_Int32_GhostGenericResourceAttribute___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_GhostGenericResourceAttribute___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_Int32_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_GhostGenericResourceAttribute_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_GhostGenericResourceAttribute_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_Int32_GhostGenericResourceAttribute_ {
  struct Dictionary_2_System_Int32_GhostGenericResourceAttribute___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_Int32_GhostGenericResourceAttribute___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_GhostGenericResourceAttribute_ {
  int32_t hashCode;
  int32_t next;
  int32_t key;
  struct GhostGenericResourceAttribute * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_GhostGenericResourceAttribute___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_GhostGenericResourceAttribute___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_GhostGenericResourceAttribute_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_GhostGenericResourceAttribute___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_GhostGenericResourceAttribute___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_GhostGenericResourceAttribute_ vector[32];
};
struct __declspec(align(8)) GhostGenericResourceAttribute__Fields {
  int32_t m_id;
};
struct GhostGenericResourceAttribute {
  struct GhostGenericResourceAttribute__Class *klass;
  struct MonitorData *monitor;
  struct GhostGenericResourceAttribute__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int32_GhostGenericResourceAttribute___Fields {
  struct Dictionary_2_System_Int32_GhostGenericResourceAttribute_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_GhostGenericResourceAttribute_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_GhostGenericResourceAttribute___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_GhostGenericResourceAttribute___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int32_GhostGenericResourceAttribute___Fields {
  struct Dictionary_2_System_Int32_GhostGenericResourceAttribute_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_GhostGenericResourceAttribute_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_GhostGenericResourceAttribute___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_GhostGenericResourceAttribute___Fields fields;
};
struct GhostGenericResourceAttribute__Array {
  struct GhostGenericResourceAttribute__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct GhostGenericResourceAttribute * vector[32];
};
struct IEnumerator_1_GhostGenericResourceAttribute_ {
  struct IEnumerator_1_GhostGenericResourceAttribute___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_GhostGenericResourceAttribute_ {
  struct ICollection_1_GhostGenericResourceAttribute___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_Int32_GhostGenericResourceAttribute_ {
  int32_t key;
  struct GhostGenericResourceAttribute * value;
};
struct KeyValuePair_2_System_Int32_GhostGenericResourceAttribute___Boxed {
  struct KeyValuePair_2_System_Int32_GhostGenericResourceAttribute___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_Int32_GhostGenericResourceAttribute_ fields;
};
struct KeyValuePair_2_System_Int32_GhostGenericResourceAttribute___Array {
  struct KeyValuePair_2_System_Int32_GhostGenericResourceAttribute___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_Int32_GhostGenericResourceAttribute_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_GhostGenericResourceAttribute_ {
  struct IEnumerator_1_KeyValuePair_2_System_Int32_GhostGenericResourceAttribute___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_GhostGenericResourceAttribute_ {
  struct IEnumerable_1_GhostGenericResourceAttribute___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_Moon_ActiveAnimationHandle___Fields {
  struct ActiveAnimationHandle__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_ActiveAnimationHandle_ {
  struct List_1_Moon_ActiveAnimationHandle___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_ActiveAnimationHandle___Fields fields;
};
struct ActiveAnimationHandle__Array {
  struct ActiveAnimationHandle__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ActiveAnimationHandle vector[32];
};
struct IEnumerator_1_Moon_ActiveAnimationHandle_ {
  struct IEnumerator_1_Moon_ActiveAnimationHandle___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_Moon_ActiveAnimationHandle_System_Int32___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_Moon_ActiveAnimationHandle_System_Int32___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_Moon_ActiveAnimationHandle_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_Moon_ActiveAnimationHandle_System_Int32_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_Moon_ActiveAnimationHandle_System_Int32_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_Moon_ActiveAnimationHandle_System_Int32_ {
  struct Dictionary_2_Moon_ActiveAnimationHandle_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_Moon_ActiveAnimationHandle_System_Int32___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_Moon_ActiveAnimationHandle_System_Int32_ {
  int32_t hashCode;
  int32_t next;
  struct ActiveAnimationHandle key;
  int32_t value;
};
struct Dictionary_2_TKey_TValue_Entry_Moon_ActiveAnimationHandle_System_Int32___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_Moon_ActiveAnimationHandle_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_Moon_ActiveAnimationHandle_System_Int32_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_Moon_ActiveAnimationHandle_System_Int32___Array {
  struct Dictionary_2_TKey_TValue_Entry_Moon_ActiveAnimationHandle_System_Int32___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_Moon_ActiveAnimationHandle_System_Int32_ vector[32];
};
struct IEqualityComparer_1_Moon_ActiveAnimationHandle_ {
  struct IEqualityComparer_1_Moon_ActiveAnimationHandle___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_Moon_ActiveAnimationHandle_System_Int32___Fields {
  struct Dictionary_2_Moon_ActiveAnimationHandle_System_Int32_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_Moon_ActiveAnimationHandle_System_Int32_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_Moon_ActiveAnimationHandle_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_Moon_ActiveAnimationHandle_System_Int32___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_Moon_ActiveAnimationHandle_System_Int32___Fields {
  struct Dictionary_2_Moon_ActiveAnimationHandle_System_Int32_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_Moon_ActiveAnimationHandle_System_Int32_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_Moon_ActiveAnimationHandle_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_Moon_ActiveAnimationHandle_System_Int32___Fields fields;
};
struct ICollection_1_Moon_ActiveAnimationHandle_ {
  struct ICollection_1_Moon_ActiveAnimationHandle___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_Moon_ActiveAnimationHandle_System_Int32_ {
  struct ActiveAnimationHandle key;
  int32_t value;
};
struct KeyValuePair_2_Moon_ActiveAnimationHandle_System_Int32___Boxed {
  struct KeyValuePair_2_Moon_ActiveAnimationHandle_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_Moon_ActiveAnimationHandle_System_Int32_ fields;
};
struct KeyValuePair_2_Moon_ActiveAnimationHandle_System_Int32___Array {
  struct KeyValuePair_2_Moon_ActiveAnimationHandle_System_Int32___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_Moon_ActiveAnimationHandle_System_Int32_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_Moon_ActiveAnimationHandle_System_Int32_ {
  struct IEnumerator_1_KeyValuePair_2_Moon_ActiveAnimationHandle_System_Int32___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_Moon_ActiveAnimationHandle_ {
  struct IEnumerable_1_Moon_ActiveAnimationHandle___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_Moon_MoonAnimation_Moon_ActiveAnimationHandle___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_Moon_MoonAnimation_Moon_ActiveAnimationHandle___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_Moon_MoonAnimation_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_Moon_MoonAnimation_Moon_ActiveAnimationHandle_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_Moon_MoonAnimation_Moon_ActiveAnimationHandle_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_Moon_MoonAnimation_Moon_ActiveAnimationHandle_ {
  struct Dictionary_2_Moon_MoonAnimation_Moon_ActiveAnimationHandle___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_Moon_MoonAnimation_Moon_ActiveAnimationHandle___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_Moon_MoonAnimation_Moon_ActiveAnimationHandle_ {
  int32_t hashCode;
  int32_t next;
  struct MoonAnimation * key;
  struct ActiveAnimationHandle value;
};
struct Dictionary_2_TKey_TValue_Entry_Moon_MoonAnimation_Moon_ActiveAnimationHandle___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_Moon_MoonAnimation_Moon_ActiveAnimationHandle___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_Moon_MoonAnimation_Moon_ActiveAnimationHandle_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_Moon_MoonAnimation_Moon_ActiveAnimationHandle___Array {
  struct Dictionary_2_TKey_TValue_Entry_Moon_MoonAnimation_Moon_ActiveAnimationHandle___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_Moon_MoonAnimation_Moon_ActiveAnimationHandle_ vector[32];
};}