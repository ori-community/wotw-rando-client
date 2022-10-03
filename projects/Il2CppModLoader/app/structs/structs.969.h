namespace app {
    struct Firefly__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_BashPriority;
        VirtualInvokeData OnEnterBash;
        VirtualInvokeData OnBashHighlight;
        VirtualInvokeData OnBashDehighlight;
        VirtualInvokeData get_Position;
        VirtualInvokeData IsDead;
        VirtualInvokeData CanBeChargeFlamed;
        VirtualInvokeData CanBeChargeDashed;
        VirtualInvokeData CanBeGrenaded;
        VirtualInvokeData CanBeStomped;
        VirtualInvokeData CanBeBashed;
        VirtualInvokeData CanBeSpiritFlamed;
        VirtualInvokeData IsStompBouncable;
        VirtualInvokeData CanBeLevelUpBlasted;
        VirtualInvokeData CanBeSpiritSlashed;
        VirtualInvokeData CanBeHitByBow;
        VirtualInvokeData CanBeHitByMelee;
        VirtualInvokeData CanBeHitByHammerHandle;
        VirtualInvokeData CanBeHeavySpiritSlashed;
        VirtualInvokeData CanBeSpiritLeashed;
        VirtualInvokeData CanBeHomingMissiled;
        VirtualInvokeData CanBeTrapped;
        VirtualInvokeData CanBeSpiritSpeared;
        VirtualInvokeData CanBeTeleportedByBeacon;
        VirtualInvokeData CanBeGlowed;
        VirtualInvokeData get_AffectedReceivers;
    };

    struct Firefly__StaticFields {
    };

    struct Firefly__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Firefly__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Firefly__VTable vtable;
    };

    struct FireflyHive__Fields {
        struct Entity__Fields _;
        struct MoonTimeline* ReadyTimeline;
        struct MoonTimeline* ReleaseFireflyTimeline;
        struct MoonTimeline* NotReadyTimeline;
        struct MoonTimeline* BecomeReadyTimeline;
        struct DamageReceiver* Hitbox;
        struct GameObject* Firefly;
        struct CageStructureTool* Path;
        float Speed;
        struct EntityTargetting* m_entityTargetting;
        int32_t m_previusPathNodeCount;
        bool m_isActivated;
        struct HashSet_1_DamageType_* m_notAllowedDamageTypes;
        struct Firefly* m_fireflyInstance;
        struct Vector3 m_fromPoint;
        struct Vector3 m_toPoint;
        float m_moveTimer;
        float m_moveDuration;
        int32_t m_pointIndex;
        bool m_insideFrustum;
        struct Bounds m_bounds;
    };

    struct FireflyHive {
        struct FireflyHive__Class* klass;
        MonitorData* monitor;
        struct FireflyHive__Fields fields;
    };

    struct FireflyHive__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
        VirtualInvokeData Moon_IHitStopReceiver_get_gameObject;
        VirtualInvokeData GetHitStopAutoSuspendables;
        VirtualInvokeData OnHitStopStart;
        VirtualInvokeData OnHitStopEnd;
        VirtualInvokeData OnPoolSpawned;
        VirtualInvokeData OnPoolDespawned;
        VirtualInvokeData OnSceneRootPostEnable;
        VirtualInvokeData GetResolverForType;
        VirtualInvokeData get_BehaviourTree;
        VirtualInvokeData ResolveDamage;
        VirtualInvokeData get_UpdateType;
        VirtualInvokeData OnUpdate;
        VirtualInvokeData ShouldKillBubble;
        VirtualInvokeData CreateTimelineParentEntity;
        VirtualInvokeData get_AddChildren;
        VirtualInvokeData get_InvalidateParentTimelineCache;
        VirtualInvokeData set_InvalidateParentTimelineCache;
        VirtualInvokeData get_ExternalID;
        VirtualInvokeData get_TrackTranformChangesForRecording;
        VirtualInvokeData get_TrackingExclusions;
        VirtualInvokeData get_ParsingGroup;
        VirtualInvokeData get_CameraTargetActive;
        VirtualInvokeData get_CameraTargetPosition;
        VirtualInvokeData get_CameraTargetPadding;
        VirtualInvokeData get_CameraInfluencePosition;
        VirtualInvokeData AdjustCameraTargetWeight;
        VirtualInvokeData get_CameraInfluenceMinDist;
        VirtualInvokeData get_CameraInfluenceMaxDist;
        VirtualInvokeData get_CameraZoomFactor;
        VirtualInvokeData get_TargetType;
        VirtualInvokeData GetTargetData;
        VirtualInvokeData IPortalVisitor_get_Position;
        VirtualInvokeData IPortalVisitor_set_Position;
        VirtualInvokeData IPortalVisitor_get_Speed;
        VirtualInvokeData IPortalVisitor_set_Speed;
        VirtualInvokeData OnGoThroughPortal;
        VirtualInvokeData OnPortalOverlapEnter;
        VirtualInvokeData OnPortalOverlapExit;
        VirtualInvokeData Prewarm;
        VirtualInvokeData get_IsSuspended_1;
        VirtualInvokeData set_IsSuspended_1;
        VirtualInvokeData get_CanOptimizeBehaviourTreeEvaluation;
        VirtualInvokeData get_IsFacingTarget;
        VirtualInvokeData get_IgnoreAllowedZonesIfFreed;
        VirtualInvokeData get_ScreenPadding;
        VirtualInvokeData IsBehaviourTreePaused;
        VirtualInvokeData OnValidate;
        VirtualInvokeData OnEnable;
        VirtualInvokeData OnDisable;
        VirtualInvokeData OnAwake;
        VirtualInvokeData GetBehaviourTree;
        VirtualInvokeData OnCacheSerializedComponents;
        VirtualInvokeData UnserializedInitialization;
        VirtualInvokeData Start;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData MoonCleanup;
        VirtualInvokeData OnUpdate_1;
        VirtualInvokeData OnFixedUpdate;
        VirtualInvokeData OnBeforeBehaviourTreeFixedUpdate;
        VirtualInvokeData OnSuspendedStay;
        VirtualInvokeData OnUpdate_2;
        VirtualInvokeData EnterSpawningState;
        VirtualInvokeData UpdateSpawningState;
        VirtualInvokeData ExitSpawningState;
        VirtualInvokeData EnterDecisionMakingState;
        VirtualInvokeData UpdateDecisionMakingState;
        VirtualInvokeData ExitDecisionMakingState;
        VirtualInvokeData EnterReactionState;
        VirtualInvokeData UpdateReactionState;
        VirtualInvokeData ExitReactionState;
        VirtualInvokeData EnterCinematicState;
        VirtualInvokeData UpdateCinematicState;
        VirtualInvokeData ExitCinematicState;
        VirtualInvokeData GetActiveLocomotion;
        VirtualInvokeData OnContactDamageDealt;
        VirtualInvokeData OnHandleFireDamage;
        VirtualInvokeData OnHandleIceDamage;
        VirtualInvokeData OnDamageReceived;
        VirtualInvokeData OnDamageBlocked;
        VirtualInvokeData DeactivateDamageReceivers;
        VirtualInvokeData InstantKill;
        VirtualInvokeData OnDied;
        VirtualInvokeData SpawnOrbs;
        VirtualInvokeData OnDiedOutOfBounds;
        VirtualInvokeData OnEndDeathBehaviour;
        VirtualInvokeData OnPostRestoreCheckpoint;
        VirtualInvokeData ResetEntity;
        VirtualInvokeData GetHitStopAutoSuspendables_1;
        VirtualInvokeData OnHitStopStart_1;
        VirtualInvokeData OnHitStopEnd_1;
        VirtualInvokeData OnPoolSpawned_1;
        VirtualInvokeData IsFacingPoint;
        VirtualInvokeData ResolveDamage_1;
        VirtualInvokeData get_CameraTargetActive_1;
        VirtualInvokeData get_CameraTargetPosition_1;
        VirtualInvokeData get_CameraTargetPadding_1;
        VirtualInvokeData get_CameraInfluenceMinDist_1;
        VirtualInvokeData get_CameraInfluenceMaxDist_1;
        VirtualInvokeData get_CameraZoomFactor_1;
        VirtualInvokeData get_TargetType_1;
        VirtualInvokeData AdjustCameraTargetWeight_1;
        VirtualInvokeData get_IsAggroed;
        VirtualInvokeData get_IsOn;
        VirtualInvokeData OnFrustumEnter;
        VirtualInvokeData OnFrustumExit;
        VirtualInvokeData get_InsideFrustum;
        VirtualInvokeData get_Bounds;
        VirtualInvokeData get_AllowCacheBounds;
    };

    struct FireflyHive__StaticFields {
    };

    struct FireflyHive__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FireflyHive__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FireflyHive__VTable vtable;
    };

    enum class GuideStone_GuideStoneState__Enum : int32_t {
        HIDDEN = 0x00000000,
        SHOWING = 0x00000001,
        SHOWED = 0x00000002,
        HIDDING = 0x00000003,
    };

    struct GuideStone_GuideStoneState__Enum__Boxed {
        struct GuideStone_GuideStoneState__Enum__Class* klass;
        MonitorData* monitor;
        GuideStone_GuideStoneState__Enum value;
    };

    struct GuideStone__Fields {
        struct MonoBehaviour__Fields _;
        float AnimationTime;
        struct Vector2 Direction1Shift;
        struct Vector2 Direction2Shift;
        struct Vector2 Direction3Shift;
        struct MessageProvider* Direction1MessageProvider;
        struct MessageProvider* Direction2MessageProvider;
        struct MessageProvider* Direction3MessageProvider;
        struct Transform* FadeTarget;
        struct Condition_1* GuidelinesTrigger;
        struct Transform* Direction1Transform;
        struct Transform* Direction2Transform;
        struct Transform* Direction3Transform;
        struct MessageBox* Direction1MessageBox;
        struct MessageBox* Direction2MessageBox;
        struct MessageBox* Direction3MessageBox;
        struct MoonTimeline* OnEnterTimeline;
        struct MoonTimeline* OnExitTimeline;
        GuideStone_GuideStoneState__Enum m_state;

        struct Renderer__Array* m_renderers;
        bool m_renderersCollected;
        float m_currentTime;
        float m_lastNormalizedTime;
        struct Vector3 m_direction1InitPos;
        struct Vector3 m_direction2InitPos;
        struct Vector3 m_direction3InitPos;
        bool m_hasDirection1Transform;
        bool m_hasDirection2Transform;
        bool m_hasDirection3Transform;
    };

    struct GuideStone {
        struct GuideStone__Class* klass;
        MonitorData* monitor;
        struct GuideStone__Fields fields;
    };

    struct GuideStone_GuideStoneState__Enum__VTable {
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

    struct GuideStone_GuideStoneState__Enum__StaticFields {
    };

    struct GuideStone_GuideStoneState__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GuideStone_GuideStoneState__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GuideStone_GuideStoneState__Enum__VTable vtable;
    };

    struct GuideStone__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct GuideStone__StaticFields {
    };

    struct GuideStone__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GuideStone__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GuideStone__VTable vtable;
    };

    struct KeystoneDoorAnimator__Fields {
        struct MonoBehaviour__Fields _;
        struct DynamicDataResolver* m_dataResolver;
        struct KeystoneDoorVisuals* Visuals;
        struct MoonTimeline* DoorFailSequence;
        struct MoonTimeline* DoorOpeningSequence;
    };

    struct KeystoneDoorAnimator {
        struct KeystoneDoorAnimator__Class* klass;
        MonitorData* monitor;
        struct KeystoneDoorAnimator__Fields fields;
    };

    struct KeystoneDoorVisuals__Fields {
        struct MonoBehaviour__Fields _;
        struct MoonTimeline* DoorFailTimeline;
        struct MoonTimeline* DoorOpeningTimeline;
        struct List_1_KeystoneDoorSlot_* DoorSlots;
    };

    struct KeystoneDoorVisuals {
        struct KeystoneDoorVisuals__Class* klass;
        MonitorData* monitor;
        struct KeystoneDoorVisuals__Fields fields;
    };

    struct __declspec(align(8)) List_1_KeystoneDoorSlot___Fields {
        struct KeystoneDoorSlot__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_KeystoneDoorSlot_ {
        struct List_1_KeystoneDoorSlot___Class* klass;
        MonitorData* monitor;
        struct List_1_KeystoneDoorSlot___Fields fields;
    };

    struct KeystoneDoorSlot__Fields {
        struct MonoBehaviour__Fields _;
        int32_t Index;
        struct KeystoneDoorLogic* DoorLogic;
        bool Activated;
        struct AnimationCurve* AlphaFadeCurve;
        float AnimationSpeed;
        struct Renderer* m_renderer;
        struct Color m_colorValue;
        float m_alphaTimer;
        bool m_stopAnimation;
    };

    struct KeystoneDoorSlot {
        struct KeystoneDoorSlot__Class* klass;
        MonitorData* monitor;
        struct KeystoneDoorSlot__Fields fields;
    };

    enum class KeystoneDoorLogic_KeystoneDoorType__Enum : int32_t {
        TwoKeystones = 0x00000000,
        FourKeystones = 0x00000001,
    };

    struct KeystoneDoorLogic_KeystoneDoorType__Enum__Boxed {
        struct KeystoneDoorLogic_KeystoneDoorType__Enum__Class* klass;
        MonitorData* monitor;
        KeystoneDoorLogic_KeystoneDoorType__Enum value;
    };

    enum class KeystoneDoorLogic_State__Enum : int32_t {
        Normal = 0x00000000,
        Highlighted = 0x00000001,
        Opened = 0x00000002,
    };

    struct KeystoneDoorLogic_State__Enum__Boxed {
        struct KeystoneDoorLogic_State__Enum__Class* klass;
        MonitorData* monitor;
        KeystoneDoorLogic_State__Enum value;
    };

    struct KeystoneDoorLogic__Fields {
        struct GuidOwner__Fields _;
        KeystoneDoorLogic_KeystoneDoorType__Enum DoorType;

        struct KeystoneDoorAnimator* Animator;
        struct Transform* OriTarget;
        struct Color OriHoverColor;
        struct Transform* m_transform;
        struct SoundProvider* PlaceLeafSoundSoundProvider;
        struct SoundProvider* NotEnoughLeafsSoundProvider;
        struct SoundProvider* OpenDoorSoundProvider;
        struct SoundProvider* RestoreLeafsSoundProvider;
        struct SoundProvider* OnOriEnterSoundProvider;
        struct SoundProvider* OnOriExitSoundProvider;
        float OriDuration;
        float Radius;
        struct MessageProvider* HintMessage;
        struct DesiredUberStateDoor* OpenedState;
        struct MessageBox* m_hint;
        bool m_opensOnLeftSide;
        KeystoneDoorLogic_State__Enum CurrentState;

        bool m_checkItOpened;
        struct IUberState__Array* m_affectingUberStates;
        struct SoundPlayer* m_openDoorSound;
        StressTestStatus__Enum _StressTestStatus_k__BackingField;
    };

    struct KeystoneDoorLogic {
        struct KeystoneDoorLogic__Class* klass;
        MonitorData* monitor;
        struct KeystoneDoorLogic__Fields fields;
    };

    struct KeystoneDoorSlot__Array {
        struct KeystoneDoorSlot__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeystoneDoorSlot* vector[32];
    };

    struct IEnumerator_1_KeystoneDoorSlot_ {
        struct IEnumerator_1_KeystoneDoorSlot___Class* klass;
        MonitorData* monitor;
    };

    struct KeystoneDoorLogic_KeystoneDoorType__Enum__VTable {
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

    struct KeystoneDoorLogic_KeystoneDoorType__Enum__StaticFields {
    };

    struct KeystoneDoorLogic_KeystoneDoorType__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KeystoneDoorLogic_KeystoneDoorType__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KeystoneDoorLogic_KeystoneDoorType__Enum__VTable vtable;
    };

    struct KeystoneDoorLogic_State__Enum__VTable {
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

    struct KeystoneDoorLogic_State__Enum__StaticFields {
    };

    struct KeystoneDoorLogic_State__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KeystoneDoorLogic_State__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KeystoneDoorLogic_State__Enum__VTable vtable;
    };

    struct KeystoneDoorLogic__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_MoonSetupAnimator;
        VirtualInvokeData get_StressTestName;
        VirtualInvokeData StartStressTest;
        VirtualInvokeData StressTestUpdate;
        VirtualInvokeData EndStressTest;
        VirtualInvokeData get_StressTestStatus;
        VirtualInvokeData set_StressTestStatus;
        VirtualInvokeData get_CanExecuteStressTest;
        VirtualInvokeData get_StopMovingPlayerWhilePerforming;
        VirtualInvokeData Apply;
        VirtualInvokeData get_ApplyOnEditor;
        VirtualInvokeData get_AffectingUberStates;
        VirtualInvokeData get_AllTargets;
        VirtualInvokeData GetRequirementsForTimeline;
        VirtualInvokeData StopTransitions;
        VirtualInvokeData get_SharedState;
        VirtualInvokeData set_SharedState;
        VirtualInvokeData get_ObjectReference;
    };

    struct KeystoneDoorLogic__StaticFields {
    };

    struct KeystoneDoorLogic__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KeystoneDoorLogic__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KeystoneDoorLogic__VTable vtable;
    };

    struct KeystoneDoorSlot__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct KeystoneDoorSlot__StaticFields {
    };

    struct KeystoneDoorSlot__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KeystoneDoorSlot__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KeystoneDoorSlot__VTable vtable;
    };

    struct KeystoneDoorSlot__Array__VTable {
    };

    struct KeystoneDoorSlot__Array__StaticFields {
    };

    struct KeystoneDoorSlot__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KeystoneDoorSlot__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KeystoneDoorSlot__Array__VTable vtable;
    };

    struct IEnumerator_1_KeystoneDoorSlot___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_KeystoneDoorSlot___StaticFields {
    };

    struct IEnumerator_1_KeystoneDoorSlot___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_KeystoneDoorSlot___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_KeystoneDoorSlot___VTable vtable;
    };

    struct List_1_KeystoneDoorSlot___VTable {
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

    struct List_1_KeystoneDoorSlot___StaticFields {
        struct KeystoneDoorSlot__Array* _emptyArray;
    };

    struct List_1_KeystoneDoorSlot___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_KeystoneDoorSlot___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_KeystoneDoorSlot___VTable vtable;
    };

    struct KeystoneDoorVisuals__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct KeystoneDoorVisuals__StaticFields {
    };

    struct KeystoneDoorVisuals__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KeystoneDoorVisuals__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KeystoneDoorVisuals__VTable vtable;
    };

    struct KeystoneDoorAnimator__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData GetResolverForType;
        VirtualInvokeData get_MoonSetupVisuals;
    };

    struct KeystoneDoorAnimator__StaticFields {
    };

    struct KeystoneDoorAnimator__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KeystoneDoorAnimator__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KeystoneDoorAnimator__VTable vtable;
    };

    enum class KwolokTongueStatue_KwolowTongueStatueMode__Enum : int32_t {
        Toggle = 0x00000000,
        Timed = 0x00000001,
    };

    struct KwolokTongueStatue_KwolowTongueStatueMode__Enum__Boxed {
        struct KwolokTongueStatue_KwolowTongueStatueMode__Enum__Class* klass;
        MonitorData* monitor;
        KwolokTongueStatue_KwolowTongueStatueMode__Enum value;
    };

    enum class KwolokTongueStatue_KwolowTongueStatueState__Enum : int32_t {
        Opened = 0x00000000,
        Closed = 0x00000001,
        PartiallyOpened = 0x00000002,
    };

    struct KwolokTongueStatue_KwolowTongueStatueState__Enum__Boxed {
        struct KwolokTongueStatue_KwolowTongueStatueState__Enum__Class* klass;
        MonitorData* monitor;
        KwolokTongueStatue_KwolowTongueStatueState__Enum value;
    };

    struct KwolokTongueStatue__Fields {
        struct GuidOwner__Fields _;
        struct MoonTimeline* CloseTimeline;
        struct MoonTimeline* OpenTimeline;
        struct MoonReference_1_IByteUberState_* State;
        struct Transform* AutoTargetCenter;
        struct GameObject* GrassObject;
        KwolokTongueStatue_KwolowTongueStatueMode__Enum Mode;

        KwolokTongueStatue_KwolowTongueStatueState__Enum InitialState;

        float OpenedDuration;
        bool Grassy;
        int32_t BowTargetPriority;
        struct KwolokTongueStatue_AllowedCollision* Collision;
        struct KwolokTongueStatue_AdvancedKwolokTongueStatueSettings* AdvancedSettings;
        struct Action_1_KwolokTongueStatue_* OnTurnOn;
        struct Action_1_KwolokTongueStatue_* OnTurnOff;
        float m_extendedTime;
        KwolokTongueStatue_KwolowTongueStatueState__Enum m_currentState;

        KwolokTongueStatue_KwolowTongueStatueState__Enum m_targetState;

        struct IByteUberState* m_resolvedUberState;
        struct KwolokTongueStatue_TongueState* m_openState;
        struct KwolokTongueStatue_TongueState* m_closeState;
        struct KwolokTongueStatue_TongueState* m_partiallyOpenedState;
        float m_cooldownTimer;
        struct DynamicDataResolver* m_dataResolver;
        bool _IsBlocked_k__BackingField;
        bool _IsSuspended_k__BackingField;
        SuspendableMask__Enum m_suspensionMask;

        struct IUberState__Array* m_affectingUberStates;
        struct IDamageReciever__Array* m_damageReceivers;
    };

    struct KwolokTongueStatue {
        struct KwolokTongueStatue__Class* klass;
        MonitorData* monitor;
        struct KwolokTongueStatue__Fields fields;
    };

    struct __declspec(align(8)) KwolokTongueStatue_AllowedCollision__Fields {
        struct KwolokTongueStatue* TongueStatue;
        struct MoonTimeline* Timeline;
    };

    struct KwolokTongueStatue_AllowedCollision {
        struct KwolokTongueStatue_AllowedCollision__Class* klass;
        MonitorData* monitor;
        struct KwolokTongueStatue_AllowedCollision__Fields fields;
    };

    struct __declspec(align(8)) KwolokTongueStatue_AdvancedKwolokTongueStatueSettings__Fields {
        struct GameObject* GraphicsRoot;
        struct Transform* TonguePlataform;
        struct MoonVector3* PartiallyOpenedLocalPosition;
        struct Vector3 m_resolvedPartiallyOpenedLocalPosition;
    };

    struct KwolokTongueStatue_AdvancedKwolokTongueStatueSettings {
        struct KwolokTongueStatue_AdvancedKwolokTongueStatueSettings__Class* klass;
        MonitorData* monitor;
        struct KwolokTongueStatue_AdvancedKwolokTongueStatueSettings__Fields fields;
    };

    struct Action_1_KwolokTongueStatue___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Action_1_KwolokTongueStatue_ {
        struct Action_1_KwolokTongueStatue___Class* klass;
        MonitorData* monitor;
        struct Action_1_KwolokTongueStatue___Fields fields;
    };

    struct __declspec(align(8)) KwolokTongueStatue_TongueState__Fields {
        KwolokTongueStatue_KwolowTongueStatueState__Enum m_desiredStateEnum;

        struct KwolokTongueStatue* m_owner;
        struct DesiredUberStateByte* m_desiredByteState;
        struct MoonTimeline* m_timeline;
    };

    struct KwolokTongueStatue_TongueState {
        struct KwolokTongueStatue_TongueState__Class* klass;
        MonitorData* monitor;
        struct KwolokTongueStatue_TongueState__Fields fields;
    };

    struct KwolokTongueStatue_KwolowTongueStatueMode__Enum__VTable {
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

    struct KwolokTongueStatue_KwolowTongueStatueMode__Enum__StaticFields {
    };

    struct KwolokTongueStatue_KwolowTongueStatueMode__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KwolokTongueStatue_KwolowTongueStatueMode__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KwolokTongueStatue_KwolowTongueStatueMode__Enum__VTable vtable;
    };

    struct KwolokTongueStatue_KwolowTongueStatueState__Enum__VTable {
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

    struct KwolokTongueStatue_KwolowTongueStatueState__Enum__StaticFields {
    };

    struct KwolokTongueStatue_KwolowTongueStatueState__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KwolokTongueStatue_KwolowTongueStatueState__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KwolokTongueStatue_KwolowTongueStatueState__Enum__VTable vtable;
    };

    struct KwolokTongueStatue_AllowedCollision__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct KwolokTongueStatue_AllowedCollision__StaticFields {
    };

    struct KwolokTongueStatue_AllowedCollision__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KwolokTongueStatue_AllowedCollision__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KwolokTongueStatue_AllowedCollision__VTable vtable;
    };

    struct KwolokTongueStatue_AdvancedKwolokTongueStatueSettings__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct KwolokTongueStatue_AdvancedKwolokTongueStatueSettings__StaticFields {
    };

    struct KwolokTongueStatue_AdvancedKwolokTongueStatueSettings__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KwolokTongueStatue_AdvancedKwolokTongueStatueSettings__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KwolokTongueStatue_AdvancedKwolokTongueStatueSettings__VTable vtable;
    };

    struct Action_1_KwolokTongueStatue___VTable {
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

    struct Action_1_KwolokTongueStatue___StaticFields {
    };

    struct Action_1_KwolokTongueStatue___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Action_1_KwolokTongueStatue___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Action_1_KwolokTongueStatue___VTable vtable;
    };

    struct KwolokTongueStatue_TongueState__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct KwolokTongueStatue_TongueState__StaticFields {
    };

    struct KwolokTongueStatue_TongueState__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KwolokTongueStatue_TongueState__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KwolokTongueStatue_TongueState__VTable vtable;
    };

    struct KwolokTongueStatue__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Position;
        VirtualInvokeData IsDead;
        VirtualInvokeData CanBeChargeFlamed;
        VirtualInvokeData CanBeChargeDashed;
        VirtualInvokeData CanBeGrenaded;
        VirtualInvokeData CanBeStomped;
        VirtualInvokeData CanBeBashed;
        VirtualInvokeData CanBeSpiritFlamed;
        VirtualInvokeData IsStompBouncable;
        VirtualInvokeData CanBeLevelUpBlasted;
        VirtualInvokeData CanBeSpiritSlashed;
        VirtualInvokeData CanBeHitByBow;
        VirtualInvokeData CanBeHitByMelee;
        VirtualInvokeData CanBeHitByHammerHandle;
        VirtualInvokeData CanBeHeavySpiritSlashed;
        VirtualInvokeData CanBeSpiritLeashed;
        VirtualInvokeData CanBeHomingMissiled;
        VirtualInvokeData CanBeTrapped;
        VirtualInvokeData CanBeSpiritSpeared;
        VirtualInvokeData CanBeTeleportedByBeacon;
        VirtualInvokeData CanBeGlowed;
        VirtualInvokeData get_AffectedReceivers;
        VirtualInvokeData IDamageReciever_get_gameObject;
        VirtualInvokeData IDamageReciever_get_transform;
        VirtualInvokeData OnRecieveDamage;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
        VirtualInvokeData get_BowPriority;
        VirtualInvokeData get_BowEnableAutoTarget;
        VirtualInvokeData ShouldArrowExplode;
        VirtualInvokeData get_BowAutoTargetPosition;
        VirtualInvokeData ShouldArrowBeReflected;
        VirtualInvokeData get_IsOn;
        VirtualInvokeData GetRequirementsForTimeline;
        VirtualInvokeData Apply;
        VirtualInvokeData get_ApplyOnEditor;
        VirtualInvokeData get_AffectingUberStates;
        VirtualInvokeData get_AllTargets;
        VirtualInvokeData GetDynamicGraphicTarget;
    };

} // namespace app
