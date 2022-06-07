namespace app {
struct EnvironmentLightingModifier__StaticFields {
    int32_t s_turbSetMain;
    int32_t s_turbSetBounce;
    int32_t s_turbScaleMain;
    int32_t s_turbScaleBounce;
};

struct EnvironmentLightingModifier__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EnvironmentLightingModifier__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EnvironmentLightingModifier__VTable vtable;
};

enum class EnvironmentLight_Channel__Enum : int32_t {
    Ori = 0x00000000,
    Naru = 0x00000001,
    Effects = 0x00000002,
    Enemies = 0x00000003,
};

struct EnvironmentLight_Channel__Enum__Boxed {
    struct EnvironmentLight_Channel__Enum__Class *klass;
    MonitorData *monitor;
    EnvironmentLight_Channel__Enum value;
    
};

struct EnvironmentTintModifier__Fields {
    struct EnvironmentShadingModifier__Fields _;
    EnvironmentLight_Channel__Enum Channel;
    
    struct UberShaderFloat *TintStrength;
    int32_t m_envTintColorID;
};

struct EnvironmentTintModifier {
    struct EnvironmentTintModifier__Class *klass;
    MonitorData *monitor;
    struct EnvironmentTintModifier__Fields fields;
};

struct EnvironmentLight_Channel__Enum__VTable {
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

struct EnvironmentLight_Channel__Enum__StaticFields {
};

struct EnvironmentLight_Channel__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EnvironmentLight_Channel__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EnvironmentLight_Channel__Enum__VTable vtable;
};

struct EnvironmentTintModifier__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_TypeId;
    VirtualInvokeData DoStrip;
    VirtualInvokeData SetProperties;
    VirtualInvokeData Awake;
    VirtualInvokeData get_IsProcedural;
    VirtualInvokeData Randomize;
    VirtualInvokeData GetRandomizeOptions;
    VirtualInvokeData UberShaderEditorUpdate;
    VirtualInvokeData ApplyMultipliers;
    VirtualInvokeData OnPresetCreation;
    VirtualInvokeData GetQuadExpandSize;
    VirtualInvokeData NeedsMipMap;
    VirtualInvokeData DoStrip_1;
    VirtualInvokeData ImplementsAlphaMasking;
    VirtualInvokeData GetKeywordsForShader;
    VirtualInvokeData GetBaseVertexTextureNames;
    VirtualInvokeData GetBaseShaderProperties;
    VirtualInvokeData RequiresNormals;
    VirtualInvokeData RequiresTangent;
    VirtualInvokeData RequiresVertexColor;
    VirtualInvokeData RequiresUv2;
    VirtualInvokeData RequiresUv3;
    VirtualInvokeData RequiresUv4;
    VirtualInvokeData RequiresUv5;
    VirtualInvokeData RequiresUv6;
    VirtualInvokeData DoesChangeShape;
    VirtualInvokeData UpdateBaseBind;
    VirtualInvokeData BindNow;
    VirtualInvokeData ClearBind;
};

struct EnvironmentTintModifier__StaticFields {
};

struct EnvironmentTintModifier__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EnvironmentTintModifier__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EnvironmentTintModifier__VTable vtable;
};

enum class UberInteractionManager_InteractionCurveType__Enum : int32_t {
    Default = 0x00000000,
    Light = 0x00000001,
};

struct UberInteractionManager_InteractionCurveType__Enum__Boxed {
    struct UberInteractionManager_InteractionCurveType__Enum__Class *klass;
    MonitorData *monitor;
    UberInteractionManager_InteractionCurveType__Enum value;
    
};

struct UberInteractionModifier_Interaction {
    struct Vector3 SetPos;
    float m_lastTime;
};

struct UberInteractionModifier_Interaction__Boxed {
    struct UberInteractionModifier_Interaction__Class *klass;
    MonitorData *monitor;
    struct UberInteractionModifier_Interaction fields;
};

struct UberInteractionModifier__Fields {
    struct UberShaderModifier__Fields _;
    float SizeShrink;
    UberInteractionManager_InteractionCurveType__Enum CurveType;
    
