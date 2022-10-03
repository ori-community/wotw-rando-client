namespace app {
    struct TextureAnimation {
        struct TextureAnimation__Class* klass;
        MonitorData* monitor;
        struct TextureAnimation__Fields fields;
    };

    enum class AnimationMetaData_ViewModes__Enum : int32_t {
        Left = 0x00000000,
        Front = 0x00000001,
        Right = 0x00000002,
    };

    struct AnimationMetaData_ViewModes__Enum__Boxed {
        struct AnimationMetaData_ViewModes__Enum__Class* klass;
        MonitorData* monitor;
        AnimationMetaData_ViewModes__Enum value;
    };

    struct AnimationMetaData__Fields {
        struct ScriptableObject__Fields _;
        struct TextureAnimation* Animation;
        float CameraTargetDistance;
        float CameraFieldOfView;
        float AspectRatio;
        bool Perspective;
        struct String* CameraName;
        struct Vector2 PlaneSize;
        int32_t FrameEnd;
        AnimationMetaData_ViewModes__Enum ViewMode;

        int32_t FrameStart;
        float FrameRate;
        struct List_1_AnimationMetaData_AnimationData_* Data;
        struct AnimationMetaData_AnimationData* CameraData;
        struct AnimationMetaData_AnimationData* Camera;
    };

    struct AnimationMetaData {
        struct AnimationMetaData__Class* klass;
        MonitorData* monitor;
        struct AnimationMetaData__Fields fields;
    };

    struct __declspec(align(8)) List_1_AnimationMetaData_AnimationData___Fields {
        struct AnimationMetaData_AnimationData__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_AnimationMetaData_AnimationData_ {
        struct List_1_AnimationMetaData_AnimationData___Class* klass;
        MonitorData* monitor;
        struct List_1_AnimationMetaData_AnimationData___Fields fields;
    };

    struct __declspec(align(8)) AnimationMetaData_AnimationData__Fields {
        struct String* Name;
        struct AnimationMetaData_FloatAnimation* PositionX;
        struct AnimationMetaData_FloatAnimation* PositionY;
        struct AnimationMetaData_FloatAnimation* PositionZ;
        struct AnimationMetaData_FloatAnimation* RotationZ;
        struct AnimationMetaData_FloatAnimation* ScaleX;
        struct AnimationMetaData_FloatAnimation* ScaleY;
    };

    struct AnimationMetaData_AnimationData {
        struct AnimationMetaData_AnimationData__Class* klass;
        MonitorData* monitor;
        struct AnimationMetaData_AnimationData__Fields fields;
    };

    struct __declspec(align(8)) AnimationMetaData_FloatAnimation__Fields {
        struct List_1_System_Single_* Values;
        float Duration;
    };

    struct AnimationMetaData_FloatAnimation {
        struct AnimationMetaData_FloatAnimation__Class* klass;
        MonitorData* monitor;
        struct AnimationMetaData_FloatAnimation__Fields fields;
    };

    struct AnimationMetaData_AnimationData__Array {
        struct AnimationMetaData_AnimationData__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct AnimationMetaData_AnimationData* vector[32];
    };

    struct IEnumerator_1_AnimationMetaData_AnimationData_ {
        struct IEnumerator_1_AnimationMetaData_AnimationData___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_MoonGuid___Fields {
        struct MoonGuid__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_MoonGuid_ {
        struct List_1_MoonGuid___Class* klass;
        MonitorData* monitor;
        struct List_1_MoonGuid___Fields fields;
    };

    struct MoonGuid__Array {
        struct MoonGuid__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct MoonGuid* vector[32];
    };

    struct IEnumerator_1_MoonGuid_ {
        struct IEnumerator_1_MoonGuid___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_Atlas___Fields {
        struct Atlas__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Atlas_ {
        struct List_1_Atlas___Class* klass;
        MonitorData* monitor;
        struct List_1_Atlas___Fields fields;
    };

    enum class UberScreenMode__Enum : int32_t {
        Red = 0x00000000,
        Green = 0x00000001,
        Blue = 0x00000002,
        None = 0x00000003,
    };

    struct UberScreenMode__Enum__Boxed {
        struct UberScreenMode__Enum__Class* klass;
        MonitorData* monitor;
        UberScreenMode__Enum value;
    };

    struct Atlas__Fields {
        struct ScriptableObject__Fields _;
        float Width;
        float Height;
        struct Texture2D* Texture;
        UberScreenMode__Enum ScreenMode;

        float UberScreenTweak;
        struct List_1_AtlasSpriteTexture_* SpriteTextures;
        struct String* _TexturePath_k__BackingField;
        struct Dictionary_2_MoonGuid_System_Int32_* m_atlasCache;
    };

    struct Atlas {
        struct Atlas__Class* klass;
        MonitorData* monitor;
        struct Atlas__Fields fields;
    };

    struct __declspec(align(8)) List_1_AtlasSpriteTexture___Fields {
        struct AtlasSpriteTexture__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_AtlasSpriteTexture_ {
        struct List_1_AtlasSpriteTexture___Class* klass;
        MonitorData* monitor;
        struct List_1_AtlasSpriteTexture___Fields fields;
    };

    struct __declspec(align(8)) AtlasSpriteTexture__Fields {
        struct String* Name;
        struct MoonGuid* Guid;
        struct Rect NormalizedRect;
        bool Flipped;
        struct Vector2 CenterOffset;
        struct Vector2 OriginalSize;
    };

    struct AtlasSpriteTexture {
        struct AtlasSpriteTexture__Class* klass;
        MonitorData* monitor;
        struct AtlasSpriteTexture__Fields fields;
    };

    struct AtlasSpriteTexture__Array {
        struct AtlasSpriteTexture__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct AtlasSpriteTexture* vector[32];
    };

    struct IEnumerator_1_AtlasSpriteTexture_ {
        struct IEnumerator_1_AtlasSpriteTexture___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) Dictionary_2_MoonGuid_System_Int32___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_MoonGuid_System_Int32___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_MoonGuid_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_MoonGuid_System_Int32_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_MoonGuid_System_Int32_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_MoonGuid_System_Int32_ {
        struct Dictionary_2_MoonGuid_System_Int32___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_MoonGuid_System_Int32___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_MoonGuid_System_Int32_ {
        int32_t hashCode;
        int32_t next;
        struct MoonGuid* key;
        int32_t value;
    };

    struct Dictionary_2_TKey_TValue_Entry_MoonGuid_System_Int32___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_MoonGuid_System_Int32___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_MoonGuid_System_Int32_ fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_MoonGuid_System_Int32___Array {
        struct Dictionary_2_TKey_TValue_Entry_MoonGuid_System_Int32___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_MoonGuid_System_Int32_ vector[32];
    };

    struct IEqualityComparer_1_MoonGuid_ {
        struct IEqualityComparer_1_MoonGuid___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_MoonGuid_System_Int32___Fields {
        struct Dictionary_2_MoonGuid_System_Int32_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_MoonGuid_System_Int32_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_MoonGuid_System_Int32___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_MoonGuid_System_Int32___Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_MoonGuid_System_Int32___Fields {
        struct Dictionary_2_MoonGuid_System_Int32_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_MoonGuid_System_Int32_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_MoonGuid_System_Int32___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_MoonGuid_System_Int32___Fields fields;
    };

    struct ICollection_1_MoonGuid_ {
        struct ICollection_1_MoonGuid___Class* klass;
        MonitorData* monitor;
    };

    struct KeyValuePair_2_MoonGuid_System_Int32_ {
        struct MoonGuid* key;
        int32_t value;
    };

    struct KeyValuePair_2_MoonGuid_System_Int32___Boxed {
        struct KeyValuePair_2_MoonGuid_System_Int32___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_MoonGuid_System_Int32_ fields;
    };

    struct KeyValuePair_2_MoonGuid_System_Int32___Array {
        struct KeyValuePair_2_MoonGuid_System_Int32___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_MoonGuid_System_Int32_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_MoonGuid_System_Int32_ {
        struct IEnumerator_1_KeyValuePair_2_MoonGuid_System_Int32___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_MoonGuid_ {
        struct IEnumerable_1_MoonGuid___Class* klass;
        MonitorData* monitor;
    };

    struct Atlas__Array {
        struct Atlas__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Atlas* vector[32];
    };

    struct IEnumerator_1_Atlas_ {
        struct IEnumerator_1_Atlas___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) Dictionary_2_MoonGuid_TextureAnimation_AnimationTextureInfo___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_MoonGuid_TextureAnimation_AnimationTextureInfo___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_MoonGuid_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_MoonGuid_TextureAnimation_AnimationTextureInfo_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_MoonGuid_TextureAnimation_AnimationTextureInfo_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_MoonGuid_TextureAnimation_AnimationTextureInfo_ {
        struct Dictionary_2_MoonGuid_TextureAnimation_AnimationTextureInfo___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_MoonGuid_TextureAnimation_AnimationTextureInfo___Fields fields;
    };

    struct TextureAnimation_AnimationTextureInfo {
        struct Atlas* Atlas;
        struct AtlasSpriteTexture* SpriteTexture;
    };

    struct TextureAnimation_AnimationTextureInfo__Boxed {
        struct TextureAnimation_AnimationTextureInfo__Class* klass;
        MonitorData* monitor;
        struct TextureAnimation_AnimationTextureInfo fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_MoonGuid_TextureAnimation_AnimationTextureInfo_ {
        int32_t hashCode;
        int32_t next;
        struct MoonGuid* key;
        struct TextureAnimation_AnimationTextureInfo value;
    };

    struct Dictionary_2_TKey_TValue_Entry_MoonGuid_TextureAnimation_AnimationTextureInfo___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_MoonGuid_TextureAnimation_AnimationTextureInfo___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_MoonGuid_TextureAnimation_AnimationTextureInfo_ fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_MoonGuid_TextureAnimation_AnimationTextureInfo___Array {
        struct Dictionary_2_TKey_TValue_Entry_MoonGuid_TextureAnimation_AnimationTextureInfo___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_MoonGuid_TextureAnimation_AnimationTextureInfo_ vector[32];
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_MoonGuid_TextureAnimation_AnimationTextureInfo___Fields {
        struct Dictionary_2_MoonGuid_TextureAnimation_AnimationTextureInfo_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_MoonGuid_TextureAnimation_AnimationTextureInfo_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_MoonGuid_TextureAnimation_AnimationTextureInfo___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_MoonGuid_TextureAnimation_AnimationTextureInfo___Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_MoonGuid_TextureAnimation_AnimationTextureInfo___Fields {
        struct Dictionary_2_MoonGuid_TextureAnimation_AnimationTextureInfo_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_MoonGuid_TextureAnimation_AnimationTextureInfo_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_MoonGuid_TextureAnimation_AnimationTextureInfo___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_MoonGuid_TextureAnimation_AnimationTextureInfo___Fields fields;
    };

    struct TextureAnimation_AnimationTextureInfo__Array {
        struct TextureAnimation_AnimationTextureInfo__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct TextureAnimation_AnimationTextureInfo vector[32];
    };

    struct IEnumerator_1_TextureAnimation_AnimationTextureInfo_ {
        struct IEnumerator_1_TextureAnimation_AnimationTextureInfo___Class* klass;
        MonitorData* monitor;
    };

    struct ICollection_1_TextureAnimation_AnimationTextureInfo_ {
        struct ICollection_1_TextureAnimation_AnimationTextureInfo___Class* klass;
        MonitorData* monitor;
    };

    struct KeyValuePair_2_MoonGuid_TextureAnimation_AnimationTextureInfo_ {
        struct MoonGuid* key;
        struct TextureAnimation_AnimationTextureInfo value;
    };

    struct KeyValuePair_2_MoonGuid_TextureAnimation_AnimationTextureInfo___Boxed {
        struct KeyValuePair_2_MoonGuid_TextureAnimation_AnimationTextureInfo___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_MoonGuid_TextureAnimation_AnimationTextureInfo_ fields;
    };

    struct KeyValuePair_2_MoonGuid_TextureAnimation_AnimationTextureInfo___Array {
        struct KeyValuePair_2_MoonGuid_TextureAnimation_AnimationTextureInfo___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_MoonGuid_TextureAnimation_AnimationTextureInfo_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_MoonGuid_TextureAnimation_AnimationTextureInfo_ {
        struct IEnumerator_1_KeyValuePair_2_MoonGuid_TextureAnimation_AnimationTextureInfo___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_TextureAnimation_AnimationTextureInfo_ {
        struct IEnumerable_1_TextureAnimation_AnimationTextureInfo___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_TextureAnimationWithTransitions_TextureAnimationPair___Fields {
        struct TextureAnimationWithTransitions_TextureAnimationPair__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_TextureAnimationWithTransitions_TextureAnimationPair_ {
        struct List_1_TextureAnimationWithTransitions_TextureAnimationPair___Class* klass;
        MonitorData* monitor;
        struct List_1_TextureAnimationWithTransitions_TextureAnimationPair___Fields fields;
    };

    struct __declspec(align(8)) TextureAnimationWithTransitions_TextureAnimationPair__Fields {
        struct TextureAnimation* TransitionAnimation;
        struct TextureAnimationWithTransitions* From;
        struct TextureAnimation* FromAnimation;
        bool Flip;
        int32_t CrossoverFrame;
        int32_t MinFrame;
        int32_t MaxFrame;
        int32_t TransitionStart;
        int32_t TransitionEnd;
    };

    struct TextureAnimationWithTransitions_TextureAnimationPair {
        struct TextureAnimationWithTransitions_TextureAnimationPair__Class* klass;
        MonitorData* monitor;
        struct TextureAnimationWithTransitions_TextureAnimationPair__Fields fields;
    };

    struct TextureAnimationWithTransitions_TextureAnimationPair__Array {
        struct TextureAnimationWithTransitions_TextureAnimationPair__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct TextureAnimationWithTransitions_TextureAnimationPair* vector[32];
    };

    struct IEnumerator_1_TextureAnimationWithTransitions_TextureAnimationPair_ {
        struct IEnumerator_1_TextureAnimationWithTransitions_TextureAnimationPair___Class* klass;
        MonitorData* monitor;
    };

    struct RecordableObjectPuppet__Array {
        struct RecordableObjectPuppet__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct RecordableObjectPuppet* vector[32];
    };

    struct IEnumerator_1_RecordableObjectPuppet_ {
        struct IEnumerator_1_RecordableObjectPuppet___Class* klass;
        MonitorData* monitor;
    };

    struct GhostRecordingMetaDataPlugin__Fields {
        struct IGhostRecorderPlugin__Fields _;
        struct GhostRecordingMetaDataData* Data;
        struct Vector3 m_startingPlayerPosition;
    };

    struct GhostRecordingMetaDataPlugin {
        struct GhostRecordingMetaDataPlugin__Class* klass;
        MonitorData* monitor;
        struct GhostRecordingMetaDataPlugin__Fields fields;
    };

    struct __declspec(align(8)) GhostRecordingMetaDataData__Fields {
        struct Vector3 Position;
        float RaceDuration;
        bool _Executed_k__BackingField;
    };

    struct GhostRecordingMetaDataData {
        struct GhostRecordingMetaDataData__Class* klass;
        MonitorData* monitor;
        struct GhostRecordingMetaDataData__Fields fields;
    };

    enum class GhostRecorder_GhostPluginRecordingType__Enum : int32_t {
        Poll = 0x00000000,
        Push = 0x00000001,
    };

    struct GhostRecorder_GhostPluginRecordingType__Enum__Boxed {
        struct GhostRecorder_GhostPluginRecordingType__Enum__Class* klass;
        MonitorData* monitor;
        GhostRecorder_GhostPluginRecordingType__Enum value;
    };

    struct CharacterAnimationSystem__Fields {
        struct MonoBehaviour__Fields _;
        struct CharacterSpriteMirror* SpriteMirror;
        struct MoonAnimator* MoonAnimator;
        struct MoonAnimation* MissingAnimationPlaceholder;
        struct ActiveAnimationHandle m_currentState;
        int32_t m_rootMotionEnabled;
        struct List_1_CharacterAnimationSystem_CharacterAnimationState_* m_states;
        struct SpriteAnimatorWithTransitions* Animator;
        struct CharacterAnimationSystem_CharacterAnimationState* m_lastPlayingAnimationState;
        bool m_wasFacingLeft;
        float m_flipTime;
    };

    struct CharacterAnimationSystem {
        struct CharacterAnimationSystem__Class* klass;
        MonitorData* monitor;
        struct CharacterAnimationSystem__Fields fields;
    };

    struct CharacterState__Fields {
        struct SaveSerialize__Fields _;
        struct DynamicDataResolver* m_dataResolver;
        struct GameObject* SeinCharacterPreview;
        struct MoonAnimator* m_previewAnimator;
        struct SeinLogicCycle_IsAllowedDelegate* IsAllowed;
        struct GameObject* PuppetPrefab;
        struct CharacterStatePuppet* m_characterStatePuppet;
        bool DebugStateOutput;
        bool IsExclusiveActiveState;
        int32_t m_id;
        struct SeinCharacter* m_sein;
        bool m_isActive;
        struct Boolean__Array* m_canBeInterruptedBy;
        bool m_canInputBeQueued;
        struct String* CharacterStateUpdateString;
    };

    struct CharacterState {
        struct CharacterState__Class* klass;
        MonitorData* monitor;
        struct CharacterState__Fields fields;
    };

    enum class CharacterSpriteMirror_MirrorMode__Enum : int32_t {
        Rotation = 0x00000000,
        Scale = 0x00000001,
    };

    struct CharacterSpriteMirror_MirrorMode__Enum__Boxed {
        struct CharacterSpriteMirror_MirrorMode__Enum__Class* klass;
        MonitorData* monitor;
        CharacterSpriteMirror_MirrorMode__Enum value;
    };

    struct CharacterSpriteMirror__Fields {
        struct CharacterState__Fields _;
        int32_t m_lock;
        CharacterSpriteMirror_MirrorMode__Enum Mirror;

        bool StartFacingLeft;
        bool m_faceLeft;
    };

    struct CharacterSpriteMirror {
        struct CharacterSpriteMirror__Class* klass;
        MonitorData* monitor;
        struct CharacterSpriteMirror__Fields fields;
    };

    struct SeinLogicCycle_IsAllowedDelegate__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct SeinLogicCycle_IsAllowedDelegate {
        struct SeinLogicCycle_IsAllowedDelegate__Class* klass;
        MonitorData* monitor;
        struct SeinLogicCycle_IsAllowedDelegate__Fields fields;
    };

    struct SeinCharacter__Fields {
        struct MonoBehaviour__Fields _;
        struct SeinLogicCycle* LogicCycle;
        struct SeinAbilities* Abilities;
        struct SeinComboMoves* ComboMoves;
        struct SeinSpells* Spells;
        struct SeinController* Controller;
        struct SeinCutsceneBlocked* CutsceneBlocked;
        struct SeinCutsceneMovement* CutsceneMovement;
        struct SeinDoorHandler* DoorHandler;
        struct SeinSoulFlame* SoulFlame;
        struct SeinInventory* Inventory;
        struct SeinEnvironmentForceController* ForceController;
        struct SeinInput* Input;
        struct SeinLevel* Level;
        struct SeinEnergy* Energy;
        struct SeinMortality* Mortality;
        struct SeinPickupProcessor* PickupHandler;
        struct PlatformBehaviour* PlatformBehaviour;
        struct PlayerAbilities* PlayerAbilities;
        struct PlayerSpiritShards* PlayerSpiritShards;
        struct SpellInventory* PlayerSpells;
        struct PlayerQuestItems* QuestItems;
        struct CharacterFovController* FovController;
        struct SeinPrefabFactory* Prefabs;
        struct GameObject* OriRig;
        struct GameObject* OriRigInstance;
        bool EnablePerspectiveAdjustment;
        struct SpiritLightRadialVisualAffector* _LightAffector_k__BackingField;
        NavigationType__Enum _CurrentAreaType_k__BackingField;

        struct SoundHost* m_soundHost;
        struct Nullable_1_UnityEngine_Vector3_ LastCheckpointedPosition;
        struct Rect m_bounds;
        struct DamageOwner* _DamageOwner_k__BackingField;
        struct Action* OnResetAirLimits;
        bool m_isSphere;
        int32_t m_leachCount;
        struct DynamicDataResolver* m_dataResolver;
    };

    struct SeinCharacter {
        struct SeinCharacter__Class* klass;
        MonitorData* monitor;
        struct SeinCharacter__Fields fields;
    };

    enum class SeinLogicCycle_StateFlags__Enum : int64_t {
        Clear = 0x0000000000000000,
        IsPlayingAnimation = 0x0000000000000001,
        IsCrouching = 0x0000000000000002,
        IsGrabbingBlock = 0x0000000000000004,
        IsGrabbingWall = 0x0000000000000008,
        IsGliding = 0x0000000000000010,
        IsSwimming = 0x0000000000000020,
        IsBashing = 0x0000000000000040,
        IsCarrying = 0x0000000000000080,
        IsStomping = 0x0000000000000100,
        IsSuspended = 0x0000000000000200,
        IsDashing = 0x0000000000000400,
        IsStandingOnEdge = 0x0000000000000800,
        IsUnderwater = 0x0000000000001000,
        CannotMove = 0x0000000000002000,
        IsPerformingCinematic = 0x0000000000004000,
        IsInteracting = 0x0000000000008000,
        IsRiding = 0x0000000000010000,
        IsInputLocked = 0x0000000000020000,
        IsDigging = 0x0000000000040000,
        IsGrabbingSurface = 0x0000000000080000,
        IsGrabbingRope = 0x0000000000100000,
        IsChargeJumping = 0x0000000000200000,
        IsCastingSpell = 0x0000000000400000,
        IsUsingLever = 0x0000000000800000,
        IsRacing = 0x0000000001000000,
        IsUsingMelee = 0x0000000002000000,
        IsPerformingCombo = 0x0000000004000000,
        IsSpiritLeashing = 0x0000000008000000,
        IsFalling = 0x0000000010000000,
        IsDisabledDueToDamage = 0x0000000020000000,
        IsFeatherFlapping = 0x0000000040000000,
        IsBowAttacking = 0x0000000080000000,
        IsAttacking = 0x0000000100000000,
        IsHolding = 0x0000000200000000,
        IsStressTesting = 0x0000000400000000,
        IsThrowing = 0x0000000800000000,
        CanGrabSomething = 0x0000001000000000,
        IsLeverBlockingInput = 0x0000002000000000,
        IsPickingUp = 0x0000004000000000,
        IsUsingHeldItem = 0x0000008000000000,
        IsTouchingDamageColliders = 0x0000010000000000,
        IsTeleporting = 0x0000020000000000,
        IsBowAttackingAndNotCancelable = 0x0000040000000000,
        BlockInput = 0x000000200002c000,
        BlockInvincibility = 0x0000000000000000,
        BlockAirNoDeceleration = 0x0000000000000000,
        BlockApplyFrictionToSpeed = 0x0000000000004000,
        BlockCrushDetector = 0x000000000000c001,
        BlockSpriteRotater = 0x0000000000000000,
        BlockDamageReciever = 0x0000000000004001,
        BlockJumpSustain = 0x0000000000044001,
        BlockUpwardsDeceleration = 0x0000000000004001,
        BlockForceController = 0x0000000000004001,
        BlockGravity = 0x0000000000054001,
        BlockGravityToGround = 0x0000000000054021,
        BlockSpellAbility = 0x0000000000360040,
        BlockSwimming = 0x0000000000000000,
        BlockDigging = 0x000000000840c000,
        BlockDash = 0x0000000060c1e1c5,
        BlockGetAbility = 0x000000001fc52de5,
        BlockLaunch = 0x0000000008850060,
        BlockRiding = 0x0000000000c4e5e5,
        BlockSpell = 0x0000040048b0c064,
        BlockGrenadeSpell = 0x0000040148bcece5,
        BlockSpiritLeash = 0x0000000000cd01e7,
        BlockBow = 0x0000000068140064,
        BlockHammer = 0x0000020048410040,
        BlockMelee = 0x000002c068550060,
        BlockCombo = 0x000002c04001c040,
        BlockGrabRope = 0x000002048a0d0040,
        BlockGrabSurface = 0x0000020782550044,
        BlockInstantStop = 0x0000000020004021,
        BlockLeftRightMovement = 0x000000000000d001,
        BlockBash = 0x000004000ad4c005,
        BlockLooking = 0x0000000086440021,
        BlockLever = 0x0000000000450165,
        BlockInteraction = 0x0000000008440165,
        BlockFootsteps = 0x0000000000050021,
        BlockWallSlide = 0x00000100005dc1f1,
        BlockCarry = 0x0000000000450160,
        BlockHolding = 0x0000000000040020,
        BlockFall = 0x000000000005c061,
        BlockGrabBlock = 0x00000200004501e1,
        BlockIdle = 0x000000000005c4e5,
        BlockRun = 0x000000000004c4e5,
        BlockCrouching = 0x00000008084445a1,
        BlockWallGrabbing = 0x00000301864c41e1,
        BlockJumping = 0x000000000244c131,
        BlockDoubleJump = 0x00000000024401a1,
        BlockGliding = 0x000004110c7d85e9,
        BlockWallJump = 0x00000000004441b1,
        BlockChargeJump = 0x0000000008c4c1e5,
        BlockStandingOnEdge = 0x00000000004401a1,
        BlockPushAgainstWall = 0x00000300000400a1,
        BlockEdgeClamber = 0x00000000000400a1,
        BlockTeleport = 0x00000000080c0020,
        BlockChakramSpell = 0x0000000008d40004,
        BlockMeditateSpell = 0x000000000084c025,
        BlockTurretSpell = 0x0000000008c60004,
        BlockFeatherFlap = 0x000004100c7d85e9,
        BlockAbilityUI = 0x0000000000000000,
        BlockShrineCombat = 0x0000020101600000,
        ResetComboCooldown = 0x0000000080180048,
    };

    struct SeinLogicCycle_StateFlags__Enum__Boxed {
        struct SeinLogicCycle_StateFlags__Enum__Class* klass;
        MonitorData* monitor;
        SeinLogicCycle_StateFlags__Enum value;
    };

    enum class SeinAbilityRestrictZoneMask__Enum : int32_t {
        None = 0x00000000,
        Any = 0x00000001,
        Attack = 0x00000002,
        Dash = 0x00000004,
        Jump = 0x00000008,
        Sword = 0x00000010,
        DoubleJump = 0x00000020,
        TripleJump = 0x00000040,
        SpiritLeash = 0x00000080,
        ButtonX = 0x00000100,
        ButtonY = 0x00000200,
        ButtonB = 0x00000400,
        Bash = 0x00000800,
        Granade = 0x00001000,
        Hammer = 0x00002000,
        Bow = 0x00004000,
        Glide = 0x00008000,
        LeafAttack = 0x00010000,
        WallJump = 0x00020000,
        Chainsword = 0x00040000,
        Interact = 0x00080000,
        ChargeJump = 0x00100000,
        EquipmentWheel = 0x00200000,
        Looking = 0x00400000,
        Crouch = 0x00800000,
    };

    struct SeinAbilityRestrictZoneMask__Enum__Boxed {
        struct SeinAbilityRestrictZoneMask__Enum__Class* klass;
        MonitorData* monitor;
        SeinAbilityRestrictZoneMask__Enum value;
    };

    struct SeinLogicCycle__Fields {
        struct MonoBehaviour__Fields _;
        bool m_hasStateFlags;
        bool m_hasRestrictZoneMask;
        SeinLogicCycle_StateFlags__Enum m_stateFlags;

        SeinAbilityRestrictZoneMask__Enum m_restrictZoneMask;

        bool m_isTouchingDamageColliders;
        bool m_isAllowedNonZeroZPosition;
        int32_t m_currentAutoExecutionOrder;
        struct SortedList_2_System_Int32_CharacterState_* m_states;
        struct List_1_CharacterState_* m_statesList;
        struct Dictionary_2_System_Type_System_Int32_* m_executionOrders;
        struct Dictionary_2_System_Type_SeinLogicCycle_IsAllowedDelegate_* m_isAllowedDelegates;
        bool m_hasRegisteredDelegates;
        struct List_1_System_Type_* m_exclusiveActiveStateTypes;
        struct List_1_CharacterState_* m_exclusiveActiveStates;
        struct HashSet_1_CharacterState_* m_exclusiveActiveStatesSet;
        struct CharacterState* m_exclusiveActiveState;
        struct Boolean__Array* m_equipped;
        struct PlayerUberState* m_playerUberState;
        int32_t m_cachedUberStoreID;
        bool ShowDebug;
        struct Vector2 m_scroll;
    };

    struct SeinLogicCycle {
        struct SeinLogicCycle__Class* klass;
        MonitorData* monitor;
        struct SeinLogicCycle__Fields fields;
    };

    struct __declspec(align(8)) SortedList_2_System_Int32_CharacterState___Fields {
        struct Int32__Array* keys;
        struct CharacterState__Array* values;
        int32_t _size;
        int32_t version;
        struct IComparer_1_System_Int32_* comparer;
        struct SortedList_2_TKey_TValue_KeyList_System_Int32_CharacterState_* keyList;
        struct SortedList_2_TKey_TValue_ValueList_System_Int32_CharacterState_* valueList;
        struct Object* _syncRoot;
    };

    struct SortedList_2_System_Int32_CharacterState_ {
        struct SortedList_2_System_Int32_CharacterState___Class* klass;
        MonitorData* monitor;
        struct SortedList_2_System_Int32_CharacterState___Fields fields;
    };

    struct CharacterState__Array {
        struct CharacterState__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct CharacterState* vector[32];
    };

    struct IComparer_1_System_Int32_ {
        struct IComparer_1_System_Int32___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) SortedList_2_TKey_TValue_KeyList_System_Int32_CharacterState___Fields {
        struct SortedList_2_System_Int32_CharacterState_* _dict;
    };

    struct SortedList_2_TKey_TValue_KeyList_System_Int32_CharacterState_ {
        struct SortedList_2_TKey_TValue_KeyList_System_Int32_CharacterState___Class* klass;
        MonitorData* monitor;
        struct SortedList_2_TKey_TValue_KeyList_System_Int32_CharacterState___Fields fields;
    };

    struct __declspec(align(8)) SortedList_2_TKey_TValue_ValueList_System_Int32_CharacterState___Fields {
        struct SortedList_2_System_Int32_CharacterState_* _dict;
    };

    struct SortedList_2_TKey_TValue_ValueList_System_Int32_CharacterState_ {
        struct SortedList_2_TKey_TValue_ValueList_System_Int32_CharacterState___Class* klass;
        MonitorData* monitor;
        struct SortedList_2_TKey_TValue_ValueList_System_Int32_CharacterState___Fields fields;
    };

    struct IEnumerator_1_CharacterState_ {
        struct IEnumerator_1_CharacterState___Class* klass;
        MonitorData* monitor;
    };

    struct ICollection_1_CharacterState_ {
        struct ICollection_1_CharacterState___Class* klass;
        MonitorData* monitor;
    };

    struct KeyValuePair_2_System_Int32_CharacterState_ {
        int32_t key;
        struct CharacterState* value;
    };

    struct KeyValuePair_2_System_Int32_CharacterState___Boxed {
        struct KeyValuePair_2_System_Int32_CharacterState___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_System_Int32_CharacterState_ fields;
    };

    struct KeyValuePair_2_System_Int32_CharacterState___Array {
        struct KeyValuePair_2_System_Int32_CharacterState___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_System_Int32_CharacterState_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_System_Int32_CharacterState_ {
        struct IEnumerator_1_KeyValuePair_2_System_Int32_CharacterState___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_CharacterState_ {
        struct IEnumerable_1_CharacterState___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_CharacterState___Fields {
        struct CharacterState__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_CharacterState_ {
        struct List_1_CharacterState___Class* klass;
        MonitorData* monitor;
        struct List_1_CharacterState___Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_System_Type_SeinLogicCycle_IsAllowedDelegate___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_System_Type_SeinLogicCycle_IsAllowedDelegate___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_System_Type_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_SeinLogicCycle_IsAllowedDelegate_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_SeinLogicCycle_IsAllowedDelegate_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_System_Type_SeinLogicCycle_IsAllowedDelegate_ {
        struct Dictionary_2_System_Type_SeinLogicCycle_IsAllowedDelegate___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_System_Type_SeinLogicCycle_IsAllowedDelegate___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Type_SeinLogicCycle_IsAllowedDelegate_ {
        int32_t hashCode;
        int32_t next;
        struct Type* key;
        struct SeinLogicCycle_IsAllowedDelegate* value;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Type_SeinLogicCycle_IsAllowedDelegate___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_System_Type_SeinLogicCycle_IsAllowedDelegate___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_System_Type_SeinLogicCycle_IsAllowedDelegate_ fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Type_SeinLogicCycle_IsAllowedDelegate___Array {
        struct Dictionary_2_TKey_TValue_Entry_System_Type_SeinLogicCycle_IsAllowedDelegate___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_System_Type_SeinLogicCycle_IsAllowedDelegate_ vector[32];
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Type_SeinLogicCycle_IsAllowedDelegate___Fields {
        struct Dictionary_2_System_Type_SeinLogicCycle_IsAllowedDelegate_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_SeinLogicCycle_IsAllowedDelegate_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_SeinLogicCycle_IsAllowedDelegate___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_SeinLogicCycle_IsAllowedDelegate___Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Type_SeinLogicCycle_IsAllowedDelegate___Fields {
        struct Dictionary_2_System_Type_SeinLogicCycle_IsAllowedDelegate_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_SeinLogicCycle_IsAllowedDelegate_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_SeinLogicCycle_IsAllowedDelegate___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_SeinLogicCycle_IsAllowedDelegate___Fields fields;
    };

} // namespace app
