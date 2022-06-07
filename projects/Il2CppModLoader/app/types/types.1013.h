namespace app {
struct ClearTrailOverCertainDistance__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnPoolSpawned;
    VirtualInvokeData OnPoolDespawned;
};

struct ClearTrailOverCertainDistance__StaticFields {
};

struct ClearTrailOverCertainDistance__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ClearTrailOverCertainDistance__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ClearTrailOverCertainDistance__VTable vtable;
};

struct CursorController__Fields {
    struct MonoBehaviour__Fields _;
    struct LegacyTransparencyAnimator *Transparency;
    struct Vector2 m_mousePosition;
    struct Texture2D *CursorTexture;
    struct Vector2 Offset;
};

struct CursorController {
    struct CursorController__Class *klass;
    MonitorData *monitor;
    struct CursorController__Fields fields;
};

struct CursorController__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct CursorController__StaticFields {
    float m_idleTime;
    bool IsVisible;
};

struct CursorController__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CursorController__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CursorController__VTable vtable;
};

struct CustomCondition__Fields {
    struct Condition_1__Fields _;
    struct MoonReference_1_ICustomConditionDefinition_ *ConditionDefinition;
    int32_t ConditionGUID;
    struct ICustomConditionDefinition *m_resolvedConditionDefinition;
};

struct CustomCondition {
    struct CustomCondition__Class *klass;
    MonitorData *monitor;
    struct CustomCondition__Fields fields;
};

struct __declspec(align(8)) MoonReference_1_ICustomConditionDefinition___Fields {
    struct MoonTypeData m_data;
    bool m_isInitialized;
    bool m_isStatic;
    bool m_canResolve;
    struct IMoonTypeResolver *m_resolver;
    struct IMoonType_1_ICustomConditionDefinition_ *m_cachedProxyType;
    struct ICustomConditionDefinition *m_volatileValue;
};

struct MoonReference_1_ICustomConditionDefinition_ {
    struct MoonReference_1_ICustomConditionDefinition___Class *klass;
    MonitorData *monitor;
    struct MoonReference_1_ICustomConditionDefinition___Fields fields;
};

struct IMoonType_1_ICustomConditionDefinition_ {
    struct IMoonType_1_ICustomConditionDefinition___Class *klass;
    MonitorData *monitor;
};

struct ICustomConditionDefinition {
    struct ICustomConditionDefinition__Class *klass;
    MonitorData *monitor;
};

struct IMoonType_1_ICustomConditionDefinition___VTable {
    VirtualInvokeData Resolve;
    VirtualInvokeData SafeResolve;
    VirtualInvokeData TryResolve;
};

struct IMoonType_1_ICustomConditionDefinition___StaticFields {
};

struct IMoonType_1_ICustomConditionDefinition___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IMoonType_1_ICustomConditionDefinition___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IMoonType_1_ICustomConditionDefinition___VTable vtable;
};

struct ICustomConditionDefinition__VTable {
    VirtualInvokeData GetAllConditionNames;
    VirtualInvokeData GetAllConditionGuids;
    VirtualInvokeData GetConditionNameFromGuid;
    VirtualInvokeData IsConditionGuidValid;
    VirtualInvokeData Validate;
};

struct ICustomConditionDefinition__StaticFields {
};

struct ICustomConditionDefinition__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ICustomConditionDefinition__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ICustomConditionDefinition__VTable vtable;
};

struct ICustomConditionDefinition___VTable {
};

struct ICustomConditionDefinition___StaticFields {
};

struct ICustomConditionDefinition___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ICustomConditionDefinition___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ICustomConditionDefinition___VTable vtable;
};

struct MoonReference_1_ICustomConditionDefinition___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Resolve;
    VirtualInvokeData SafeResolve;
    VirtualInvokeData TryResolve;
    VirtualInvokeData get_IsStaticValue;
    VirtualInvokeData GetTypeData;
    VirtualInvokeData CanResolve;
    VirtualInvokeData get_IsCrossSceneReference;
    VirtualInvokeData OnBeforeSerialize;
    VirtualInvokeData OnAfterDeserialize;
};