    struct UberInteractionModifier_Interaction m_interactionA;
    struct UberInteractionModifier_Interaction m_interactionB;
    float m_maxRadius;
    struct Rect m_velRect;
    struct Rect m_rendRect;
    struct Vector3 m_pos;
    int32_t _Index_k__BackingField;
    bool _IsRegistered_k__BackingField;
    bool _WantsToRegister_k__BackingField;
    struct Bounds m_bounds;
    struct Vector3 m_boundsMin;
    struct Vector3 m_boundsMax;
    bool m_boundsSet;
    float m_prevSetTimeA;
    float m_lastStrengthA;
    float m_prevSetTimeB;
    float m_lastStrengthB;
    float m_duration;
    int32_t m_posId;
    int32_t m_velId;
    int32_t m_paramsId;
    int32_t m_params2Id;
    bool m_didInitializeMaterialParameterShadowCopy;
    struct Vector4 m_posShadowCopy;
    struct Vector4 m_velShadowCopy;
    struct Vector4 m_paramsShadowCopy;
    struct Vector4 m_params2ShadowCopy;
};

struct UberInteractionModifier {
    struct UberInteractionModifier__Class *klass;
    MonitorData *monitor;
    struct UberInteractionModifier__Fields fields;
};

struct InteractionLightModifier__Fields {
    struct UberInteractionModifier__Fields _;
    struct UberShaderTexture *LightMask;
    struct UberShaderColor *LightColor;
    struct UberShaderColor *Tint;
    float Strength;
    struct UberShaderVector *Settings;
};

struct InteractionLightModifier {
    struct InteractionLightModifier__Class *klass;
    MonitorData *monitor;
    struct InteractionLightModifier__Fields fields;
};

struct UberInteractionActor__Fields {
    struct MonoBehaviour__Fields _;
    float Radius;
    float ZScale;
    struct Vector4 Strength;
    struct Vector3 PrevPos;
    struct GameObject *SplashPrefab;
    bool OverrideSplash;
    bool ForceSplashOnEnterAndExit;
    bool UseCooldownForSplash;
    float SplashCooldown;
    struct UberWaterControl *_Water_k__BackingField;
    bool OnlyWater;
    int32_t PrewarmAmount;
    bool LimitAmountOfActiveInstances;
    bool StripForNintendoSwitch;
    float m_splashesCooldownTimer;
    struct InstantiationRecycleHelper *SplashRecycler;
    struct SphereCollider *m_sphereCollider;
    bool m_sphereColliderCached;
    struct Event_1 *WaterEnterOverrideSoundEvent;
    struct SoundHost *SoundHost;
    struct SoundProvider *WaterEnter;
    int32_t Priority;
    float m_prevTime;
    bool m_inited;
    int32_t m_frame;
    int32_t m_actorId;
    bool m_hasActorId;
};

struct UberInteractionActor {
    struct UberInteractionActor__Class *klass;
    MonitorData *monitor;
    struct UberInteractionActor__Fields fields;
};

enum class UberWaterControl_BoundsType__Enum : uint8_t {
    Invalid = 0x00,
    FromTopPlane = 0x01,
    FromScale = 0x02,
};

struct UberWaterControl_BoundsType__Enum__Boxed {
    struct UberWaterControl_BoundsType__Enum__Class *klass;
    MonitorData *monitor;
    UberWaterControl_BoundsType__Enum value;
    
};

struct UberWaterControl__Fields {
    struct MonoBehaviour__Fields _;
    float Damping;
    float Elasticity;
    float WaveSpeed;
    float ForceRaisePower;
    float MaxWaveHeight;
    float WaveHeightScale;
    float WaterlineRaisePower;
    float NoiseStrength;
    float NoiseSpeed;
    float NoiseScale;
    float VerticesPerMeterWaveline;
    float RainFrequency;
    float RainPower;
    float ZScale;
    float TessDamping;
    float TessElasticity;
    float TessWaveSpeed;
    float DirectionXMultiplier;
    float DirectionYMultiplier;
    struct AnimationCurve *RainPowerSpread;
    float RainRadius;
    float RaindRadiusSpread;
    struct Texture2D *NoiseTexture;
    bool RenderReflections;
    bool ReflectionBlur;
    float ReflectionBlurSize;
    struct GameObject *SplashPrefab;
    float SplashSpawnAtPower;
    bool CrossSection;
    float ExtendFront;
    float ExtendBack;
    float ExtendLeft;
    float ExtendRight;
    float WaterlineSimDepth;
    bool UseHighRes;
    bool EnableSimulation;
    bool WriteMapAsGlobalShaderTexture;
    struct Shader *SeinWaterUpdateShader;
    struct Shader *SeinWaterBlurShader;
    struct Material *TopMaterial;
    struct Material *CrossMaterial;
    struct Material *EdgeMaterial;
    bool DoSim;
    bool UseDisplacement;
    bool ExcludeFromSurfaceDistanceChecks;
    bool AllowSplashes;
    bool m_timelineUpdate;
    struct Vector3 m_oldScale;
    int32_t m_resolutionX;
    int32_t m_resolutionY;
    RenderTextureFormat__Enum m_fmt;
    
