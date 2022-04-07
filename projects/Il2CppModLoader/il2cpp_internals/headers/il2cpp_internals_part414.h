namespace app {
struct CharacterStatePuppet {
  struct CharacterStatePuppet__Class *klass;
  struct MonitorData *monitor;
  struct CharacterStatePuppet__Fields fields;
};
struct IPuppet {
  struct IPuppet__Class *klass;
  struct MonitorData *monitor;
};
struct KuDashPuppet__Fields {
  struct CharacterStatePuppet__Fields _;
  struct MoonTimeline * HitWallTimeline;
  struct MoonTimeline * ForwardTimelineStart;
  struct MoonTimeline * ForwardAirTimelineStart;
  struct MoonTimeline * BackwardTimelineStart;
  struct MoonTimeline * BackwardAirTimelineStart;
  struct MoonTimeline * ForwardTimelineEnd;
  struct MoonTimeline * ForwardAirTimelineEnd;
  struct MoonTimeline * BackwardTimelineEnd;
  struct MoonTimeline * BackwardAirTimelineEnd;
  struct FloatAnimator * BackwardAirStartGravity;
  struct FloatAnimator * ForwardAirStartGravity;
  struct FloatAnimator * BackwardAirEndGravity;
  struct FloatAnimator * ForwardAirEndGravity;
  struct Dictionary_2_Moon_Timeline_MoonTimeline_Moon_Timeline_FloatAnimator_ * m_gravityDictionary;
};
struct KuDashPuppet {
  struct KuDashPuppet__Class *klass;
  struct MonitorData *monitor;
  struct KuDashPuppet__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_Moon_Timeline_MoonTimeline_Moon_Timeline_FloatAnimator___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_Moon_Timeline_MoonTimeline_Moon_Timeline_FloatAnimator___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_Moon_Timeline_MoonTimeline_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_Moon_Timeline_MoonTimeline_Moon_Timeline_FloatAnimator_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_Moon_Timeline_MoonTimeline_Moon_Timeline_FloatAnimator_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_Moon_Timeline_MoonTimeline_Moon_Timeline_FloatAnimator_ {
  struct Dictionary_2_Moon_Timeline_MoonTimeline_Moon_Timeline_FloatAnimator___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_Moon_Timeline_MoonTimeline_Moon_Timeline_FloatAnimator___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_Moon_Timeline_MoonTimeline_Moon_Timeline_FloatAnimator_ {
  int32_t hashCode;
  int32_t next;
  struct MoonTimeline * key;
  struct FloatAnimator * value;
};
struct Dictionary_2_TKey_TValue_Entry_Moon_Timeline_MoonTimeline_Moon_Timeline_FloatAnimator___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_Moon_Timeline_MoonTimeline_Moon_Timeline_FloatAnimator___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_Moon_Timeline_MoonTimeline_Moon_Timeline_FloatAnimator_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_Moon_Timeline_MoonTimeline_Moon_Timeline_FloatAnimator___Array {
  struct Dictionary_2_TKey_TValue_Entry_Moon_Timeline_MoonTimeline_Moon_Timeline_FloatAnimator___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_Moon_Timeline_MoonTimeline_Moon_Timeline_FloatAnimator_ vector[32];
};
struct IEqualityComparer_1_Moon_Timeline_MoonTimeline_ {
  struct IEqualityComparer_1_Moon_Timeline_MoonTimeline___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_Moon_Timeline_MoonTimeline_Moon_Timeline_FloatAnimator___Fields {
  struct Dictionary_2_Moon_Timeline_MoonTimeline_Moon_Timeline_FloatAnimator_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_Moon_Timeline_MoonTimeline_Moon_Timeline_FloatAnimator_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_Moon_Timeline_MoonTimeline_Moon_Timeline_FloatAnimator___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_Moon_Timeline_MoonTimeline_Moon_Timeline_FloatAnimator___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_Moon_Timeline_MoonTimeline_Moon_Timeline_FloatAnimator___Fields {
  struct Dictionary_2_Moon_Timeline_MoonTimeline_Moon_Timeline_FloatAnimator_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_Moon_Timeline_MoonTimeline_Moon_Timeline_FloatAnimator_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_Moon_Timeline_MoonTimeline_Moon_Timeline_FloatAnimator___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_Moon_Timeline_MoonTimeline_Moon_Timeline_FloatAnimator___Fields fields;
};
struct FloatAnimator__Array {
  struct FloatAnimator__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct FloatAnimator * vector[32];
};
struct IEnumerator_1_Moon_Timeline_FloatAnimator_ {
  struct IEnumerator_1_Moon_Timeline_FloatAnimator___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_Moon_Timeline_MoonTimeline_ {
  struct ICollection_1_Moon_Timeline_MoonTimeline___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_Moon_Timeline_FloatAnimator_ {
  struct ICollection_1_Moon_Timeline_FloatAnimator___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_Moon_Timeline_MoonTimeline_Moon_Timeline_FloatAnimator_ {
  struct MoonTimeline * key;
  struct FloatAnimator * value;
};
struct KeyValuePair_2_Moon_Timeline_MoonTimeline_Moon_Timeline_FloatAnimator___Boxed {
  struct KeyValuePair_2_Moon_Timeline_MoonTimeline_Moon_Timeline_FloatAnimator___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_Moon_Timeline_MoonTimeline_Moon_Timeline_FloatAnimator_ fields;
};
struct KeyValuePair_2_Moon_Timeline_MoonTimeline_Moon_Timeline_FloatAnimator___Array {
  struct KeyValuePair_2_Moon_Timeline_MoonTimeline_Moon_Timeline_FloatAnimator___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_Moon_Timeline_MoonTimeline_Moon_Timeline_FloatAnimator_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_Moon_Timeline_MoonTimeline_Moon_Timeline_FloatAnimator_ {
  struct IEnumerator_1_KeyValuePair_2_Moon_Timeline_MoonTimeline_Moon_Timeline_FloatAnimator___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_Moon_Timeline_MoonTimeline_ {
  struct IEnumerable_1_Moon_Timeline_MoonTimeline___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_Moon_Timeline_FloatAnimator_ {
  struct IEnumerable_1_Moon_Timeline_FloatAnimator___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int32_CharacterStatePuppet___Fields {
  struct Dictionary_2_System_Int32_CharacterStatePuppet_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_CharacterStatePuppet_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_CharacterStatePuppet___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_CharacterStatePuppet___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int32_CharacterStatePuppet___Fields {
  struct Dictionary_2_System_Int32_CharacterStatePuppet_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_CharacterStatePuppet_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_CharacterStatePuppet___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_CharacterStatePuppet___Fields fields;
};
struct CharacterStatePuppet__Array {
  struct CharacterStatePuppet__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct CharacterStatePuppet * vector[32];
};
struct IEnumerator_1_CharacterStatePuppet_ {
  struct IEnumerator_1_CharacterStatePuppet___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_CharacterStatePuppet_ {
  struct ICollection_1_CharacterStatePuppet___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_Int32_CharacterStatePuppet_ {
  int32_t key;
  struct CharacterStatePuppet * value;
};
struct KeyValuePair_2_System_Int32_CharacterStatePuppet___Boxed {
  struct KeyValuePair_2_System_Int32_CharacterStatePuppet___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_Int32_CharacterStatePuppet_ fields;
};
struct KeyValuePair_2_System_Int32_CharacterStatePuppet___Array {
  struct KeyValuePair_2_System_Int32_CharacterStatePuppet___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_Int32_CharacterStatePuppet_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_CharacterStatePuppet_ {
  struct IEnumerator_1_KeyValuePair_2_System_Int32_CharacterStatePuppet___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_CharacterStatePuppet_ {
  struct IEnumerable_1_CharacterStatePuppet___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_RecordableObjectPuppet___Fields {
  struct RecordableObjectPuppet__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_RecordableObjectPuppet_ {
  struct List_1_RecordableObjectPuppet___Class *klass;
  struct MonitorData *monitor;
  struct List_1_RecordableObjectPuppet___Fields fields;
};
struct RecordableObjectPuppet__Fields {
  struct GenericPuppet__Fields _;
  struct RecordingLink * m_recordingLink;
  int32_t m_uniqueRecordingId;
  struct Vector3 m_lastPosition;
  bool m_isInteracting;
};
struct RecordableObjectPuppet {
  struct RecordableObjectPuppet__Class *klass;
  struct MonitorData *monitor;
  struct RecordableObjectPuppet__Fields fields;
};
struct RecordableObjectPuppet__Array {
  struct RecordableObjectPuppet__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct RecordableObjectPuppet * vector[32];
};
struct RecordingLink__Fields {
  struct MonoBehaviour__Fields _;
  struct List_1_RecordableObject_ * RecordableObjects;
  bool m_beginLock;
  bool m_endLock;
};
struct RecordingLink {
  struct RecordingLink__Class *klass;
  struct MonitorData *monitor;
  struct RecordingLink__Fields fields;
};
struct __declspec(align(8)) List_1_RecordableObject___Fields {
  struct RecordableObject__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_RecordableObject_ {
  struct List_1_RecordableObject___Class *klass;
  struct MonitorData *monitor;
  struct List_1_RecordableObject___Fields fields;
};
struct RecordableObject__Fields {
  struct SaveSerialize__Fields _;
  struct GameObject * PuppetPrefab;
  struct RecordingLink * RecordingLink;
  struct RecordableObjectPuppet * m_recordableObjectPuppet;
};
struct RecordableObject {
  struct RecordableObject__Class *klass;
  struct MonitorData *monitor;
  struct RecordableObject__Fields fields;
};
struct RecordableObject__Array {
  struct RecordableObject__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct RecordableObject * vector[32];
};
struct IEnumerator_1_RecordableObject_ {
  struct IEnumerator_1_RecordableObject___Class *klass;
  struct MonitorData *monitor;
};
struct JumperEnemyPuppet__Fields {
  struct RecordableObjectPuppet__Fields _;
  struct TextureAnimationWithTransitions * Respawn;
  struct TextureAnimationWithTransitions * Idle;
  struct TextureAnimationWithTransitions * JumpCharge;
  struct TextureAnimationWithTransitions * Jump;
  struct TextureAnimationWithTransitions * ShortJump;
  struct TextureAnimationWithTransitions * JumpFlip;
  struct TextureAnimationWithTransitions * Fall;
  struct TextureAnimationWithTransitions * Confused;
  struct TextureAnimationWithTransitions * Thrown;
  struct TextureAnimationWithTransitions * Stomped;
};
struct JumperEnemyPuppet {
  struct JumperEnemyPuppet__Class *klass;
  struct MonitorData *monitor;
  struct JumperEnemyPuppet__Fields fields;
};
struct TextureAnimationWithTransitions__Fields {
  struct ScriptableObject__Fields _;
  struct TextureAnimation * Animation;
  struct List_1_TextureAnimationWithTransitions_TextureAnimationPair_ * Transitions;
  struct TextureAnimationWithTransitions * Parent;
};
struct TextureAnimationWithTransitions {
  struct TextureAnimationWithTransitions__Class *klass;
  struct MonitorData *monitor;
  struct TextureAnimationWithTransitions__Fields fields;
};
struct TextureAnimation__Fields {
  struct ScriptableObject__Fields _;
  float Speed;
  bool Loop;
  bool IgnoreTimeScale;
  struct AnimationMetaData * AnimationMetaData;
  struct List_1_MoonGuid_ * FrameGuids;
  struct List_1_Atlas_ * Atlases;
  struct Dictionary_2_MoonGuid_TextureAnimation_AnimationTextureInfo_ * m_guidToTex;
};
struct TextureAnimation {
  struct TextureAnimation__Class *klass;
  struct MonitorData *monitor;
  struct TextureAnimation__Fields fields;
};
enum AnimationMetaData_ViewModes__Enum : int32_t {
  AnimationMetaData_ViewModes__Enum_Left = 0,
  AnimationMetaData_ViewModes__Enum_Front = 1,
  AnimationMetaData_ViewModes__Enum_Right = 2,
};
struct AnimationMetaData_ViewModes__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum AnimationMetaData_ViewModes__Enum value;
};
struct AnimationMetaData__Fields {
  struct ScriptableObject__Fields _;
  struct TextureAnimation * Animation;
  float CameraTargetDistance;
  float CameraFieldOfView;
  float AspectRatio;
  bool Perspective;
  struct String * CameraName;
  struct Vector2 PlaneSize;
  int32_t FrameEnd;
  enum AnimationMetaData_ViewModes__Enum ViewMode;
  int32_t FrameStart;
  float FrameRate;
  struct List_1_AnimationMetaData_AnimationData_ * Data;
  struct AnimationMetaData_AnimationData * CameraData;
  struct AnimationMetaData_AnimationData * Camera;
};
struct AnimationMetaData {
  struct AnimationMetaData__Class *klass;
  struct MonitorData *monitor;
  struct AnimationMetaData__Fields fields;
};
struct __declspec(align(8)) List_1_AnimationMetaData_AnimationData___Fields {
  struct AnimationMetaData_AnimationData__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_AnimationMetaData_AnimationData_ {
  struct List_1_AnimationMetaData_AnimationData___Class *klass;
  struct MonitorData *monitor;
  struct List_1_AnimationMetaData_AnimationData___Fields fields;
};
struct __declspec(align(8)) AnimationMetaData_AnimationData__Fields {
  struct String * Name;
  struct AnimationMetaData_FloatAnimation * PositionX;
  struct AnimationMetaData_FloatAnimation * PositionY;
  struct AnimationMetaData_FloatAnimation * PositionZ;
  struct AnimationMetaData_FloatAnimation * RotationZ;
  struct AnimationMetaData_FloatAnimation * ScaleX;
  struct AnimationMetaData_FloatAnimation * ScaleY;
};
struct AnimationMetaData_AnimationData {
  struct AnimationMetaData_AnimationData__Class *klass;
  struct MonitorData *monitor;
  struct AnimationMetaData_AnimationData__Fields fields;
};
struct AnimationMetaData_AnimationData__Array {
  struct AnimationMetaData_AnimationData__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct AnimationMetaData_AnimationData * vector[32];
};
struct __declspec(align(8)) AnimationMetaData_FloatAnimation__Fields {
  struct List_1_System_Single_ * Values;
  float Duration;
};
struct AnimationMetaData_FloatAnimation {
  struct AnimationMetaData_FloatAnimation__Class *klass;
  struct MonitorData *monitor;
  struct AnimationMetaData_FloatAnimation__Fields fields;
};
struct IEnumerator_1_AnimationMetaData_AnimationData_ {
  struct IEnumerator_1_AnimationMetaData_AnimationData___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_MoonGuid___Fields {
  struct MoonGuid__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_MoonGuid_ {
  struct List_1_MoonGuid___Class *klass;
  struct MonitorData *monitor;
  struct List_1_MoonGuid___Fields fields;
};
struct MoonGuid__Array {
  struct MoonGuid__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MoonGuid * vector[32];
};
struct IEnumerator_1_MoonGuid_ {
  struct IEnumerator_1_MoonGuid___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_Atlas___Fields {
  struct Atlas__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Atlas_ {
  struct List_1_Atlas___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Atlas___Fields fields;
};
enum UberScreenMode__Enum : int32_t {
  UberScreenMode__Enum_Red = 0,
  UberScreenMode__Enum_Green = 1,
  UberScreenMode__Enum_Blue = 2,
  UberScreenMode__Enum_None = 3,
};
struct UberScreenMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum UberScreenMode__Enum value;
};
struct Atlas__Fields {
  struct ScriptableObject__Fields _;
  float Width;
  float Height;
  struct Texture2D * Texture;
  enum UberScreenMode__Enum ScreenMode;
  float UberScreenTweak;
  struct List_1_AtlasSpriteTexture_ * SpriteTextures;
  struct String * _TexturePath_k__BackingField;
  struct Dictionary_2_MoonGuid_System_Int32_ * m_atlasCache;
};
struct Atlas {
  struct Atlas__Class *klass;
  struct MonitorData *monitor;
  struct Atlas__Fields fields;
};
struct Atlas__Array {
  struct Atlas__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Atlas * vector[32];
};
struct __declspec(align(8)) List_1_AtlasSpriteTexture___Fields {
  struct AtlasSpriteTexture__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_AtlasSpriteTexture_ {
  struct List_1_AtlasSpriteTexture___Class *klass;
  struct MonitorData *monitor;
  struct List_1_AtlasSpriteTexture___Fields fields;
};
struct __declspec(align(8)) AtlasSpriteTexture__Fields {
  struct String * Name;
  struct MoonGuid * Guid;
  struct Rect NormalizedRect;
  bool Flipped;
  struct Vector2 CenterOffset;
  struct Vector2 OriginalSize;
};
struct AtlasSpriteTexture {
  struct AtlasSpriteTexture__Class *klass;
  struct MonitorData *monitor;
  struct AtlasSpriteTexture__Fields fields;
};
struct AtlasSpriteTexture__Array {
  struct AtlasSpriteTexture__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct AtlasSpriteTexture * vector[32];
};
struct IEnumerator_1_AtlasSpriteTexture_ {
  struct IEnumerator_1_AtlasSpriteTexture___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_MoonGuid_System_Int32___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_MoonGuid_System_Int32___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_MoonGuid_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_MoonGuid_System_Int32_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_MoonGuid_System_Int32_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_MoonGuid_System_Int32_ {
  struct Dictionary_2_MoonGuid_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_MoonGuid_System_Int32___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_MoonGuid_System_Int32_ {
  int32_t hashCode;
  int32_t next;
  struct MoonGuid * key;
  int32_t value;
};
struct Dictionary_2_TKey_TValue_Entry_MoonGuid_System_Int32___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_MoonGuid_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_MoonGuid_System_Int32_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_MoonGuid_System_Int32___Array {
  struct Dictionary_2_TKey_TValue_Entry_MoonGuid_System_Int32___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_MoonGuid_System_Int32_ vector[32];
};
struct IEqualityComparer_1_MoonGuid_ {
  struct IEqualityComparer_1_MoonGuid___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_MoonGuid_System_Int32___Fields {
  struct Dictionary_2_MoonGuid_System_Int32_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_MoonGuid_System_Int32_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_MoonGuid_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_MoonGuid_System_Int32___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_MoonGuid_System_Int32___Fields {
  struct Dictionary_2_MoonGuid_System_Int32_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_MoonGuid_System_Int32_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_MoonGuid_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_MoonGuid_System_Int32___Fields fields;
};
struct ICollection_1_MoonGuid_ {
  struct ICollection_1_MoonGuid___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_MoonGuid_System_Int32_ {
  struct MoonGuid * key;
  int32_t value;
};
struct KeyValuePair_2_MoonGuid_System_Int32___Boxed {
  struct KeyValuePair_2_MoonGuid_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_MoonGuid_System_Int32_ fields;
};
struct KeyValuePair_2_MoonGuid_System_Int32___Array {
  struct KeyValuePair_2_MoonGuid_System_Int32___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_MoonGuid_System_Int32_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_MoonGuid_System_Int32_ {
  struct IEnumerator_1_KeyValuePair_2_MoonGuid_System_Int32___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_MoonGuid_ {
  struct IEnumerable_1_MoonGuid___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_Atlas_ {
  struct IEnumerator_1_Atlas___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_MoonGuid_TextureAnimation_AnimationTextureInfo___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_MoonGuid_TextureAnimation_AnimationTextureInfo___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_MoonGuid_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_MoonGuid_TextureAnimation_AnimationTextureInfo_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_MoonGuid_TextureAnimation_AnimationTextureInfo_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_MoonGuid_TextureAnimation_AnimationTextureInfo_ {
  struct Dictionary_2_MoonGuid_TextureAnimation_AnimationTextureInfo___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_MoonGuid_TextureAnimation_AnimationTextureInfo___Fields fields;
};
struct TextureAnimation_AnimationTextureInfo {
  struct Atlas * Atlas;
  struct AtlasSpriteTexture * SpriteTexture;
};
struct TextureAnimation_AnimationTextureInfo__Boxed {
  struct TextureAnimation_AnimationTextureInfo__Class *klass;
  struct MonitorData *monitor;
  struct TextureAnimation_AnimationTextureInfo fields;
};
struct Dictionary_2_TKey_TValue_Entry_MoonGuid_TextureAnimation_AnimationTextureInfo_ {
  int32_t hashCode;
  int32_t next;
  struct MoonGuid * key;
  struct TextureAnimation_AnimationTextureInfo value;
};
struct Dictionary_2_TKey_TValue_Entry_MoonGuid_TextureAnimation_AnimationTextureInfo___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_MoonGuid_TextureAnimation_AnimationTextureInfo___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_MoonGuid_TextureAnimation_AnimationTextureInfo_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_MoonGuid_TextureAnimation_AnimationTextureInfo___Array {
  struct Dictionary_2_TKey_TValue_Entry_MoonGuid_TextureAnimation_AnimationTextureInfo___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_MoonGuid_TextureAnimation_AnimationTextureInfo_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_MoonGuid_TextureAnimation_AnimationTextureInfo___Fields {
  struct Dictionary_2_MoonGuid_TextureAnimation_AnimationTextureInfo_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_MoonGuid_TextureAnimation_AnimationTextureInfo_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_MoonGuid_TextureAnimation_AnimationTextureInfo___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_MoonGuid_TextureAnimation_AnimationTextureInfo___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_MoonGuid_TextureAnimation_AnimationTextureInfo___Fields {
  struct Dictionary_2_MoonGuid_TextureAnimation_AnimationTextureInfo_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_MoonGuid_TextureAnimation_AnimationTextureInfo_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_MoonGuid_TextureAnimation_AnimationTextureInfo___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_MoonGuid_TextureAnimation_AnimationTextureInfo___Fields fields;
};
struct TextureAnimation_AnimationTextureInfo__Array {
  struct TextureAnimation_AnimationTextureInfo__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct TextureAnimation_AnimationTextureInfo vector[32];
};
struct IEnumerator_1_TextureAnimation_AnimationTextureInfo_ {
  struct IEnumerator_1_TextureAnimation_AnimationTextureInfo___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_TextureAnimation_AnimationTextureInfo_ {
  struct ICollection_1_TextureAnimation_AnimationTextureInfo___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_MoonGuid_TextureAnimation_AnimationTextureInfo_ {
  struct MoonGuid * key;
  struct TextureAnimation_AnimationTextureInfo value;
};
struct KeyValuePair_2_MoonGuid_TextureAnimation_AnimationTextureInfo___Boxed {
  struct KeyValuePair_2_MoonGuid_TextureAnimation_AnimationTextureInfo___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_MoonGuid_TextureAnimation_AnimationTextureInfo_ fields;
};
struct KeyValuePair_2_MoonGuid_TextureAnimation_AnimationTextureInfo___Array {
  struct KeyValuePair_2_MoonGuid_TextureAnimation_AnimationTextureInfo___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_MoonGuid_TextureAnimation_AnimationTextureInfo_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_MoonGuid_TextureAnimation_AnimationTextureInfo_ {
  struct IEnumerator_1_KeyValuePair_2_MoonGuid_TextureAnimation_AnimationTextureInfo___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_TextureAnimation_AnimationTextureInfo_ {
  struct IEnumerable_1_TextureAnimation_AnimationTextureInfo___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_TextureAnimationWithTransitions_TextureAnimationPair___Fields {
  struct TextureAnimationWithTransitions_TextureAnimationPair__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_TextureAnimationWithTransitions_TextureAnimationPair_ {
  struct List_1_TextureAnimationWithTransitions_TextureAnimationPair___Class *klass;
  struct MonitorData *monitor;
  struct List_1_TextureAnimationWithTransitions_TextureAnimationPair___Fields fields;
};
struct __declspec(align(8)) TextureAnimationWithTransitions_TextureAnimationPair__Fields {
  struct TextureAnimation * TransitionAnimation;
  struct TextureAnimationWithTransitions * From;
  struct TextureAnimation * FromAnimation;
  bool Flip;
  int32_t CrossoverFrame;
  int32_t MinFrame;
  int32_t MaxFrame;
  int32_t TransitionStart;
  int32_t TransitionEnd;
};
struct TextureAnimationWithTransitions_TextureAnimationPair {
  struct TextureAnimationWithTransitions_TextureAnimationPair__Class *klass;
  struct MonitorData *monitor;
  struct TextureAnimationWithTransitions_TextureAnimationPair__Fields fields;
};
struct TextureAnimationWithTransitions_TextureAnimationPair__Array {
  struct TextureAnimationWithTransitions_TextureAnimationPair__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct TextureAnimationWithTransitions_TextureAnimationPair * vector[32];
};
struct IEnumerator_1_TextureAnimationWithTransitions_TextureAnimationPair_ {
  struct IEnumerator_1_TextureAnimationWithTransitions_TextureAnimationPair___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_RecordableObjectPuppet_ {
  struct IEnumerator_1_RecordableObjectPuppet___Class *klass;
  struct MonitorData *monitor;
};
struct GhostRecordingMetaDataPlugin__Fields {
  struct IGhostRecorderPlugin__Fields _;
  struct GhostRecordingMetaDataData * Data;
  struct Vector3 m_startingPlayerPosition;
};
struct GhostRecordingMetaDataPlugin {
  struct GhostRecordingMetaDataPlugin__Class *klass;
  struct MonitorData *monitor;
  struct GhostRecordingMetaDataPlugin__Fields fields;
};
struct __declspec(align(8)) GhostRecordingMetaDataData__Fields {
  struct Vector3 Position;
  float RaceDuration;
  bool _Executed_k__BackingField;
};
struct GhostRecordingMetaDataData {
  struct GhostRecordingMetaDataData__Class *klass;
  struct MonitorData *monitor;
  struct GhostRecordingMetaDataData__Fields fields;
};
enum GhostRecorder_GhostPluginRecordingType__Enum : int32_t {
  GhostRecorder_GhostPluginRecordingType__Enum_Poll = 0,
  GhostRecorder_GhostPluginRecordingType__Enum_Push = 1,
};
struct GhostRecorder_GhostPluginRecordingType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum GhostRecorder_GhostPluginRecordingType__Enum value;
};
struct CharacterAnimationSystem__Fields {
  struct MonoBehaviour__Fields _;
  struct CharacterSpriteMirror * SpriteMirror;
  struct MoonAnimator * MoonAnimator;
  struct MoonAnimation * MissingAnimationPlaceholder;
  struct ActiveAnimationHandle m_currentState;
  int32_t m_rootMotionEnabled;
  struct List_1_CharacterAnimationSystem_CharacterAnimationState_ * m_states;
  struct SpriteAnimatorWithTransitions * Animator;
  struct CharacterAnimationSystem_CharacterAnimationState * m_lastPlayingAnimationState;
  bool m_wasFacingLeft;
  float m_flipTime;
};
struct CharacterAnimationSystem {
  struct CharacterAnimationSystem__Class *klass;
  struct MonitorData *monitor;
  struct CharacterAnimationSystem__Fields fields;
};
struct CharacterState__Fields {
  struct SaveSerialize__Fields _;
  struct DynamicDataResolver * m_dataResolver;
  struct GameObject * SeinCharacterPreview;
  struct MoonAnimator * m_previewAnimator;
  struct SeinLogicCycle_IsAllowedDelegate * IsAllowed;
  struct GameObject * PuppetPrefab;
  struct CharacterStatePuppet * m_characterStatePuppet;
  bool DebugStateOutput;
  bool IsExclusiveActiveState;
  int32_t m_id;
  struct SeinCharacter * m_sein;
  bool m_isActive;
  struct Boolean__Array * m_canBeInterruptedBy;
  bool m_canInputBeQueued;
  struct String * CharacterStateUpdateString;
};
struct CharacterState {
  struct CharacterState__Class *klass;
  struct MonitorData *monitor;
  struct CharacterState__Fields fields;
};
enum CharacterSpriteMirror_MirrorMode__Enum : int32_t {
  CharacterSpriteMirror_MirrorMode__Enum_Rotation = 0,
  CharacterSpriteMirror_MirrorMode__Enum_Scale = 1,
};
struct CharacterSpriteMirror_MirrorMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum CharacterSpriteMirror_MirrorMode__Enum value;
};
struct CharacterSpriteMirror__Fields {
  struct CharacterState__Fields _;
  int32_t m_lock;
  enum CharacterSpriteMirror_MirrorMode__Enum Mirror;
  bool StartFacingLeft;
  bool m_faceLeft;
};
struct CharacterSpriteMirror {
  struct CharacterSpriteMirror__Class *klass;
  struct MonitorData *monitor;
  struct CharacterSpriteMirror__Fields fields;
};
struct SeinLogicCycle_IsAllowedDelegate__Fields {
  struct MulticastDelegate__Fields _;
};
struct SeinLogicCycle_IsAllowedDelegate {
  struct SeinLogicCycle_IsAllowedDelegate__Class *klass;
  struct MonitorData *monitor;
  struct SeinLogicCycle_IsAllowedDelegate__Fields fields;
};
struct SeinCharacter__Fields {
  struct MonoBehaviour__Fields _;
  struct SeinLogicCycle * LogicCycle;
  struct SeinAbilities * Abilities;
  struct SeinComboMoves * ComboMoves;
  struct SeinSpells * Spells;
  struct SeinController * Controller;
  struct SeinCutsceneBlocked * CutsceneBlocked;
  struct SeinCutsceneMovement * CutsceneMovement;
  struct SeinDoorHandler * DoorHandler;
  struct SeinSoulFlame * SoulFlame;
  struct SeinInventory * Inventory;
  struct SeinEnvironmentForceController * ForceController;
  struct SeinInput * Input;
  struct SeinLevel * Level;
  struct SeinEnergy * Energy;
  struct SeinMortality * Mortality;
  struct SeinPickupProcessor * PickupHandler;
  struct PlatformBehaviour * PlatformBehaviour;
  struct PlayerAbilities * PlayerAbilities;
  struct PlayerSpiritShards * PlayerSpiritShards;
  struct SpellInventory * PlayerSpells;
  struct PlayerQuestItems * QuestItems;
  struct CharacterFovController * FovController;
  struct SeinPrefabFactory * Prefabs;
  struct GameObject * OriRig;
  struct GameObject * OriRigInstance;
  bool EnablePerspectiveAdjustment;
  struct SpiritLightRadialVisualAffector * _LightAffector_k__BackingField;
  enum NavigationType__Enum _CurrentAreaType_k__BackingField;
  struct SoundHost * m_soundHost;
  struct Nullable_1_UnityEngine_Vector3_ LastCheckpointedPosition;
  struct Rect m_bounds;
  struct DamageOwner * _DamageOwner_k__BackingField;
  struct Action * OnResetAirLimits;
  bool m_isSphere;
  int32_t m_leachCount;
  struct DynamicDataResolver * m_dataResolver;
};
struct SeinCharacter {
  struct SeinCharacter__Class *klass;
  struct MonitorData *monitor;
  struct SeinCharacter__Fields fields;
};
enum SeinLogicCycle_StateFlags__Enum : int64_t {
  SeinLogicCycle_StateFlags__Enum_Clear = 0,
  SeinLogicCycle_StateFlags__Enum_IsPlayingAnimation = 1,
  SeinLogicCycle_StateFlags__Enum_IsCrouching = 2,
  SeinLogicCycle_StateFlags__Enum_IsGrabbingBlock = 4,
  SeinLogicCycle_StateFlags__Enum_IsGrabbingWall = 8,
  SeinLogicCycle_StateFlags__Enum_IsGliding = 16,
  SeinLogicCycle_StateFlags__Enum_IsSwimming = 32,
  SeinLogicCycle_StateFlags__Enum_IsBashing = 64,
  SeinLogicCycle_StateFlags__Enum_IsCarrying = 128,
  SeinLogicCycle_StateFlags__Enum_IsStomping = 256,
  SeinLogicCycle_StateFlags__Enum_IsSuspended = 512,
  SeinLogicCycle_StateFlags__Enum_IsDashing = 1024,
  SeinLogicCycle_StateFlags__Enum_IsStandingOnEdge = 2048,
  SeinLogicCycle_StateFlags__Enum_IsUnderwater = 4096,
  SeinLogicCycle_StateFlags__Enum_CannotMove = 8192,
  SeinLogicCycle_StateFlags__Enum_IsPerformingCinematic = 16384,
  SeinLogicCycle_StateFlags__Enum_IsInteracting = 32768,
  SeinLogicCycle_StateFlags__Enum_IsRiding = 65536,
  SeinLogicCycle_StateFlags__Enum_IsInputLocked = 131072,
  SeinLogicCycle_StateFlags__Enum_IsDigging = 262144,
  SeinLogicCycle_StateFlags__Enum_IsGrabbingSurface = 524288,
  SeinLogicCycle_StateFlags__Enum_IsGrabbingRope = 1048576,
  SeinLogicCycle_StateFlags__Enum_IsChargeJumping = 2097152,
  SeinLogicCycle_StateFlags__Enum_IsCastingSpell = 4194304,
  SeinLogicCycle_StateFlags__Enum_IsUsingLever = 8388608,
  SeinLogicCycle_StateFlags__Enum_IsRacing = 16777216,
  SeinLogicCycle_StateFlags__Enum_IsUsingMelee = 33554432,
  SeinLogicCycle_StateFlags__Enum_IsPerformingCombo = 67108864,
  SeinLogicCycle_StateFlags__Enum_IsSpiritLeashing = 134217728,
  SeinLogicCycle_StateFlags__Enum_IsFalling = 268435456,
  SeinLogicCycle_StateFlags__Enum_IsDisabledDueToDamage = 536870912,
  SeinLogicCycle_StateFlags__Enum_IsFeatherFlapping = 1073741824,
  SeinLogicCycle_StateFlags__Enum_IsBowAttacking = 2147483648,
  SeinLogicCycle_StateFlags__Enum_IsAttacking = 4294967296,
  SeinLogicCycle_StateFlags__Enum_IsHolding = 8589934592,
  SeinLogicCycle_StateFlags__Enum_IsStressTesting = 17179869184,
  SeinLogicCycle_StateFlags__Enum_IsThrowing = 34359738368,
  SeinLogicCycle_StateFlags__Enum_CanGrabSomething = 68719476736,
  SeinLogicCycle_StateFlags__Enum_IsLeverBlockingInput = 137438953472,
  SeinLogicCycle_StateFlags__Enum_IsPickingUp = 274877906944,
  SeinLogicCycle_StateFlags__Enum_IsUsingHeldItem = 549755813888,
  SeinLogicCycle_StateFlags__Enum_IsTouchingDamageColliders = 1099511627776,
  SeinLogicCycle_StateFlags__Enum_IsTeleporting = 2199023255552,
  SeinLogicCycle_StateFlags__Enum_IsBowAttackingAndNotCancelable = 4398046511104,
  SeinLogicCycle_StateFlags__Enum_BlockInput = 137439133696,
  SeinLogicCycle_StateFlags__Enum_BlockInvincibility = 0,
  SeinLogicCycle_StateFlags__Enum_BlockAirNoDeceleration = 0,
  SeinLogicCycle_StateFlags__Enum_BlockApplyFrictionToSpeed = 16384,
  SeinLogicCycle_StateFlags__Enum_BlockCrushDetector = 49153,
  SeinLogicCycle_StateFlags__Enum_BlockSpriteRotater = 0,
  SeinLogicCycle_StateFlags__Enum_BlockDamageReciever = 16385,
  SeinLogicCycle_StateFlags__Enum_BlockJumpSustain = 278529,
  SeinLogicCycle_StateFlags__Enum_BlockUpwardsDeceleration = 16385,
  SeinLogicCycle_StateFlags__Enum_BlockForceController = 16385,
  SeinLogicCycle_StateFlags__Enum_BlockGravity = 344065,
  SeinLogicCycle_StateFlags__Enum_BlockGravityToGround = 344097,
  SeinLogicCycle_StateFlags__Enum_BlockSpellAbility = 3539008,
  SeinLogicCycle_StateFlags__Enum_BlockSwimming = 0,
  SeinLogicCycle_StateFlags__Enum_BlockDigging = 138461184,
  SeinLogicCycle_StateFlags__Enum_BlockDash = 1623318981,
  SeinLogicCycle_StateFlags__Enum_BlockGetAbility = 533016037,
  SeinLogicCycle_StateFlags__Enum_BlockLaunch = 142934112,
  SeinLogicCycle_StateFlags__Enum_BlockRiding = 12903909,
  SeinLogicCycle_StateFlags__Enum_BlockSpell = 4399266054244,
  SeinLogicCycle_StateFlags__Enum_BlockGrenadeSpell = 4403561819365,
  SeinLogicCycle_StateFlags__Enum_BlockSpiritLeash = 13435367,
  SeinLogicCycle_StateFlags__Enum_BlockBow = 1746141284,
  SeinLogicCycle_StateFlags__Enum_BlockHammer = 2200235475008,
  SeinLogicCycle_StateFlags__Enum_BlockMelee = 3025407377504,
  SeinLogicCycle_StateFlags__Enum_BlockCombo = 3024730832960,
  SeinLogicCycle_StateFlags__Enum_BlockGrabRope = 2218519232576,
  SeinLogicCycle_StateFlags__Enum_BlockGrabSurface = 2231274635332,
  SeinLogicCycle_StateFlags__Enum_BlockInstantStop = 536887329,
  SeinLogicCycle_StateFlags__Enum_BlockLeftRightMovement = 53249,
  SeinLogicCycle_StateFlags__Enum_BlockBash = 4398228226053,
  SeinLogicCycle_StateFlags__Enum_BlockLooking = 2252603425,
  SeinLogicCycle_StateFlags__Enum_BlockLever = 4522341,
  SeinLogicCycle_StateFlags__Enum_BlockInteraction = 138674533,
  SeinLogicCycle_StateFlags__Enum_BlockFootsteps = 327713,
  SeinLogicCycle_StateFlags__Enum_BlockWallSlide = 1099517772273,
  SeinLogicCycle_StateFlags__Enum_BlockCarry = 4522336,
  SeinLogicCycle_StateFlags__Enum_BlockHolding = 262176,
  SeinLogicCycle_StateFlags__Enum_BlockFall = 376929,
  SeinLogicCycle_StateFlags__Enum_BlockGrabBlock = 2199027778017,
  SeinLogicCycle_StateFlags__Enum_BlockIdle = 378085,
  SeinLogicCycle_StateFlags__Enum_BlockRun = 312549,
  SeinLogicCycle_StateFlags__Enum_BlockCrouching = 34498430369,
  SeinLogicCycle_StateFlags__Enum_BlockWallGrabbing = 3305082995169,
  SeinLogicCycle_StateFlags__Enum_BlockJumping = 38060337,
  SeinLogicCycle_StateFlags__Enum_BlockDoubleJump = 38011297,
  SeinLogicCycle_StateFlags__Enum_BlockGliding = 4471270508009,
  SeinLogicCycle_StateFlags__Enum_BlockWallJump = 4473265,
  SeinLogicCycle_StateFlags__Enum_BlockChargeJump = 147112421,
  SeinLogicCycle_StateFlags__Enum_BlockStandingOnEdge = 4456865,
  SeinLogicCycle_StateFlags__Enum_BlockPushAgainstWall = 3298535145633,
  SeinLogicCycle_StateFlags__Enum_BlockEdgeClamber = 262305,
  SeinLogicCycle_StateFlags__Enum_BlockTeleport = 135004192,
  SeinLogicCycle_StateFlags__Enum_BlockChakramSpell = 148111364,
  SeinLogicCycle_StateFlags__Enum_BlockMeditateSpell = 8699941,
  SeinLogicCycle_StateFlags__Enum_BlockTurretSpell = 147193860,
  SeinLogicCycle_StateFlags__Enum_BlockFeatherFlap = 4466975540713,
  SeinLogicCycle_StateFlags__Enum_BlockAbilityUI = 0,
  SeinLogicCycle_StateFlags__Enum_BlockShrineCombat = 2203341291520,
  SeinLogicCycle_StateFlags__Enum_ResetComboCooldown = 2149056584,
};
struct SeinLogicCycle_StateFlags__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SeinLogicCycle_StateFlags__Enum value;
};
enum SeinAbilityRestrictZoneMask__Enum : int32_t {
  SeinAbilityRestrictZoneMask__Enum_None = 0,
  SeinAbilityRestrictZoneMask__Enum_Any = 1,
  SeinAbilityRestrictZoneMask__Enum_Attack = 2,
  SeinAbilityRestrictZoneMask__Enum_Dash = 4,
  SeinAbilityRestrictZoneMask__Enum_Jump = 8,
  SeinAbilityRestrictZoneMask__Enum_Sword = 16,
  SeinAbilityRestrictZoneMask__Enum_DoubleJump = 32,
  SeinAbilityRestrictZoneMask__Enum_TripleJump = 64,
  SeinAbilityRestrictZoneMask__Enum_SpiritLeash = 128,
  SeinAbilityRestrictZoneMask__Enum_ButtonX = 256,
  SeinAbilityRestrictZoneMask__Enum_ButtonY = 512,
  SeinAbilityRestrictZoneMask__Enum_ButtonB = 1024,
  SeinAbilityRestrictZoneMask__Enum_Bash = 2048,
  SeinAbilityRestrictZoneMask__Enum_Granade = 4096,
  SeinAbilityRestrictZoneMask__Enum_Hammer = 8192,
  SeinAbilityRestrictZoneMask__Enum_Bow = 16384,
  SeinAbilityRestrictZoneMask__Enum_Glide = 32768,
  SeinAbilityRestrictZoneMask__Enum_LeafAttack = 65536,
  SeinAbilityRestrictZoneMask__Enum_WallJump = 131072,
  SeinAbilityRestrictZoneMask__Enum_Chainsword = 262144,
  SeinAbilityRestrictZoneMask__Enum_Interact = 524288,
  SeinAbilityRestrictZoneMask__Enum_ChargeJump = 1048576,
  SeinAbilityRestrictZoneMask__Enum_EquipmentWheel = 2097152,
  SeinAbilityRestrictZoneMask__Enum_Looking = 4194304,
  SeinAbilityRestrictZoneMask__Enum_Crouch = 8388608,
};
struct SeinAbilityRestrictZoneMask__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SeinAbilityRestrictZoneMask__Enum value;
};
struct SeinLogicCycle__Fields {
  struct MonoBehaviour__Fields _;
  bool m_hasStateFlags;
  bool m_hasRestrictZoneMask;
  enum SeinLogicCycle_StateFlags__Enum m_stateFlags;
  enum SeinAbilityRestrictZoneMask__Enum m_restrictZoneMask;
  bool m_isTouchingDamageColliders;
  bool m_isAllowedNonZeroZPosition;
  int32_t m_currentAutoExecutionOrder;
  struct SortedList_2_System_Int32_CharacterState_ * m_states;
  struct List_1_CharacterState_ * m_statesList;
  struct Dictionary_2_System_Type_System_Int32_ * m_executionOrders;
  struct Dictionary_2_System_Type_SeinLogicCycle_IsAllowedDelegate_ * m_isAllowedDelegates;
  bool m_hasRegisteredDelegates;
  struct List_1_System_Type_ * m_exclusiveActiveStateTypes;
  struct List_1_CharacterState_ * m_exclusiveActiveStates;
  struct HashSet_1_CharacterState_ * m_exclusiveActiveStatesSet;
  struct CharacterState * m_exclusiveActiveState;
  struct Boolean__Array * m_equipped;
  struct PlayerUberState * m_playerUberState;
  int32_t m_cachedUberStoreID;
  bool ShowDebug;
  struct Vector2 m_scroll;
};}