struct MoonReference_1_ICustomConditionDefinition___StaticFields {
};

struct MoonReference_1_ICustomConditionDefinition___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonReference_1_ICustomConditionDefinition___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoonReference_1_ICustomConditionDefinition___VTable vtable;
};

struct CustomCondition__VTable {
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

struct CustomCondition__StaticFields {
};

struct CustomCondition__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CustomCondition__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CustomCondition__VTable vtable;
};

struct DemoLogic {
    struct DemoLogic__Class *klass;
    MonitorData *monitor;
};

struct DemoLogic__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct DemoLogic__StaticFields {
    bool _OutOfTime_k__BackingField;
    float _IdleElapsedTime_k__BackingField;
    float _PlaytimeElapsedTime_k__BackingField;
};

struct DemoLogic__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DemoLogic__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DemoLogic__VTable vtable;
};

struct DestroyWhenInvisible__Fields {
    struct MonoBehaviour__Fields _;
    struct BaseAnimator *Animator;
    bool DestroyReversedToStart;
    bool DestroyAtEnd;
};

struct DestroyWhenInvisible {
    struct DestroyWhenInvisible__Class *klass;
    MonitorData *monitor;
    struct DestroyWhenInvisible__Fields fields;
};

struct DestroyWhenInvisible__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct DestroyWhenInvisible__StaticFields {
};

struct DestroyWhenInvisible__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DestroyWhenInvisible__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DestroyWhenInvisible__VTable vtable;
};

struct DifficultyController__Fields {
    struct SaveSerialize__Fields _;
    DifficultyMode__Enum Difficulty;
    
    DifficultyMode__Enum LowestDifficulty;
    
    struct Action *OnDifficultyChanged;
};

struct DifficultyController {
    struct DifficultyController__Class *klass;
    MonitorData *monitor;
    struct DifficultyController__Fields fields;
};

struct DifficultyController__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Serialize;
    VirtualInvokeData RegisterToSaveSceneManager;
    VirtualInvokeData Serialize_1;
};

struct DifficultyController__StaticFields {
    struct DifficultyController *Instance;
};

struct DifficultyController__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DifficultyController__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DifficultyController__VTable vtable;
};

struct DifficultyController_c {
    struct DifficultyController_c__Class *klass;
    MonitorData *monitor;
};

struct DifficultyController_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct DifficultyController_c__StaticFields {
    struct DifficultyController_c *__9;
    struct Action *__9__10_0;
};

struct DifficultyController_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DifficultyController_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DifficultyController_c__VTable vtable;
};

struct DisableOnRestoreCheckpoint__Fields {
    struct MonoBehaviour__Fields _;
};

struct DisableOnRestoreCheckpoint {
    struct DisableOnRestoreCheckpoint__Class *klass;
    MonitorData *monitor;
    struct DisableOnRestoreCheckpoint__Fields fields;
};

struct DisableOnRestoreCheckpoint__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct DisableOnRestoreCheckpoint__StaticFields {
};

struct DisableOnRestoreCheckpoint__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DisableOnRestoreCheckpoint__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DisableOnRestoreCheckpoint__VTable vtable;
};

struct DisableScale__Fields {
    struct MonoBehaviour__Fields _;
};

struct DisableScale {
    struct DisableScale__Class *klass;
    MonitorData *monitor;
    struct DisableScale__Fields fields;
};

struct DisableScale__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct DisableScale__StaticFields {
};

struct DisableScale__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DisableScale__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DisableScale__VTable vtable;
};

struct DynamicLightSource__Fields {
    struct MonoBehaviour__Fields _;
    float LightFalloffRadius;
    float LightFalloffExponent;
};

struct DynamicLightSource {
    struct DynamicLightSource__Class *klass;
    MonitorData *monitor;
    struct DynamicLightSource__Fields fields;
};

struct DynamicLightSource__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct DynamicLightSource__StaticFields {
};

struct DynamicLightSource__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DynamicLightSource__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DynamicLightSource__VTable vtable;
};

