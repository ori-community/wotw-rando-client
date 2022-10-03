namespace app {
    struct __declspec(align(8)) TextureMaskEntry__Fields {
        float m_texelWidth;
        float m_texelHeight;
        float m_texelHalfWidth;
        float m_texelHalfHeight;
        float m_rotation;
        struct Texture2D* Mask_1;
        struct Texture2D* _SourceTexture_k__BackingField;
        struct Rect _SourceTextureBounds_k__BackingField;
        float _ScaleMultiplier_k__BackingField;
        bool _IsValid_k__BackingField;
    };

    struct TextureMaskEntry {
        struct TextureMaskEntry__Class* klass;
        MonitorData* monitor;
        struct TextureMaskEntry__Fields fields;
    };

    struct TextureMaskEntry__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct TextureMaskEntry__StaticFields {
    };

    struct TextureMaskEntry__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TextureMaskEntry__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TextureMaskEntry__VTable vtable;
    };

    struct Nullable_1_UnityEngine_Color_ {
        struct Color value;
        bool has_value;
    };

    struct Nullable_1_UnityEngine_Color___Boxed {
        struct Nullable_1_UnityEngine_Color___Class* klass;
        MonitorData* monitor;
        struct Nullable_1_UnityEngine_Color_ fields;
    };

    struct Nullable_1_UnityEngine_Color___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Nullable_1_UnityEngine_Color___StaticFields {
    };

    struct Nullable_1_UnityEngine_Color___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Nullable_1_UnityEngine_Color___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Nullable_1_UnityEngine_Color___VTable vtable;
    };

    struct __declspec(align(8)) TimesliceLigthCanvasSetPosTask_TimeslicedSetPos_d_6__Fields {
        int32_t __1__state;
        struct Object* __2__current;
        struct TimesliceLigthCanvasSetPosTask* __4__this;
        int32_t _taskCount_5__2;
        int32_t _i_5__3;
    };

    struct TimesliceLigthCanvasSetPosTask_TimeslicedSetPos_d_6 {
        struct TimesliceLigthCanvasSetPosTask_TimeslicedSetPos_d_6__Class* klass;
        MonitorData* monitor;
        struct TimesliceLigthCanvasSetPosTask_TimeslicedSetPos_d_6__Fields fields;
    };

    struct TimesliceLigthCanvasSetPosTask_TimeslicedSetPos_d_6__VTable {
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

    struct TimesliceLigthCanvasSetPosTask_TimeslicedSetPos_d_6__StaticFields {
    };

    struct TimesliceLigthCanvasSetPosTask_TimeslicedSetPos_d_6__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TimesliceLigthCanvasSetPosTask_TimeslicedSetPos_d_6__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TimesliceLigthCanvasSetPosTask_TimeslicedSetPos_d_6__VTable vtable;
    };

    struct PersistentEditorOnlySceneComponent__Fields {
        struct MonoBehaviour__Fields _;
        int32_t TypeChecksum;
    };

    struct PersistentEditorOnlySceneComponent {
        struct PersistentEditorOnlySceneComponent__Class* klass;
        MonitorData* monitor;
        struct PersistentEditorOnlySceneComponent__Fields fields;
    };

    struct PersistentEditorOnlySceneComponent__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct PersistentEditorOnlySceneComponent__StaticFields {
    };

    struct PersistentEditorOnlySceneComponent__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PersistentEditorOnlySceneComponent__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PersistentEditorOnlySceneComponent__VTable vtable;
    };

    struct BrushPreview__Fields {
        struct MonoBehaviour__Fields _;
        bool Visible;
    };

    struct BrushPreview {
        struct BrushPreview__Class* klass;
        MonitorData* monitor;
        struct BrushPreview__Fields fields;
    };

    struct BrushPreview__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct BrushPreview__StaticFields {
    };

    struct BrushPreview__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BrushPreview__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BrushPreview__VTable vtable;
    };

    struct SketchupGroup__Fields {
        struct MonoBehaviour__Fields _;
        int32_t m_version;
    };

    struct SketchupGroup {
        struct SketchupGroup__Class* klass;
        MonitorData* monitor;
        struct SketchupGroup__Fields fields;
    };

    struct SketchupGroup__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData OnBeforeSerialize;
        VirtualInvokeData OnAfterDeserialize;
    };

    struct SketchupGroup__StaticFields {
    };

    struct SketchupGroup__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SketchupGroup__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SketchupGroup__VTable vtable;
    };

    struct SketchupLayer__Fields {
        struct MonoBehaviour__Fields _;
        bool Visible;
        int32_t TexelsPerWorldUnit;
    };

    struct SketchupLayer {
        struct SketchupLayer__Class* klass;
        MonitorData* monitor;
        struct SketchupLayer__Fields fields;
    };

    struct SketchupLayer__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SketchupLayer__StaticFields {
        int32_t MinTexelsPerWorldUnit;
        int32_t MaxTexelsPerWorldUnit;
        int32_t DefaultTexelsPerWorldUnit;
    };

    struct SketchupLayer__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SketchupLayer__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SketchupLayer__VTable vtable;
    };

    struct SketchupVersion__Fields {
        struct MonoBehaviour__Fields _;
        struct SketchupLayer* IsolatedLayer;
    };

    struct SketchupVersion {
        struct SketchupVersion__Class* klass;
        MonitorData* monitor;
        struct SketchupVersion__Fields fields;
    };

    struct SketchupVersion__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SketchupVersion__StaticFields {
    };

    struct SketchupVersion__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SketchupVersion__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SketchupVersion__VTable vtable;
    };

    struct BezierSplineComponent__Fields {
        struct MonoBehaviour__Fields _;
        struct BezierSpline* spline;
        int32_t m_buildnum;
        struct Vector3__Array* m_drawcache;
        struct BaseSpline_SplineIterator* it;
        bool lock_transform_on_play;
    };

    struct BezierSplineComponent {
        struct BezierSplineComponent__Class* klass;
        MonitorData* monitor;
        struct BezierSplineComponent__Fields fields;
    };

    struct BezierSplineComponent__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct BezierSplineComponent__StaticFields {
    };

    struct BezierSplineComponent__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BezierSplineComponent__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BezierSplineComponent__VTable vtable;
    };

    struct SplineUtil {
        struct SplineUtil__Class* klass;
        MonitorData* monitor;
    };

    struct SplineUtil__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SplineUtil__StaticFields {
    };

    struct SplineUtil__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SplineUtil__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SplineUtil__VTable vtable;
    };

    struct hdRumbleCreator {
        struct hdRumbleCreator__Class* klass;
        MonitorData* monitor;
    };

    struct hdRumbleCreator__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct hdRumbleCreator__StaticFields {
    };

    struct hdRumbleCreator__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct hdRumbleCreator__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct hdRumbleCreator__VTable vtable;
    };

    struct SwitchVideoPlayer__Fields {
        struct MonoBehaviour__Fields _;
        bool m_playing;
        struct String* m_filename;
        struct GameObject* m_movieQuad;
        struct OnDelegate* _OnPlaybackFinished_k__BackingField;
    };

    struct SwitchVideoPlayer {
        struct SwitchVideoPlayer__Class* klass;
        MonitorData* monitor;
        struct SwitchVideoPlayer__Fields fields;
    };

    struct SwitchVideoPlayer__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Play;
        VirtualInvokeData Pause;
        VirtualInvokeData Stop;
        VirtualInvokeData get_OnPlaybackFinished;
        VirtualInvokeData set_OnPlaybackFinished;
        VirtualInvokeData set_Filename;
        VirtualInvokeData get_IsPlaying;
        VirtualInvokeData get_IsPaused;
    };

    struct SwitchVideoPlayer__StaticFields {
    };

    struct SwitchVideoPlayer__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SwitchVideoPlayer__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SwitchVideoPlayer__VTable vtable;
    };

    struct GetStat__Fields {
        struct SwaggerRequest_1_GetReplaysCallback___Fields _;
    };

    struct GetStat {
        struct GetStat__Class* klass;
        MonitorData* monitor;
        struct GetStat__Fields fields;
    };

    struct GetStat__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Path;
        VirtualInvokeData get_Method;
        VirtualInvokeData get_DataReader;
        VirtualInvokeData get_Headers;
        VirtualInvokeData CreateRequestCallbackObject;
        VirtualInvokeData Finish;
    };

    struct GetStat__StaticFields {
    };

    struct GetStat__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GetStat__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GetStat__VTable vtable;
    };

    struct GetStatCallback__Fields {
        struct SwaggerCallback__Fields _;
        struct List_1_ReplayModel_* m_replays;
    };

    struct GetStatCallback {
        struct GetStatCallback__Class* klass;
        MonitorData* monitor;
        struct GetStatCallback__Fields fields;
    };

    struct GetStatCallback__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData SetResponse;
        VirtualInvokeData get_Request;
        VirtualInvokeData set_Request;
        VirtualInvokeData SetResponse_1;
        VirtualInvokeData OnResult;
        VirtualInvokeData OnError;
    };

    struct GetStatCallback__StaticFields {
    };

    struct GetStatCallback__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GetStatCallback__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GetStatCallback__VTable vtable;
    };

    struct TelemetryHeatMap__Fields {
        struct MonoBehaviour__Fields _;
        float m_positionRandom;
        float m_radiusRandom;
        float m_intensityRandom;
        struct Vector4__Array* positions;
        struct Vector4__Array* properties;
        struct Material* material;
        int32_t count;
    };

    struct TelemetryHeatMap {
        struct TelemetryHeatMap__Class* klass;
        MonitorData* monitor;
        struct TelemetryHeatMap__Fields fields;
    };

    struct TelemetryHeatMap__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct TelemetryHeatMap__StaticFields {
    };

    struct TelemetryHeatMap__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TelemetryHeatMap__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TelemetryHeatMap__VTable vtable;
    };

    struct BuildRunningHook__Fields {
        struct MonoBehaviour__Fields _;
        bool ShouldCheck;
        float m_timestamp;
        float m_interval;
        struct String* m_buildRunningHookFileName;
        struct String* m_buildRunningHookFilePath;
    };

    struct BuildRunningHook {
        struct BuildRunningHook__Class* klass;
        MonitorData* monitor;
        struct BuildRunningHook__Fields fields;
    };

    struct BuildRunningHook__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct BuildRunningHook__StaticFields {
        struct BuildRunningHook* Instance;
    };

    struct BuildRunningHook__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BuildRunningHook__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BuildRunningHook__VTable vtable;
    };

    struct AbilitySetAsset__Fields {
        struct ScriptableObject__Fields _;
        struct List_1_AbilityType_* Abilities;
    };

    struct AbilitySetAsset {
        struct AbilitySetAsset__Class* klass;
        MonitorData* monitor;
        struct AbilitySetAsset__Fields fields;
    };

    struct AbilitySetAsset__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct AbilitySetAsset__StaticFields {
    };

    struct AbilitySetAsset__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AbilitySetAsset__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AbilitySetAsset__VTable vtable;
    };

    struct AudioDataCaptureAgent {
        struct AudioDataCaptureAgent__Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) FrameCaptureTester_AgentOutput__Fields {
        struct FrameCaptureTester* self;
    };

    struct FrameCaptureTester_AgentOutput {
        struct FrameCaptureTester_AgentOutput__Class* klass;
        MonitorData* monitor;
        struct FrameCaptureTester_AgentOutput__Fields fields;
    };

    enum class FrameCaptureTester_FrameCaptureTestType__Enum : int32_t {
        Automated = 0x00000000,
        Manual = 0x00000001,
    };

    struct FrameCaptureTester_FrameCaptureTestType__Enum__Boxed {
        struct FrameCaptureTester_FrameCaptureTestType__Enum__Class* klass;
        MonitorData* monitor;
        FrameCaptureTester_FrameCaptureTestType__Enum value;
    };

    struct FrameCaptureTester__Fields {
        struct MonoBehaviour__Fields _;
        struct MoonReference_1_ITestNotifier_* TestLifetimeNotifier;
        struct ClientInformationProvider* m_clientInfo;
        struct FrameCaptureTester_AgentOutput* m_agentOutput;
        struct List_1_Moon_IExplicitUpdateHandler_* m_updateAgents;
        struct List_1_Moon_IExplicitFixedUpdateHandler_* m_fixedUpdateAgents;
        struct List_1_Moon_IExplicitLateUpdateHandler_* m_lateUpdateAgents;
        struct String* TestName;
        bool QuitOnEnd;
        struct String* ProfilingConfigOverride;
        FrameCaptureTester_FrameCaptureTestType__Enum _TestType_k__BackingField;

        struct List_1_IFrameCaptureAgent_* m_frameCaptureAgents;
        struct Int32__Array* m_headerCountsPerCaptureAgent;
        struct String* m_id;
        struct MetricOutput__Array* m_metricOutput;
        struct OutputWriter* m_writer;
        bool m_running;
        bool m_paused;
        struct StringBuilder* m_frameDataBuilder;
        struct StringBuilder* m_tempStringBuilder;
        bool m_isFirstFrame;
        int32_t o_valuesLeft;
        struct StringBuilder* o_sb;
    };

    struct FrameCaptureTester {
        struct FrameCaptureTester__Class* klass;
        MonitorData* monitor;
        struct FrameCaptureTester__Fields fields;
    };

    struct __declspec(align(8)) List_1_Moon_IExplicitUpdateHandler___Fields {
        struct IExplicitUpdateHandler__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Moon_IExplicitUpdateHandler_ {
        struct List_1_Moon_IExplicitUpdateHandler___Class* klass;
        MonitorData* monitor;
        struct List_1_Moon_IExplicitUpdateHandler___Fields fields;
    };

    struct IExplicitUpdateHandler__Array {
        struct IExplicitUpdateHandler__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct IExplicitUpdateHandler* vector[32];
    };

    struct IEnumerator_1_Moon_IExplicitUpdateHandler_ {
        struct IEnumerator_1_Moon_IExplicitUpdateHandler___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_Moon_IExplicitFixedUpdateHandler___Fields {
        struct IExplicitFixedUpdateHandler__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Moon_IExplicitFixedUpdateHandler_ {
        struct List_1_Moon_IExplicitFixedUpdateHandler___Class* klass;
        MonitorData* monitor;
        struct List_1_Moon_IExplicitFixedUpdateHandler___Fields fields;
    };

    struct IExplicitFixedUpdateHandler__Array {
        struct IExplicitFixedUpdateHandler__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct IExplicitFixedUpdateHandler* vector[32];
    };

    struct IEnumerator_1_Moon_IExplicitFixedUpdateHandler_ {
        struct IEnumerator_1_Moon_IExplicitFixedUpdateHandler___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_Moon_IExplicitLateUpdateHandler___Fields {
        struct IExplicitLateUpdateHandler__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Moon_IExplicitLateUpdateHandler_ {
        struct List_1_Moon_IExplicitLateUpdateHandler___Class* klass;
        MonitorData* monitor;
        struct List_1_Moon_IExplicitLateUpdateHandler___Fields fields;
    };

    struct IExplicitLateUpdateHandler__Array {
        struct IExplicitLateUpdateHandler__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct IExplicitLateUpdateHandler* vector[32];
    };

    struct IEnumerator_1_Moon_IExplicitLateUpdateHandler_ {
        struct IEnumerator_1_Moon_IExplicitLateUpdateHandler___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_IFrameCaptureAgent___Fields {
        struct IFrameCaptureAgent__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_IFrameCaptureAgent_ {
        struct List_1_IFrameCaptureAgent___Class* klass;
        MonitorData* monitor;
        struct List_1_IFrameCaptureAgent___Fields fields;
    };

    struct IFrameCaptureAgent {
        struct IFrameCaptureAgent__Class* klass;
        MonitorData* monitor;
    };

    struct IFrameCaptureAgent__Array {
        struct IFrameCaptureAgent__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct IFrameCaptureAgent* vector[32];
    };

    struct IEnumerator_1_IFrameCaptureAgent_ {
        struct IEnumerator_1_IFrameCaptureAgent___Class* klass;
        MonitorData* monitor;
    };

    struct IExplicitUpdateHandler__Array__VTable {
    };

    struct IExplicitUpdateHandler__Array__StaticFields {
    };

    struct IExplicitUpdateHandler__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IExplicitUpdateHandler__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IExplicitUpdateHandler__Array__VTable vtable;
    };

    struct IEnumerator_1_Moon_IExplicitUpdateHandler___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_Moon_IExplicitUpdateHandler___StaticFields {
    };

    struct IEnumerator_1_Moon_IExplicitUpdateHandler___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_Moon_IExplicitUpdateHandler___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_Moon_IExplicitUpdateHandler___VTable vtable;
    };

    struct List_1_Moon_IExplicitUpdateHandler___VTable {
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

    struct List_1_Moon_IExplicitUpdateHandler___StaticFields {
        struct IExplicitUpdateHandler__Array* _emptyArray;
    };

    struct List_1_Moon_IExplicitUpdateHandler___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_Moon_IExplicitUpdateHandler___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_Moon_IExplicitUpdateHandler___VTable vtable;
    };

    struct IExplicitFixedUpdateHandler__Array__VTable {
    };

    struct IExplicitFixedUpdateHandler__Array__StaticFields {
    };

    struct IExplicitFixedUpdateHandler__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IExplicitFixedUpdateHandler__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IExplicitFixedUpdateHandler__Array__VTable vtable;
    };

    struct IEnumerator_1_Moon_IExplicitFixedUpdateHandler___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_Moon_IExplicitFixedUpdateHandler___StaticFields {
    };

    struct IEnumerator_1_Moon_IExplicitFixedUpdateHandler___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_Moon_IExplicitFixedUpdateHandler___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_Moon_IExplicitFixedUpdateHandler___VTable vtable;
    };

    struct List_1_Moon_IExplicitFixedUpdateHandler___VTable {
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

    struct List_1_Moon_IExplicitFixedUpdateHandler___StaticFields {
        struct IExplicitFixedUpdateHandler__Array* _emptyArray;
    };

    struct List_1_Moon_IExplicitFixedUpdateHandler___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_Moon_IExplicitFixedUpdateHandler___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_Moon_IExplicitFixedUpdateHandler___VTable vtable;
    };

    struct IExplicitLateUpdateHandler__Array__VTable {
    };

    struct IExplicitLateUpdateHandler__Array__StaticFields {
    };

    struct IExplicitLateUpdateHandler__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IExplicitLateUpdateHandler__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IExplicitLateUpdateHandler__Array__VTable vtable;
    };

    struct IEnumerator_1_Moon_IExplicitLateUpdateHandler___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_Moon_IExplicitLateUpdateHandler___StaticFields {
    };

    struct IEnumerator_1_Moon_IExplicitLateUpdateHandler___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_Moon_IExplicitLateUpdateHandler___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_Moon_IExplicitLateUpdateHandler___VTable vtable;
    };

    struct List_1_Moon_IExplicitLateUpdateHandler___VTable {
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

    struct List_1_Moon_IExplicitLateUpdateHandler___StaticFields {
        struct IExplicitLateUpdateHandler__Array* _emptyArray;
    };

    struct List_1_Moon_IExplicitLateUpdateHandler___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_Moon_IExplicitLateUpdateHandler___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_Moon_IExplicitLateUpdateHandler___VTable vtable;
    };

    struct FrameCaptureTester_FrameCaptureTestType__Enum__VTable {
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

    struct FrameCaptureTester_FrameCaptureTestType__Enum__StaticFields {
    };

} // namespace app
