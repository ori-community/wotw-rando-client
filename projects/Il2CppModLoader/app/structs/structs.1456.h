namespace app {
    struct ICollection_1_System_Exception_ {
        struct ICollection_1_System_Exception___Class* klass;
        MonitorData* monitor;
    };

    struct ICollection_1_System_Exception___VTable {
        VirtualInvokeData get_Count;
        VirtualInvokeData get_IsReadOnly;
        VirtualInvokeData Add;
        VirtualInvokeData Clear;
        VirtualInvokeData Contains;
        VirtualInvokeData CopyTo;
        VirtualInvokeData Remove;
    };

    struct ICollection_1_System_Exception___StaticFields {
    };

    struct ICollection_1_System_Exception___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ICollection_1_System_Exception___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ICollection_1_System_Exception___VTable vtable;
    };

    struct ICollection_1_System_Runtime_ExceptionServices_ExceptionDispatchInfo_ {
        struct ICollection_1_System_Runtime_ExceptionServices_ExceptionDispatchInfo___Class* klass;
        MonitorData* monitor;
    };

    struct ICollection_1_System_Runtime_ExceptionServices_ExceptionDispatchInfo___VTable {
        VirtualInvokeData get_Count;
        VirtualInvokeData get_IsReadOnly;
        VirtualInvokeData Add;
        VirtualInvokeData Clear;
        VirtualInvokeData Contains;
        VirtualInvokeData CopyTo;
        VirtualInvokeData Remove;
    };

    struct ICollection_1_System_Runtime_ExceptionServices_ExceptionDispatchInfo___StaticFields {
    };

    struct ICollection_1_System_Runtime_ExceptionServices_ExceptionDispatchInfo___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ICollection_1_System_Runtime_ExceptionServices_ExceptionDispatchInfo___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ICollection_1_System_Runtime_ExceptionServices_ExceptionDispatchInfo___VTable vtable;
    };

    struct MathUtilities {
        struct MathUtilities__Class* klass;
        MonitorData* monitor;
    };

    struct MathUtilities__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MathUtilities__StaticFields {
        int32_t m_sineLookupSize;
        struct Single__Array* m_sineLookupTable;
    };

    struct MathUtilities__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MathUtilities__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MathUtilities__VTable vtable;
    };

    struct AkAudioInputManager {
        struct AkAudioInputManager__Class* klass;
        MonitorData* monitor;
    };

    struct AkAudioInputManager__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct AkAudioInputManager__StaticFields {
        bool initialized;
        struct Dictionary_2_System_UInt32_AkAudioInputManager_AudioSamplesDelegate_* audioSamplesDelegates;
        struct Dictionary_2_System_UInt32_AkAudioInputManager_AudioFormatDelegate_* audioFormatDelegates;
        struct AkAudioFormat* audioFormat;
        struct AkAudioInputManager_AudioSamplesInteropDelegate* audioSamplesDelegate;
        struct AkAudioInputManager_AudioFormatInteropDelegate* audioFormatDelegate;
    };

    struct AkAudioInputManager__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AkAudioInputManager__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AkAudioInputManager__VTable vtable;
    };

    struct AkBankManager {
        struct AkBankManager__Class* klass;
        MonitorData* monitor;
    };

    struct AkBankManager__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct AkBankManager__StaticFields {
        struct Dictionary_2_System_String_AkBankManager_BankHandle_* m_BankHandles;
        struct List_1_AkBankManager_BankHandle_* BanksToUnload;
        struct Mutex* m_Mutex;
    };

    struct AkBankManager__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AkBankManager__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AkBankManager__VTable vtable;
    };

    struct AkCallbackManager {
        struct AkCallbackManager__Class* klass;
        MonitorData* monitor;
    };

    struct AkCallbackManager__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct AkCallbackManager__StaticFields {
        bool _IsLoggingEnabled_k__BackingField;
        struct AkEventCallbackInfo* AkEventCallbackInfo;
        struct AkDynamicSequenceItemCallbackInfo* AkDynamicSequenceItemCallbackInfo;
        struct AkMIDIEventCallbackInfo* AkMIDIEventCallbackInfo;
        struct AkMarkerCallbackInfo* AkMarkerCallbackInfo;
        struct AkDurationCallbackInfo* AkDurationCallbackInfo;
        struct AkMusicSyncCallbackInfo* AkMusicSyncCallbackInfo;
        struct AkMusicPlaylistCallbackInfo* AkMusicPlaylistCallbackInfo;
        struct AkAudioSourceChangeCallbackInfo* AkAudioSourceChangeCallbackInfo;
        struct AkMonitoringCallbackInfo* AkMonitoringCallbackInfo;
        struct AkBankCallbackInfo* AkBankCallbackInfo;
        struct Dictionary_2_System_Int32_AkCallbackManager_EventCallbackPackage_* m_mapEventCallbacks;
        struct Dictionary_2_System_Int32_AkCallbackManager_BankCallbackPackage_* m_mapBankCallbacks;
        struct AkCallbackManager_EventCallbackPackage* m_LastAddedEventPackage;
        void* m_pNotifMem;
        struct AkCallbackManager_MonitoringCallback* m_MonitoringCB;
        struct AkCallbackManager_BGMCallbackPackage* ms_sourceChangeCallbackPkg;
    };

    struct AkCallbackManager__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AkCallbackManager__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AkCallbackManager__VTable vtable;
    };

    struct BitConverter {
        struct BitConverter__Class* klass;
        MonitorData* monitor;
    };

    struct BitConverter__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct BitConverter__StaticFields {
        bool IsLittleEndian;
    };

    struct BitConverter__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BitConverter__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BitConverter__VTable vtable;
    };

    struct FuncCondition__Array {
        struct FuncCondition__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct FuncCondition* vector[32];
    };

    struct FuncCondition__Array__VTable {
    };

    struct FuncCondition__Array__StaticFields {
    };

    struct FuncCondition__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FuncCondition__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FuncCondition__Array__VTable vtable;
    };

    struct FuncCondition_1__Array {
        struct FuncCondition_1__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct FuncCondition_1* vector[32];
    };

    struct FuncCondition_1__Array__VTable {
    };

    struct FuncCondition_1__Array__StaticFields {
    };

    struct FuncCondition_1__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FuncCondition_1__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FuncCondition_1__Array__VTable vtable;
    };

    struct LocomotionUtils {
        struct LocomotionUtils__Class* klass;
        MonitorData* monitor;
    };

    struct LocomotionUtils__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct LocomotionUtils__StaticFields {
        bool DisableGroundEntityStickToSurface;
        bool DisableStatickEntitySnapToGround;
        struct RaycastHit__Array* HitCache;
    };

    struct LocomotionUtils__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LocomotionUtils__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LocomotionUtils__VTable vtable;
    };

    struct P3D_Brush_AlphaBlend {
        struct P3D_Brush_AlphaBlend__Class* klass;
        MonitorData* monitor;
    };

    struct P3D_Brush_AlphaBlend__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct P3D_Brush_AlphaBlend__StaticFields {
        struct Material* s_material;
        int32_t s_textureParamId;
        int32_t s_screenCoordTransformParamId;
        int32_t s_brushColorParamId;
        int32_t s_mainTexParamId;
        int32_t s_splatRectParamId;
        int32_t s_brushOpacityParamId;
        struct Texture2D* s_mainTex;
    };

    struct P3D_Brush_AlphaBlend__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct P3D_Brush_AlphaBlend__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct P3D_Brush_AlphaBlend__VTable vtable;
    };

    struct P3D_Brush_AlphaErase {
        struct P3D_Brush_AlphaErase__Class* klass;
        MonitorData* monitor;
    };

    struct P3D_Brush_AlphaErase__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct P3D_Brush_AlphaErase__StaticFields {
        struct Material* s_material;
        int32_t s_textureParamId;
        int32_t s_screenCoordTransformParamId;
    };

    struct P3D_Brush_AlphaErase__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct P3D_Brush_AlphaErase__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct P3D_Brush_AlphaErase__VTable vtable;
    };

    struct Scenes {
        struct Scenes__Class* klass;
        MonitorData* monitor;
    };

    struct Scenes__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Scenes__StaticFields {
        struct ScenesManager* Manager;
    };

    struct Scenes__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Scenes__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Scenes__VTable vtable;
    };

    struct Ambience {
        struct Ambience__Class* klass;
        MonitorData* monitor;
    };

    struct Ambience__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Ambience__StaticFields {
        struct List_1_Core_Ambience_Layer_* m_ambienceLayers;
        struct List_1_Core_Ambience_AmbienceTrack_* CurrentTracks;
        bool Mute;
    };

    struct Ambience__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Ambience__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Ambience__VTable vtable;
    };

    struct Wwise {
        struct Wwise__Class* klass;
        MonitorData* monitor;
    };

    struct Wwise__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Wwise__StaticFields {
        struct Event_1* EmptyEvent;
        struct Switch_1* EmptySwitch;
        struct Trigger* EmptyTrigger;
        bool DebugDraw;
        bool DebugLog;
        bool LogGlobalSoundHostCalls;
        bool UseDelayedCallbacks;
        struct WwiseIntegration* m_integration;
        struct WwiseSyncProcessor* m_syncProcessor;
        struct WwiseEventSystem* m_eventsSystem;
        struct WwiseGameObjectSystem* m_gameObjectSystem;
        struct WwiseSoundBankSystem* m_soundBankSystem;
        struct SoundHost* _DefaultDevSoundHost_k__BackingField;
        struct SoundListener* _DefaultSoundListener_k__BackingField;
    };

    struct Wwise__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Wwise__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Wwise__VTable vtable;
    };

    struct IRtpcFeed {
        struct IRtpcFeed__Class* klass;
        MonitorData* monitor;
    };

    struct IRtpcFeed__VTable {
        VirtualInvokeData GetRtpcValue;
    };

    struct IRtpcFeed__StaticFields {
    };

    struct IRtpcFeed__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IRtpcFeed__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IRtpcFeed__VTable vtable;
    };

    struct ShaderID_AmbientOcclusion {
        struct ShaderID_AmbientOcclusion__Class* klass;
        MonitorData* monitor;
    };

    struct ShaderID_AmbientOcclusion__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ShaderID_AmbientOcclusion__StaticFields {
        int32_t _BlurVector;
        int32_t _OcclusionTexture;
        int32_t _Intensity;
        int32_t _Radius;
        int32_t _TargetScale;
        int32_t _SampleCount;
    };

    struct ShaderID_AmbientOcclusion__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ShaderID_AmbientOcclusion__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ShaderID_AmbientOcclusion__VTable vtable;
    };

    struct Warning {
        struct Warning__Class* klass;
        MonitorData* monitor;
    };

    struct Warning__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Warning__StaticFields {
        bool logged;
    };

    struct Warning__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Warning__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Warning__VTable vtable;
    };

    struct ShaderID_AmplifyColorBase {
        struct ShaderID_AmplifyColorBase__Class* klass;
        MonitorData* monitor;
    };

    struct ShaderID_AmplifyColorBase__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ShaderID_AmplifyColorBase__StaticFields {
        int32_t _LerpAmount;
        int32_t _RgbTex;
        int32_t _LerpRgbTex;
        int32_t _Exposure;
        int32_t _ShoulderStrength;
        int32_t _LinearStrength;
        int32_t _LinearAngle;
        int32_t _ToeStrength;
        int32_t _ToeNumerator;
        int32_t _ToeDenominator;
        int32_t _LinearWhite;
        int32_t _MaskTex;
        int32_t _DepthCurveLut;
        int32_t _RgbBlendCacheTex;
    };

    struct ShaderID_AmplifyColorBase__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ShaderID_AmplifyColorBase__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ShaderID_AmplifyColorBase__VTable vtable;
    };

    struct ShaderID_AnalogTV {
        struct ShaderID_AnalogTV__Class* klass;
        MonitorData* monitor;
    };

    struct ShaderID_AnalogTV__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ShaderID_AnalogTV__StaticFields {
        int32_t _Params1;
        int32_t _Params2;
    };

    struct ShaderID_AnalogTV__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ShaderID_AnalogTV__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ShaderID_AnalogTV__VTable vtable;
    };

    struct AnalyticsBridge {
        struct AnalyticsBridge__Class* klass;
        MonitorData* monitor;
    };

    struct AnalyticsBridge__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct AnalyticsBridge__StaticFields {
        bool m_lock;
    };

    struct AnalyticsBridge__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AnalyticsBridge__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AnalyticsBridge__VTable vtable;
    };

    struct AnalyticsSessionInfo {
        struct AnalyticsSessionInfo__Class* klass;
        MonitorData* monitor;
    };

    struct AnalyticsSessionInfo__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct AnalyticsSessionInfo__StaticFields {
        struct AnalyticsSessionInfo_SessionStateChanged* sessionStateChanged;
    };

    struct AnalyticsSessionInfo__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AnalyticsSessionInfo__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AnalyticsSessionInfo__VTable vtable;
    };

    struct Utils_1 {
        struct Utils_1__Class* klass;
        MonitorData* monitor;
    };

    struct Utils_1__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Utils_1__StaticFields {
        struct Object* BoxedFalse;
        struct Object* BoxedTrue;
        struct Object* BoxedIntM1;
        struct Object* BoxedInt0;
        struct Object* BoxedInt1;
        struct Object* BoxedInt2;
        struct Object* BoxedInt3;
        struct Object* BoxedDefaultSByte;
        struct Object* BoxedDefaultChar;
        struct Object* BoxedDefaultInt16;
        struct Object* BoxedDefaultInt64;
        struct Object* BoxedDefaultByte;
        struct Object* BoxedDefaultUInt16;
        struct Object* BoxedDefaultUInt32;
        struct Object* BoxedDefaultUInt64;
        struct Object* BoxedDefaultSingle;
        struct Object* BoxedDefaultDouble;
        struct Object* BoxedDefaultDecimal;
        struct Object* BoxedDefaultDateTime;
        struct ConstantExpression* s_true;
        struct ConstantExpression* s_false;
        struct ConstantExpression* s_m1;
        struct ConstantExpression* s_0;
        struct ConstantExpression* s_1;
        struct ConstantExpression* s_2;
        struct ConstantExpression* s_3;
        struct DefaultExpression* Empty;
        struct ConstantExpression* Null;
    };

    struct Utils_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Utils_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Utils_1__VTable vtable;
    };

    struct Math2d {
        struct Math2d__Class* klass;
        MonitorData* monitor;
    };

    struct Math2d__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Math2d__StaticFields {
        double BitConverter_Int64BitsToDouble_Int64_MinValue;
    };

    struct Math2d__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Math2d__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Math2d__VTable vtable;
    };

    struct GizmoHelper {
        struct GizmoHelper__Class* klass;
        MonitorData* monitor;
    };

    struct GizmoHelper__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct GizmoHelper__StaticFields {
        struct Color RectangleFillColor;
        struct Color RectangleOutlineColor;
        struct Color RectangleSelectedFillColor;
        struct Color RectangleSelectedOutlineColor;
        struct Color m_color;
        struct GUIStyle* m_centeredWhiteBoldText;
        struct Dictionary_2_UnityEngine_Bounds_System_Boolean_* m_transformsCache;
        struct Camera* m_editorCamera;
        struct Vector3 m_lastCameraPosition;
        struct Vector2 m_previousDelta;
        struct Vector3 m_previousCameraPosition;
    };

    struct GizmoHelper__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GizmoHelper__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GizmoHelper__VTable vtable;
    };

    struct Sound {
        struct Sound__Class* klass;
        MonitorData* monitor;
    };

    struct Sound__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Sound__StaticFields {
        bool AllSoundsDisabled;
        struct GameObject* s_audioObjectsParent;
        struct SoundManager* s_soundManager;
        struct GameObject* s_oneShotPrefab;
        struct GameObject* s_loopingPrefab;
        bool isSoundLogEnabled;
        bool isPinkBoxesEnabled;
        struct GameObject* m_soundLog;
    };

    struct Sound__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Sound__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Sound__VTable vtable;
    };

    struct ArtOptimizerSettings {
        struct ArtOptimizerSettings__Class* klass;
        MonitorData* monitor;
    };

    struct ArtOptimizerSettings__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ArtOptimizerSettings__StaticFields {
        bool DebugModeEnabled;
        bool InstantLoadScenes;
        bool DontUnloadScenes;
        bool IgnoreZeroEnergySamples;
        bool IgnoreModifiers;
        bool X2CameraSamples;
        float SHADER_SAMPLE_TIME;
        int32_t ANIMATION_SAMPLES;
        struct List_1_System_Type_* s_ignoredTypes;
        struct List_1_Moon_ArtOptimization_ResolutionPreset_* Resolutions;
        struct ResolutionPreset* Resolution;
        int32_t s_resolutionIndex;
    };

    struct ArtOptimizerSettings__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ArtOptimizerSettings__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ArtOptimizerSettings__VTable vtable;
    };

    struct OutputFolder {
        struct OutputFolder__Class* klass;
        MonitorData* monitor;
    };

    struct OutputFolder__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct OutputFolder__StaticFields {
        struct String* m_appData;
        struct String* m_path;
        bool _IsContentPackage_k__BackingField;
    };

    struct OutputFolder__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct OutputFolder__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct OutputFolder__VTable vtable;
    };

    struct AnimationTransition_AnimationTransitionClipBoard {
        struct AnimationTransition_AnimationTransitionClipBoard__Class* klass;
        MonitorData* monitor;
    };

    struct AnimationTransition_AnimationTransitionClipBoard__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct AnimationTransition_AnimationTransitionClipBoard__StaticFields {
        struct AnimationTransition* m_resgisteredTransition;
    };

    struct AnimationTransition_AnimationTransitionClipBoard__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AnimationTransition_AnimationTransitionClipBoard__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AnimationTransition_AnimationTransitionClipBoard__VTable vtable;
    };

    struct ShaderID_AnimatorController3rdPerson {
        struct ShaderID_AnimatorController3rdPerson__Class* klass;
        MonitorData* monitor;
    };

    struct ShaderID_AnimatorController3rdPerson__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ShaderID_AnimatorController3rdPerson__StaticFields {
        int32_t X;
        int32_t Z;
        int32_t IsMoving;
    };

    struct ShaderID_AnimatorController3rdPerson__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ShaderID_AnimatorController3rdPerson__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ShaderID_AnimatorController3rdPerson__VTable vtable;
    };

    struct ShaderID_Antialiasing {
        struct ShaderID_Antialiasing__Class* klass;
        MonitorData* monitor;
    };

    struct ShaderID_Antialiasing__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ShaderID_Antialiasing__StaticFields {
        int32_t _EdgeThresholdMin;
        int32_t _EdgeThreshold;
        int32_t _EdgeSharpness;
        int32_t _OffsetScale;
        int32_t _BlurRadius;
    };

    struct ShaderID_Antialiasing__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ShaderID_Antialiasing__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ShaderID_Antialiasing__VTable vtable;
    };

    struct Application {
        struct Application__Class* klass;
        MonitorData* monitor;
    };

    struct Application__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Application__StaticFields {
        struct Application_LowMemoryCallback* lowMemory;
        struct Application_ControllerStateChanged* controllerStateChanged;
        struct Application_LogCallback* s_LogCallbackHandler;
        struct Application_LogCallback* s_LogCallbackHandlerThreaded;
        struct Action_1_Boolean_* focusChanged;
        struct Func_1_Boolean_* wantsToQuit;
        struct Action* quitting;
    };

    struct Application__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Application__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Application__VTable vtable;
    };

    struct BeforeRenderHelper {
        struct BeforeRenderHelper__Class* klass;
        MonitorData* monitor;
    };

    struct BeforeRenderHelper__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct BeforeRenderHelper__StaticFields {
        struct List_1_UnityEngine_BeforeRenderHelper_OrderBlock_* s_OrderBlocks;
    };

    struct BeforeRenderHelper__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BeforeRenderHelper__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BeforeRenderHelper__VTable vtable;
    };

    struct IDamageContext {
        struct IDamageContext__Class* klass;
        MonitorData* monitor;
    };

    struct IDamageContext__VTable {
        VirtualInvokeData get_Damage;
    };

    struct IDamageContext__StaticFields {
    };

    struct IDamageContext__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IDamageContext__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IDamageContext__VTable vtable;
    };

    struct ShaderID_AreaMapCanvas {
        struct ShaderID_AreaMapCanvas__Class* klass;
        MonitorData* monitor;
    };

    struct ShaderID_AreaMapCanvas__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ShaderID_AreaMapCanvas__StaticFields {
        int32_t _Color;
    };

    struct ShaderID_AreaMapCanvas__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ShaderID_AreaMapCanvas__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ShaderID_AreaMapCanvas__VTable vtable;
    };

} // namespace app