struct EnableOnRestoreCheckpoint__Fields {
    struct MonoBehaviour__Fields _;
};

struct EnableOnRestoreCheckpoint {
    struct EnableOnRestoreCheckpoint__Class *klass;
    MonitorData *monitor;
    struct EnableOnRestoreCheckpoint__Fields fields;
};

struct EnableOnRestoreCheckpoint__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct EnableOnRestoreCheckpoint__StaticFields {
};

struct EnableOnRestoreCheckpoint__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EnableOnRestoreCheckpoint__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EnableOnRestoreCheckpoint__VTable vtable;
};

struct EnableParticleEmitterOnStart__Fields {
    struct MonoBehaviour__Fields _;
};

struct EnableParticleEmitterOnStart {
    struct EnableParticleEmitterOnStart__Class *klass;
    MonitorData *monitor;
    struct EnableParticleEmitterOnStart__Fields fields;
};

struct EnableParticleEmitterOnStart__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct EnableParticleEmitterOnStart__StaticFields {
};

struct EnableParticleEmitterOnStart__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EnableParticleEmitterOnStart__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EnableParticleEmitterOnStart__VTable vtable;
};

struct __declspec(align(8)) EnableParticleEmitterOnStart_Start_d_1__Fields {
    int32_t __1__state;
    struct Object *__2__current;
    struct EnableParticleEmitterOnStart *__4__this;
};

struct EnableParticleEmitterOnStart_Start_d_1 {
    struct EnableParticleEmitterOnStart_Start_d_1__Class *klass;
    MonitorData *monitor;
    struct EnableParticleEmitterOnStart_Start_d_1__Fields fields;
};

struct EnableParticleEmitterOnStart_Start_d_1__VTable {
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

struct EnableParticleEmitterOnStart_Start_d_1__StaticFields {
};

struct EnableParticleEmitterOnStart_Start_d_1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EnableParticleEmitterOnStart_Start_d_1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EnableParticleEmitterOnStart_Start_d_1__VTable vtable;
};

struct ErrorMessageController__Fields {
    struct MonoBehaviour__Fields _;
    struct MessageBox *Message;
    struct MessageProvider *SaveError;
    struct MessageProvider *CorruptSavesError;
    struct BaseAnimator *AppearAnimator;
};

struct ErrorMessageController {
    struct ErrorMessageController__Class *klass;
    MonitorData *monitor;
    struct ErrorMessageController__Fields fields;
};

struct ErrorMessageController__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ErrorMessageController__StaticFields {
    struct ErrorMessageController *s_instance;
};

struct ErrorMessageController__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ErrorMessageController__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ErrorMessageController__VTable vtable;
};

struct FadeWhileSceneLoading__Fields {
    struct MonoBehaviour__Fields _;
    struct SceneMetaData *MetaData;
};

struct FadeWhileSceneLoading {
    struct FadeWhileSceneLoading__Class *klass;
    MonitorData *monitor;
    struct FadeWhileSceneLoading__Fields fields;
};

struct FadeWhileSceneLoading__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct FadeWhileSceneLoading__StaticFields {
};

struct FadeWhileSceneLoading__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FadeWhileSceneLoading__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FadeWhileSceneLoading__VTable vtable;
};

struct FirstExecutionOrder__Fields {
    struct MonoBehaviour__Fields _;
    struct SceneMetaData *metaData;
};

struct FirstExecutionOrder {
    struct FirstExecutionOrder__Class *klass;
    MonitorData *monitor;
    struct FirstExecutionOrder__Fields fields;
};

struct FirstExecutionOrder__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct FirstExecutionOrder__StaticFields {
};

struct FirstExecutionOrder__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FirstExecutionOrder__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FirstExecutionOrder__VTable vtable;
};

struct FloatingRockController__Fields {
    struct MonoBehaviour__Fields _;
    float Radius;
    float m_time;
    struct Vector3 m_startPosition;
    float Acceleration;
    float AngularAcceleration;
    struct Rigidbody *m_rigidbody;
};

struct FloatingRockController {
    struct FloatingRockController__Class *klass;
    MonitorData *monitor;
    struct FloatingRockController__Fields fields;
};