    float m_rainToDo;
    struct Material *m_waterMat1;
    struct Material *m_waterMat2;
    struct RenderTexture *m_waterHeight;
    struct RenderTexture *m_waterHeightDraw;
    struct Queue_1_UberWaterControl_ImpactBuf___Array *m_impacts;
    struct Queue_1_UberWaterControl_ImpactBuf___Array *m_impactsTess;
    float m_lastTime;
    float m_prevDeltTime;
    struct Material *m_blurMaterial;
    float m_simTime;
    bool m_visualDebugRegistered;
    struct UberWaterTop *m_topPlaneReflection;
    struct MeshFilter *m_topPlaneMeshFilter;
    struct Transform *transform;
    int32_t _IInteractable_Index_k__BackingField;
    bool _IInteractable_IsRegistered_k__BackingField;
    struct Vector3 BoundaryPaddingMin;
    struct Vector3 BoundaryPaddingMax;
    UberWaterControl_BoundsType__Enum m_BoundsType;
    
    struct Bounds m_Bounds;
    struct Bounds m_BoundsInteraction;
    struct Renderer *m_topPlaneRenderer;
    bool m_awakeCalled;
    bool m_registered;
    bool m_insideFrustum;
    SuspendableMask__Enum _Moon_ISuspendable_Mask_k__BackingField;
    
    bool _Moon_ISuspendable_IsSuspended_k__BackingField;
};

struct UberWaterControl {
    struct UberWaterControl__Class *klass;
    MonitorData *monitor;
    struct UberWaterControl__Fields fields;
};

struct __declspec(align(8)) List_1_UberWaterControl_SplashInfo___Fields {
    struct UberWaterControl_SplashInfo__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_UberWaterControl_SplashInfo_ {
    struct List_1_UberWaterControl_SplashInfo___Class *klass;
    MonitorData *monitor;
    struct List_1_UberWaterControl_SplashInfo___Fields fields;
};

struct UberWaterControl_SplashInfo {
    float Time;
    struct Vector3 Position;
};

struct UberWaterControl_SplashInfo__Boxed {
    struct UberWaterControl_SplashInfo__Class *klass;
    MonitorData *monitor;
    struct UberWaterControl_SplashInfo fields;
};

struct UberWaterControl_SplashInfo__Array {
    struct UberWaterControl_SplashInfo__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct UberWaterControl_SplashInfo vector[32];
};

struct IEnumerator_1_UberWaterControl_SplashInfo_ {
    struct IEnumerator_1_UberWaterControl_SplashInfo___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Queue_1_UberWaterControl_ImpactBuf___Fields {
    struct UberWaterControl_ImpactBuf__Array *_array;
    int32_t _head;
    int32_t _tail;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct Queue_1_UberWaterControl_ImpactBuf_ {
    struct Queue_1_UberWaterControl_ImpactBuf___Class *klass;
    MonitorData *monitor;
    struct Queue_1_UberWaterControl_ImpactBuf___Fields fields;
};

struct UberWaterControl_ImpactBuf {
    float Power;
    float Radius;
    struct Vector2 Uv;
};

struct UberWaterControl_ImpactBuf__Boxed {
    struct UberWaterControl_ImpactBuf__Class *klass;
    MonitorData *monitor;
    struct UberWaterControl_ImpactBuf fields;
};

struct UberWaterControl_ImpactBuf__Array {
    struct UberWaterControl_ImpactBuf__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct UberWaterControl_ImpactBuf vector[32];
};

struct IEnumerator_1_UberWaterControl_ImpactBuf_ {
    struct IEnumerator_1_UberWaterControl_ImpactBuf___Class *klass;
    MonitorData *monitor;
};

struct Queue_1_UberWaterControl_ImpactBuf___Array {
    struct Queue_1_UberWaterControl_ImpactBuf___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Queue_1_UberWaterControl_ImpactBuf_ *vector[32];
};

struct __declspec(align(8)) AllContainer_1_UberWaterControl___Fields {
    struct List_1_UberWaterControl_ *m_objects;
};

struct AllContainer_1_UberWaterControl_ {
    struct AllContainer_1_UberWaterControl___Class *klass;
    MonitorData *monitor;
    struct AllContainer_1_UberWaterControl___Fields fields;
};

struct __declspec(align(8)) List_1_UberWaterControl___Fields {
    struct UberWaterControl__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_UberWaterControl_ {
    struct List_1_UberWaterControl___Class *klass;
    MonitorData *monitor;
    struct List_1_UberWaterControl___Fields fields;
};

struct UberWaterControl__Array {
    struct UberWaterControl__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct UberWaterControl *vector[32];
};

struct IEnumerator_1_UberWaterControl_ {
    struct IEnumerator_1_UberWaterControl___Class *klass;
    MonitorData *monitor;
};

struct UberWaterComponent__Fields {
    struct MonoBehaviour__Fields _;
    struct UberWaterControl *m_control;
    struct MeshFilter *m_filter;
};

struct UberWaterComponent {
    struct UberWaterComponent__Class *klass;
    MonitorData *monitor;
    struct UberWaterComponent__Fields fields;
};

enum class UberWaterReflectionView_UpdateMode__Enum : int32_t {
    Interleaved = 0x00000000,
    Static = 0x00000001,
    Always = 0x00000002,
};

struct UberWaterReflectionView_UpdateMode__Enum__Boxed {
    struct UberWaterReflectionView_UpdateMode__Enum__Class *klass;
    MonitorData *monitor;
    UberWaterReflectionView_UpdateMode__Enum value;
    
};

struct UberWaterTop__Fields {
    struct UberWaterComponent__Fields _;
    bool Blur;
    float BlurSize;
    struct Material *TopWaterMat;
    bool UseQuadSubdivisionNew;
    int32_t SubdivisionResolution;
    float SliceOverdrawAmount;
    struct Mesh *m_normalMesh;
    struct Renderer *m_renderer;
    struct UberWaterReflectionGroup *group;
    bool allowAutomaticGrouping;
    UberWaterReflectionView_UpdateMode__Enum updateMode;
    
