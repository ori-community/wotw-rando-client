namespace app {
    struct __declspec(align(8)) TwirlSettings__Fields {
        float Strength;
        float PosVariation;
    };

    struct TwirlSettings {
        struct TwirlSettings__Class* klass;
        MonitorData* monitor;
        struct TwirlSettings__Fields fields;
    };

    struct EmissiveIndividualSettings {
        float Intensity;
        float SpreadAmount;
    };

    struct EmissiveIndividualSettings__Boxed {
        struct EmissiveIndividualSettings__Class* klass;
        MonitorData* monitor;
        struct EmissiveIndividualSettings fields;
    };

    struct __declspec(align(8)) EmissiveSettings__Fields {
        struct EmissiveIndividualSettings Emissive1;
        struct EmissiveIndividualSettings Emissive2;
        struct EmissiveIndividualSettings Emissive3;
        struct EmissiveIndividualSettings Emissive4;
        struct EmissiveIndividualSettings OriEmissiveSettingsMultiplier;
    };

    struct EmissiveSettings {
        struct EmissiveSettings__Class* klass;
        MonitorData* monitor;
        struct EmissiveSettings__Fields fields;
    };

    struct __declspec(align(8)) LightInfluenceSettings__Fields {
        struct List_1_LightInfluence_* InfluencePerLayer;
        struct Dictionary_2_LightPriority_Layer_LightInfluence_* m_influenceMap;
    };

    struct LightInfluenceSettings {
        struct LightInfluenceSettings__Class* klass;
        MonitorData* monitor;
        struct LightInfluenceSettings__Fields fields;
    };

    struct __declspec(align(8)) List_1_LightInfluence___Fields {
        struct LightInfluence__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_LightInfluence_ {
        struct List_1_LightInfluence___Class* klass;
        MonitorData* monitor;
        struct List_1_LightInfluence___Fields fields;
    };

    enum class LightPriority_Layer__Enum : int32_t {
        EnvironmentalLight = 0x00000000,
        EnemyLight = 0x00000064,
        Boss = 0x00000096,
        SmallPickupsAndOrbs = 0x000000c8,
        LargePickups = 0x0000012c,
        Ori = 0x00000190,
        Projectiles = 0x000001c2,
        TorchLight = 0x000001f4,
        WeaponFX = 0x00000258,
        Shadows = 0x000002bc,
        GetAbilityEffect = 0x00000320,
        Lightning = 0x00000352,
        OriContactLight = 0x00000384,
    };

    struct LightPriority_Layer__Enum__Boxed {
        struct LightPriority_Layer__Enum__Class* klass;
        MonitorData* monitor;
        LightPriority_Layer__Enum value;
    };

    struct __declspec(align(8)) LightInfluence__Fields {
        LightPriority_Layer__Enum Layer;

        float IntensityMultiplier;
    };

    struct LightInfluence {
        struct LightInfluence__Class* klass;
        MonitorData* monitor;
        struct LightInfluence__Fields fields;
    };

    struct LightInfluence__Array {
        struct LightInfluence__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct LightInfluence* vector[32];
    };

    struct IEnumerator_1_LightInfluence_ {
        struct IEnumerator_1_LightInfluence___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) Dictionary_2_LightPriority_Layer_LightInfluence___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_LightPriority_Layer_LightInfluence___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_LightPriority_Layer_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_LightPriority_Layer_LightInfluence_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_LightPriority_Layer_LightInfluence_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_LightPriority_Layer_LightInfluence_ {
        struct Dictionary_2_LightPriority_Layer_LightInfluence___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_LightPriority_Layer_LightInfluence___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_LightPriority_Layer_LightInfluence_ {
        int32_t hashCode;
        int32_t next;
        LightPriority_Layer__Enum key;

        struct LightInfluence* value;
    };

    struct Dictionary_2_TKey_TValue_Entry_LightPriority_Layer_LightInfluence___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_LightPriority_Layer_LightInfluence___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_LightPriority_Layer_LightInfluence_ fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_LightPriority_Layer_LightInfluence___Array {
        struct Dictionary_2_TKey_TValue_Entry_LightPriority_Layer_LightInfluence___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_LightPriority_Layer_LightInfluence_ vector[32];
    };

    struct IEqualityComparer_1_LightPriority_Layer_ {
        struct IEqualityComparer_1_LightPriority_Layer___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_LightPriority_Layer_LightInfluence___Fields {
        struct Dictionary_2_LightPriority_Layer_LightInfluence_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_LightPriority_Layer_LightInfluence_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_LightPriority_Layer_LightInfluence___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_LightPriority_Layer_LightInfluence___Fields fields;
    };

    struct LightPriority_Layer__Enum__Array {
        struct LightPriority_Layer__Enum__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        LightPriority_Layer__Enum vector[32];
    };

    struct IEnumerator_1_LightPriority_Layer_ {
        struct IEnumerator_1_LightPriority_Layer___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_LightPriority_Layer_LightInfluence___Fields {
        struct Dictionary_2_LightPriority_Layer_LightInfluence_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_LightPriority_Layer_LightInfluence_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_LightPriority_Layer_LightInfluence___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_LightPriority_Layer_LightInfluence___Fields fields;
    };

    struct ICollection_1_LightPriority_Layer_ {
        struct ICollection_1_LightPriority_Layer___Class* klass;
        MonitorData* monitor;
    };

    struct ICollection_1_LightInfluence_ {
        struct ICollection_1_LightInfluence___Class* klass;
        MonitorData* monitor;
    };

    struct KeyValuePair_2_LightPriority_Layer_LightInfluence_ {
        LightPriority_Layer__Enum key;

        struct LightInfluence* value;
    };

    struct KeyValuePair_2_LightPriority_Layer_LightInfluence___Boxed {
        struct KeyValuePair_2_LightPriority_Layer_LightInfluence___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_LightPriority_Layer_LightInfluence_ fields;
    };

    struct KeyValuePair_2_LightPriority_Layer_LightInfluence___Array {
        struct KeyValuePair_2_LightPriority_Layer_LightInfluence___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_LightPriority_Layer_LightInfluence_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_LightPriority_Layer_LightInfluence_ {
        struct IEnumerator_1_KeyValuePair_2_LightPriority_Layer_LightInfluence___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_LightPriority_Layer_ {
        struct IEnumerable_1_LightPriority_Layer___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_LightInfluence_ {
        struct IEnumerable_1_LightInfluence___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) ColorVariationSettings__Fields {
        float IntensityMultiplier;
        float SpeedMultiplier;
        float DarkFactorMultiplier;
        float LightFactorMultiplier;
    };

    struct ColorVariationSettings {
        struct ColorVariationSettings__Class* klass;
        MonitorData* monitor;
        struct ColorVariationSettings__Fields fields;
    };

    struct __declspec(align(8)) PlayerSettingsPerScene__Fields {
        float LightSize;
    };

    struct PlayerSettingsPerScene {
        struct PlayerSettingsPerScene__Class* klass;
        MonitorData* monitor;
        struct PlayerSettingsPerScene__Fields fields;
    };

    struct __declspec(align(8)) RenderingSettingsPerScene__Fields {
        bool FXAADepthPrecull;
        bool m_DeferredLightingEnabled;
        float DeferredLightingRenderTextureScale;
        bool OverrideDRSMagicPower;
        float m_DRSMagicPower;
        bool OverrideSceneRTDRSDownscaleCap;
        int32_t m_sceneRTDRSDownscaleCap;
        bool OverrideSceneRTDRSDownscaleYCap;
        int32_t m_sceneRTDRSDownscaleYCap;
    };

    struct RenderingSettingsPerScene {
        struct RenderingSettingsPerScene__Class* klass;
        MonitorData* monitor;
        struct RenderingSettingsPerScene__Fields fields;
    };

    struct __declspec(align(8)) CameraSettings__Fields {
        struct VignettingSettings* Vignetting;
        struct NoiseSettings* Noise;
        struct ContrastSettings* Contrast;
        struct DesaturationSettings* Desaturation;
        struct ColorCorrectionSettings* ColorCorrection;
        struct BloomSettings* BloomSettings;
        struct TwirlSettings* TwirlSettings;
        struct EmissiveSettings* EmissiveSettings;
        struct LightInfluenceSettings* LightInfluenceSettings;
        struct ColorVariationSettings* ColorVariationSettings;
        struct PlayerSettingsPerScene* PlayerSettingsPerScene;
        struct RenderingSettingsPerScene* RenderingSettingsPerScene;
        struct CameraSettings_AnimateJobData* JobData;
        struct Color Fog;
        struct Color__Array* FogGradient;
        struct Color__Array* MultiplyFogGradient;
        float FogRange;
        bool ForceApply;
    };

    struct CameraSettings {
        struct CameraSettings__Class* klass;
        MonitorData* monitor;
        struct CameraSettings__Fields fields;
    };

    struct NativeArray_1_UnityEngine_Color_ {
        struct Void* m_Buffer;
        int32_t m_Length;
        Allocator__Enum m_AllocatorLabel;
    };

    struct NativeArray_1_UnityEngine_Color___Boxed {
        struct NativeArray_1_UnityEngine_Color___Class* klass;
        MonitorData* monitor;
        struct NativeArray_1_UnityEngine_Color_ fields;
    };

    struct BlendGradientColorsJob {
        struct NativeArray_1_UnityEngine_Color_ ColA;
        struct NativeArray_1_UnityEngine_Color_ ColB;
        float CurveValue;
        struct NativeArray_1_UnityEngine_Color_ Result;
    };

    struct BlendGradientColorsJob__Boxed {
        struct BlendGradientColorsJob__Class* klass;
        MonitorData* monitor;
        struct BlendGradientColorsJob fields;
    };

    struct __declspec(align(8)) CameraSettings_AnimateJobData__Fields {
        struct BlendGradientColorsJob GradientJob;
        struct BlendGradientColorsJob GradientMultJob;
        struct JobHandle GradientJobHandle;
        struct JobHandle GradientMultJobHandle;
        bool IsRunningJob;
    };

    struct CameraSettings_AnimateJobData {
        struct CameraSettings_AnimateJobData__Class* klass;
        MonitorData* monitor;
        struct CameraSettings_AnimateJobData__Fields fields;
    };

    struct CameraSettingOverrides__Array {
        struct CameraSettingOverrides__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct CameraSettingOverrides* vector[32];
    };

    struct IEnumerator_1_CameraSettingOverrides_ {
        struct IEnumerator_1_CameraSettingOverrides___Class* klass;
        MonitorData* monitor;
    };

    struct DepthOfFieldController__Fields {
        struct MonoBehaviour__Fields _;
        struct SliceRenderSettings* m_sliceRenderSettings;
        struct AnimationCurve* DepthOfFieldCurve;
        float CurveDisplacement;
        float CurveZExtend;
        float DofDepthMin;
        float DofDepthMax;
        struct Keyframe__Array* m_newKeys;
        struct Single__Array* m_originalTimes;
    };

    struct DepthOfFieldController {
        struct DepthOfFieldController__Class* klass;
        MonitorData* monitor;
        struct DepthOfFieldController__Fields fields;
    };

    struct __declspec(align(8)) SliceRenderSettings__Fields {
        struct SliceRenderSettings_Slice__Array* slices;
        bool AllowDofOnAllSlices;
        int32_t _NoDofSliceA_k__BackingField;
        int32_t _NoDofSliceB_k__BackingField;
        bool m_noDofSliceCalculated;
    };

    struct SliceRenderSettings {
        struct SliceRenderSettings__Class* klass;
        MonitorData* monitor;
        struct SliceRenderSettings__Fields fields;
    };

    struct SliceRenderSettings_Slice {
        float downnsampleRatio;
        float blurAmount;
    };

    struct SliceRenderSettings_Slice__Boxed {
        struct SliceRenderSettings_Slice__Class* klass;
        MonitorData* monitor;
        struct SliceRenderSettings_Slice fields;
    };

    struct SliceRenderSettings_Slice__Array {
        struct SliceRenderSettings_Slice__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct SliceRenderSettings_Slice vector[32];
    };

    struct MotionBlurController__Fields {
        struct MonoBehaviour__Fields _;
        struct Single__Array* m_Keys;
    };

    struct MotionBlurController {
        struct MotionBlurController__Class* klass;
        MonitorData* monitor;
        struct MotionBlurController__Fields fields;
    };

    struct __declspec(align(8)) TurbulenceOverride__Fields {
        struct TurbulenceSettings* TurbulenceSettings;
        float TurbulenceStrengthMult;
        float TurbulenceSpeedMult;
    };

    struct TurbulenceOverride {
        struct TurbulenceOverride__Class* klass;
        MonitorData* monitor;
        struct TurbulenceOverride__Fields fields;
    };

    struct TurbulenceSettings__Fields {
        struct ScriptableObject__Fields _;
        struct AnimationCurve* TurbulenceCurve;
        float TurbulenceMagnitude;
        float TurbulenceSpeed;
        float TurbulenceValueOffset;
        struct AnimationCurve* TurbulenceSpeedOverTime;
        struct AnimationCurve* TurbulenceMagnitudeOverTime;
        float Scale;
        float TimeLineStr;
        float TimeLineSpeed;
        struct Keyframe__Array* m_keys;
        struct Texture2D* m_turbulenceTexture;
        bool m_didCalcDuration;
        float m_duration;
    };

    struct TurbulenceSettings {
        struct TurbulenceSettings__Class* klass;
        MonitorData* monitor;
        struct TurbulenceSettings__Fields fields;
    };

    struct DynamicLightsSettings__Fields {
        struct ScriptableObject__Fields _;
        struct Vector3 LightBandsDepths;
        bool SimulateCompression;
        bool SynthesizeFront;
        struct Vector4 MaskAttenuationParams;
        bool FullIntensity;
    };

    struct DynamicLightsSettings {
        struct DynamicLightsSettings__Class* klass;
        MonitorData* monitor;
        struct DynamicLightsSettings__Fields fields;
    };

    struct FogGradientController__Fields {
        struct MonoBehaviour__Fields _;
        struct Gradient* FogGradient;
        struct Gradient* MultiplyFogGradient;
        float FogRange;
    };

    struct FogGradientController {
        struct FogGradientController__Class* klass;
        MonitorData* monitor;
        struct FogGradientController__Fields fields;
    };

    struct __declspec(align(8)) SceneSettings__Fields {
        struct CameraSettings* CameraSettings;
        struct DepthOfFieldController* DepthOfFieldController;
        struct LayeredRenderSettings* LayeredRenderSettings;
        float FieldOfView;
        struct Vector3 DefaultCameraZoom;
        struct TurbulenceOverride* TurbulenceSettings;
        float BlurredBackgroundDepth;
        struct MotionBlurController* MotionBlurController;
        float SceneBrightness;
        float DynamicBrightnessWeight;
        bool OverrideBlitColorHiResOpaque3DBlurThreshold;
        float BlitColorHiResOpaque3DBlurThreshold;
        bool OverrideAlphaDepthThreshold;
        float AlphaDepthThreshold;
    };

    struct SceneSettings {
        struct SceneSettings__Class* klass;
        MonitorData* monitor;
        struct SceneSettings__Fields fields;
    };

    struct MixerGroupSettings {
        float Music;
        float MusicLoops;
        float MusicStingers;
        float SoundEffects;
        float AmbienceQuad;
        float AmbiencePoint;
        float EnemiesAttack;
        float EnemiesFoley;
        float Foley;
        float Footsteps;
        float Attacks;
        float Destruction;
        float UI;
        float SpiritTree;
        float Sein;
        float Doors;
        float Cutscenes;
        float Props;
        float Collectibles;
        float Underwater;
        float Reverb;
        float m_prevMusic;
        float m_prevMusicLoops;
        float m_prevMusicStingers;
        float m_prevSoundEffects;
        float m_prevAmbienceQuad;
        float m_prevAmbiencePoint;
        float m_prevEnemiesAttack;
        float m_prevEnemiesFoley;
        float m_prevFoley;
        float m_prevFootsteps;
        float m_prevAttacks;
        float m_prevDestruction;
        float m_prevUI;
        float m_prevSpiritTree;
        float m_prevSein;
        float m_prevDoors;
        float m_prevCutscenes;
        float m_prevProps;
        float m_prevCollectibles;
        float m_prevUnderwater;
        float m_prevReverb;
    };

    struct MixerGroupSettings__Boxed {
        struct MixerGroupSettings__Class* klass;
        MonitorData* monitor;
        struct MixerGroupSettings fields;
    };

    enum class MixerSnapshot_MixerSnapshotState__Enum : int32_t {
        FadingIn = 0x00000000,
        FadingOut = 0x00000001,
        Inactive = 0x00000002,
        Active = 0x00000003,
    };

    struct MixerSnapshot_MixerSnapshotState__Enum__Boxed {
        struct MixerSnapshot_MixerSnapshotState__Enum__Class* klass;
        MonitorData* monitor;
        MixerSnapshot_MixerSnapshotState__Enum value;
    };

    struct MixerSnapshot__Fields {
        struct ScriptableObject__Fields _;
        float FadeInTime;
        float FadeOutTime;
        struct MixerGroupSettings SnapshotSettings;
        float m_fadeTime;
        MixerSnapshot_MixerSnapshotState__Enum m_state;
    };

    struct MixerSnapshot {
        struct MixerSnapshot__Class* klass;
        MonitorData* monitor;
        struct MixerSnapshot__Fields fields;
    };

    struct Action_1_SceneRoot___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Action_1_SceneRoot_ {
        struct Action_1_SceneRoot___Class* klass;
        MonitorData* monitor;
        struct Action_1_SceneRoot___Fields fields;
    };

    struct __declspec(align(8)) HashSet_1_UnityEngine_GameObject___Fields {
        struct Int32__Array* _buckets;
        struct HashSet_1_T_Slot_UnityEngine_GameObject___Array* _slots;
        int32_t _count;
        int32_t _lastIndex;
        int32_t _freeList;
        struct IEqualityComparer_1_UnityEngine_GameObject_* _comparer;
        int32_t _version;
        struct SerializationInfo* _siInfo;
    };

    struct HashSet_1_UnityEngine_GameObject_ {
        struct HashSet_1_UnityEngine_GameObject___Class* klass;
        MonitorData* monitor;
        struct HashSet_1_UnityEngine_GameObject___Fields fields;
    };

    struct HashSet_1_T_Slot_UnityEngine_GameObject_ {
        int32_t hashCode;
        int32_t next;
        struct GameObject* value;
    };

    struct HashSet_1_T_Slot_UnityEngine_GameObject___Boxed {
        struct HashSet_1_T_Slot_UnityEngine_GameObject___Class* klass;
        MonitorData* monitor;
        struct HashSet_1_T_Slot_UnityEngine_GameObject_ fields;
    };

    struct HashSet_1_T_Slot_UnityEngine_GameObject___Array {
        struct HashSet_1_T_Slot_UnityEngine_GameObject___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct HashSet_1_T_Slot_UnityEngine_GameObject_ vector[32];
    };

    struct ApplyTurbulentForce__Fields {
        struct MonoBehaviour__Fields _;
        bool IsManagedByPhysicsSystemManager;
        struct Vector3 ForceMultiplier;
        float TurbulenceFrequency;
        float TurbulenceMagnitude;
        float TurbulenceOffset;
        struct Rigidbody* m_rigidBody;
        struct Vector3 m_initialPosition;
        bool _IsSuspended_k__BackingField;
        SuspendableMask__Enum m_suspensionMask;
    };

    struct ApplyTurbulentForce {
        struct ApplyTurbulentForce__Class* klass;
        MonitorData* monitor;
        struct ApplyTurbulentForce__Fields fields;
    };

    struct ApplyTurbulentForce__Array {
        struct ApplyTurbulentForce__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct ApplyTurbulentForce* vector[32];
    };

    struct __declspec(align(8)) PhysicsUpdateHandlerManager__Fields {
        struct IPhysicsUpdateHandler__Array* m_updateHandlers;
        struct IPhysicsUpdateHandler__Array* m_updateHandlersFixed;
        struct IJobSystem__Array* m_jobSystems;
        struct IJobSystem__Array* m_jobSystemsFixed;
    };

    struct PhysicsUpdateHandlerManager {
        struct PhysicsUpdateHandlerManager__Class* klass;
        MonitorData* monitor;
        struct PhysicsUpdateHandlerManager__Fields fields;
    };

    struct IPhysicsUpdateHandler {
        struct IPhysicsUpdateHandler__Class* klass;
        MonitorData* monitor;
    };

    struct IPhysicsUpdateHandler__Array {
        struct IPhysicsUpdateHandler__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct IPhysicsUpdateHandler* vector[32];
    };

    struct IJobSystem {
        struct IJobSystem__Class* klass;
        MonitorData* monitor;
    };

    struct IJobSystem__Array {
        struct IJobSystem__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct IJobSystem* vector[32];
    };

    struct __declspec(align(8)) Dictionary_2_System_Type_Moon_PhysicsUpdateHandlerAttribute___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_System_Type_Moon_PhysicsUpdateHandlerAttribute___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_System_Type_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_Moon_PhysicsUpdateHandlerAttribute_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_Moon_PhysicsUpdateHandlerAttribute_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_System_Type_Moon_PhysicsUpdateHandlerAttribute_ {
        struct Dictionary_2_System_Type_Moon_PhysicsUpdateHandlerAttribute___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_System_Type_Moon_PhysicsUpdateHandlerAttribute___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Type_Moon_PhysicsUpdateHandlerAttribute_ {
        int32_t hashCode;
        int32_t next;
        struct Type* key;
        struct PhysicsUpdateHandlerAttribute* value;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Type_Moon_PhysicsUpdateHandlerAttribute___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_System_Type_Moon_PhysicsUpdateHandlerAttribute___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_System_Type_Moon_PhysicsUpdateHandlerAttribute_ fields;
    };

    struct __declspec(align(8)) PhysicsUpdateHandlerAttribute__Fields {
        bool _UseFixedUpdate_k__BackingField;
        struct Type* _JobSystemType_k__BackingField;
        struct Type* EntityType;
    };

    struct PhysicsUpdateHandlerAttribute {
        struct PhysicsUpdateHandlerAttribute__Class* klass;
        MonitorData* monitor;
        struct PhysicsUpdateHandlerAttribute__Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Type_Moon_PhysicsUpdateHandlerAttribute___Array {
        struct Dictionary_2_TKey_TValue_Entry_System_Type_Moon_PhysicsUpdateHandlerAttribute___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_System_Type_Moon_PhysicsUpdateHandlerAttribute_ vector[32];
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Type_Moon_PhysicsUpdateHandlerAttribute___Fields {
        struct Dictionary_2_System_Type_Moon_PhysicsUpdateHandlerAttribute_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_Moon_PhysicsUpdateHandlerAttribute_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_Moon_PhysicsUpdateHandlerAttribute___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_Moon_PhysicsUpdateHandlerAttribute___Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Type_Moon_PhysicsUpdateHandlerAttribute___Fields {
        struct Dictionary_2_System_Type_Moon_PhysicsUpdateHandlerAttribute_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_Moon_PhysicsUpdateHandlerAttribute_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_Moon_PhysicsUpdateHandlerAttribute___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_Moon_PhysicsUpdateHandlerAttribute___Fields fields;
    };

    struct PhysicsUpdateHandlerAttribute__Array {
        struct PhysicsUpdateHandlerAttribute__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct PhysicsUpdateHandlerAttribute* vector[32];
    };

    struct IEnumerator_1_Moon_PhysicsUpdateHandlerAttribute_ {
        struct IEnumerator_1_Moon_PhysicsUpdateHandlerAttribute___Class* klass;
        MonitorData* monitor;
    };

    struct ICollection_1_Moon_PhysicsUpdateHandlerAttribute_ {
        struct ICollection_1_Moon_PhysicsUpdateHandlerAttribute___Class* klass;
        MonitorData* monitor;
    };

    struct KeyValuePair_2_System_Type_Moon_PhysicsUpdateHandlerAttribute_ {
        struct Type* key;
        struct PhysicsUpdateHandlerAttribute* value;
    };

    struct KeyValuePair_2_System_Type_Moon_PhysicsUpdateHandlerAttribute___Boxed {
        struct KeyValuePair_2_System_Type_Moon_PhysicsUpdateHandlerAttribute___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_System_Type_Moon_PhysicsUpdateHandlerAttribute_ fields;
    };

    struct KeyValuePair_2_System_Type_Moon_PhysicsUpdateHandlerAttribute___Array {
        struct KeyValuePair_2_System_Type_Moon_PhysicsUpdateHandlerAttribute___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_System_Type_Moon_PhysicsUpdateHandlerAttribute_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_System_Type_Moon_PhysicsUpdateHandlerAttribute_ {
        struct IEnumerator_1_KeyValuePair_2_System_Type_Moon_PhysicsUpdateHandlerAttribute___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_Moon_PhysicsUpdateHandlerAttribute_ {
        struct IEnumerable_1_Moon_PhysicsUpdateHandlerAttribute___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_RigidbodyState___Fields {
        struct RigidbodyState__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_RigidbodyState_ {
        struct List_1_RigidbodyState___Class* klass;
        MonitorData* monitor;
        struct List_1_RigidbodyState___Fields fields;
    };

    struct IEnumerator_1_RigidbodyState_ {
        struct IEnumerator_1_RigidbodyState___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_Moon_TimeSlicer_ITimeSlicedPostEnableObserver___Fields {
        struct ITimeSlicedPostEnableObserver__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Moon_TimeSlicer_ITimeSlicedPostEnableObserver_ {
        struct List_1_Moon_TimeSlicer_ITimeSlicedPostEnableObserver___Class* klass;
        MonitorData* monitor;
        struct List_1_Moon_TimeSlicer_ITimeSlicedPostEnableObserver___Fields fields;
    };

    struct ITimeSlicedPostEnableObserver {
        struct ITimeSlicedPostEnableObserver__Class* klass;
        MonitorData* monitor;
    };

    struct ITimeSlicedPostEnableObserver__Array {
        struct ITimeSlicedPostEnableObserver__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct ITimeSlicedPostEnableObserver* vector[32];
    };

    struct IEnumerator_1_Moon_TimeSlicer_ITimeSlicedPostEnableObserver_ {
        struct IEnumerator_1_Moon_TimeSlicer_ITimeSlicedPostEnableObserver___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_Moon_TimeSlicer_ITimeSlicedPreDisableObserver___Fields {
        struct ITimeSlicedPreDisableObserver__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Moon_TimeSlicer_ITimeSlicedPreDisableObserver_ {
        struct List_1_Moon_TimeSlicer_ITimeSlicedPreDisableObserver___Class* klass;
        MonitorData* monitor;
        struct List_1_Moon_TimeSlicer_ITimeSlicedPreDisableObserver___Fields fields;
    };

    struct ITimeSlicedPreDisableObserver {
        struct ITimeSlicedPreDisableObserver__Class* klass;
        MonitorData* monitor;
    };

    struct ITimeSlicedPreDisableObserver__Array {
        struct ITimeSlicedPreDisableObserver__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct ITimeSlicedPreDisableObserver* vector[32];
    };

    struct IEnumerator_1_Moon_TimeSlicer_ITimeSlicedPreDisableObserver_ {
        struct IEnumerator_1_Moon_TimeSlicer_ITimeSlicedPreDisableObserver___Class* klass;
        MonitorData* monitor;
    };

    struct PhysicalSystemManager__Array {
        struct PhysicalSystemManager__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct PhysicalSystemManager* vector[32];
    };

    struct IEnumerator_1_PhysicalSystemManager_ {
        struct IEnumerator_1_PhysicalSystemManager___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) EntityPlaceholder_BaseEntityPlaceholderSettings__Fields {
        float MaxHealth;
        float MaxSensorRadius;
        float LoseSightRadius;
        int32_t NumberOfExperienceOrbs;
        bool ShouldSpawnExpOrbs;
        bool ShouldSpawnLoot;
        int32_t NumberOfHealthOrbs;
        int32_t NumberOfEnergyOrbs;
    };

    struct EntityPlaceholder_BaseEntityPlaceholderSettings {
        struct EntityPlaceholder_BaseEntityPlaceholderSettings__Class* klass;
        MonitorData* monitor;
        struct EntityPlaceholder_BaseEntityPlaceholderSettings__Fields fields;
    };

    struct __declspec(align(8)) AllowedEntityArea__Fields {
        struct List_1_UnityEngine_Rect_* m_bounds;
        struct Rect m_simplifiedOverlapingRect;
        bool _Forgotten_k__BackingField;
    };

    struct AllowedEntityArea {
        struct AllowedEntityArea__Class* klass;
        MonitorData* monitor;
        struct AllowedEntityArea__Fields fields;
    };

    struct __declspec(align(8)) MoonReference_1_ILocomotionTurningHandler___Fields {
        struct MoonTypeData m_data;
        bool m_isInitialized;
        bool m_isStatic;
        bool m_canResolve;
        struct IMoonTypeResolver* m_resolver;
        struct IMoonType_1_ILocomotionTurningHandler_* m_cachedProxyType;
        struct ILocomotionTurningHandler* m_volatileValue;
    };

    struct MoonReference_1_ILocomotionTurningHandler_ {
        struct MoonReference_1_ILocomotionTurningHandler___Class* klass;
        MonitorData* monitor;
        struct MoonReference_1_ILocomotionTurningHandler___Fields fields;
    };

    struct IMoonType_1_ILocomotionTurningHandler_ {
        struct IMoonType_1_ILocomotionTurningHandler___Class* klass;
        MonitorData* monitor;
    };

    struct IPooled {
        struct IPooled__Class* klass;
        MonitorData* monitor;
    };

    struct IPooled__Array {
        struct IPooled__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct IPooled* vector[32];
    };

    struct __declspec(align(8)) List_1_Moon_AxisAlignedBox___Fields {
        struct AxisAlignedBox__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Moon_AxisAlignedBox_ {
        struct List_1_Moon_AxisAlignedBox___Class* klass;
        MonitorData* monitor;
        struct List_1_Moon_AxisAlignedBox___Fields fields;
    };

    enum class PrimitiveSpace__Enum : int32_t {
        Local = 0x00000000,
        World = 0x00000001,
        Root = 0x00000002,
    };

    struct PrimitiveSpace__Enum__Boxed {
        struct PrimitiveSpace__Enum__Class* klass;
        MonitorData* monitor;
        PrimitiveSpace__Enum value;
    };

    struct __declspec(align(8)) Primitive__Fields {
        PrimitiveSpace__Enum m_space;
    };

} // namespace app