struct FloatingRockController__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct FloatingRockController__StaticFields {
};

struct FloatingRockController__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FloatingRockController__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FloatingRockController__VTable vtable;
};

struct IRaceServiceProvider {
    struct IRaceServiceProvider__Class *klass;
    MonitorData *monitor;
};

struct IRaceServiceProvider__VTable {
    VirtualInvokeData PostNewRaceData;
    VirtualInvokeData GetRaceData;
    VirtualInvokeData LoadRaceCacheFor;
    VirtualInvokeData ClearCache;
    VirtualInvokeData PostCachedData;
    VirtualInvokeData TryGetDeveloperGhostDataForRace;
    VirtualInvokeData SaveDeveloperGhostDataForRace;
    VirtualInvokeData Update;
};

struct IRaceServiceProvider__StaticFields {
};

struct IRaceServiceProvider__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IRaceServiceProvider__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IRaceServiceProvider__VTable vtable;
};

struct __declspec(align(8)) GameController_RestartingCleanupNextFrame_d_141__Fields {
    int32_t __1__state;
    struct Object *__2__current;
    struct GameController *__4__this;
};

struct GameController_RestartingCleanupNextFrame_d_141 {
    struct GameController_RestartingCleanupNextFrame_d_141__Class *klass;
    MonitorData *monitor;
    struct GameController_RestartingCleanupNextFrame_d_141__Fields fields;
};

struct GameController_RestartingCleanupNextFrame_d_141__VTable {
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

struct GameController_RestartingCleanupNextFrame_d_141__StaticFields {
};

struct GameController_RestartingCleanupNextFrame_d_141__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GameController_RestartingCleanupNextFrame_d_141__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GameController_RestartingCleanupNextFrame_d_141__VTable vtable;
};

struct __declspec(align(8)) GameController_Start_d_161__Fields {
    int32_t __1__state;
    struct Object *__2__current;
    struct GameController *__4__this;
    struct WWW *_www_5__2;
};

struct GameController_Start_d_161 {
    struct GameController_Start_d_161__Class *klass;
    MonitorData *monitor;
    struct GameController_Start_d_161__Fields fields;
};

struct GameController_Start_d_161__VTable {
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

struct GameController_Start_d_161__StaticFields {
};

struct GameController_Start_d_161__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GameController_Start_d_161__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GameController_Start_d_161__VTable vtable;
};

struct GameController_c {
    struct GameController_c__Class *klass;
    MonitorData *monitor;
};

struct GameController_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct GameController_c__StaticFields {
    struct GameController_c *__9;
    struct Func_1_Boolean_ *__9__178_0;
    struct Func_1_Boolean_ *__9__178_1;
    struct Func_1_Boolean_ *__9__178_2;
    struct Action_1_Boolean_ *__9__359_0;
    struct Action *__9__359_1;
};

struct GameController_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GameController_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GameController_c__VTable vtable;
};

struct __declspec(align(8)) GameController_StartBuildInScene_d_178__Fields {
    int32_t __1__state;
    struct Object *__2__current;
    struct String *sceneName;
    int32_t _sceneCount_5__2;
    int32_t _i_5__3;
};

struct GameController_StartBuildInScene_d_178 {
    struct GameController_StartBuildInScene_d_178__Class *klass;
    MonitorData *monitor;
    struct GameController_StartBuildInScene_d_178__Fields fields;
};

struct GameController_StartBuildInScene_d_178__VTable {
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

struct GameController_StartBuildInScene_d_178__StaticFields {
};

struct GameController_StartBuildInScene_d_178__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GameController_StartBuildInScene_d_178__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GameController_StartBuildInScene_d_178__VTable vtable;
};

struct __declspec(align(8)) GameController_c_DisplayClass179_0__Fields {
    struct String *flag;
};

struct GameController_c_DisplayClass179_0 {
    struct GameController_c_DisplayClass179_0__Class *klass;
    MonitorData *monitor;
    struct GameController_c_DisplayClass179_0__Fields fields;
};

