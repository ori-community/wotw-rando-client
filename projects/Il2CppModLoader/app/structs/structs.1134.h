namespace app {
    struct MoonRenderPipelineDebugUI_FpsCounter__Boxed {
        struct MoonRenderPipelineDebugUI_FpsCounter__Class* klass;
        MonitorData* monitor;
        struct MoonRenderPipelineDebugUI_FpsCounter fields;
    };

    struct MoonRenderPipelineDebugUI__Fields {
        struct MonoBehaviour__Fields _;
        struct QualityProfile* editorProfile;
        struct QualityProfile* pcProfile;
        struct QualityProfile* pcProfileLow;
        struct QualityProfile* pcProfileHigh;
        struct QualityProfile* switchProfile;
        struct QualityProfile* switchProfileDocked;
        struct QualityProfile* xboxOneProfile;
        struct QualityProfile* xboxOneSProfile;
        struct QualityProfile* xboxOneXProfile;
        struct QualityProfile* xboxSeriesSProfile;
        struct QualityProfile* xboxSeriesXProfile;
        struct QualityProfile* xboxSeriesSProfileQuality;
        struct QualityProfile* xboxSeriesXProfileQuality;
        MoonRenderPipelineDebugUI_Quality__Enum editorQuality;

        MoonRenderPipelineDebugUI_Quality__Enum pcQuality;

        MoonRenderPipelineDebugUI_Quality__Enum pcQualityLow;

        MoonRenderPipelineDebugUI_Quality__Enum pcQualityHigh;

        MoonRenderPipelineDebugUI_Quality__Enum switchQuality;

        MoonRenderPipelineDebugUI_Quality__Enum switchQualityDocked;

        MoonRenderPipelineDebugUI_Quality__Enum xboxOneQuality;

        MoonRenderPipelineDebugUI_Quality__Enum xboxOneSQuality;

        MoonRenderPipelineDebugUI_Quality__Enum xboxOneXQuality;

        MoonRenderPipelineDebugUI_Quality__Enum xboxSeriesSQuality;

        MoonRenderPipelineDebugUI_Quality__Enum xboxSeriesXQuality;

        MoonRenderPipelineDebugUI_Quality__Enum currentQuality;

        bool visible;
        bool expanded;
        bool interactiveWhenMinimized;
        bool hideDeveloperConsole;
        float sliderDeadZone;
        float sliderSensitivity;
        float repeatDuration;
        bool prevNeedsImGUI;
        struct Vector2 scroll1;
        struct Vector2 scroll2;
        MoonRenderPipelineDebugUI_SliceRangeMode__Enum sliceRangeMode;

        bool foldoutVIP;
        bool foldoutHR;
        bool foldoutTLC;
        bool foldoutDRS;
        bool foldoutISR;
        bool foldoutFXAA;
        bool foldoutDebug;
        bool foldoutMisc;
        bool foldoutFreeze;
        bool foldoutFrameBuffer;
        bool foldoutFrameBufferClear;
        bool foldoutFrameBufferMore;
        bool foldoutPosts;
        bool foldoutSrp;
        bool foldoutSrpSort;
        bool foldoutSliceInfo;
        bool foldoutResolution;
        bool foldoutSupportedFormats;
        bool foldoutSystemInfo;
        bool foldoutGodRay;
        bool isrReprojection;
        int32_t cullingCountHeaderWidth;
        int32_t cullingCountColumnWidth;
        struct StringBuilder* sb;
        bool collectTimings;
        bool displayTimings;
        struct StringBuilder* capture;
        int32_t captureFrameCount;
        float fpsUpdateInterval;
        struct FpsGraph* fpsGraph;
        struct MoonRenderPipelineDebugUI_FpsCounter intervalCounter;
        struct MoonRenderPipelineDebugUI_FpsCounter manualCounter;
        float m_lastTime;
    };

    struct MoonRenderPipelineDebugUI {
        struct MoonRenderPipelineDebugUI__Class* klass;
        MonitorData* monitor;
        struct MoonRenderPipelineDebugUI__Fields fields;
    };

    struct QualityProfile__Fields {
        struct ScriptableObject__Fields _;
        struct QualityModeTweakAsset* tweakAsset;
        struct MoonRenderPipelineAsset* srpAsset;
        bool overrideGcSettings;
        struct UberGCLogic_GCLogicSettings* gclogicSettings;
        bool vSync;
        bool allowMSAA;
        bool allowHDR;
    };

    struct QualityProfile {
        struct QualityProfile__Class* klass;
        MonitorData* monitor;
        struct QualityProfile__Fields fields;
    };

    struct RenderTextureFormat__Enum__Array {
        struct RenderTextureFormat__Enum__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        RenderTextureFormat__Enum vector[32];
    };

    struct QualityProfile__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct QualityProfile__StaticFields {
    };

    struct QualityProfile__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct QualityProfile__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct QualityProfile__VTable vtable;
    };

    struct MoonRenderPipelineDebugUI_SliceRangeMode__Enum__VTable {
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

    struct MoonRenderPipelineDebugUI_SliceRangeMode__Enum__StaticFields {
    };

    struct MoonRenderPipelineDebugUI_SliceRangeMode__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MoonRenderPipelineDebugUI_SliceRangeMode__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MoonRenderPipelineDebugUI_SliceRangeMode__Enum__VTable vtable;
    };

    struct RenderTextureFormat__Enum__Array__VTable {
    };

    struct RenderTextureFormat__Enum__Array__StaticFields {
    };

    struct RenderTextureFormat__Enum__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RenderTextureFormat__Enum__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RenderTextureFormat__Enum__Array__VTable vtable;
    };

    struct MoonRenderPipelineDebugUI_FpsCounter__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MoonRenderPipelineDebugUI_FpsCounter__StaticFields {
    };

    struct MoonRenderPipelineDebugUI_FpsCounter__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MoonRenderPipelineDebugUI_FpsCounter__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MoonRenderPipelineDebugUI_FpsCounter__VTable vtable;
    };

    struct MoonRenderPipelineDebugUI__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MoonRenderPipelineDebugUI__StaticFields {
        struct MoonRenderPipelineDebugUI* Instance;
        struct NavigableOnGUI_1* ui;
        struct GUILayoutOption__Array* noExpand;
        struct RenderTextureFormat__Enum__Array* renderTextureFormats;
    };

    struct MoonRenderPipelineDebugUI__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MoonRenderPipelineDebugUI__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MoonRenderPipelineDebugUI__VTable vtable;
    };

    struct MoonRenderPipelineDebugUI_GUIColor {
        struct Color prevColor;
    };

    struct MoonRenderPipelineDebugUI_GUIColor__Boxed {
        struct MoonRenderPipelineDebugUI_GUIColor__Class* klass;
        MonitorData* monitor;
        struct MoonRenderPipelineDebugUI_GUIColor fields;
    };

    struct MoonRenderPipelineDebugUI_GUIColor__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Dispose;
    };

    struct MoonRenderPipelineDebugUI_GUIColor__StaticFields {
    };

    struct MoonRenderPipelineDebugUI_GUIColor__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MoonRenderPipelineDebugUI_GUIColor__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MoonRenderPipelineDebugUI_GUIColor__VTable vtable;
    };

    struct MoonRenderPipelineDebugUI_c {
        struct MoonRenderPipelineDebugUI_c__Class* klass;
        MonitorData* monitor;
    };

    struct Func_2_IRenderPostprocessor_Boolean___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Func_2_IRenderPostprocessor_Boolean_ {
        struct Func_2_IRenderPostprocessor_Boolean___Class* klass;
        MonitorData* monitor;
        struct Func_2_IRenderPostprocessor_Boolean___Fields fields;
    };

    struct Func_2_IRenderPostprocessor_Boolean___VTable {
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

    struct Func_2_IRenderPostprocessor_Boolean___StaticFields {
    };

    struct Func_2_IRenderPostprocessor_Boolean___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Func_2_IRenderPostprocessor_Boolean___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Func_2_IRenderPostprocessor_Boolean___VTable vtable;
    };

    struct MoonRenderPipelineDebugUI_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MoonRenderPipelineDebugUI_c__StaticFields {
        struct MoonRenderPipelineDebugUI_c* __9;
        struct Func_2_IRenderPostprocessor_Boolean_* __9__83_0;
    };

    struct MoonRenderPipelineDebugUI_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MoonRenderPipelineDebugUI_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MoonRenderPipelineDebugUI_c__VTable vtable;
    };

    struct MoonRenderPipelineSlowObjects__Fields {
        struct MonoBehaviour__Fields _;
        struct GameObject__Array* gameObjects;
    };

    struct MoonRenderPipelineSlowObjects {
        struct MoonRenderPipelineSlowObjects__Class* klass;
        MonitorData* monitor;
        struct MoonRenderPipelineSlowObjects__Fields fields;
    };

    struct MoonRenderPipelineSlowObjects__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MoonRenderPipelineSlowObjects__StaticFields {
    };

    struct MoonRenderPipelineSlowObjects__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MoonRenderPipelineSlowObjects__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MoonRenderPipelineSlowObjects__VTable vtable;
    };

    struct Nullable_1_Moon_Rendering_Viewport_ {
        struct Viewport value;
        bool has_value;
    };

    struct Nullable_1_Moon_Rendering_Viewport___Boxed {
        struct Nullable_1_Moon_Rendering_Viewport___Class* klass;
        MonitorData* monitor;
        struct Nullable_1_Moon_Rendering_Viewport_ fields;
    };

    struct ClearSettings {
        ClearFlags__Enum flags;

        struct Color color;
        float depth;
    };

    struct ClearSettings__Boxed {
        struct ClearSettings__Class* klass;
        MonitorData* monitor;
        struct ClearSettings fields;
    };

    struct Nullable_1_Moon_Rendering_Viewport___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Nullable_1_Moon_Rendering_Viewport___StaticFields {
    };

    struct Nullable_1_Moon_Rendering_Viewport___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Nullable_1_Moon_Rendering_Viewport___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Nullable_1_Moon_Rendering_Viewport___VTable vtable;
    };

    struct ClearSettings__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ClearSettings__StaticFields {
    };

    struct ClearSettings__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ClearSettings__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ClearSettings__VTable vtable;
    };

    struct ClearFlags___VTable {
    };

    struct ClearFlags___StaticFields {
    };

    struct ClearFlags___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ClearFlags___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ClearFlags___VTable vtable;
    };

    struct MoonRenderContext_Sample {
    };

    struct MoonRenderContext_Sample__Boxed {
        struct MoonRenderContext_Sample__Class* klass;
        MonitorData* monitor;
        struct MoonRenderContext_Sample fields;
    };

    struct MoonRenderContext_Sample__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Dispose;
    };

    struct MoonRenderContext_Sample__StaticFields {
    };

    struct MoonRenderContext_Sample__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MoonRenderContext_Sample__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MoonRenderContext_Sample__VTable vtable;
    };

    struct GraphicsExt_Sample {
        struct String* name;
    };

    struct GraphicsExt_Sample__Boxed {
        struct GraphicsExt_Sample__Class* klass;
        MonitorData* monitor;
        struct GraphicsExt_Sample fields;
    };

    struct GraphicsExt_Sample__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Dispose;
    };

    struct GraphicsExt_Sample__StaticFields {
    };

    struct GraphicsExt_Sample__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GraphicsExt_Sample__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GraphicsExt_Sample__VTable vtable;
    };

    struct SliceRenderSettings___VTable {
    };

    struct SliceRenderSettings___StaticFields {
    };

    struct SliceRenderSettings___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SliceRenderSettings___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SliceRenderSettings___VTable vtable;
    };

    struct MotionBlurController___VTable {
    };

    struct MotionBlurController___StaticFields {
    };

    struct MotionBlurController___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MotionBlurController___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MotionBlurController___VTable vtable;
    };

    struct SliceRenderSettings_Slice__1__VTable {
    };

    struct SliceRenderSettings_Slice__1__StaticFields {
    };

    struct SliceRenderSettings_Slice__1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SliceRenderSettings_Slice__1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SliceRenderSettings_Slice__1__VTable vtable;
    };

    struct CanRetryRaceCondition__Fields {
        struct Condition_1__Fields _;
    };

    struct CanRetryRaceCondition {
        struct CanRetryRaceCondition__Class* klass;
        MonitorData* monitor;
        struct CanRetryRaceCondition__Fields fields;
    };

    struct CanRetryRaceCondition__VTable {
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

    struct CanRetryRaceCondition__StaticFields {
    };

    struct CanRetryRaceCondition__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CanRetryRaceCondition__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CanRetryRaceCondition__VTable vtable;
    };

    struct CanSkipRaceCondition__Fields {
        struct Condition_1__Fields _;
    };

    struct CanSkipRaceCondition {
        struct CanSkipRaceCondition__Class* klass;
        MonitorData* monitor;
        struct CanSkipRaceCondition__Fields fields;
    };

    struct CanSkipRaceCondition__VTable {
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

    struct CanSkipRaceCondition__StaticFields {
    };

    struct CanSkipRaceCondition__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CanSkipRaceCondition__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CanSkipRaceCondition__VTable vtable;
    };

    struct Database_c {
        struct Database_c__Class* klass;
        MonitorData* monitor;
    };

    struct Database_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Database_c__StaticFields {
        struct Database_c* __9;
        struct Comparison_1_Moon_Race_LeaderBoardEntry_* __9__9_0;
        struct Action_1_System_Threading_Tasks_Task_* __9__11_1;
    };

    struct Database_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Database_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Database_c__VTable vtable;
    };

    struct __declspec(align(8)) Database_c_DisplayClass11_0__Fields {
        struct RaceLeaderBoard* leaderBoard;
        struct String* raceId;
        struct ITrialData* trialData;
        struct RaceSettings* raceSettings;
    };

    struct Database_c_DisplayClass11_0 {
        struct Database_c_DisplayClass11_0__Class* klass;
        MonitorData* monitor;
        struct Database_c_DisplayClass11_0__Fields fields;
    };

    struct Database_c_DisplayClass11_0__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Database_c_DisplayClass11_0__StaticFields {
    };

    struct Database_c_DisplayClass11_0__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Database_c_DisplayClass11_0__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Database_c_DisplayClass11_0__VTable vtable;
    };

    struct __declspec(align(8)) Database_c_DisplayClass13_0__Fields {
        struct String* displayName;
    };

    struct Database_c_DisplayClass13_0 {
        struct Database_c_DisplayClass13_0__Class* klass;
        MonitorData* monitor;
        struct Database_c_DisplayClass13_0__Fields fields;
    };

    struct Database_c_DisplayClass13_0__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Database_c_DisplayClass13_0__StaticFields {
    };

    struct Database_c_DisplayClass13_0__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Database_c_DisplayClass13_0__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Database_c_DisplayClass13_0__VTable vtable;
    };

    struct EscapeRaceData__Fields {
        struct MonoBehaviour__Fields _;
        struct DesiredUberStateComposite* m_stateOverride;
        struct List_1_EquipmentType_* m_disabledAbilities;
        struct RaceSettings* m_raceSettings;
        struct Transform* m_startLineTransform;
        struct Transform* m_endTransform;
        struct List_1_SceneMetaData_* m_requiredPreviewScenes;
        struct List_1_Moon_MoonReference_1__13* m_raceSyncables;
        struct TriggerColliderCallback* m_endTriggerCollider;
        struct BooleanUberState* RaceInProgressState;
        struct PlayerInsideZoneChecker__Array* m_raceAreaCheckers;
        struct String* m_leaderBoardId;
    };

    struct EscapeRaceData {
        struct EscapeRaceData__Class* klass;
        MonitorData* monitor;
        struct EscapeRaceData__Fields fields;
    };

    struct EscapeRaceData__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
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
    };

    struct EscapeRaceData__StaticFields {
    };

    struct EscapeRaceData__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EscapeRaceData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EscapeRaceData__VTable vtable;
    };

    struct EscapeRaceHandler__Fields {
        struct MonoBehaviour__Fields _;
        struct EscapeRaceData* Data;
        bool m_inProgress;
        bool m_inStartProximity;
        bool m_inEndProximity;
        bool m_startRaceOnEnable;
        struct Action* m_onStartRaceAction;
    };

    struct EscapeRaceHandler {
        struct EscapeRaceHandler__Class* klass;
        MonitorData* monitor;
        struct EscapeRaceHandler__Fields fields;
    };

    struct EscapeRaceHandler__VTable {
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

    struct EscapeRaceHandler__StaticFields {
    };

    struct EscapeRaceHandler__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EscapeRaceHandler__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EscapeRaceHandler__VTable vtable;
    };

    struct __declspec(align(8)) EscapeRaceHandler_StartMenuRaceNextFrame_d_21__Fields {
        int32_t __1__state;
        struct Object* __2__current;
        struct EscapeRaceHandler* __4__this;
    };

    struct EscapeRaceHandler_StartMenuRaceNextFrame_d_21 {
        struct EscapeRaceHandler_StartMenuRaceNextFrame_d_21__Class* klass;
        MonitorData* monitor;
        struct EscapeRaceHandler_StartMenuRaceNextFrame_d_21__Fields fields;
    };

    struct EscapeRaceHandler_StartMenuRaceNextFrame_d_21__VTable {
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

    struct EscapeRaceHandler_StartMenuRaceNextFrame_d_21__StaticFields {
    };

    struct EscapeRaceHandler_StartMenuRaceNextFrame_d_21__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EscapeRaceHandler_StartMenuRaceNextFrame_d_21__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EscapeRaceHandler_StartMenuRaceNextFrame_d_21__VTable vtable;
    };

    struct LeaderBoardService_c {
        struct LeaderBoardService_c__Class* klass;
        MonitorData* monitor;
    };

    struct Func_2_Moon_Race_LeaderBoardEntry_Boolean___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Func_2_Moon_Race_LeaderBoardEntry_Boolean_ {
        struct Func_2_Moon_Race_LeaderBoardEntry_Boolean___Class* klass;
        MonitorData* monitor;
        struct Func_2_Moon_Race_LeaderBoardEntry_Boolean___Fields fields;
    };

    struct Func_2_Moon_Race_LeaderBoardEntry_Boolean___VTable {
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

    struct Func_2_Moon_Race_LeaderBoardEntry_Boolean___StaticFields {
    };

    struct Func_2_Moon_Race_LeaderBoardEntry_Boolean___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Func_2_Moon_Race_LeaderBoardEntry_Boolean___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Func_2_Moon_Race_LeaderBoardEntry_Boolean___VTable vtable;
    };

    struct LeaderBoardService_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct LeaderBoardService_c__StaticFields {
        struct LeaderBoardService_c* __9;
        struct Func_2_Moon_Race_LeaderBoardEntry_Boolean_* __9__1_0;
        struct Func_2_Moon_Race_LeaderBoardEntry_Boolean_* __9__2_0;
        struct Comparison_1_Moon_Race_LeaderBoardEntry_* __9__4_0;
        struct Func_2_Moon_Race_LeaderBoardEntry_Boolean_* __9__4_1;
    };

    struct LeaderBoardService_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LeaderBoardService_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LeaderBoardService_c__VTable vtable;
    };

    struct __declspec(align(8)) LeaderBoardWrapper__Fields {
        struct List_1_Moon_Race_LeaderBoardEntry_* LeaderBoards;
    };

    struct LeaderBoardWrapper {
        struct LeaderBoardWrapper__Class* klass;
        MonitorData* monitor;
        struct LeaderBoardWrapper__Fields fields;
    };

    struct LeaderBoardWrapper__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct LeaderBoardWrapper__StaticFields {
    };

    struct LeaderBoardWrapper__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LeaderBoardWrapper__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LeaderBoardWrapper__VTable vtable;
    };

    struct MatchmakingExtensions_c {
        struct MatchmakingExtensions_c__Class* klass;
        MonitorData* monitor;
    };

    struct MatchmakingExtensions_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MatchmakingExtensions_c__StaticFields {
        struct MatchmakingExtensions_c* __9;
        struct Func_2_Moon_Race_LeaderBoardEntry_Int32_* __9__0_0;
        struct Func_2_Moon_Race_LeaderBoardEntry_Int32_* __9__0_1;
        struct Predicate_1_Moon_Race_LeaderBoardEntry_* __9__0_2;
        struct Comparison_1_Moon_Race_LeaderBoardEntry_* __9__1_1;
    };

    struct MatchmakingExtensions_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MatchmakingExtensions_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MatchmakingExtensions_c__VTable vtable;
    };

    struct __declspec(align(8)) MatchmakingExtensions_c_DisplayClass1_0__Fields {
        struct String* playerName;
    };

    struct MatchmakingExtensions_c_DisplayClass1_0 {
        struct MatchmakingExtensions_c_DisplayClass1_0__Class* klass;
        MonitorData* monitor;
        struct MatchmakingExtensions_c_DisplayClass1_0__Fields fields;
    };

    struct MatchmakingExtensions_c_DisplayClass1_0__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MatchmakingExtensions_c_DisplayClass1_0__StaticFields {
    };

    struct MatchmakingExtensions_c_DisplayClass1_0__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MatchmakingExtensions_c_DisplayClass1_0__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MatchmakingExtensions_c_DisplayClass1_0__VTable vtable;
    };

    enum class RaceData_RaceDataState__Enum : int32_t {
        Inactive = 0x00000000,
        Active = 0x00000001,
        Beaten = 0x00000002,
    };

    struct RaceData_RaceDataState__Enum__Boxed {
        struct RaceData_RaceDataState__Enum__Class* klass;
        MonitorData* monitor;
        RaceData_RaceDataState__Enum value;
    };

} // namespace app
