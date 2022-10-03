namespace app {
    struct Rock__StaticFields {
    };

    struct Rock__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Rock__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Rock__VTable vtable;
    };

    struct RockExplodeZone__Fields {
        struct MonoBehaviour__Fields _;
        struct Rect m_bounds;
    };

    struct RockExplodeZone {
        struct RockExplodeZone__Class* klass;
        MonitorData* monitor;
        struct RockExplodeZone__Fields fields;
    };

    struct __declspec(align(8)) List_1_RockExplodeZone___Fields {
        struct RockExplodeZone__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_RockExplodeZone_ {
        struct List_1_RockExplodeZone___Class* klass;
        MonitorData* monitor;
        struct List_1_RockExplodeZone___Fields fields;
    };

    struct RockExplodeZone__Array {
        struct RockExplodeZone__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct RockExplodeZone* vector[32];
    };

    struct IEnumerator_1_RockExplodeZone_ {
        struct IEnumerator_1_RockExplodeZone___Class* klass;
        MonitorData* monitor;
    };

    struct RockExplodeZone__Array__VTable {
    };

    struct RockExplodeZone__Array__StaticFields {
    };

    struct RockExplodeZone__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RockExplodeZone__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RockExplodeZone__Array__VTable vtable;
    };

    struct IEnumerator_1_RockExplodeZone___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_RockExplodeZone___StaticFields {
    };

    struct IEnumerator_1_RockExplodeZone___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_RockExplodeZone___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_RockExplodeZone___VTable vtable;
    };

    struct List_1_RockExplodeZone___VTable {
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

    struct List_1_RockExplodeZone___StaticFields {
        struct RockExplodeZone__Array* _emptyArray;
    };

    struct List_1_RockExplodeZone___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_RockExplodeZone___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_RockExplodeZone___VTable vtable;
    };

    struct RockExplodeZone__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct RockExplodeZone__StaticFields {
        struct List_1_RockExplodeZone_* All;
    };

    struct RockExplodeZone__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RockExplodeZone__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RockExplodeZone__VTable vtable;
    };

    struct RocksGenerator__Fields {
        struct MonoBehaviour__Fields _;
        struct GameObject* ObjectToGenerate;
        struct List_1_UnityEngine_GameObject_* ObjectsToGenerate;
        struct RocksGenerator_FloatMinMax* GenerateFrequence;
        struct RocksGenerator_Vector3MinMax* Scale;
        struct RocksGenerator_Vector3MinMax* Velocity;
        struct RocksGenerator_Vector3MinMax* InitialRotation;
        struct RocksGenerator_Vector3MinMax* LocalPosition;
        float InitialTimeOffset;
        float MinDistanceToPlayer;
        bool CanGenerateOnScreen;
        struct SoundProvider* OnSpawnSound;
        float m_nextGenerateTime;
        float m_distanceToPlayer;
        float m_time;
        bool _IsSuspended_k__BackingField;
        SuspendableMask__Enum m_suspensionMask;
    };

    struct RocksGenerator {
        struct RocksGenerator__Class* klass;
        MonitorData* monitor;
        struct RocksGenerator__Fields fields;
    };

    struct __declspec(align(8)) RocksGenerator_FloatMinMax__Fields {
        float Min;
        float Max;
    };

    struct RocksGenerator_FloatMinMax {
        struct RocksGenerator_FloatMinMax__Class* klass;
        MonitorData* monitor;
        struct RocksGenerator_FloatMinMax__Fields fields;
    };

    struct __declspec(align(8)) RocksGenerator_Vector3MinMax__Fields {
        struct Vector3 Min;
        struct Vector3 Max;
    };

    struct RocksGenerator_Vector3MinMax {
        struct RocksGenerator_Vector3MinMax__Class* klass;
        MonitorData* monitor;
        struct RocksGenerator_Vector3MinMax__Fields fields;
    };

    struct RocksGenerator_FloatMinMax__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct RocksGenerator_FloatMinMax__StaticFields {
    };

    struct RocksGenerator_FloatMinMax__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RocksGenerator_FloatMinMax__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RocksGenerator_FloatMinMax__VTable vtable;
    };

    struct RocksGenerator_Vector3MinMax__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct RocksGenerator_Vector3MinMax__StaticFields {
    };

    struct RocksGenerator_Vector3MinMax__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RocksGenerator_Vector3MinMax__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RocksGenerator_Vector3MinMax__VTable vtable;
    };

    struct RocksGenerator__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
    };

    struct RocksGenerator__StaticFields {
    };

    struct RocksGenerator__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RocksGenerator__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RocksGenerator__VTable vtable;
    };

    struct CatAndMouseKuroKillController__Fields {
        struct MonoBehaviour__Fields _;
        struct GameObject* KuroFlyAttack;
        struct SoundProvider* LandKillSound;
        struct SoundProvider* FlyKillSound;
        struct CatAndMouseKuroLandZone__Array* m_zones;
    };

    struct CatAndMouseKuroKillController {
        struct CatAndMouseKuroKillController__Class* klass;
        MonitorData* monitor;
        struct CatAndMouseKuroKillController__Fields fields;
    };

    struct CatAndMouseKuroLandZone__Fields {
        struct MonoBehaviour__Fields _;
        struct BaseAnimator* Animator;
        struct Rect Bounds;
    };

    struct CatAndMouseKuroLandZone {
        struct CatAndMouseKuroLandZone__Class* klass;
        MonitorData* monitor;
        struct CatAndMouseKuroLandZone__Fields fields;
    };

    struct CatAndMouseKuroLandZone__Array {
        struct CatAndMouseKuroLandZone__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct CatAndMouseKuroLandZone* vector[32];
    };

    struct CatAndMouseKuroLandZone__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Category;
    };

    struct CatAndMouseKuroLandZone__StaticFields {
    };

    struct CatAndMouseKuroLandZone__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CatAndMouseKuroLandZone__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CatAndMouseKuroLandZone__VTable vtable;
    };

    struct CatAndMouseKuroLandZone__Array__VTable {
    };

    struct CatAndMouseKuroLandZone__Array__StaticFields {
    };

    struct CatAndMouseKuroLandZone__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CatAndMouseKuroLandZone__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CatAndMouseKuroLandZone__Array__VTable vtable;
    };

    struct CatAndMouseKuroKillController__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CatAndMouseKuroKillController__StaticFields {
    };

    struct CatAndMouseKuroKillController__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CatAndMouseKuroKillController__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CatAndMouseKuroKillController__VTable vtable;
    };

    struct CatAndMouseRoomAController__Fields {
        struct MonoBehaviour__Fields _;
        struct SpriteAnimator* AttackSpriteAnimator;
        struct SpriteAnimator* EscapedSpriteAnimator;
        struct TextureAnimation* AttackTextureAnimation;
        struct TextureAnimation* EscapedTextureAnimation;
        struct TextureAnimation* FlyAwayTextureAnimation;
        struct SoundProvider* AttackSoundProvider;
        struct SoundProvider* EscapedSoundProvider;
        struct Transform* RoomCenter;
        float KuroSpriteYOffSet;
        bool AttackAtSeinPositionX;
        bool AttackAtSeinPositionY;
        bool FaceLeftRightBasedOnRoomCenter;
        struct Vector3 m_originalLocalScale;
    };

    struct CatAndMouseRoomAController {
        struct CatAndMouseRoomAController__Class* klass;
        MonitorData* monitor;
        struct CatAndMouseRoomAController__Fields fields;
    };

    struct CatAndMouseRoomAController__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CatAndMouseRoomAController__StaticFields {
    };

    struct CatAndMouseRoomAController__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CatAndMouseRoomAController__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CatAndMouseRoomAController__VTable vtable;
    };

    struct CatAndMouseRoomCController__Fields {
        struct MonoBehaviour__Fields _;
        struct BaseAnimator* AttackSpriteSurfaceAnimator;
        struct BaseAnimator* AttackSpriteAnimator;
        struct Renderer* KuroSprite;
        struct Renderer* KuroSurfaceSprite;
        struct AnimationCurve* PositionToCameraWeightCurve;
        struct Vector3 PositionToCameraOffset;
        struct SoundProvider* AttackSoundProvider;
        struct Vector3 m_originalPosition;
        bool m_runningSequence;
        float m_time;
        float CenterLayerTime;
        float SequenceTime;
        float MaxVertical;
        float SurfaceTime;
        bool m_kuroWillFlyOverSurface;
        struct ActionMethod* FinishAction;
        bool _IsSuspended_k__BackingField;
        SuspendableMask__Enum m_suspensionMask;
    };

    struct CatAndMouseRoomCController {
        struct CatAndMouseRoomCController__Class* klass;
        MonitorData* monitor;
        struct CatAndMouseRoomCController__Fields fields;
    };

    struct CatAndMouseRoomCController__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
    };

    struct CatAndMouseRoomCController__StaticFields {
    };

    struct CatAndMouseRoomCController__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CatAndMouseRoomCController__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CatAndMouseRoomCController__VTable vtable;
    };

    struct CatAndMouseRoomDController__Fields {
        struct MonoBehaviour__Fields _;
        struct BaseAnimator* AttackSpriteAnimator;
        struct Renderer* KuroSprite;
        struct AnimationCurve* PositionXToCameraWeightCurve;
        struct AnimationCurve* PositionXToPlayerWeightCurve;
        struct AnimationCurve* PositionYToCameraWeightCurve;
        struct Vector3 PositionToCameraOffset;
        struct SoundProvider* AttackSoundProvider;
        struct Vector3 m_originalPosition;
        bool m_runningSequence;
        float m_time;
        float CenterLayerTime;
        float SequenceTime;
        float MaxPositionX;
        float MaxPositionEscapedX;
        struct ActionMethod* FinishAction;
        struct Vector3 m_playerPosition;
        bool m_escaped;
        bool _IsSuspended_k__BackingField;
        SuspendableMask__Enum m_suspensionMask;
    };

    struct CatAndMouseRoomDController {
        struct CatAndMouseRoomDController__Class* klass;
        MonitorData* monitor;
        struct CatAndMouseRoomDController__Fields fields;
    };

    struct CatAndMouseRoomDController__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
    };

    struct CatAndMouseRoomDController__StaticFields {
    };

    struct CatAndMouseRoomDController__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CatAndMouseRoomDController__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CatAndMouseRoomDController__VTable vtable;
    };

    struct CatAndMouseRoomShadow__Fields {
        struct MonoBehaviour__Fields _;
        struct Transform* Zone;
        struct Rect m_bounds;
        struct LegacyTransparencyAnimator* TransparencyAnimator;
        struct ScaleAnimator* ScaleAnimator;
        struct CatAndMouseRoomTimerController* Timer;
    };

    struct CatAndMouseRoomShadow {
        struct CatAndMouseRoomShadow__Class* klass;
        MonitorData* monitor;
        struct CatAndMouseRoomShadow__Fields fields;
    };

    struct CatAndMouseRoomTimerController__Fields {
        struct Suspendable__Fields _;
        float RoomTime;
        struct GameObject* RoomController;
        struct SoundSource* KuroAlertSound;
        struct SoundSource* KuroWingFlapSound;
        struct SoundSource* KuroGettingNearSound;
        struct SoundSource* KuroFlyOffSound;
        float m_time;
        bool m_active;
        struct LegacyTimelineSequence* FeedbackSequence;
        bool _IsSuspended_k__BackingField;
    };

    struct CatAndMouseRoomTimerController {
        struct CatAndMouseRoomTimerController__Class* klass;
        MonitorData* monitor;
        struct CatAndMouseRoomTimerController__Fields fields;
    };

    struct CatAndMouseRoomTimerController__VTable {
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
    };

    struct CatAndMouseRoomTimerController__StaticFields {
    };

    struct CatAndMouseRoomTimerController__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CatAndMouseRoomTimerController__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CatAndMouseRoomTimerController__VTable vtable;
    };

    struct CatAndMouseRoomShadow__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CatAndMouseRoomShadow__StaticFields {
    };

    struct CatAndMouseRoomShadow__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CatAndMouseRoomShadow__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CatAndMouseRoomShadow__VTable vtable;
    };

    struct BerryCelebrationController__Fields {
        struct MonoBehaviour__Fields _;
        struct SpriteAnimator* BerryCelebrationSpriteAnimator;
        struct TextureAnimation* BerryCelebrationAnimation;
        struct MovieTextureController* MovieTextureController;
        struct GameObject* Rope;
        struct SoundProvider* IntroSoundProvider;
        struct SoundProvider* LoopSoundProvider;
        float IntroFadeInDuration;
        float LoopFadeInDuration;
        float m_introLength;
    };

    struct BerryCelebrationController {
        struct BerryCelebrationController__Class* klass;
        MonitorData* monitor;
        struct BerryCelebrationController__Fields fields;
    };

    struct BerryCelebrationController__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct BerryCelebrationController__StaticFields {
    };

    struct BerryCelebrationController__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BerryCelebrationController__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BerryCelebrationController__VTable vtable;
    };

    struct BerryTreeController__Fields {
        struct MonoBehaviour__Fields _;
        struct SpriteAnimator* NaruSpriteAnimator;
        struct SpriteAnimator* TreeSpriteAnimator;
        struct TextureAnimation* NaruAnimationA;
        struct TextureAnimation* NaruAnimationB;
        struct TextureAnimation* NaruAnimationC;
        struct TextureAnimation* NaruAnimationD;
        struct TextureAnimation* TreeAnimationA;
        struct TextureAnimation* TreeAnimationB;
        struct TextureAnimation* TreeAnimationC;
        struct TextureAnimation* TreeAnimationD;
        struct TextureAnimation* SeinClimbOnNaruAnimation;
        struct Naru* Naru;
    };

    struct BerryTreeController {
        struct BerryTreeController__Class* klass;
        MonitorData* monitor;
        struct BerryTreeController__Fields fields;
    };

    struct BerryTreeController__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct BerryTreeController__StaticFields {
    };

    struct BerryTreeController__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BerryTreeController__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BerryTreeController__VTable vtable;
    };

    enum class BushSetupController_State__Enum : int32_t {
        KneelingRock = 0x00000000,
        KneelingRockToLiftSein = 0x00000001,
        LiftSein = 0x00000002,
        LiftSeinToRockReach = 0x00000003,
        RockReach = 0x00000004,
        RockFall = 0x00000005,
        RockReachToLiftSein = 0x00000006,
        NoticeSein = 0x00000007,
    };

    struct BushSetupController_State__Enum__Boxed {
        struct BushSetupController_State__Enum__Class* klass;
        MonitorData* monitor;
        BushSetupController_State__Enum value;
    };

    struct BushSetupController__Fields {
        struct MonoBehaviour__Fields _;
        struct SpriteAnimator* NaruSpriteAnimator;
        struct SpriteAnimator* SeinSpriteAnimator;
        struct TextureAnimation* KneelingRockAnimation;
        struct TextureAnimation* KneelingRockToLiftSeinAnimation;
        struct TextureAnimation* LiftSeinAnimation;
        struct TextureAnimation* LiftSeinToRockReachAnimation;
        struct TextureAnimation* RockReachAnimation;
        struct TextureAnimation* RockFallSeinAnimation;
        struct TextureAnimation* RockFallNaruAnimation;
        struct TextureAnimation* RockReachToLiftSeinAnimation;
        struct TextureAnimation* NoticeSeinAnimation;
        struct GameObject* LightCeremonyEffects;
        struct MovieTextureController* MovieTextureController;
        BushSetupController_State__Enum CurrentState;

        float m_stateCurrentTime;
    };

    struct BushSetupController {
        struct BushSetupController__Class* klass;
        MonitorData* monitor;
        struct BushSetupController__Fields fields;
    };

    struct BushSetupController_State__Enum__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CompareTo;
        VirtualInvokeData ToString_1;
        VirtualInvokeData GetTypeCode;
        VirtualInvokeData System_IConvertible_ToBoolean;
        VirtualInvokeData System_IConvertible_ToChar;
        VirtualInvokeData System_IConvertible_ToSByte;
        VirtualInvokeData System_IConvertible_ToByte;
        VirtualInvokeData System_IConvertible_ToInt16;
        VirtualInvokeData System_IConvertible_ToUInt16;
        VirtualInvokeData System_IConvertible_ToInt32;
        VirtualInvokeData System_IConvertible_ToUInt32;
        VirtualInvokeData System_IConvertible_ToInt64;
        VirtualInvokeData System_IConvertible_ToUInt64;
        VirtualInvokeData System_IConvertible_ToSingle;
        VirtualInvokeData System_IConvertible_ToDouble;
        VirtualInvokeData System_IConvertible_ToDecimal;
        VirtualInvokeData System_IConvertible_ToDateTime;
        VirtualInvokeData ToString_2;
        VirtualInvokeData System_IConvertible_ToType;
    };

    struct BushSetupController_State__Enum__StaticFields {
    };

    struct BushSetupController_State__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BushSetupController_State__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BushSetupController_State__Enum__VTable vtable;
    };

    struct BushSetupController__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct BushSetupController__StaticFields {
    };

    struct BushSetupController__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BushSetupController__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BushSetupController__VTable vtable;
    };

    struct CaveSleepController__Fields {
        struct MonoBehaviour__Fields _;
        struct BabySein* BabySein;
        struct SpriteAnimator* BabySeinSpriteAnimator;
        struct TextureAnimation* WakeUpAnimation;
        struct GameObject* Fader;
        float FadeOutDuration;
        struct SoundProvider* IntroSoundProvider;
        struct SoundProvider* LoopSoundProvider;
        float IntroFadeInDuration;
        float LoopFadeInDuration;
        float m_introLength;
    };

    struct CaveSleepController {
        struct CaveSleepController__Class* klass;
        MonitorData* monitor;
        struct CaveSleepController__Fields fields;
    };

    struct CaveSleepController__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CaveSleepController__StaticFields {
    };

    struct CaveSleepController__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CaveSleepController__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CaveSleepController__VTable vtable;
    };

    struct DayFourBushSetupController__Fields {
        struct MonoBehaviour__Fields _;
        struct SpriteAnimator* SeinSpriteAnimator;
        struct SpriteAnimator* LeafSpriteAnimator;
        struct SpriteAnimator* BranchSpriteAnimator;
        struct SpriteAnimator* BerriesSpriteAnimator;
        struct TextureAnimation* BerriesFallAnimation;
        struct TextureAnimation* BranchBreakAnimation;
        struct TextureAnimation* BranchIdleAnimation;
        struct TextureAnimation* LeafIdleAnimation;
        struct TextureAnimation* SeinFloatAnimation;
        struct Transform* CameraTargetDuringSequence;
        struct BabySein* BabySeinWithBerries;
        struct MovieTextureController* MovieTextureController;
        struct Transform* SeinSpawnPisition;
        bool m_branchAnimationWasPlayed;
        bool m_berriesAnimationWasPlayed;
    };

    struct DayFourBushSetupController {
        struct DayFourBushSetupController__Class* klass;
        MonitorData* monitor;
        struct DayFourBushSetupController__Fields fields;
    };

    struct DayFourBushSetupController__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct DayFourBushSetupController__StaticFields {
    };

    struct DayFourBushSetupController__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DayFourBushSetupController__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DayFourBushSetupController__VTable vtable;
    };

    struct DayThreeBridgeSetupController__Fields {
        struct MonoBehaviour__Fields _;
        struct SpriteAnimator* NaruCollapseSpriteAnimator;
        struct SpriteAnimator* BridgeCollapseASpriteAnimator;
        struct SpriteAnimator* BridgeCollapseBSpriteAnimator;
        struct TextureAnimation* BridgeCollapseAAnimation;
        struct TextureAnimation* BridgeCollapseBAnimation;
        struct TextureAnimation* BridgeCollapseNaruAnimation;
        struct GameObject* Bridge;
        struct Collider* SurfaceColliderBeforeCrash;
        struct Collider* SurfaceColliderAfterCrash;
        struct Naru* Naru;
        struct Transform* NaruSpawnPisition;
    };

    struct DayThreeBridgeSetupController {
        struct DayThreeBridgeSetupController__Class* klass;
        MonitorData* monitor;
        struct DayThreeBridgeSetupController__Fields fields;
    };

    struct DayThreeBridgeSetupController__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct DayThreeBridgeSetupController__StaticFields {
    };

    struct DayThreeBridgeSetupController__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DayThreeBridgeSetupController__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DayThreeBridgeSetupController__VTable vtable;
    };

    enum class DayThreeTreeSetupController_State__Enum : int32_t {
        None = 0x00000000,
        BranchIdle = 0x00000001,
        BranchBackwards = 0x00000002,
        BranchReach = 0x00000003,
        Jump = 0x00000004,
        Fall = 0x00000005,
        JumpForward = 0x00000006,
    };

    struct DayThreeTreeSetupController_State__Enum__Boxed {
        struct DayThreeTreeSetupController_State__Enum__Class* klass;
        MonitorData* monitor;
        DayThreeTreeSetupController_State__Enum value;
    };

    struct DayThreeTreeSetupController__Fields {
        struct MonoBehaviour__Fields _;
        struct SpriteAnimator* NaruClimbSpriteAnimator;
        struct SpriteAnimatorWithTransitions* NaruBranchSpriteAnimatorWithTransitions;
        struct SpriteAnimator* TreeSpriteAnimator;
        struct TextureAnimation* NaruBranchGrabAnimation;
        struct TextureAnimationWithTransitions* NaruBranchIdleAnimation;
        struct TextureAnimationWithTransitions* NaruBranchReachAnimation;
        struct TextureAnimationWithTransitions* NaruBranchBackwardsAnimation;
        struct TextureAnimationWithTransitions* NaruBranchJumpAnimation;
        struct TextureAnimationWithTransitions* NaruBranchJumpIdleAnimation;
        struct TextureAnimationWithTransitions* NaruBranchJumpIdleCollapseAnimation;
        struct CharacterAnimationSystem* NaruBranchAnimationSystem;
        DayThreeTreeSetupController_State__Enum CurrentState;

        float m_stateCurrentTime;
        int32_t m_jumpsCount;
        struct MovieTextureController* MovieTextureController;
        struct TextureAnimationWithTransitions* TextureAnimationWithTransitions;
    };

    struct DayThreeTreeSetupController {
        struct DayThreeTreeSetupController__Class* klass;
        MonitorData* monitor;
        struct DayThreeTreeSetupController__Fields fields;
    };

    struct DayThreeTreeSetupController_State__Enum__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CompareTo;
        VirtualInvokeData ToString_1;
        VirtualInvokeData GetTypeCode;
        VirtualInvokeData System_IConvertible_ToBoolean;
        VirtualInvokeData System_IConvertible_ToChar;
        VirtualInvokeData System_IConvertible_ToSByte;
        VirtualInvokeData System_IConvertible_ToByte;
        VirtualInvokeData System_IConvertible_ToInt16;
        VirtualInvokeData System_IConvertible_ToUInt16;
        VirtualInvokeData System_IConvertible_ToInt32;
        VirtualInvokeData System_IConvertible_ToUInt32;
        VirtualInvokeData System_IConvertible_ToInt64;
        VirtualInvokeData System_IConvertible_ToUInt64;
        VirtualInvokeData System_IConvertible_ToSingle;
        VirtualInvokeData System_IConvertible_ToDouble;
        VirtualInvokeData System_IConvertible_ToDecimal;
        VirtualInvokeData System_IConvertible_ToDateTime;
        VirtualInvokeData ToString_2;
        VirtualInvokeData System_IConvertible_ToType;
    };

    struct DayThreeTreeSetupController_State__Enum__StaticFields {
    };

    struct DayThreeTreeSetupController_State__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DayThreeTreeSetupController_State__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DayThreeTreeSetupController_State__Enum__VTable vtable;
    };

    struct DayThreeTreeSetupController__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct DayThreeTreeSetupController__StaticFields {
    };

    struct DayThreeTreeSetupController__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DayThreeTreeSetupController__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DayThreeTreeSetupController__VTable vtable;
    };

    struct PondController__Fields {
        struct MonoBehaviour__Fields _;
        struct SpriteAnimator* EscapePondSpriteAnimator;
        struct TextureAnimation* EscapePondAnimation;
        struct GameObject* BabySein;
        struct GameObject* BabySeinDeathEffect;
        float DeathEffectDuration;
        float m_deathEffectTimer;
        struct GameObject* m_deathEffect;
        bool m_wasDeathEffect;
    };

    struct PondController {
        struct PondController__Class* klass;
        MonitorData* monitor;
        struct PondController__Fields fields;
    };

    struct PondController__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

} // namespace app