    struct UberWaterReflectionPlane *m_reflectionPlane;
};

struct UberWaterTop {
    struct UberWaterTop__Class *klass;
    MonitorData *monitor;
    struct UberWaterTop__Fields fields;
};

struct UberWaterReflectionGroup__Fields {
    struct MonoBehaviour__Fields _;
    struct UberWaterReflectionView_GroupViews *views;
    UberWaterReflectionView_UpdateMode__Enum updateMode;
    
};

struct UberWaterReflectionGroup {
    struct UberWaterReflectionGroup__Class *klass;
    MonitorData *monitor;
    struct UberWaterReflectionGroup__Fields fields;
};

struct __declspec(align(8)) UberWaterReflectionView_GroupViews__Fields {
    struct UberWaterReflectionView_Group *gameView;
    struct UberWaterReflectionView_Group *sceneView;
};

struct UberWaterReflectionView_GroupViews {
    struct UberWaterReflectionView_GroupViews__Class *klass;
    MonitorData *monitor;
    struct UberWaterReflectionView_GroupViews__Fields fields;
};

struct __declspec(align(8)) UberWaterReflectionView_Group__Fields {
    struct List_1_UberWaterReflectionPlane_ *visiblePlanes;
    struct RenderTexture *texture;
    struct Vector4 lastUVScale;
    struct Vector4 lastUVMaxRegion;
    float lastVisibleTime;
    UberWaterReflectionView_UpdateMode__Enum updateMode;
    
    int32_t lastRenderedFrame;
    int32_t frameDelta;
    int32_t debugId;
};

struct UberWaterReflectionView_Group {
    struct UberWaterReflectionView_Group__Class *klass;
    MonitorData *monitor;
    struct UberWaterReflectionView_Group__Fields fields;
};

struct __declspec(align(8)) List_1_UberWaterReflectionPlane___Fields {
    struct UberWaterReflectionPlane__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_UberWaterReflectionPlane_ {
    struct List_1_UberWaterReflectionPlane___Class *klass;
    MonitorData *monitor;
    struct List_1_UberWaterReflectionPlane___Fields fields;
};

enum class UberWaterReflectionView_GroupType__Enum : int32_t {
    Invalid = 0x00000000,
    Grouped = 0x00000001,
    Ungrouped = 0x00000002,
    Automatic = 0x00000003,
};

struct UberWaterReflectionView_GroupType__Enum__Boxed {
    struct UberWaterReflectionView_GroupType__Enum__Class *klass;
    MonitorData *monitor;
    UberWaterReflectionView_GroupType__Enum value;
    
};

struct UberWaterReflectionView_PlaneGroupInfo {
    UberWaterReflectionView_GroupType__Enum type;
    