struct GameController_c_DisplayClass179_0__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct GameController_c_DisplayClass179_0__StaticFields {
};

struct GameController_c_DisplayClass179_0__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GameController_c_DisplayClass179_0__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GameController_c_DisplayClass179_0__VTable vtable;
};

struct __declspec(align(8)) GameController_SetRunInBackgroundToTrue_d_181__Fields {
    int32_t __1__state;
    struct Object *__2__current;
    struct GameController *__4__this;
};

struct GameController_SetRunInBackgroundToTrue_d_181 {
    struct GameController_SetRunInBackgroundToTrue_d_181__Class *klass;
    MonitorData *monitor;
    struct GameController_SetRunInBackgroundToTrue_d_181__Fields fields;
};

struct GameController_SetRunInBackgroundToTrue_d_181__VTable {
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

struct GameController_SetRunInBackgroundToTrue_d_181__StaticFields {
};

struct GameController_SetRunInBackgroundToTrue_d_181__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GameController_SetRunInBackgroundToTrue_d_181__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GameController_SetRunInBackgroundToTrue_d_181__VTable vtable;
};

struct List_1_T_Enumerator_System_String_ {
    struct List_1_System_String_ *list;
    int32_t index;
    int32_t version;
    struct String *current;
};

struct List_1_T_Enumerator_System_String___Boxed {
    struct List_1_T_Enumerator_System_String___Class *klass;
    MonitorData *monitor;
    struct List_1_T_Enumerator_System_String_ fields;
};

struct __declspec(align(8)) GameController_LoadAssets_d_182__Fields {
    int32_t __1__state;
    struct Object *__2__current;
    struct List_1_System_String_ *assetsToLoad;
    struct List_1_T_Enumerator_System_String_ __7__wrap1;
    struct WWW *_www_5__3;
};

struct GameController_LoadAssets_d_182 {
    struct GameController_LoadAssets_d_182__Class *klass;
    MonitorData *monitor;
    struct GameController_LoadAssets_d_182__Fields fields;
};

struct List_1_T_Enumerator_System_String___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Current;
    VirtualInvokeData Dispose;
    VirtualInvokeData MoveNext;
    VirtualInvokeData System_Collections_IEnumerator_get_Current;
    VirtualInvokeData System_Collections_IEnumerator_Reset;
};

struct List_1_T_Enumerator_System_String___StaticFields {
};

struct List_1_T_Enumerator_System_String___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_T_Enumerator_System_String___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_T_Enumerator_System_String___VTable vtable;
};

struct GameController_LoadAssets_d_182__VTable {
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

struct GameController_LoadAssets_d_182__StaticFields {
};

struct GameController_LoadAssets_d_182__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GameController_LoadAssets_d_182__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GameController_LoadAssets_d_182__VTable vtable;
};

struct __declspec(align(8)) GameController_WarmUpResourcesRoutine_d_191__Fields {
    int32_t __1__state;
    struct Object *__2__current;
    struct GameController *__4__this;
};

struct GameController_WarmUpResourcesRoutine_d_191 {
    struct GameController_WarmUpResourcesRoutine_d_191__Class *klass;
    MonitorData *monitor;
    struct GameController_WarmUpResourcesRoutine_d_191__Fields fields;
};

struct GameController_WarmUpResourcesRoutine_d_191__VTable {
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

struct GameController_WarmUpResourcesRoutine_d_191__StaticFields {
};

struct GameController_WarmUpResourcesRoutine_d_191__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GameController_WarmUpResourcesRoutine_d_191__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GameController_WarmUpResourcesRoutine_d_191__VTable vtable;
};

struct GameControllerLate__Fields {
    struct MonoBehaviour__Fields _;
    struct GameObject *LateStartHookPrefab;
    struct WaitForFixedUpdate *m_waitForFixedUpdate;
    struct WaitForEndOfFrame *m_waitForEndOfFrame;
    struct Coroutine *m_eofCoroutine;
};

struct GameControllerLate {
    struct GameControllerLate__Class *klass;
    MonitorData *monitor;
    struct GameControllerLate__Fields fields;
};

struct GameControllerLate__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

}
