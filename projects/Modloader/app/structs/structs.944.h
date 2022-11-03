namespace app {
    struct BossHealthbar__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BossHealthbar__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BossHealthbar__VTable vtable;
    };

    struct BossHealthbar2__Fields {
        struct MonoBehaviour__Fields _;
        struct BossesNamesMessages* BossNames;
        struct Func_1_Boolean_* m_shouldShow;
        struct Vector2 HealthBarOffsetMax;
        struct Vector2 HealthBarOffsetMin;
        struct Vector2 DamageBarOffsetMax;
        struct Vector2 DamageBarOffsetMin;
        struct Vector2 DamageBarLowerOffsetMax;
        struct Vector2 DamageBarLowerOffsetMin;
        struct VitalsHealthProvider* VitalsProvider;
        struct FloatValueProvider* ValueProvider;
        float ValueChangeRate;
        float ValueFreezeTime;
        struct Renderer* BarRenderer;
        struct Renderer* BarDamageRenderer;
        struct MoonTimeline* ShowTimeline;
        struct MoonTimeline* HideTimeline;
        struct GameObject* BarVisualsParent;
        struct MessageBox* BossName;
        float m_minValue;
        float m_maxValue;
        float m_lastChange;
        bool m_visible;
        bool m_postRestoreNextFrameUpdateNeeded;
    };

    struct BossHealthbar2 {
        struct BossHealthbar2__Class* klass;
        MonitorData* monitor;
        struct BossHealthbar2__Fields fields;
    };

    struct BossesNamesMessages__Fields {
        struct ScriptableObject__Fields _;
        struct MessageProvider* NightcrawlerBossName;
        struct MessageProvider* SpiderBossName;
        struct MessageProvider* KwolokBossName;
        struct MessageProvider* PowlBossName;
        struct MessageProvider* HornBossName;
        struct MessageProvider* LaserBossName;
        struct MessageProvider* MinerBossName;
    };

    struct BossesNamesMessages {
        struct BossesNamesMessages__Class* klass;
        MonitorData* monitor;
        struct BossesNamesMessages__Fields fields;
    };

    struct BossesNamesMessages__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct BossesNamesMessages__StaticFields {
    };

    struct BossesNamesMessages__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BossesNamesMessages__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BossesNamesMessages__VTable vtable;
    };

    struct BossHealthbar2__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct BossHealthbar2__StaticFields {
        struct BossHealthbar2* m_instance;
    };

    struct BossHealthbar2__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BossHealthbar2__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BossHealthbar2__VTable vtable;
    };

    enum class BossHealthbar2_BossNameType__Enum : int32_t {
        Nightcrawler = 0x00000000,
        SpiderBoss = 0x00000001,
        KwolokBoss = 0x00000002,
        PowlBoss = 0x00000003,
        HornBoss = 0x00000004,
        LaserBoss = 0x00000005,
        MinerBoss = 0x00000006,
    };

    struct BossHealthbar2_BossNameType__Enum__Boxed {
        struct BossHealthbar2_BossNameType__Enum__Class* klass;
        MonitorData* monitor;
        BossHealthbar2_BossNameType__Enum value;
    };

    struct BossHealthbar2_BossNameType__Enum__VTable {
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

    struct BossHealthbar2_BossNameType__Enum__StaticFields {
    };

    struct BossHealthbar2_BossNameType__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BossHealthbar2_BossNameType__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BossHealthbar2_BossNameType__Enum__VTable vtable;
    };

    struct CanvasCameraHooker__Fields {
        struct MonoBehaviour__Fields _;
    };

    struct CanvasCameraHooker {
        struct CanvasCameraHooker__Class* klass;
        MonitorData* monitor;
        struct CanvasCameraHooker__Fields fields;
    };

    struct CanvasCameraHooker__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CanvasCameraHooker__StaticFields {
    };

    struct CanvasCameraHooker__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CanvasCameraHooker__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CanvasCameraHooker__VTable vtable;
    };

    struct Fader_c {
        struct Fader_c__Class* klass;
        MonitorData* monitor;
    };

    struct Fader_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Fader_c__StaticFields {
        struct Fader_c* __9;
        struct Action* __9__21_0;
        struct Action* __9__21_1;
    };

    struct Fader_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Fader_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Fader_c__VTable vtable;
    };

    enum class FaderAnimatorEntity_FaderType__Enum : int32_t {
        Default = 0x00000000,
        NoCleanup = 0x00000001,
        Cleanup = 0x00000002,
        FinalInCutscene = 0x00000003,
        PrologueEnd = 0x00000004,
        KuFlightStart = 0x00000005,
        MokiLowerRope = 0x00000006,
        LeverAtDoubleJump = 0x00000007,
        LumaPoolsAfterKwolokMeeting = 0x00000008,
        SilentWoodsBurningVillage = 0x00000009,
        MouldwoodDepthsLightRays = 0x0000000a,
        MidnightBurrowsEntrance = 0x0000000b,
        LumaPoolsSaveRoom = 0x0000000c,
        BaursReachAfterAvalanche = 0x0000000d,
    };

    struct FaderAnimatorEntity_FaderType__Enum__Boxed {
        struct FaderAnimatorEntity_FaderType__Enum__Class* klass;
        MonitorData* monitor;
        FaderAnimatorEntity_FaderType__Enum value;
    };

    struct FaderB__Fields {
        struct Suspendable__Fields _;
        float FadeInTime;
        float FadeStayTime;
        float FadeOutTime;
        float PanicResetDelay;
        float CleanupThreshold;
        float GCOpacityThreshold;
        float FadeInOutPreviousOpacityThreshold;
        struct AnimationCurve* FaderBrightnessCurve;
        struct AnimationCurve* FaderBContrastCurve;
        struct AnimationCurve* FaderBWeightCurve;
        float TimelineFinishedFadeInDelay;
        float TimelineFinishedFadeInSpeed;
        float m_stateCurrentTime;
        float m_opacity;
        int32_t m_GCScheduledAtFrame;
        int32_t m_previouslyUnconditionallyScheduled;
        float m_panicResetTimer;
        bool m_faderBlocked;
        bool m_skipCameraMoveToTarget;
        bool m_doCleanUpIfPossible;
        float _EditorDebugValue_k__BackingField;
        FaderB_State__Enum CurrentState;

        FaderAnimatorEntity_FaderType__Enum m_currentTimelineFaderType;

        struct Action* OnFadeInEvent;
        struct Action* OnFadeOutEvent;
        bool m_shouldDoCleanUp;
        bool _IsSuspended_k__BackingField;
    };

    struct FaderB {
        struct FaderB__Class* klass;
        MonitorData* monitor;
        struct FaderB__Fields fields;
    };

    struct FaderAnimatorEntity_FaderType__Enum__VTable {
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

    struct FaderAnimatorEntity_FaderType__Enum__StaticFields {
    };

    struct FaderAnimatorEntity_FaderType__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FaderAnimatorEntity_FaderType__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FaderAnimatorEntity_FaderType__Enum__VTable vtable;
    };

    struct FaderB__VTable {
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
        VirtualInvokeData OnFadeInFinished;
        VirtualInvokeData OnFadeOutFinished;
    };

    struct FaderB__StaticFields {
        bool DebugOverlay;
    };

    struct FaderB__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FaderB__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FaderB__VTable vtable;
    };

    struct FaderB_c {
        struct FaderB_c__Class* klass;
        MonitorData* monitor;
    };

    struct FaderB_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct FaderB_c__StaticFields {
        struct FaderB_c* __9;
        struct Action* __9__72_0;
        struct Action* __9__72_1;
    };

    struct FaderB_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FaderB_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FaderB_c__VTable vtable;
    };

    struct ScrollFader__Fields {
        struct Fader__Fields _;
    };

    struct ScrollFader {
        struct ScrollFader__Class* klass;
        MonitorData* monitor;
        struct ScrollFader__Fields fields;
    };

    struct ScrollFader__VTable {
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
        VirtualInvokeData OnFadeInFinished;
        VirtualInvokeData OnFadeOutFinished;
    };

    struct ScrollFader__StaticFields {
    };

    struct ScrollFader__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ScrollFader__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ScrollFader__VTable vtable;
    };

    enum class HealthBarPositioning_PositionType__Enum : int32_t {
        WeepingRidgeTumor = 0x00000000,
        TentacleEnemy = 0x00000001,
    };

    struct HealthBarPositioning_PositionType__Enum__Boxed {
        struct HealthBarPositioning_PositionType__Enum__Class* klass;
        MonitorData* monitor;
        HealthBarPositioning_PositionType__Enum value;
    };

    struct HealthBarPositioning__Fields {
        struct MonoBehaviour__Fields _;
        struct Transform* PivotTransform;
        struct Vector3 Offset;
        float OffsetToNeck;
        struct Vector3 VerticalOffset;
        struct Vector3 HorizontalOffset;
        HealthBarPositioning_PositionType__Enum PositioningType;
    };

    struct HealthBarPositioning {
        struct HealthBarPositioning__Class* klass;
        MonitorData* monitor;
        struct HealthBarPositioning__Fields fields;
    };

    struct HealthBarPositioning_PositionType__Enum__VTable {
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

    struct HealthBarPositioning_PositionType__Enum__StaticFields {
    };

    struct HealthBarPositioning_PositionType__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HealthBarPositioning_PositionType__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HealthBarPositioning_PositionType__Enum__VTable vtable;
    };

    struct HealthBarPositioning__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct HealthBarPositioning__StaticFields {
    };

    struct HealthBarPositioning__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HealthBarPositioning__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HealthBarPositioning__VTable vtable;
    };

    struct IsWatchingCutsceneCondition__Fields {
        struct Condition_1__Fields _;
    };

    struct IsWatchingCutsceneCondition {
        struct IsWatchingCutsceneCondition__Class* klass;
        MonitorData* monitor;
        struct IsWatchingCutsceneCondition__Fields fields;
    };

    struct IsWatchingCutsceneCondition__VTable {
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

    struct IsWatchingCutsceneCondition__StaticFields {
    };

    struct IsWatchingCutsceneCondition__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IsWatchingCutsceneCondition__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IsWatchingCutsceneCondition__VTable vtable;
    };

    struct LegacyHealthBar__Fields {
        struct MonoBehaviour__Fields _;
        struct FloatValueProvider* ValueProvider;
        struct BaseAnimator* OnChangeAnimator;
        struct BaseAnimator* MaxAnimator;
        struct BaseAnimator* MinAnimator;
        struct List_1_LegacyMaterialColorGradientAnimator_* Gradients;
        float ValueChangeRate;
        bool HideOnFastMovement;
        bool HideOnReachingZero;
        float ReachZeroSpeedOverride;
        float Rotation;
        float m_minValue;
        float m_maxValue;
        struct Transform* m_transform;
        struct Vector3 m_lastPosition;
    };

    struct LegacyHealthBar {
        struct LegacyHealthBar__Class* klass;
        MonitorData* monitor;
        struct LegacyHealthBar__Fields fields;
    };

    struct LegacyHealthBar__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData IDisableOnRecordablePreview_get_gameObject;
    };

    struct LegacyHealthBar__StaticFields {
    };

    struct LegacyHealthBar__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LegacyHealthBar__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LegacyHealthBar__VTable vtable;
    };

    struct NewGameAction__Fields {
        struct ActionMethod__Fields _;
    };

    struct NewGameAction {
        struct NewGameAction__Class* klass;
        MonitorData* monitor;
        struct NewGameAction__Fields fields;
    };

    struct NewGameAction__VTable {
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
    };

    struct NewGameAction__StaticFields {
    };

    struct NewGameAction__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct NewGameAction__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct NewGameAction__VTable vtable;
    };

    enum class GameController_GameDifficultyModes__Enum : int32_t {
        Easy = 0x00000000,
        Normal = 0x00000001,
        Hard = 0x00000002,
    };

    struct GameController_GameDifficultyModes__Enum__Boxed {
        struct GameController_GameDifficultyModes__Enum__Class* klass;
        MonitorData* monitor;
        GameController_GameDifficultyModes__Enum value;
    };

    struct NewGameSetDifficultyAction__Fields {
        struct ActionMethod__Fields _;
        GameController_GameDifficultyModes__Enum Difficulty;
    };

    struct NewGameSetDifficultyAction {
        struct NewGameSetDifficultyAction__Class* klass;
        MonitorData* monitor;
        struct NewGameSetDifficultyAction__Fields fields;
    };

    struct GameController_GameDifficultyModes__Enum__VTable {
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

    struct GameController_GameDifficultyModes__Enum__StaticFields {
    };

    struct GameController_GameDifficultyModes__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GameController_GameDifficultyModes__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GameController_GameDifficultyModes__Enum__VTable vtable;
    };

    struct NewGameSetDifficultyAction__VTable {
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
    };

    struct NewGameSetDifficultyAction__StaticFields {
    };

    struct NewGameSetDifficultyAction__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct NewGameSetDifficultyAction__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct NewGameSetDifficultyAction__VTable vtable;
    };

    struct NewSaveDataAction__Fields {
        struct ActionMethod__Fields _;
    };

    struct NewSaveDataAction {
        struct NewSaveDataAction__Class* klass;
        MonitorData* monitor;
        struct NewSaveDataAction__Fields fields;
    };

    struct NewSaveDataAction__VTable {
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
    };

    struct NewSaveDataAction__StaticFields {
    };

    struct NewSaveDataAction__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct NewSaveDataAction__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct NewSaveDataAction__VTable vtable;
    };

    struct OriBar__Fields {
        struct MonoBehaviour__Fields _;
        struct Func_1_Boolean_* m_shouldShow;
        struct Vector2 BackgroundBarOffsetMax;
        struct Vector2 BackgroundBarOffsetMin;
        struct Vector2 BarOffsetMax;
        struct Vector2 BarOffsetMin;
        struct Vector2 DamageBarOffsetMax;
        struct Vector2 DamageBarOffsetMin;
        struct Vector2 DamageBarLowerOffsetMax;
        struct Vector2 DamageBarLowerOffsetMin;
        struct Vector2 GlowOffsetMax;
        struct Vector2 GlowOffsetMin;
        struct Vector2 SparkOffsetMax;
        struct Vector2 SparkOffsetMin;
        struct FloatValueProvider* CurrentValueProvider;
        struct FloatValueProvider* MaxValueProvider;
        float ValueChangeRate;
        float ValueFreezeTime;
        struct Renderer* BackgroundRenderer;
        struct Renderer* BarRenderer;
        struct Renderer* BarDamageRenderer;
        struct Renderer__Array* BarGlowRenderer;
        struct Renderer* SparkRenderer;
        struct MoonTimeline* ShowTimeline;
        struct MoonTimeline* HideTimeline;
        struct GameObject* BarVisualsParent;
        float m_currentMinValue;
        float m_currentMaxValue;
        float m_capMinValue;
        float m_capMaxValue;
        float m_lastChange;
        bool m_visible;
    };

    struct OriBar {
        struct OriBar__Class* klass;
        MonitorData* monitor;
        struct OriBar__Fields fields;
    };

    struct OriBar__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct OriBar__StaticFields {
    };

    struct OriBar__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct OriBar__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct OriBar__VTable vtable;
    };

    struct OriCell__Fields {
        struct MonoBehaviour__Fields _;
        struct Func_1_Boolean_* m_shouldShow;
        float CellBaseValue;
        struct Vector2 BackgroundBarOffsetMax;
        struct Vector2 BackgroundBarOffsetMin;
        struct Vector2 BarOffsetMax;
        struct Vector2 BarOffsetMin;
        struct Vector2 DamageBarOffsetMax;
        struct Vector2 DamageBarOffsetMin;
        struct Vector2 DamageBarLowerOffsetMax;
        struct Vector2 DamageBarLowerOffsetMin;
        float _CurrentValue_k__BackingField;
        float _MaxValue_k__BackingField;
        bool DebugUpdate;
        float ValueChangeRate;
        float ValueFreezeTime;
        struct Renderer* BackgroundRenderer;
        struct Renderer* BarRenderer;
        struct Renderer* BarDamageRenderer;
        struct Renderer* BarShieldRenderer;
        struct MoonTimeline* ShowTimeline;
        struct MoonTimeline* HideTimeline;
        float m_currentMinValue;
        float m_currentMaxValue;
        float m_capMinValue;
        float m_capMaxValue;
        float m_firstChange;
        float m_lastChange;
        bool m_visible;
        bool inRange;
        bool updateVisualsDebug;
    };

    struct OriCell {
        struct OriCell__Class* klass;
        MonitorData* monitor;
        struct OriCell__Fields fields;
    };

    struct OriCell__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct OriCell__StaticFields {
    };

    struct OriCell__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct OriCell__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct OriCell__VTable vtable;
    };

    struct OriCellBar__Fields {
        struct MonoBehaviour__Fields _;
        struct Func_1_Boolean_* m_shouldShow;
        struct GameObject* NewCellEffectPrefab;
        struct OriCell__Array* Cells;
        struct GameObject__Array* Backgrounds;
        struct GameObject__Array* Health;
        struct GameObject__Array* Damage;
        struct GameObject__Array* Shield;
        struct Vector2 GlowOffsetMax;
        struct Vector2 GlowOffsetMin;
        struct Vector2 SparkOffsetMax;
        struct Vector2 SparkOffsetMin;
        struct FloatValueProvider* CurrentValueProvider;
        struct FloatValueProvider* MaxValueProvider;
        struct FloatValueProvider* MaxUnshieldedValueProvider;
        float ValueChangeRate;
        float ValueFreezeTime;
        struct Renderer__Array* BarGlowRenderer;
        struct Renderer* SparkRenderer;
        struct MoonTimeline* ShowTimeline;
        struct MoonTimeline* HideTimeline;
        struct GameObject* BarVisualsParent;
        struct GameObject* GlowScale;
        struct Vector2 GlowScaleMin;
        struct Vector2 GlowScaleMax;
        bool nextDrainUsesDrain1;
        struct GameObject* DrainObject1;
        struct GameObject* DrainObject2;
        struct ParticleSystem* Drain1Start;
        struct MoonTimeline* Drain1Cancel;
        struct MoonTimeline* Drain1End;
        struct ParticleSystem* Drain2Start;
        struct MoonTimeline* Drain2Cancel;
        struct MoonTimeline* Drain2End;
        float m_currentMinValue;
        float m_currentMaxValue;
        float m_capMinValue;
        float m_capMaxValue;
        float m_firstChange;
        float m_lastChange;
        bool m_visible;
        bool m_firstUpdate;
        float m_cachedCurrentValue;
        float m_cachedMaxValue;
        float m_cachedMaxUnshieldedValue;
        bool m_dirtiedShardState;
        float m_lastDrainCheck;
        bool m_wasDraining;
        float m_maxDrainScale;
        float m_minDrainScale;
        struct SeinGlowSpell* m_glow;
    };

    struct OriCellBar {
        struct OriCellBar__Class* klass;
        MonitorData* monitor;
        struct OriCellBar__Fields fields;
    };

    struct OriCell__Array {
        struct OriCell__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct OriCell* vector[32];
    };

    struct OriCell__Array__VTable {
    };

    struct OriCell__Array__StaticFields {
    };

    struct OriCell__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct OriCell__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct OriCell__Array__VTable vtable;
    };

    struct OriCellBar__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct OriCellBar__StaticFields {
    };

    struct OriCellBar__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct OriCellBar__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct OriCellBar__VTable vtable;
    };

    enum class SetDemoPlaytimeAction_Mode__Enum : int32_t {
        Normal = 0x00000000,
        Race = 0x00000001,
    };

    struct SetDemoPlaytimeAction_Mode__Enum__Boxed {
        struct SetDemoPlaytimeAction_Mode__Enum__Class* klass;
        MonitorData* monitor;
        SetDemoPlaytimeAction_Mode__Enum value;
    };

    struct SetDemoPlaytimeAction__Fields {
        struct ActionMethod__Fields _;
        SetDemoPlaytimeAction_Mode__Enum m_mode;
    };

    struct SetDemoPlaytimeAction {
        struct SetDemoPlaytimeAction__Class* klass;
        MonitorData* monitor;
        struct SetDemoPlaytimeAction__Fields fields;
    };

    struct SetDemoPlaytimeAction_Mode__Enum__VTable {
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

    struct SetDemoPlaytimeAction_Mode__Enum__StaticFields {
    };

} // namespace app
