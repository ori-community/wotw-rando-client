namespace app {
    struct DeadZoneLeftStickSlider {
        struct DeadZoneLeftStickSlider__Class* klass;
        MonitorData* monitor;
        struct DeadZoneLeftStickSlider__Fields fields;
    };

    struct DeadZoneLeftStickSlider__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
        VirtualInvokeData get_IsVisible;
        VirtualInvokeData set_IsVisible;
        VirtualInvokeData get_CanBeEntered;
        VirtualInvokeData get_IsActive;
        VirtualInvokeData set_IsActive;
        VirtualInvokeData get_IsHighlightVisible;
        VirtualInvokeData set_IsHighlightVisible;
        VirtualInvokeData Awake;
        VirtualInvokeData EnterInGroup;
        VirtualInvokeData OnMenuItemChangedInGroup;
        VirtualInvokeData get_Value;
        VirtualInvokeData set_Value;
        VirtualInvokeData get_NormalizedValue;
        VirtualInvokeData set_NormalizedValue;
        VirtualInvokeData get_NormalizedDefaultValue;
        VirtualInvokeData get_MouseDragStepParameter;
        VirtualInvokeData GetValueToDisplay;
        VirtualInvokeData ApplyValueOnSliderReleased;
        VirtualInvokeData UpdateStep;
    };

    struct DeadZoneLeftStickSlider__StaticFields {
    };

    struct DeadZoneLeftStickSlider__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DeadZoneLeftStickSlider__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DeadZoneLeftStickSlider__VTable vtable;
    };

    struct DisplayScaleSlider__Fields {
        struct CleverValueSliderHideMenu__Fields _;
        float m_applySettingDelay;
        float m_delaySetTimer;
        bool m_scaleSettingDirty;
    };

    struct DisplayScaleSlider {
        struct DisplayScaleSlider__Class* klass;
        MonitorData* monitor;
        struct DisplayScaleSlider__Fields fields;
    };

    struct DisplayScaleSlider__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
        VirtualInvokeData get_IsVisible;
        VirtualInvokeData set_IsVisible;
        VirtualInvokeData get_CanBeEntered;
        VirtualInvokeData get_IsActive;
        VirtualInvokeData set_IsActive;
        VirtualInvokeData get_IsHighlightVisible;
        VirtualInvokeData set_IsHighlightVisible;
        VirtualInvokeData Awake;
        VirtualInvokeData EnterInGroup;
        VirtualInvokeData OnMenuItemChangedInGroup;
        VirtualInvokeData get_Value;
        VirtualInvokeData set_Value;
        VirtualInvokeData get_NormalizedValue;
        VirtualInvokeData set_NormalizedValue;
        VirtualInvokeData get_NormalizedDefaultValue;
        VirtualInvokeData get_MouseDragStepParameter;
        VirtualInvokeData GetValueToDisplay;
        VirtualInvokeData ApplyValueOnSliderReleased;
        VirtualInvokeData UpdateStep;
        VirtualInvokeData get_ShouldSKipUiBackgroundBlur;
        VirtualInvokeData UpdateValue;
        VirtualInvokeData OnBackgroundEnabled;
        VirtualInvokeData OnBackgroundDisabled;
    };

    struct DisplayScaleSlider__StaticFields {
        float m_delayedValue;
    };

    struct DisplayScaleSlider__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DisplayScaleSlider__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DisplayScaleSlider__VTable vtable;
    };

    enum class DRSDownscaleSlider_DRSDownscaleType__Enum : int32_t {
        DomwnscaleX = 0x00000000,
        DomwnscaleY = 0x00000001,
    };

    struct DRSDownscaleSlider_DRSDownscaleType__Enum__Boxed {
        struct DRSDownscaleSlider_DRSDownscaleType__Enum__Class* klass;
        MonitorData* monitor;
        DRSDownscaleSlider_DRSDownscaleType__Enum value;
    };

    struct DRSDownscaleSlider__Fields {
        struct CleverValueSlider__Fields _;
        DRSDownscaleSlider_DRSDownscaleType__Enum DownscaleType;
    };

    struct DRSDownscaleSlider {
        struct DRSDownscaleSlider__Class* klass;
        MonitorData* monitor;
        struct DRSDownscaleSlider__Fields fields;
    };

    struct DRSDownscaleSlider_DRSDownscaleType__Enum__VTable {
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

    struct DRSDownscaleSlider_DRSDownscaleType__Enum__StaticFields {
    };

    struct DRSDownscaleSlider_DRSDownscaleType__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DRSDownscaleSlider_DRSDownscaleType__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DRSDownscaleSlider_DRSDownscaleType__Enum__VTable vtable;
    };

    struct DRSDownscaleSlider__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
        VirtualInvokeData get_IsVisible;
        VirtualInvokeData set_IsVisible;
        VirtualInvokeData get_CanBeEntered;
        VirtualInvokeData get_IsActive;
        VirtualInvokeData set_IsActive;
        VirtualInvokeData get_IsHighlightVisible;
        VirtualInvokeData set_IsHighlightVisible;
        VirtualInvokeData Awake;
        VirtualInvokeData EnterInGroup;
        VirtualInvokeData OnMenuItemChangedInGroup;
        VirtualInvokeData get_Value;
        VirtualInvokeData set_Value;
        VirtualInvokeData get_NormalizedValue;
        VirtualInvokeData set_NormalizedValue;
        VirtualInvokeData get_NormalizedDefaultValue;
        VirtualInvokeData get_MouseDragStepParameter;
        VirtualInvokeData GetValueToDisplay;
        VirtualInvokeData ApplyValueOnSliderReleased;
        VirtualInvokeData UpdateStep;
    };

    struct DRSDownscaleSlider__StaticFields {
    };

    struct DRSDownscaleSlider__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DRSDownscaleSlider__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DRSDownscaleSlider__VTable vtable;
    };

    struct FPSLimitSlider__Fields {
        struct CleverValueSlider__Fields _;
        struct ActionMethod* OnValueChangedAction;
        struct MessageProvider* OffMessageProvider;
    };

    struct FPSLimitSlider {
        struct FPSLimitSlider__Class* klass;
        MonitorData* monitor;
        struct FPSLimitSlider__Fields fields;
    };

    struct FPSLimitSlider__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
        VirtualInvokeData get_IsVisible;
        VirtualInvokeData set_IsVisible;
        VirtualInvokeData get_CanBeEntered;
        VirtualInvokeData get_IsActive;
        VirtualInvokeData set_IsActive;
        VirtualInvokeData get_IsHighlightVisible;
        VirtualInvokeData set_IsHighlightVisible;
        VirtualInvokeData Awake;
        VirtualInvokeData EnterInGroup;
        VirtualInvokeData OnMenuItemChangedInGroup;
        VirtualInvokeData get_Value;
        VirtualInvokeData set_Value;
        VirtualInvokeData get_NormalizedValue;
        VirtualInvokeData set_NormalizedValue;
        VirtualInvokeData get_NormalizedDefaultValue;
        VirtualInvokeData get_MouseDragStepParameter;
        VirtualInvokeData GetValueToDisplay;
        VirtualInvokeData ApplyValueOnSliderReleased;
        VirtualInvokeData UpdateStep;
    };

    struct FPSLimitSlider__StaticFields {
        float m_displayValue;
    };

    struct FPSLimitSlider__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FPSLimitSlider__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FPSLimitSlider__VTable vtable;
    };

    enum class StressTester_ScreenshotMethod__Enum : int32_t {
        Normal = 0x00000000,
        Texture = 0x00000001,
        Request = 0x00000002,
    };

    struct StressTester_ScreenshotMethod__Enum__Boxed {
        struct StressTester_ScreenshotMethod__Enum__Class* klass;
        MonitorData* monitor;
        StressTester_ScreenshotMethod__Enum value;
    };

    struct __declspec(align(8)) GameParameters__Fields {
        struct String* StartInScene;
        struct String* RacesSuffix;
        bool DisableRaces;
        bool AllowTelemetry;
        bool ThreadedUpdateDelegator;
        struct String* BuildTag;
        bool InstantEnableFrustumObjectsOnTeleport;
        bool DebugSceneRoots;
        bool DebugTimeline;
        bool DebugPhysicsIgnoreCalls;
        bool BreakGameOnNonZeroCharacterPosition;
        int32_t MinimumRevision;
        bool DisableMotionBlur;
        bool SimpleBugReporter;
        bool runSceneLoadTest;
        bool runPoolPerfTest;
        bool runPerfTest;
        bool runExceptionsTest;
        struct String* runStressTestFromScene;
        struct String* startStressTestAtScene;
        struct String* endStressTestAtScene;
        float stressTestSpeed;
        bool collectPerfTestData;
        struct String* builderName;
        bool consecutiveStressTests;
        struct String* stressTestPlaylist;
        int32_t stressTestIndex;
        int32_t stressTestWaypoint;
        int32_t StressTestDelay;
        bool StressTestScreenshots;
        bool SkipToScreenshots;
        struct String* StressTestConfigs;
        bool LoadStressTestSaves;
        bool TakeMemorySnapshots;
        struct String* LogFile;
        bool debugEnabled;
        bool runSrpAsTask;
        bool DoRecording;
        struct String* RecordingServer;
        bool EnableExceptionReports;
        bool DisableBugReporter;
        bool DisableHDR;
        bool ChinaRegion;
        bool SetResoultionFromGameSettings;
        StressTester_ScreenshotMethod__Enum ScreenshotMethod;

        bool PauseOnAnyLoad;
    };

    struct GameParameters {
        struct GameParameters__Class* klass;
        MonitorData* monitor;
        struct GameParameters__Fields fields;
    };

    struct StressTester_ScreenshotMethod__Enum__VTable {
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

    struct StressTester_ScreenshotMethod__Enum__StaticFields {
    };

    struct StressTester_ScreenshotMethod__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct StressTester_ScreenshotMethod__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct StressTester_ScreenshotMethod__Enum__VTable vtable;
    };

    struct GameParameters__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct GameParameters__StaticFields {
    };

    struct GameParameters__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GameParameters__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GameParameters__VTable vtable;
    };

    enum class PCQualityModeManager_QualityMode__Enum : int32_t {
        Low = 0x00000000,
        Balanced = 0x00000001,
        High = 0x00000002,
    };

    struct PCQualityModeManager_QualityMode__Enum__Boxed {
        struct PCQualityModeManager_QualityMode__Enum__Class* klass;
        MonitorData* monitor;
        PCQualityModeManager_QualityMode__Enum value;
    };

    enum class GameplaySoundManager_AudioQualitySetting__Enum : int32_t {
        Efficient = 0x00000000,
        Balanced = 0x00000002,
        Maximum = 0x00000004,
    };

    struct GameplaySoundManager_AudioQualitySetting__Enum__Boxed {
        struct GameplaySoundManager_AudioQualitySetting__Enum__Class* klass;
        MonitorData* monitor;
        GameplaySoundManager_AudioQualitySetting__Enum value;
    };

    enum class KeyboardLayout__Enum : int32_t {
        QWERTY = 0x00000000,
        AZERTY = 0x00000001,
    };

    struct KeyboardLayout__Enum__Boxed {
        struct KeyboardLayout__Enum__Class* klass;
        MonitorData* monitor;
        KeyboardLayout__Enum value;
    };

    enum class ShowUIType__Enum : int32_t {
        On = 0x00000000,
        Dynamic = 0x00000001,
        Off = 0x00000002,
    };

    struct ShowUIType__Enum__Boxed {
        struct ShowUIType__Enum__Class* klass;
        MonitorData* monitor;
        ShowUIType__Enum value;
    };

    struct GameSettings__Fields {
        struct MonoBehaviour__Fields _;
        struct UISoundSettingsAsset* Sounds;
        AkAudioAPI__Enum m_selectedAudioAPI;

        uint32_t m_selectedAudioOutputDeviceId;
        uint64_t m_currentOutputID;
        bool m_spatialAudioEnabled;
        AkPanningRule__Enum m_audioPanningRule;

        bool HasLoadedGameSettingsOnce;
        int32_t m_targetFramerate;
        float m_HDRUIBrightnessBoostValue;
        int32_t m_selectedSaveSlot;
        bool m_dynamicGraphicsToggled;
        int32_t m_dynamicGraphicsTargetFPS;
        PCQualityModeManager_QualityMode__Enum m_pcQualityMode;

        bool m_shownFirstTimeQualitySettings;
        GameplaySoundManager_AudioQualitySetting__Enum m_audioQualitySetting;

        int32_t m_dynamicGraphicsMaxDRSDownscaleX;
        int32_t m_dynamicGraphicsMaxDRSDownscaleY;
        bool m_achievementToastEnabled;
        struct String* m_playfabSignInId;
        bool m_isTrialAchievementsDirty;
        bool m_damageTextEnabled;
        bool m_motionBlurEnabled;
        float m_vibrationStrength;
        Language__Enum m_language;

        float m_masterVolume;
        float m_musicVolume;
        float m_ambienceVolume;
        bool m_useSpatialAudioBus;
        float m_soundEffectsVolume;
        float m_brightness;
        float m_displayScale;
        float m_sharpness;
        float m_blurScale;
        float m_contrast;
        float m_saturation;
        float m_paperwhite;
        UnlockedCutscenes__Enum m_unlockedCutscenes;

        bool m_oneLifeModeUnlocked;
        bool m_vsync;
        float m_deadZoneLeftStick;
        ControlScheme__Enum m_currentControlSchemes;

        ControlScheme__Enum m_keyboardControlSchemes;

        KeyboardLayout__Enum m_keyboardLayout;

        bool m_achieved_completePrologue;
        bool m_achieved_reachSpiritTree;
        bool m_achieved_activateFirstSkill;
        bool m_achieved_findSecret;
        bool m_achieved_findMapStone;
        bool m_mapTrailEnabled;
        ShowUIType__Enum m_hudEnabled;

        int32_t m_defaultDRSTime;
        float m_defaultResolutionScale;
    };

    struct GameSettings {
        struct GameSettings__Class* klass;
        MonitorData* monitor;
        struct GameSettings__Fields fields;
    };

    struct PCQualityModeManager_QualityMode__Enum__VTable {
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

    struct PCQualityModeManager_QualityMode__Enum__StaticFields {
    };

    struct PCQualityModeManager_QualityMode__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PCQualityModeManager_QualityMode__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PCQualityModeManager_QualityMode__Enum__VTable vtable;
    };

    struct GameplaySoundManager_AudioQualitySetting__Enum__VTable {
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

    struct GameplaySoundManager_AudioQualitySetting__Enum__StaticFields {
    };

    struct GameplaySoundManager_AudioQualitySetting__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GameplaySoundManager_AudioQualitySetting__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GameplaySoundManager_AudioQualitySetting__Enum__VTable vtable;
    };

    struct KeyboardLayout__Enum__VTable {
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

    struct KeyboardLayout__Enum__StaticFields {
    };

    struct KeyboardLayout__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KeyboardLayout__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KeyboardLayout__Enum__VTable vtable;
    };

    struct ShowUIType__Enum__VTable {
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

    struct ShowUIType__Enum__StaticFields {
    };

    struct ShowUIType__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ShowUIType__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ShowUIType__Enum__VTable vtable;
    };

    struct GameSettings__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct GameSettings__StaticFields {
        struct GameSettings* Instance;
        float PaperwhiteCoefficient;
        float HDRUIBrightnessCoefficient;
        float HDRRichnessCoefficient;
        float HDRShadowDetailCoefficient;
    };

    struct GameSettings__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GameSettings__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GameSettings__VTable vtable;
    };

    struct JsonBuilder_Object___VTable {
    };

    struct JsonBuilder_Object___StaticFields {
    };

    struct JsonBuilder_Object___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct JsonBuilder_Object___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct JsonBuilder_Object___VTable vtable;
    };

    struct __declspec(align(8)) GameSettings_SwapOutputs_d_264__Fields {
        int32_t __1__state;
        struct Object* __2__current;
        struct GameSettings* __4__this;
    };

    struct GameSettings_SwapOutputs_d_264 {
        struct GameSettings_SwapOutputs_d_264__Class* klass;
        MonitorData* monitor;
        struct GameSettings_SwapOutputs_d_264__Fields fields;
    };

    struct GameSettings_SwapOutputs_d_264__VTable {
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

    struct GameSettings_SwapOutputs_d_264__StaticFields {
    };

    struct GameSettings_SwapOutputs_d_264__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GameSettings_SwapOutputs_d_264__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GameSettings_SwapOutputs_d_264__VTable vtable;
    };

    struct HDRBrightnessSlider__Fields {
        struct CleverValueSliderHideMenu__Fields _;
    };

    struct HDRBrightnessSlider {
        struct HDRBrightnessSlider__Class* klass;
        MonitorData* monitor;
        struct HDRBrightnessSlider__Fields fields;
    };

    struct HDRBrightnessSlider__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
        VirtualInvokeData get_IsVisible;
        VirtualInvokeData set_IsVisible;
        VirtualInvokeData get_CanBeEntered;
        VirtualInvokeData get_IsActive;
        VirtualInvokeData set_IsActive;
        VirtualInvokeData get_IsHighlightVisible;
        VirtualInvokeData set_IsHighlightVisible;
        VirtualInvokeData Awake;
        VirtualInvokeData EnterInGroup;
        VirtualInvokeData OnMenuItemChangedInGroup;
        VirtualInvokeData get_Value;
        VirtualInvokeData set_Value;
        VirtualInvokeData get_NormalizedValue;
        VirtualInvokeData set_NormalizedValue;
        VirtualInvokeData get_NormalizedDefaultValue;
        VirtualInvokeData get_MouseDragStepParameter;
        VirtualInvokeData GetValueToDisplay;
        VirtualInvokeData ApplyValueOnSliderReleased;
        VirtualInvokeData UpdateStep;
        VirtualInvokeData get_ShouldSKipUiBackgroundBlur;
        VirtualInvokeData UpdateValue;
        VirtualInvokeData OnBackgroundEnabled;
        VirtualInvokeData OnBackgroundDisabled;
    };

    struct HDRBrightnessSlider__StaticFields {
    };

    struct HDRBrightnessSlider__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HDRBrightnessSlider__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HDRBrightnessSlider__VTable vtable;
    };

    struct HDRPaperwhiteSlider__Fields {
        struct CleverValueSliderHideMenu__Fields _;
    };

    struct HDRPaperwhiteSlider {
        struct HDRPaperwhiteSlider__Class* klass;
        MonitorData* monitor;
        struct HDRPaperwhiteSlider__Fields fields;
    };

    struct HDRPaperwhiteSlider__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
        VirtualInvokeData get_IsVisible;
        VirtualInvokeData set_IsVisible;
        VirtualInvokeData get_CanBeEntered;
        VirtualInvokeData get_IsActive;
        VirtualInvokeData set_IsActive;
        VirtualInvokeData get_IsHighlightVisible;
        VirtualInvokeData set_IsHighlightVisible;
        VirtualInvokeData Awake;
        VirtualInvokeData EnterInGroup;
        VirtualInvokeData OnMenuItemChangedInGroup;
        VirtualInvokeData get_Value;
        VirtualInvokeData set_Value;
        VirtualInvokeData get_NormalizedValue;
        VirtualInvokeData set_NormalizedValue;
        VirtualInvokeData get_NormalizedDefaultValue;
        VirtualInvokeData get_MouseDragStepParameter;
        VirtualInvokeData GetValueToDisplay;
        VirtualInvokeData ApplyValueOnSliderReleased;
        VirtualInvokeData UpdateStep;
        VirtualInvokeData get_ShouldSKipUiBackgroundBlur;
        VirtualInvokeData UpdateValue;
        VirtualInvokeData OnBackgroundEnabled;
        VirtualInvokeData OnBackgroundDisabled;
    };

    struct HDRPaperwhiteSlider__StaticFields {
    };

    struct HDRPaperwhiteSlider__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HDRPaperwhiteSlider__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HDRPaperwhiteSlider__VTable vtable;
    };

    struct HDRRichnessSlider__Fields {
        struct CleverValueSliderHideMenu__Fields _;
    };

    struct HDRRichnessSlider {
        struct HDRRichnessSlider__Class* klass;
        MonitorData* monitor;
        struct HDRRichnessSlider__Fields fields;
    };

    struct HDRRichnessSlider__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
        VirtualInvokeData get_IsVisible;
        VirtualInvokeData set_IsVisible;
        VirtualInvokeData get_CanBeEntered;
        VirtualInvokeData get_IsActive;
        VirtualInvokeData set_IsActive;
        VirtualInvokeData get_IsHighlightVisible;
        VirtualInvokeData set_IsHighlightVisible;
        VirtualInvokeData Awake;
        VirtualInvokeData EnterInGroup;
        VirtualInvokeData OnMenuItemChangedInGroup;
        VirtualInvokeData get_Value;
        VirtualInvokeData set_Value;
        VirtualInvokeData get_NormalizedValue;
        VirtualInvokeData set_NormalizedValue;
        VirtualInvokeData get_NormalizedDefaultValue;
        VirtualInvokeData get_MouseDragStepParameter;
        VirtualInvokeData GetValueToDisplay;
        VirtualInvokeData ApplyValueOnSliderReleased;
        VirtualInvokeData UpdateStep;
        VirtualInvokeData get_ShouldSKipUiBackgroundBlur;
        VirtualInvokeData UpdateValue;
        VirtualInvokeData OnBackgroundEnabled;
        VirtualInvokeData OnBackgroundDisabled;
    };

    struct HDRRichnessSlider__StaticFields {
    };

    struct HDRRichnessSlider__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HDRRichnessSlider__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HDRRichnessSlider__VTable vtable;
    };

    struct HDRShadowDetailSlider__Fields {
        struct CleverValueSliderHideMenu__Fields _;
    };

    struct HDRShadowDetailSlider {
        struct HDRShadowDetailSlider__Class* klass;
        MonitorData* monitor;
        struct HDRShadowDetailSlider__Fields fields;
    };

    struct HDRShadowDetailSlider__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
        VirtualInvokeData get_IsVisible;
        VirtualInvokeData set_IsVisible;
        VirtualInvokeData get_CanBeEntered;
        VirtualInvokeData get_IsActive;
        VirtualInvokeData set_IsActive;
        VirtualInvokeData get_IsHighlightVisible;
        VirtualInvokeData set_IsHighlightVisible;
        VirtualInvokeData Awake;
        VirtualInvokeData EnterInGroup;
        VirtualInvokeData OnMenuItemChangedInGroup;
        VirtualInvokeData get_Value;
        VirtualInvokeData set_Value;
        VirtualInvokeData get_NormalizedValue;
        VirtualInvokeData set_NormalizedValue;
        VirtualInvokeData get_NormalizedDefaultValue;
        VirtualInvokeData get_MouseDragStepParameter;
        VirtualInvokeData GetValueToDisplay;
        VirtualInvokeData ApplyValueOnSliderReleased;
        VirtualInvokeData UpdateStep;
        VirtualInvokeData get_ShouldSKipUiBackgroundBlur;
        VirtualInvokeData UpdateValue;
        VirtualInvokeData OnBackgroundEnabled;
        VirtualInvokeData OnBackgroundDisabled;
    };

    struct HDRShadowDetailSlider__StaticFields {
    };

    struct HDRShadowDetailSlider__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HDRShadowDetailSlider__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HDRShadowDetailSlider__VTable vtable;
    };

    struct HDRUIBrightnessSlider__Fields {
        struct CleverValueSliderHideMenu__Fields _;
    };

    struct HDRUIBrightnessSlider {
        struct HDRUIBrightnessSlider__Class* klass;
        MonitorData* monitor;
        struct HDRUIBrightnessSlider__Fields fields;
    };

    struct HDRUIBrightnessSlider__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
        VirtualInvokeData get_IsVisible;
        VirtualInvokeData set_IsVisible;
        VirtualInvokeData get_CanBeEntered;
        VirtualInvokeData get_IsActive;
        VirtualInvokeData set_IsActive;
        VirtualInvokeData get_IsHighlightVisible;
        VirtualInvokeData set_IsHighlightVisible;
        VirtualInvokeData Awake;
        VirtualInvokeData EnterInGroup;
        VirtualInvokeData OnMenuItemChangedInGroup;
        VirtualInvokeData get_Value;
        VirtualInvokeData set_Value;
        VirtualInvokeData get_NormalizedValue;
        VirtualInvokeData set_NormalizedValue;
        VirtualInvokeData get_NormalizedDefaultValue;
        VirtualInvokeData get_MouseDragStepParameter;
        VirtualInvokeData GetValueToDisplay;
        VirtualInvokeData ApplyValueOnSliderReleased;
        VirtualInvokeData UpdateStep;
        VirtualInvokeData get_ShouldSKipUiBackgroundBlur;
        VirtualInvokeData UpdateValue;
        VirtualInvokeData OnBackgroundEnabled;
        VirtualInvokeData OnBackgroundDisabled;
    };

} // namespace app