    struct UberWaterReflectionView_GroupViews *views;
    struct UberWaterReflectionView_AutomaticGroup *lastAutomaticGameGroup;
    struct UberWaterReflectionView_AutomaticGroup *lastAutomaticSceneGroup;
};

struct UberWaterReflectionView_PlaneGroupInfo__Boxed {
    struct UberWaterReflectionView_PlaneGroupInfo__Class *klass;
    MonitorData *monitor;
    struct UberWaterReflectionView_PlaneGroupInfo fields;
};

struct __declspec(align(8)) UberWaterReflectionPlane__Fields {
    struct UberWaterTop *component;
    struct Transform *transform;
    struct Renderer *renderer;
    struct Material *sharedMaterial;
    struct UberWaterReflectionView_PlaneGroupInfo group;
};

struct UberWaterReflectionPlane {
    struct UberWaterReflectionPlane__Class *klass;
    MonitorData *monitor;
    struct UberWaterReflectionPlane__Fields fields;
};

struct __declspec(align(8)) UberWaterReflectionView_AutomaticGroup__Fields {
    struct Vector4 plane;
    float strength;
    struct UberWaterReflectionView_GroupViews *views;
};

struct UberWaterReflectionView_AutomaticGroup {
    struct UberWaterReflectionView_AutomaticGroup__Class *klass;
    MonitorData *monitor;
    struct UberWaterReflectionView_AutomaticGroup__Fields fields;
};

struct UberWaterReflectionPlane__Array {
    struct UberWaterReflectionPlane__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct UberWaterReflectionPlane *vector[32];
};

struct IEnumerator_1_UberWaterReflectionPlane_ {
    struct IEnumerator_1_UberWaterReflectionPlane___Class *klass;
    MonitorData *monitor;
};

struct CullingCategoryManager_1_UberWaterTop___Fields {
    struct CullingCategoryManager__Fields _;
    struct Dictionary_2_System_Int32_UberWaterTop_ *registeredItems;
};

struct CullingCategoryManager_1_UberWaterTop_ {
    struct CullingCategoryManager_1_UberWaterTop___Class *klass;
    MonitorData *monitor;
    struct CullingCategoryManager_1_UberWaterTop___Fields fields;
};

struct UberWaterTop_CullingCategoryManager__Fields {
    struct CullingCategoryManager_1_UberWaterTop___Fields _;
};

struct UberWaterTop_CullingCategoryManager {
    struct UberWaterTop_CullingCategoryManager__Class *klass;
    MonitorData *monitor;
    struct UberWaterTop_CullingCategoryManager__Fields fields;
};

struct __declspec(align(8)) Dictionary_2_System_Int32_UberWaterTop___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_UberWaterTop___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_System_Int32_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_UberWaterTop_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UberWaterTop_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_System_Int32_UberWaterTop_ {
    struct Dictionary_2_System_Int32_UberWaterTop___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_System_Int32_UberWaterTop___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_UberWaterTop_ {
    int32_t hashCode;
    int32_t next;
    int32_t key;
    struct UberWaterTop *value;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_UberWaterTop___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_UberWaterTop___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_UberWaterTop_ fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_UberWaterTop___Array {
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_UberWaterTop___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_UberWaterTop_ vector[32];
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int32_UberWaterTop___Fields {
    struct Dictionary_2_System_Int32_UberWaterTop_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_UberWaterTop_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_UberWaterTop___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_UberWaterTop___Fields fields;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UberWaterTop___Fields {
    struct Dictionary_2_System_Int32_UberWaterTop_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UberWaterTop_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UberWaterTop___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UberWaterTop___Fields fields;
};

struct UberWaterTop__Array {
    struct UberWaterTop__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct UberWaterTop *vector[32];
};

struct IEnumerator_1_UberWaterTop_ {
    struct IEnumerator_1_UberWaterTop___Class *klass;
    MonitorData *monitor;
};

struct ICollection_1_UberWaterTop_ {
    struct ICollection_1_UberWaterTop___Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_System_Int32_UberWaterTop_ {
    int32_t key;
    struct UberWaterTop *value;
};

struct KeyValuePair_2_System_Int32_UberWaterTop___Boxed {
    struct KeyValuePair_2_System_Int32_UberWaterTop___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_System_Int32_UberWaterTop_ fields;
};

struct KeyValuePair_2_System_Int32_UberWaterTop___Array {
    struct KeyValuePair_2_System_Int32_UberWaterTop___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_System_Int32_UberWaterTop_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_System_Int32_UberWaterTop_ {
    struct IEnumerator_1_KeyValuePair_2_System_Int32_UberWaterTop___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_UberWaterTop_ {
    struct IEnumerable_1_UberWaterTop___Class *klass;
    MonitorData *monitor;
};

enum class StrippableBuildContex_Platform__Enum : int32_t {
    PC = 0x00000000,
    XBoxOneX = 0x00000001,
    XBoxOneS = 0x00000002,
    NintendoSwitch = 0x00000003,
};

struct StrippableBuildContex_Platform__Enum__Boxed {
    struct StrippableBuildContex_Platform__Enum__Class *klass;
    MonitorData *monitor;
    StrippableBuildContex_Platform__Enum value;
    
};

struct StrippableBuildContex {
    StrippableBuildContex_Platform__Enum BuildPlatform;
    
};

struct StrippableBuildContex__Boxed {
    struct StrippableBuildContex__Class *klass;
    MonitorData *monitor;
    struct StrippableBuildContex fields;
};

struct __declspec(align(8)) UberInteractionManager_PropertyIDCache__Fields {
    int32_t PosId;
    int32_t VelId;
    int32_t ParamsId;
    int32_t Params2Id;
};

struct UberInteractionManager_PropertyIDCache {
    struct UberInteractionManager_PropertyIDCache__Class *klass;
    MonitorData *monitor;
    struct UberInteractionManager_PropertyIDCache__Fields fields;
};

struct UberInteractionManager_InteractionCurveType__Enum__VTable {
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

struct UberInteractionManager_InteractionCurveType__Enum__StaticFields {
};

struct UberInteractionManager_InteractionCurveType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UberInteractionManager_InteractionCurveType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UberInteractionManager_InteractionCurveType__Enum__VTable vtable;
};

struct UberInteractionModifier_Interaction__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct UberInteractionModifier_Interaction__StaticFields {
};

struct UberInteractionModifier_Interaction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UberInteractionModifier_Interaction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UberInteractionModifier_Interaction__VTable vtable;
};

struct UberWaterControl_SplashInfo__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct UberWaterControl_SplashInfo__StaticFields {
};

struct UberWaterControl_SplashInfo__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UberWaterControl_SplashInfo__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UberWaterControl_SplashInfo__VTable vtable;
};

struct UberWaterControl_SplashInfo__Array__VTable {
};

struct UberWaterControl_SplashInfo__Array__StaticFields {
};

struct UberWaterControl_SplashInfo__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UberWaterControl_SplashInfo__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UberWaterControl_SplashInfo__Array__VTable vtable;
};

struct IEnumerator_1_UberWaterControl_SplashInfo___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_UberWaterControl_SplashInfo___StaticFields {
};

struct IEnumerator_1_UberWaterControl_SplashInfo___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_UberWaterControl_SplashInfo___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_UberWaterControl_SplashInfo___VTable vtable;
};

struct List_1_UberWaterControl_SplashInfo___VTable {
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

struct List_1_UberWaterControl_SplashInfo___StaticFields {
    struct UberWaterControl_SplashInfo__Array *_emptyArray;
};

struct List_1_UberWaterControl_SplashInfo___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_UberWaterControl_SplashInfo___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_UberWaterControl_SplashInfo___VTable vtable;
};

struct UberWaterControl_ImpactBuf__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct UberWaterControl_ImpactBuf__StaticFields {
};

struct UberWaterControl_ImpactBuf__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UberWaterControl_ImpactBuf__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UberWaterControl_ImpactBuf__VTable vtable;
};

struct UberWaterControl_ImpactBuf__Array__VTable {
};

struct UberWaterControl_ImpactBuf__Array__StaticFields {
};

struct UberWaterControl_ImpactBuf__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UberWaterControl_ImpactBuf__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UberWaterControl_ImpactBuf__Array__VTable vtable;
};

struct IEnumerator_1_UberWaterControl_ImpactBuf___VTable {
    VirtualInvokeData get_Current;
};

}
