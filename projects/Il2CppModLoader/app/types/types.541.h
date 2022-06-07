namespace app {
struct GhostRecorderData {
    struct GhostRecorderData__Class *klass;
    MonitorData *monitor;
    struct GhostRecorderData__Fields fields;
};

struct __declspec(align(8)) List_1_GhostFrame___Fields {
    struct GhostFrame__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_GhostFrame_ {
    struct List_1_GhostFrame___Class *klass;
    MonitorData *monitor;
    struct List_1_GhostFrame___Fields fields;
};

struct __declspec(align(8)) GhostFrame__Fields {
    float Time;
    struct List_1_IGhostFrameData_ *FrameData;
    int32_t FrameDataCount;
    struct IGhostFrameData__Array *FrameDataArray;
    struct IGhostFrameData__Array *m_frameDatasCache;
    int32_t m_frameDatasCacheCount;
};

struct GhostFrame {
    struct GhostFrame__Class *klass;
    MonitorData *monitor;
    struct GhostFrame__Fields fields;
};

struct __declspec(align(8)) List_1_IGhostFrameData___Fields {
    struct IGhostFrameData__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_IGhostFrameData_ {
    struct List_1_IGhostFrameData___Class *klass;
    MonitorData *monitor;
    struct List_1_IGhostFrameData___Fields fields;
};

struct IGhostFrameData {
    struct IGhostFrameData__Class *klass;
    MonitorData *monitor;
};

struct IGhostFrameData__Array {
    struct IGhostFrameData__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct IGhostFrameData *vector[32];
};

struct IEnumerator_1_IGhostFrameData_ {
    struct IEnumerator_1_IGhostFrameData___Class *klass;
    MonitorData *monitor;
};

struct GhostFrame__Array {
    struct GhostFrame__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct GhostFrame *vector[32];
};

struct IEnumerator_1_GhostFrame_ {
    struct IEnumerator_1_GhostFrame___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_IGhostRecorderPlugin___Fields {
    struct IGhostRecorderPlugin__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_IGhostRecorderPlugin_ {
    struct List_1_IGhostRecorderPlugin___Class *klass;
    MonitorData *monitor;
    struct List_1_IGhostRecorderPlugin___Fields fields;
};

struct IGhostRecorderPlugin__Array {
    struct IGhostRecorderPlugin__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct IGhostRecorderPlugin *vector[32];
};

struct IEnumerator_1_IGhostRecorderPlugin_ {
    struct IEnumerator_1_IGhostRecorderPlugin___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) GhostCharacterData__Fields {
    struct Vector3 Position;
    bool FaceLeft;
    float FeetAngle;
    struct Vector3 FeetPosition;
    struct Vector2 LocalSpeed;
    struct Quaternion MirrorHolderRotation;
    bool _Executed_k__BackingField;
};

struct GhostCharacterData {
    struct GhostCharacterData__Class *klass;
    MonitorData *monitor;
    struct GhostCharacterData__Fields fields;
};

enum class GhostFrame_FrameDataTypes__Enum : uint8_t {
    None = 0x00,
    Transform = 0x01,
    Animation = 0x02,
    StateMachine = 0x03,
    CharacterData = 0x04,
    CharacterAbilities = 0x05,
    CharacterStates = 0x06,
    GenericEvents = 0x07,
    RecordingMetaDataData = 0x08,
    PhysicaSystemManagerData = 0x09,
    ServerEvents = 0x0a,
    WorldEvents = 0x0b,
    TimelineEvents = 0x0c,
    Camera = 0x0d,
    UberState = 0x0e,
    SceneTracking = 0x0f,
    TimeTracking = 0x10,
    LineRenderer = 0x11,
    AnimationParameters = 0x12,
};

struct GhostFrame_FrameDataTypes__Enum__Boxed {
    struct GhostFrame_FrameDataTypes__Enum__Class *klass;
    MonitorData *monitor;
    GhostFrame_FrameDataTypes__Enum value;
    
};

struct __declspec(align(8)) HashSet_1_GenericPuppet___Fields {
    struct Int32__Array *_buckets;
    struct HashSet_1_T_Slot_GenericPuppet___Array *_slots;
    int32_t _count;
    int32_t _lastIndex;
    int32_t _freeList;
    struct IEqualityComparer_1_GenericPuppet_ *_comparer;
    int32_t _version;
    struct SerializationInfo *_siInfo;
};

struct HashSet_1_GenericPuppet_ {
    struct HashSet_1_GenericPuppet___Class *klass;
    MonitorData *monitor;
    struct HashSet_1_GenericPuppet___Fields fields;
};

struct HashSet_1_T_Slot_GenericPuppet_ {
    int32_t hashCode;
    int32_t next;
    struct GenericPuppet *value;
};

struct HashSet_1_T_Slot_GenericPuppet___Boxed {
    struct HashSet_1_T_Slot_GenericPuppet___Class *klass;
    MonitorData *monitor;
    struct HashSet_1_T_Slot_GenericPuppet_ fields;
};

struct HashSet_1_T_Slot_GenericPuppet___Array {
    struct HashSet_1_T_Slot_GenericPuppet___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct HashSet_1_T_Slot_GenericPuppet_ vector[32];
};

struct IEqualityComparer_1_GenericPuppet_ {
    struct IEqualityComparer_1_GenericPuppet___Class *klass;
    MonitorData *monitor;
};

struct GenericPuppet__Array {
    struct GenericPuppet__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct GenericPuppet *vector[32];
};

struct IEnumerator_1_GenericPuppet_ {
    struct IEnumerator_1_GenericPuppet___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_GenericPuppet_ {
    struct IEnumerable_1_GenericPuppet___Class *klass;
    MonitorData *monitor;
};

struct GhostPlayer__Fields {
    struct MonoBehaviour__Fields _;
    struct GameObject *OriRig;
    struct Transform *Puppets;
    struct GameObject__Array *PuppetPrefabs;
    struct GameObject__Array *RecordableObjectPuppetPrefabs;
    struct TextBox *Name;
    struct RTPC *GhostFlagRtpc;
    struct ParticleSystem__Array *ParticleSystems;
    struct GameObject *GhostDisappearEffect;
    int32_t Index;
    struct PlayerPuppetAbilities *PlayerPuppetAbilities;
    struct PlayerPuppetCharacterStates *PlayerPuppetCharacterStates;
    struct String *GhostRecordingFilePath;
    struct String *_GhostReplay_k__BackingField;
    struct Transform *MirrorHolder;
    struct OriGhostRigVisuals *RigVisuals;
    float CurrentTime;
    struct GhostRecorderData *GhostRecorderData;
    struct OriGhostRigVisuals_GhostVisualSettings *VisualSettings;
    bool _IsFinished_k__BackingField;
    bool m_isStarted;
    struct List_1_IGhostRecorderPlugin_ *m_plugins;
    struct Dictionary_2_System_Int32_CharacterStatePuppet_ *m_puppets;
    struct List_1_RecordableObjectPuppet_ *m_recordableObjectPuppets;
    struct GhostRecordingMetaDataPlugin *m_metaDataPlugin;
    struct GameObject *m_oriRig;
    struct CharacterAnimationSystem *m_animation;
    struct MoonAnimator *m_animator;
    struct Action *OnFinished;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
    
    struct GhostCharacterData *m_ghostCharacterData;
    struct SoundHost *m_soundHost;
};

struct GhostPlayer {
    struct GhostPlayer__Class *klass;
    MonitorData *monitor;
    struct GhostPlayer__Fields fields;
};

struct RTPC__Fields {
    struct BaseType__Fields _;
};

struct RTPC {
    struct RTPC__Class *klass;
    MonitorData *monitor;
    struct RTPC__Fields fields;
};

struct PlayerPuppetAbilities__Fields {
    struct MonoBehaviour__Fields _;
    struct HashSet_1_AbilityType_ *m_abilities;
};

struct PlayerPuppetAbilities {
    struct PlayerPuppetAbilities__Class *klass;
    MonitorData *monitor;
    struct PlayerPuppetAbilities__Fields fields;
};

struct __declspec(align(8)) HashSet_1_AbilityType___Fields {
    struct Int32__Array *_buckets;
    struct HashSet_1_T_Slot_AbilityType___Array *_slots;
    int32_t _count;
    int32_t _lastIndex;
    int32_t _freeList;
    struct IEqualityComparer_1_AbilityType_ *_comparer;
    int32_t _version;
    struct SerializationInfo *_siInfo;
};

struct HashSet_1_AbilityType_ {
    struct HashSet_1_AbilityType___Class *klass;
    MonitorData *monitor;
    struct HashSet_1_AbilityType___Fields fields;
};

struct HashSet_1_T_Slot_AbilityType_ {
    int32_t hashCode;
    int32_t next;
    AbilityType__Enum value;
    
};

struct HashSet_1_T_Slot_AbilityType___Boxed {
    struct HashSet_1_T_Slot_AbilityType___Class *klass;
    MonitorData *monitor;
    struct HashSet_1_T_Slot_AbilityType_ fields;
};

struct HashSet_1_T_Slot_AbilityType___Array {
    struct HashSet_1_T_Slot_AbilityType___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct HashSet_1_T_Slot_AbilityType_ vector[32];
};

struct PlayerPuppetCharacterStates__Fields {
    struct MonoBehaviour__Fields _;
    struct Dictionary_2_System_Int32_System_Boolean_ *m_states;
};

struct PlayerPuppetCharacterStates {
    struct PlayerPuppetCharacterStates__Class *klass;
    MonitorData *monitor;
    struct PlayerPuppetCharacterStates__Fields fields;
};

struct __declspec(align(8)) Dictionary_2_System_Int32_System_Boolean___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Boolean___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_System_Int32_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Boolean_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Boolean_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_System_Int32_System_Boolean_ {
    struct Dictionary_2_System_Int32_System_Boolean___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_System_Int32_System_Boolean___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Boolean_ {
    int32_t hashCode;
    int32_t next;
    int32_t key;
    bool value;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Boolean___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Boolean___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Boolean_ fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Boolean___Array {
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Boolean___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Boolean_ vector[32];
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Boolean___Fields {
    struct Dictionary_2_System_Int32_System_Boolean_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Boolean_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Boolean___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Boolean___Fields fields;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Boolean___Fields {
    struct Dictionary_2_System_Int32_System_Boolean_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Boolean_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Boolean___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Boolean___Fields fields;
};

struct KeyValuePair_2_System_Int32_System_Boolean_ {
    int32_t key;
    bool value;
};

struct KeyValuePair_2_System_Int32_System_Boolean___Boxed {
    struct KeyValuePair_2_System_Int32_System_Boolean___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_System_Int32_System_Boolean_ fields;
};

struct KeyValuePair_2_System_Int32_System_Boolean___Array {
    struct KeyValuePair_2_System_Int32_System_Boolean___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_System_Int32_System_Boolean_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_System_Int32_System_Boolean_ {
    struct IEnumerator_1_KeyValuePair_2_System_Int32_System_Boolean___Class *klass;
    MonitorData *monitor;
};

struct OriGhostRigVisuals__Fields {
    struct MonoBehaviour__Fields _;
    struct Renderer *Body_MDL;
    struct Renderer *Trail;
    struct Renderer *FirstVignette;
    struct Renderer *SecondVignette;
    struct Renderer *ThirdVignette;
    struct Renderer *FourthVignette;
};

struct OriGhostRigVisuals {
    struct OriGhostRigVisuals__Class *klass;
    MonitorData *monitor;
    struct OriGhostRigVisuals__Fields fields;
};

struct __declspec(align(8)) OriGhostRigVisuals_GhostVisualSettings__Fields {
    struct UberShaderColor *MultiplyLayerColor;
    struct UberShaderColor *EmissivityColor;
    struct UberShaderColor *TrailColor;
    struct UberShaderColor *FirstVignetteColor;
    struct UberShaderColor *SecondVignetteColor;
    struct UberShaderColor *GhostIndicatorColor;
    struct UberShaderColor *ParticleColor;
};

struct OriGhostRigVisuals_GhostVisualSettings {
    struct OriGhostRigVisuals_GhostVisualSettings__Class *klass;
    MonitorData *monitor;
    struct OriGhostRigVisuals_GhostVisualSettings__Fields fields;
};

struct __declspec(align(8)) UberShaderProperty__Fields {
    struct GameObject *AttachedBlockGameObject;
    struct UberShaderBlock *m_block;
    int32_t MainBindId;
    struct String *_BindName_k__BackingField;
    int32_t _BindID_k__BackingField;
};

struct UberShaderProperty {
    struct UberShaderProperty__Class *klass;
    MonitorData *monitor;
    struct UberShaderProperty__Fields fields;
};

struct UberShaderColor__Fields {
    struct UberShaderProperty__Fields _;
    struct Color m_color;
    float BindMultiply;
};

struct UberShaderColor {
    struct UberShaderColor__Class *klass;
    MonitorData *monitor;
    struct UberShaderColor__Fields fields;
};

enum class ShaderModeType__Enum : int32_t {
    In2D = 0x00000000,
    In3D = 0x00000001,
};

struct ShaderModeType__Enum__Boxed {
    struct ShaderModeType__Enum__Class *klass;
    MonitorData *monitor;
    ShaderModeType__Enum value;
    
};

enum class BlendModeType__Enum : int32_t {
    AlphaBlend = 0x00000000,
    Additive = 0x00000001,
    Opaque = 0x00000002,
    Multiply = 0x00000003,
    Invisible = 0x00000004,
};

struct BlendModeType__Enum__Boxed {
    struct BlendModeType__Enum__Class *klass;
    MonitorData *monitor;
    BlendModeType__Enum value;
    
};

enum class MotionVectorsModeType__Enum : int32_t {
    MotionVecAuto = 0x00000000,
    MotionVecOn = 0x00000001,
    MotionVecOff = 0x00000002,
};

struct MotionVectorsModeType__Enum__Boxed {
    struct MotionVectorsModeType__Enum__Class *klass;
    MonitorData *monitor;
    MotionVectorsModeType__Enum value;
    
};

enum class TimeMode__Enum : int32_t {
    GameTime = 0x00000000,
    UITime = 0x00000001,
};

struct TimeMode__Enum__Boxed {
    struct TimeMode__Enum__Class *klass;
    MonitorData *monitor;
    TimeMode__Enum value;
    
};

enum class AlphaMaskChannelConfig__Enum : int32_t {
    Channel0 = 0x00000000,
    Channel1 = 0x00000001,
    Channel0And1 = 0x00000002,
};

struct AlphaMaskChannelConfig__Enum__Boxed {
    struct AlphaMaskChannelConfig__Enum__Class *klass;
    MonitorData *monitor;
    AlphaMaskChannelConfig__Enum value;
    
};

enum class UberShaderBlock_ColliderTypeEnum__Enum : int32_t {
    Enabled = 0x00000000,
    Disabled = 0x00000001,
    UseLegacy = 0x00000002,
};

struct UberShaderBlock_ColliderTypeEnum__Enum__Boxed {
    struct UberShaderBlock_ColliderTypeEnum__Enum__Class *klass;
    MonitorData *monitor;
    UberShaderBlock_ColliderTypeEnum__Enum value;
    
};

struct UberShaderBlock__Fields {
    struct MonoBehaviour__Fields _;
    ShaderModeType__Enum ShaderMode;
    
    BlendModeType__Enum BlendMode;
    
    MotionVectorsModeType__Enum MotionVectorsMode;
    
    bool WriteRGB;
    bool WriteA;
    float OffsetPositionZ;
    float ZExpandNear;
    float ZExpandFar;
    float ThicknessNear;
    float ThicknessFar;
    bool ForceNeverClip;
    float MaxBrightness;
    float MinBrightness;
    float DisableDarkening;
    float ColorVariationInfluence;
    float ColorVariationSpeed;
    float ColorVariationScale;
    float ReflectionAmount;
    float RawRandomOffset;
    TimeMode__Enum TimeMode;
    
    bool IsAlphaMasked;
    bool IsAlphaInverse;
    AlphaMaskChannelConfig__Enum AlphaMaskChannelConfig;
    
    float AlphaMaskMulCh0;
    float AlphaMaskMulCh1;
    UberShaderBlock_ColliderTypeEnum__Enum ColliderType;
    
    bool ColliderErosion;
    bool BackSideOnly;
    bool FrontSideOnly;
    bool DoReflection;
    bool WaterOnly;
    bool GodRayPost;
    bool UseBakedLighting;
    float ZShift;
    float MotionBlurScale;
    float AlphaCutoff;
    float AlphaSmooth;
    bool DontResetCustomBounds;
    bool m_useFog;
    struct Material *m_MaterialInPrefab;
    struct MeshFilter *m_filter;
    struct Renderer *m_renderer;
    bool ForceZExpand;
    struct RuntimeTypeHandle m_typeId;
};

struct UberShaderBlock {
    struct UberShaderBlock__Class *klass;
    MonitorData *monitor;
    struct UberShaderBlock__Fields fields;
};

struct UberShaderBlockGrabPass__Fields {
    struct UberShaderBlock__Fields _;
    struct UberShaderColor *Color;
    bool OverwriteDistort;
    bool m_inFrustm;
    int32_t m_frame;
};

struct UberShaderBlockGrabPass {
    struct UberShaderBlockGrabPass__Class *klass;
    MonitorData *monitor;
    struct UberShaderBlockGrabPass__Fields fields;
};

struct __declspec(align(8)) Dictionary_2_System_Int32_CharacterStatePuppet___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_CharacterStatePuppet___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_System_Int32_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_CharacterStatePuppet_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_CharacterStatePuppet_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_System_Int32_CharacterStatePuppet_ {
    struct Dictionary_2_System_Int32_CharacterStatePuppet___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_System_Int32_CharacterStatePuppet___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_CharacterStatePuppet_ {
    int32_t hashCode;
    int32_t next;
    int32_t key;
    struct CharacterStatePuppet *value;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_CharacterStatePuppet___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_CharacterStatePuppet___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_CharacterStatePuppet_ fields;
};

struct CharacterStatePuppet__Fields {
    struct GenericPuppet__Fields _;
    struct DynamicDataResolver *m_dataResolver;
    struct IPuppet *m_puppetMaster;
};

struct CharacterStatePuppet {
    struct CharacterStatePuppet__Class *klass;
    MonitorData *monitor;
    struct CharacterStatePuppet__Fields fields;
};

struct IPuppet {
    struct IPuppet__Class *klass;
    MonitorData *monitor;
};

struct KuDashPuppet__Fields {
    struct CharacterStatePuppet__Fields _;
    struct MoonTimeline *HitWallTimeline;
    struct MoonTimeline *ForwardTimelineStart;
    struct MoonTimeline *ForwardAirTimelineStart;
    struct MoonTimeline *BackwardTimelineStart;
    struct MoonTimeline *BackwardAirTimelineStart;
    struct MoonTimeline *ForwardTimelineEnd;
    struct MoonTimeline *ForwardAirTimelineEnd;
    struct MoonTimeline *BackwardTimelineEnd;
    struct MoonTimeline *BackwardAirTimelineEnd;
    struct FloatAnimator *BackwardAirStartGravity;
    struct FloatAnimator *ForwardAirStartGravity;
    struct FloatAnimator *BackwardAirEndGravity;
    struct FloatAnimator *ForwardAirEndGravity;
    struct Dictionary_2_Moon_Timeline_MoonTimeline_Moon_Timeline_FloatAnimator_ *m_gravityDictionary;
};

struct KuDashPuppet {
    struct KuDashPuppet__Class *klass;
    MonitorData *monitor;
    struct KuDashPuppet__Fields fields;
};

struct __declspec(align(8)) Dictionary_2_Moon_Timeline_MoonTimeline_Moon_Timeline_FloatAnimator___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_Moon_Timeline_MoonTimeline_Moon_Timeline_FloatAnimator___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_Moon_Timeline_MoonTimeline_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_Moon_Timeline_MoonTimeline_Moon_Timeline_FloatAnimator_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_Moon_Timeline_MoonTimeline_Moon_Timeline_FloatAnimator_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_Moon_Timeline_MoonTimeline_Moon_Timeline_FloatAnimator_ {
    struct Dictionary_2_Moon_Timeline_MoonTimeline_Moon_Timeline_FloatAnimator___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_Moon_Timeline_MoonTimeline_Moon_Timeline_FloatAnimator___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_Moon_Timeline_MoonTimeline_Moon_Timeline_FloatAnimator_ {
    int32_t hashCode;
    int32_t next;
    struct MoonTimeline *key;
    struct FloatAnimator *value;
};

struct Dictionary_2_TKey_TValue_Entry_Moon_Timeline_MoonTimeline_Moon_Timeline_FloatAnimator___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_Moon_Timeline_MoonTimeline_Moon_Timeline_FloatAnimator___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_Moon_Timeline_MoonTimeline_Moon_Timeline_FloatAnimator_ fields;
};

struct Dictionary_2_TKey_TValue_Entry_Moon_Timeline_MoonTimeline_Moon_Timeline_FloatAnimator___Array {
    struct Dictionary_2_TKey_TValue_Entry_Moon_Timeline_MoonTimeline_Moon_Timeline_FloatAnimator___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_Moon_Timeline_MoonTimeline_Moon_Timeline_FloatAnimator_ vector[32];
};

struct IEqualityComparer_1_Moon_Timeline_MoonTimeline_ {
    struct IEqualityComparer_1_Moon_Timeline_MoonTimeline___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_Moon_Timeline_MoonTimeline_Moon_Timeline_FloatAnimator___Fields {
    struct Dictionary_2_Moon_Timeline_MoonTimeline_Moon_Timeline_FloatAnimator_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_Moon_Timeline_MoonTimeline_Moon_Timeline_FloatAnimator_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_Moon_Timeline_MoonTimeline_Moon_Timeline_FloatAnimator___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_Moon_Timeline_MoonTimeline_Moon_Timeline_FloatAnimator___Fields fields;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_Moon_Timeline_MoonTimeline_Moon_Timeline_FloatAnimator___Fields {
    struct Dictionary_2_Moon_Timeline_MoonTimeline_Moon_Timeline_FloatAnimator_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_Moon_Timeline_MoonTimeline_Moon_Timeline_FloatAnimator_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_Moon_Timeline_MoonTimeline_Moon_Timeline_FloatAnimator___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_Moon_Timeline_MoonTimeline_Moon_Timeline_FloatAnimator___Fields fields;
};

struct FloatAnimator__Array {
    struct FloatAnimator__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct FloatAnimator *vector[32];
};

struct IEnumerator_1_Moon_Timeline_FloatAnimator_ {
    struct IEnumerator_1_Moon_Timeline_FloatAnimator___Class *klass;
    MonitorData *monitor;
};

struct ICollection_1_Moon_Timeline_MoonTimeline_ {
    struct ICollection_1_Moon_Timeline_MoonTimeline___Class *klass;
    MonitorData *monitor;
};

struct ICollection_1_Moon_Timeline_FloatAnimator_ {
    struct ICollection_1_Moon_Timeline_FloatAnimator___Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_Moon_Timeline_MoonTimeline_Moon_Timeline_FloatAnimator_ {
    struct MoonTimeline *key;
    struct FloatAnimator *value;
};

struct KeyValuePair_2_Moon_Timeline_MoonTimeline_Moon_Timeline_FloatAnimator___Boxed {
    struct KeyValuePair_2_Moon_Timeline_MoonTimeline_Moon_Timeline_FloatAnimator___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_Moon_Timeline_MoonTimeline_Moon_Timeline_FloatAnimator_ fields;
};

struct KeyValuePair_2_Moon_Timeline_MoonTimeline_Moon_Timeline_FloatAnimator___Array {
    struct KeyValuePair_2_Moon_Timeline_MoonTimeline_Moon_Timeline_FloatAnimator___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_Moon_Timeline_MoonTimeline_Moon_Timeline_FloatAnimator_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_Moon_Timeline_MoonTimeline_Moon_Timeline_FloatAnimator_ {
    struct IEnumerator_1_KeyValuePair_2_Moon_Timeline_MoonTimeline_Moon_Timeline_FloatAnimator___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_Moon_Timeline_MoonTimeline_ {
    struct IEnumerable_1_Moon_Timeline_MoonTimeline___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_Moon_Timeline_FloatAnimator_ {
    struct IEnumerable_1_Moon_Timeline_FloatAnimator___Class *klass;
    MonitorData *monitor;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_CharacterStatePuppet___Array {
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_CharacterStatePuppet___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_CharacterStatePuppet_ vector[32];
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int32_CharacterStatePuppet___Fields {
    struct Dictionary_2_System_Int32_CharacterStatePuppet_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_CharacterStatePuppet_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_CharacterStatePuppet___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_CharacterStatePuppet___Fields fields;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int32_CharacterStatePuppet___Fields {
    struct Dictionary_2_System_Int32_CharacterStatePuppet_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_CharacterStatePuppet_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_CharacterStatePuppet___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_CharacterStatePuppet___Fields fields;
};

struct CharacterStatePuppet__Array {
    struct CharacterStatePuppet__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct CharacterStatePuppet *vector[32];
};

struct IEnumerator_1_CharacterStatePuppet_ {
    struct IEnumerator_1_CharacterStatePuppet___Class *klass;
    MonitorData *monitor;
};

struct ICollection_1_CharacterStatePuppet_ {
    struct ICollection_1_CharacterStatePuppet___Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_System_Int32_CharacterStatePuppet_ {
    int32_t key;
    struct CharacterStatePuppet *value;
};

struct KeyValuePair_2_System_Int32_CharacterStatePuppet___Boxed {
    struct KeyValuePair_2_System_Int32_CharacterStatePuppet___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_System_Int32_CharacterStatePuppet_ fields;
};

struct KeyValuePair_2_System_Int32_CharacterStatePuppet___Array {
    struct KeyValuePair_2_System_Int32_CharacterStatePuppet___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_System_Int32_CharacterStatePuppet_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_System_Int32_CharacterStatePuppet_ {
    struct IEnumerator_1_KeyValuePair_2_System_Int32_CharacterStatePuppet___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_CharacterStatePuppet_ {
    struct IEnumerable_1_CharacterStatePuppet___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_RecordableObjectPuppet___Fields {
    struct RecordableObjectPuppet__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_RecordableObjectPuppet_ {
    struct List_1_RecordableObjectPuppet___Class *klass;
    MonitorData *monitor;
    struct List_1_RecordableObjectPuppet___Fields fields;
};

struct RecordableObjectPuppet__Fields {
    struct GenericPuppet__Fields _;
    struct RecordingLink *m_recordingLink;
    int32_t m_uniqueRecordingId;
    struct Vector3 m_lastPosition;
    bool m_isInteracting;
};

struct RecordableObjectPuppet {
    struct RecordableObjectPuppet__Class *klass;
    MonitorData *monitor;
    struct RecordableObjectPuppet__Fields fields;
};

struct RecordingLink__Fields {
    struct MonoBehaviour__Fields _;
    struct List_1_RecordableObject_ *RecordableObjects;
    bool m_beginLock;
    bool m_endLock;
};

struct RecordingLink {
    struct RecordingLink__Class *klass;
    MonitorData *monitor;
    struct RecordingLink__Fields fields;
};

struct __declspec(align(8)) List_1_RecordableObject___Fields {
    struct RecordableObject__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_RecordableObject_ {
    struct List_1_RecordableObject___Class *klass;
    MonitorData *monitor;
    struct List_1_RecordableObject___Fields fields;
};

struct RecordableObject__Fields {
    struct SaveSerialize__Fields _;
    struct GameObject *PuppetPrefab;
    struct RecordingLink *RecordingLink;
    struct RecordableObjectPuppet *m_recordableObjectPuppet;
};

struct RecordableObject {
    struct RecordableObject__Class *klass;
    MonitorData *monitor;
    struct RecordableObject__Fields fields;
};

struct RecordableObject__Array {
    struct RecordableObject__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct RecordableObject *vector[32];
};

struct IEnumerator_1_RecordableObject_ {
    struct IEnumerator_1_RecordableObject___Class *klass;
    MonitorData *monitor;
};

struct JumperEnemyPuppet__Fields {
    struct RecordableObjectPuppet__Fields _;
    struct TextureAnimationWithTransitions *Respawn;
    struct TextureAnimationWithTransitions *Idle;
    struct TextureAnimationWithTransitions *JumpCharge;
    struct TextureAnimationWithTransitions *Jump;
    struct TextureAnimationWithTransitions *ShortJump;
    struct TextureAnimationWithTransitions *JumpFlip;
    struct TextureAnimationWithTransitions *Fall;
    struct TextureAnimationWithTransitions *Confused;
    struct TextureAnimationWithTransitions *Thrown;
    struct TextureAnimationWithTransitions *Stomped;
};

struct JumperEnemyPuppet {
    struct JumperEnemyPuppet__Class *klass;
    MonitorData *monitor;
    struct JumperEnemyPuppet__Fields fields;
};

struct TextureAnimationWithTransitions__Fields {
    struct ScriptableObject__Fields _;
    struct TextureAnimation *Animation;
    struct List_1_TextureAnimationWithTransitions_TextureAnimationPair_ *Transitions;
    struct TextureAnimationWithTransitions *Parent;
};

struct TextureAnimationWithTransitions {
    struct TextureAnimationWithTransitions__Class *klass;
    MonitorData *monitor;
    struct TextureAnimationWithTransitions__Fields fields;
};

struct TextureAnimation__Fields {
    struct ScriptableObject__Fields _;
    float Speed;
    bool Loop;
    bool IgnoreTimeScale;
    struct AnimationMetaData *AnimationMetaData;
    struct List_1_MoonGuid_ *FrameGuids;
    struct List_1_Atlas_ *Atlases;
    struct Dictionary_2_MoonGuid_TextureAnimation_AnimationTextureInfo_ *m_guidToTex;
};

}
