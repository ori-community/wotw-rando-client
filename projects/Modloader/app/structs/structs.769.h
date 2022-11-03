namespace app {
    struct CancelRaceAction__StaticFields {
    };

    struct CancelRaceAction__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CancelRaceAction__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CancelRaceAction__VTable vtable;
    };

    struct __declspec(align(8)) GhostService__Fields {
        struct List_1_GhostPlayer_* m_ghosts;
    };

    struct GhostService {
        struct GhostService__Class* klass;
        MonitorData* monitor;
        struct GhostService__Fields fields;
    };

    struct GhostService__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct GhostService__StaticFields {
    };

    struct GhostService__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GhostService__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GhostService__VTable vtable;
    };

    struct HelperGhostController__Fields {
        struct MonoBehaviour__Fields _;
        struct String* HelperGhostReplayFilePath;
        struct MessageProvider* Hint;
        bool m_isRunning;
        struct MessageBox* m_messageBox;
        struct GhostPlayer* m_ghostPlayer;
    };

    struct HelperGhostController {
        struct HelperGhostController__Class* klass;
        MonitorData* monitor;
        struct HelperGhostController__Fields fields;
    };

    struct HelperGhostController__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct HelperGhostController__StaticFields {
    };

    struct HelperGhostController__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HelperGhostController__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HelperGhostController__VTable vtable;
    };

    struct __declspec(align(8)) HelperGhostController_OnFinishedRoutive_d_9__Fields {
        int32_t __1__state;
        struct Object* __2__current;
        struct HelperGhostController* __4__this;
        struct FaderBCustomFadeAction* _fader_5__2;
    };

    struct HelperGhostController_OnFinishedRoutive_d_9 {
        struct HelperGhostController_OnFinishedRoutive_d_9__Class* klass;
        MonitorData* monitor;
        struct HelperGhostController_OnFinishedRoutive_d_9__Fields fields;
    };

    struct ActionWithDuration__Fields {
        struct PerformingAction__Fields _;
        bool _IsSuspended_k__BackingField;
        SuspendableMask__Enum m_suspensionMask;
    };

    struct ActionWithDuration {
        struct ActionWithDuration__Class* klass;
        MonitorData* monitor;
        struct ActionWithDuration__Fields fields;
    };

    enum class FaderB_State__Enum : int32_t {
        FadeToBlack = 0x00000000,
        FadeStay = 0x00000001,
        FadeFromBlack = 0x00000002,
        Invisible = 0x00000003,
        Timeline = 0x00000004,
        EditorDebug = 0x00000005,
        TimelineFinished = 0x00000006,
    };

    struct FaderB_State__Enum__Boxed {
        struct FaderB_State__Enum__Class* klass;
        MonitorData* monitor;
        FaderB_State__Enum value;
    };

    struct FaderBCustomFadeAction__Fields {
        struct ActionWithDuration__Fields _;
        FaderB_State__Enum State;

        float FadeInDuration;
        float FadeStayDuration;
        float FadeOutDuration;
    };

    struct FaderBCustomFadeAction {
        struct FaderBCustomFadeAction__Class* klass;
        MonitorData* monitor;
        struct FaderBCustomFadeAction__Fields fields;
    };

    struct SeinMaxSpeedAction__Fields {
        struct ActionWithDuration__Fields _;
        bool m_isPerforming;
        float m_currentTime;
        struct AnimationCurve* SpeedOverTime;
        float ChangeDuration;
    };

    struct SeinMaxSpeedAction {
        struct SeinMaxSpeedAction__Class* klass;
        MonitorData* monitor;
        struct SeinMaxSpeedAction__Fields fields;
    };

    struct SeinMaxSpeedAction__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Serialize;
        VirtualInvokeData RegisterToSaveSceneManager;
        VirtualInvokeData Serialize_1;
        VirtualInvokeData Perform;
        VirtualInvokeData GetNiceName;
        VirtualInvokeData Perform_1;
        VirtualInvokeData Stop;
        VirtualInvokeData get_IsPerforming;
        VirtualInvokeData get_IsBlocking;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
        VirtualInvokeData set_Duration;
        VirtualInvokeData get_Duration;
    };

    struct SeinMaxSpeedAction__StaticFields {
    };

    struct SeinMaxSpeedAction__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SeinMaxSpeedAction__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SeinMaxSpeedAction__VTable vtable;
    };

    struct ActionWithDuration__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Serialize;
        VirtualInvokeData RegisterToSaveSceneManager;
        VirtualInvokeData Serialize_1;
        VirtualInvokeData Perform;
        VirtualInvokeData GetNiceName;
        VirtualInvokeData __unknown;
        VirtualInvokeData __unknown_1;
        VirtualInvokeData __unknown_2;
        VirtualInvokeData get_IsBlocking;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
        VirtualInvokeData __unknown_3;
        VirtualInvokeData __unknown_4;
    };

    struct ActionWithDuration__StaticFields {
    };

    struct ActionWithDuration__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ActionWithDuration__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ActionWithDuration__VTable vtable;
    };

    struct FaderB_State__Enum__VTable {
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

    struct FaderB_State__Enum__StaticFields {
    };

    struct FaderB_State__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FaderB_State__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FaderB_State__Enum__VTable vtable;
    };

    struct FaderBCustomFadeAction__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Serialize;
        VirtualInvokeData RegisterToSaveSceneManager;
        VirtualInvokeData Serialize_1;
        VirtualInvokeData Perform;
        VirtualInvokeData GetNiceName;
        VirtualInvokeData Perform_1;
        VirtualInvokeData Stop;
        VirtualInvokeData get_IsPerforming;
        VirtualInvokeData get_IsBlocking;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
        VirtualInvokeData set_Duration;
        VirtualInvokeData get_Duration;
    };

    struct FaderBCustomFadeAction__StaticFields {
    };

    struct FaderBCustomFadeAction__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FaderBCustomFadeAction__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FaderBCustomFadeAction__VTable vtable;
    };

    struct HelperGhostController_OnFinishedRoutive_d_9__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData System_Collections_Generic_IEnumerator_System_Object__get_Current;
        VirtualInvokeData System_IDisposable_Dispose;
        VirtualInvokeData MoveNext;
        VirtualInvokeData System_Collections_IEnumerator_get_Current;
        VirtualInvokeData System_Collections_IEnumerator_Reset;
    };

    struct HelperGhostController_OnFinishedRoutive_d_9__StaticFields {
    };

    struct HelperGhostController_OnFinishedRoutive_d_9__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HelperGhostController_OnFinishedRoutive_d_9__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HelperGhostController_OnFinishedRoutive_d_9__VTable vtable;
    };

    enum class RaceCondition_RaceStates__Enum : int32_t {
        Active = 0x00000000,
        Inactive = 0x00000001,
    };

    struct RaceCondition_RaceStates__Enum__Boxed {
        struct RaceCondition_RaceStates__Enum__Class* klass;
        MonitorData* monitor;
        RaceCondition_RaceStates__Enum value;
    };

    struct RaceCondition__Fields {
        struct Condition_1__Fields _;
        RaceCondition_RaceStates__Enum RequiredRaceState;
    };

    struct RaceCondition {
        struct RaceCondition__Class* klass;
        MonitorData* monitor;
        struct RaceCondition__Fields fields;
    };

    struct RaceCondition_RaceStates__Enum__VTable {
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

    struct RaceCondition_RaceStates__Enum__StaticFields {
    };

    struct RaceCondition_RaceStates__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RaceCondition_RaceStates__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RaceCondition_RaceStates__Enum__VTable vtable;
    };

    struct RaceCondition__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Validate;
        VirtualInvokeData Validate_1;
        VirtualInvokeData ResetCondition;
        VirtualInvokeData UpdateCondition;
        VirtualInvokeData GetNiceName;
    };

    struct RaceCondition__StaticFields {
    };

    struct RaceCondition__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RaceCondition__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RaceCondition__VTable vtable;
    };

    struct RaceHandler__Fields {
        struct MonoBehaviour__Fields _;
        struct RaceData* Data;
        bool m_initialized;
        bool m_inProgress;
        bool m_inStartProximity;
        bool m_inEndProximity;
        bool m_isSyncing;
        bool m_startRaceOnEnable;
        bool m_showingChallengeUi;
        struct Action* m_onStartRaceAction;
        struct Vector3 m_oriStartRacePosition;
        struct PickupBase* m_rewardInstance;
    };

    struct RaceHandler {
        struct RaceHandler__Class* klass;
        MonitorData* monitor;
        struct RaceHandler__Fields fields;
    };

    struct RaceData__Fields {
        struct MonoBehaviour__Fields _;
        struct SerializedIntUberState* m_raceState;
        struct SerializedBooleanUberState* m_raceIconState;
        struct DesiredUberStateComposite* m_stateOverride;
        struct List_1_EquipmentType_* m_disabledAbilities;
        struct RaceSettings* m_raceSettings;
        struct PickupBase* m_reward;
        int32_t ExperienceRewardOverrideAmount;
        struct Texture2D* m_rewardIcon;
        struct List_1_SceneMetaData_* m_requiredPreviewScenes;
        struct List_1_Moon_MoonReference_1__13* m_raceSyncables;
        struct BooleanUberState* RaceInProgressState;
        struct Transform* m_startTransform;
        struct Transform* m_startLineTransform;
        struct Transform* m_endTransform;
        RaceData_RaceStartFaceDirection__Enum m_raceStartFaceDirection;

        struct CinematicCharacterAnimator__Array* m_countdownCinematicCharacterAnimators;
        struct Transform* EndCenterTransform;
        struct MoonTimeline* PreviewTimeline;
        struct List_1_Moon_Timeline_MoonTimeline_* GhostFinishTimelines;
        struct List_1_Moon_Timeline_MoonTimeline_* OriFinishTimelines;
        struct MoonTimeline* CountdownTimeline;
        struct EventTriggerAnimator* CountdownEventTrigger;
        struct MoonTimeline* SpectatorCountdownTimeline;
        struct EventTriggerAnimator* SpectatorCountdownEventTrigger;
        struct MoonTimeline* ActivateTimeline;
        struct EventTriggerAnimator* ForceFrustumInstantUpdateTriggerBegin;
        struct EventTriggerAnimator* ForceFrustumInstantUpdateTriggerEnd;
        struct PlayerInsideZoneChecker* StartZoneChecker;
        struct PlayerInsideZoneChecker* EndZoneChecker;
        struct TriggerColliderCallback* EndTriggerCollider;
        struct Transform* RewardHolder;
        struct MeshRenderer* RewardIconRenderer;
        struct ActionSequence* EnterActionSequence;
        struct ActionSequence* ExitActionSequence;
        struct EventTriggerAnimator__Array* ShowRewardChallengeTriggers;
        struct EventTriggerAnimator__Array* HideRewardChallengeTriggers;
        struct Rect__Array* Waypoints;
        struct String* m_leaderBoardId;
        struct PlayerInsideZoneChecker__Array* m_raceAreaCheckers;
        struct Bounds m_bounds;
        bool m_insideFrustum;
        struct DynamicDataResolver* m_dataResolver;
    };

    struct RaceData {
        struct RaceData__Class* klass;
        MonitorData* monitor;
        struct RaceData__Fields fields;
    };

    enum class CinematicCharacterAnimator_FacingDirection__Enum : int32_t {
        UseCurrent = 0x00000000,
        FaceLeft = 0x00000001,
        FaceRight = 0x00000002,
    };

    struct CinematicCharacterAnimator_FacingDirection__Enum__Boxed {
        struct CinematicCharacterAnimator_FacingDirection__Enum__Class* klass;
        MonitorData* monitor;
        CinematicCharacterAnimator_FacingDirection__Enum value;
    };

    enum class CinematicCharacterAnimator_GameplayTransitionStart__Enum : int32_t {
        None = 0x00000000,
        ForceOnGround = 0x00000001,
    };

    struct CinematicCharacterAnimator_GameplayTransitionStart__Enum__Boxed {
        struct CinematicCharacterAnimator_GameplayTransitionStart__Enum__Class* klass;
        MonitorData* monitor;
        CinematicCharacterAnimator_GameplayTransitionStart__Enum value;
    };

    enum class CinematicCharacterAnimator_GameplayTransitionEnd__Enum : int32_t {
        None = 0x00000000,
        ForceOnGround = 0x00000001,
        LerpToGround = 0x00000002,
    };

    struct CinematicCharacterAnimator_GameplayTransitionEnd__Enum__Boxed {
        struct CinematicCharacterAnimator_GameplayTransitionEnd__Enum__Class* klass;
        MonitorData* monitor;
        CinematicCharacterAnimator_GameplayTransitionEnd__Enum value;
    };

    struct CinematicCharacterAnimator__Fields {
        struct TimelineEntity__Fields _;
        struct MoonAnimation* Animation;
        CinematicCharacterAnimator_Character__Enum AnimatedCharacter;

        bool DismountIfRiding;
        struct EventTriggerAnimator* MountTrigger;
        bool UseAnimatorAsStartingPoint;
        bool DisableColliderWhenPlaying;
        float DisableColliderDurationOffset;
        bool UsePerspectiveAdjustment;
        CinematicCharacterAnimator_FacingDirection__Enum Direction;

        CinematicCharacterAnimator_FacingDirection__Enum PostPlayDirection;

        CinematicCharacterAnimator_GameplayTransitionStart__Enum TransitionStart;

        CinematicCharacterAnimator_GameplayTransitionEnd__Enum TransitionEnd;

        float LerpToGroundDuration;
        float InterpolationTime;
        bool ForceUsingCurves;
        struct AnimationCurve* m_xCurve;
        struct AnimationCurve* m_yCurve;
        struct AnimationCurve* m_zCurve;
        bool ResetCharacterRotation;
        float m_time;
        struct ActiveAnimationHandle m_animationState;
        float _CachedMoonAnimationDuration_k__BackingField;
        struct MoonAnimation* _CachedMoonAnimation_k__BackingField;
        bool m_wasCarrying;
        float m_lerpPosition;
        bool m_preparedToStart;
    };

    struct CinematicCharacterAnimator {
        struct CinematicCharacterAnimator__Class* klass;
        MonitorData* monitor;
        struct CinematicCharacterAnimator__Fields fields;
    };

    struct CinematicCharacterAnimator__Array {
        struct CinematicCharacterAnimator__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct CinematicCharacterAnimator* vector[32];
    };

    struct CinematicCharacterAnimator_FacingDirection__Enum__VTable {
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

    struct CinematicCharacterAnimator_FacingDirection__Enum__StaticFields {
    };

    struct CinematicCharacterAnimator_FacingDirection__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CinematicCharacterAnimator_FacingDirection__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CinematicCharacterAnimator_FacingDirection__Enum__VTable vtable;
    };

    struct CinematicCharacterAnimator_GameplayTransitionStart__Enum__VTable {
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

    struct CinematicCharacterAnimator_GameplayTransitionStart__Enum__StaticFields {
    };

    struct CinematicCharacterAnimator_GameplayTransitionStart__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CinematicCharacterAnimator_GameplayTransitionStart__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CinematicCharacterAnimator_GameplayTransitionStart__Enum__VTable vtable;
    };

    struct CinematicCharacterAnimator_GameplayTransitionEnd__Enum__VTable {
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

    struct CinematicCharacterAnimator_GameplayTransitionEnd__Enum__StaticFields {
    };

    struct CinematicCharacterAnimator_GameplayTransitionEnd__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CinematicCharacterAnimator_GameplayTransitionEnd__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CinematicCharacterAnimator_GameplayTransitionEnd__Enum__VTable vtable;
    };

    struct CinematicCharacterAnimator__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_EventReciever;
        VirtualInvokeData set_EventReciever;
        VirtualInvokeData StartPlayback;
        VirtualInvokeData StopPlayback;
        VirtualInvokeData PausePlayback;
        VirtualInvokeData ResumePlayback;
        VirtualInvokeData get_IsReadOnly;
        VirtualInvokeData get_PlayState;
        VirtualInvokeData get_PlaybackStatus;
        VirtualInvokeData get_Hash;
        VirtualInvokeData get_Name;
        VirtualInvokeData get_ExecutionOrderOffset;
        VirtualInvokeData get_UpdateType;
        VirtualInvokeData OnUpdate;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
        VirtualInvokeData PostEvent;
        VirtualInvokeData PostEvent_1;
        VirtualInvokeData PostRequest;
        VirtualInvokeData get_Hash_1;
        VirtualInvokeData get_UpdateType_1;
        VirtualInvokeData get_UpdateCategory;
        VirtualInvokeData SetTimeScale;
        VirtualInvokeData OnValidate;
        VirtualInvokeData OnPausePlayback;
        VirtualInvokeData OnResumePlayback;
        VirtualInvokeData OnStartPlayback;
        VirtualInvokeData OnStopPlayback;
        VirtualInvokeData OnUpdateEntity;
        VirtualInvokeData CanUpdate;
        VirtualInvokeData Awake;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData SynchronizeData;
        VirtualInvokeData SynchronizePad;
        VirtualInvokeData PostEvent_2;
        VirtualInvokeData PostEvent_3;
        VirtualInvokeData PostRequest_1;
        VirtualInvokeData OnRootScopeStopped;
    };

    struct CinematicCharacterAnimator__StaticFields {
    };

    struct CinematicCharacterAnimator__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CinematicCharacterAnimator__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CinematicCharacterAnimator__VTable vtable;
    };

    struct CinematicCharacterAnimator__Array__VTable {
    };

    struct CinematicCharacterAnimator__Array__StaticFields {
    };

    struct CinematicCharacterAnimator__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CinematicCharacterAnimator__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CinematicCharacterAnimator__Array__VTable vtable;
    };

    struct RaceData__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData GetResolverForType;
        VirtualInvokeData get_RaceName;
        VirtualInvokeData get_RequiredScenes;
        VirtualInvokeData get_StartLinePosition;
        VirtualInvokeData get_EndPosition;
        VirtualInvokeData get_FlythroughTimeline;
        VirtualInvokeData get_RaceSettings;
        VirtualInvokeData get_TimeLimit;
        VirtualInvokeData get_GetReadyCondition;
        VirtualInvokeData get_PostFinishCondition;
        VirtualInvokeData get_IsBeaten;
        VirtualInvokeData get_ShouldPlayEndingAnimation;
        VirtualInvokeData get_StateOverride;
        VirtualInvokeData get_DisabledAbilities;
        VirtualInvokeData get_RaceSyncables;
        VirtualInvokeData OnFrustumEnter;
        VirtualInvokeData OnFrustumExit;
        VirtualInvokeData get_InsideFrustum;
        VirtualInvokeData get_Bounds;
        VirtualInvokeData get_AllowCacheBounds;
    };

    struct RaceData__StaticFields {
    };

    struct RaceData__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RaceData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RaceData__VTable vtable;
    };

    struct RaceHandler__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData OnGhostFinished;
        VirtualInvokeData OnPlayerFinished;
        VirtualInvokeData OnRaceFinished;
        VirtualInvokeData OnRaceFailed;
        VirtualInvokeData SetRaceInProgressState;
        VirtualInvokeData IsInsideRaceArea;
        VirtualInvokeData StartMenuRace;
        VirtualInvokeData PlaceOriAtStart;
    };

    struct RaceHandler__StaticFields {
    };

    struct RaceHandler__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RaceHandler__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RaceHandler__VTable vtable;
    };

    struct __declspec(align(8)) RaceHandler_CreateGhostFolder_d_15__Fields {
        int32_t __1__state;
        struct Object* __2__current;
        struct String* _directory_5__2;
    };

    struct RaceHandler_CreateGhostFolder_d_15 {
        struct RaceHandler_CreateGhostFolder_d_15__Class* klass;
        MonitorData* monitor;
        struct RaceHandler_CreateGhostFolder_d_15__Fields fields;
    };

    struct RaceHandler_CreateGhostFolder_d_15__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData System_Collections_Generic_IEnumerator_System_Object__get_Current;
        VirtualInvokeData System_IDisposable_Dispose;
        VirtualInvokeData MoveNext;
        VirtualInvokeData System_Collections_IEnumerator_get_Current;
        VirtualInvokeData System_Collections_IEnumerator_Reset;
    };

    struct RaceHandler_CreateGhostFolder_d_15__StaticFields {
    };

    struct RaceHandler_CreateGhostFolder_d_15__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RaceHandler_CreateGhostFolder_d_15__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RaceHandler_CreateGhostFolder_d_15__VTable vtable;
    };

    struct __declspec(align(8)) RaceHandler_StartMenuRaceNextFrame_d_42__Fields {
        int32_t __1__state;
        struct Object* __2__current;
        struct RaceHandler* __4__this;
        struct SceneMetaData* _closestScene_5__2;
        float _timeSoFar_5__3;
    };

    struct RaceHandler_StartMenuRaceNextFrame_d_42 {
        struct RaceHandler_StartMenuRaceNextFrame_d_42__Class* klass;
        MonitorData* monitor;
        struct RaceHandler_StartMenuRaceNextFrame_d_42__Fields fields;
    };

    struct RaceHandler_StartMenuRaceNextFrame_d_42__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData System_Collections_Generic_IEnumerator_System_Object__get_Current;
        VirtualInvokeData System_IDisposable_Dispose;
        VirtualInvokeData MoveNext;
        VirtualInvokeData System_Collections_IEnumerator_get_Current;
        VirtualInvokeData System_Collections_IEnumerator_Reset;
    };

    struct RaceHandler_StartMenuRaceNextFrame_d_42__StaticFields {
    };

    struct RaceHandler_StartMenuRaceNextFrame_d_42__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RaceHandler_StartMenuRaceNextFrame_d_42__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RaceHandler_StartMenuRaceNextFrame_d_42__VTable vtable;
    };

    struct RacesEnabledCondition__Fields {
        struct Condition_1__Fields _;
        bool Enabled;
    };

    struct RacesEnabledCondition {
        struct RacesEnabledCondition__Class* klass;
        MonitorData* monitor;
        struct RacesEnabledCondition__Fields fields;
    };

    struct RacesEnabledCondition__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Validate;
        VirtualInvokeData Validate_1;
        VirtualInvokeData ResetCondition;
        VirtualInvokeData UpdateCondition;
        VirtualInvokeData GetNiceName;
    };

    struct RacesEnabledCondition__StaticFields {
    };

    struct RacesEnabledCondition__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RacesEnabledCondition__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RacesEnabledCondition__VTable vtable;
    };

    enum class RaceStartCondition_RaceStates__Enum : int32_t {
        Active = 0x00000000,
        Inactive = 0x00000001,
    };

    struct RaceStartCondition_RaceStates__Enum__Boxed {
        struct RaceStartCondition_RaceStates__Enum__Class* klass;
        MonitorData* monitor;
        RaceStartCondition_RaceStates__Enum value;
    };

    enum class RaceStartCondition_ButtonStates__Enum : int32_t {
        Pressed = 0x00000000,
        Released = 0x00000001,
        OnPressed = 0x00000002,
        OnReleased = 0x00000003,
    };

    struct RaceStartCondition_ButtonStates__Enum__Boxed {
        struct RaceStartCondition_ButtonStates__Enum__Class* klass;
        MonitorData* monitor;
        RaceStartCondition_ButtonStates__Enum value;
    };

    struct RaceStartCondition__Fields {
        struct Condition_1__Fields _;
        RaceStartCondition_RaceStates__Enum RequiredRaceState;

        Input_Button__Enum Button;

        RaceStartCondition_ButtonStates__Enum State;
    };

    struct RaceStartCondition {
        struct RaceStartCondition__Class* klass;
        MonitorData* monitor;
        struct RaceStartCondition__Fields fields;
    };

    struct RaceStartCondition_RaceStates__Enum__VTable {
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

    struct RaceStartCondition_RaceStates__Enum__StaticFields {
    };

    struct RaceStartCondition_RaceStates__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RaceStartCondition_RaceStates__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RaceStartCondition_RaceStates__Enum__VTable vtable;
    };

} // namespace app
