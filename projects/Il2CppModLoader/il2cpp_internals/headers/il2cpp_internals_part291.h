namespace app {
struct MeshTrail {
  struct MeshTrail__Class *klass;
  struct MonitorData *monitor;
  struct MeshTrail__Fields fields;
};
struct MeshTrail_MeshTrailTurbulence {
  float Weight;
  float VortexSize;
  float VortexSpeed;
  float VortexLifetime;
  float VorticesPerSecond;
  float MinimalSpawnerSpeed;
  float SpawnerVelocityInheritance;
  float TimeToSpawn;
};
struct MeshTrail_MeshTrailTurbulence__Boxed {
  struct MeshTrail_MeshTrailTurbulence__Class *klass;
  struct MonitorData *monitor;
  struct MeshTrail_MeshTrailTurbulence fields;
};
struct MeshTrail_MeshTrailTurbulence__Array {
  struct MeshTrail_MeshTrailTurbulence__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MeshTrail_MeshTrailTurbulence vector[32];
};
struct __declspec(align(8)) List_1_MeshTrail_MeshTrailEmitter___Fields {
  struct MeshTrail_MeshTrailEmitter__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_MeshTrail_MeshTrailEmitter_ {
  struct List_1_MeshTrail_MeshTrailEmitter___Class *klass;
  struct MonitorData *monitor;
  struct List_1_MeshTrail_MeshTrailEmitter___Fields fields;
};
struct MeshTrail_MeshTrailEmitter {
  struct Vector3 Position;
  struct Vector3 LastEmittedParticlePosition;
  int32_t SkinningMatrixIndex;
  struct Vector2 Uv;
  struct Vector3 WorldPosition;
  float DistanceTraveled;
};
struct MeshTrail_MeshTrailEmitter__Boxed {
  struct MeshTrail_MeshTrailEmitter__Class *klass;
  struct MonitorData *monitor;
  struct MeshTrail_MeshTrailEmitter fields;
};
struct MeshTrail_MeshTrailEmitter__Array {
  struct MeshTrail_MeshTrailEmitter__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MeshTrail_MeshTrailEmitter vector[32];
};
struct IEnumerator_1_MeshTrail_MeshTrailEmitter_ {
  struct IEnumerator_1_MeshTrail_MeshTrailEmitter___Class *klass;
  struct MonitorData *monitor;
};
struct MeshTrail_MeshTrailTurbulence__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MeshTrail_MeshTrailTurbulence__StaticFields {
};
struct MeshTrail_MeshTrailTurbulence__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MeshTrail_MeshTrailTurbulence__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MeshTrail_MeshTrailTurbulence__VTable vtable;
};
struct MeshTrail_MeshTrailEmitter__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MeshTrail_MeshTrailEmitter__StaticFields {
};
struct MeshTrail_MeshTrailEmitter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MeshTrail_MeshTrailEmitter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MeshTrail_MeshTrailEmitter__VTable vtable;
};
struct IEnumerator_1_MeshTrail_MeshTrailEmitter___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_MeshTrail_MeshTrailEmitter___StaticFields {
};
struct IEnumerator_1_MeshTrail_MeshTrailEmitter___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_MeshTrail_MeshTrailEmitter___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_MeshTrail_MeshTrailEmitter___VTable vtable;
};
struct List_1_MeshTrail_MeshTrailEmitter___VTable {
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
struct List_1_MeshTrail_MeshTrailEmitter___StaticFields {
  struct MeshTrail_MeshTrailEmitter__Array * _emptyArray;
};
struct List_1_MeshTrail_MeshTrailEmitter___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_MeshTrail_MeshTrailEmitter___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_MeshTrail_MeshTrailEmitter___VTable vtable;
};
struct MeshTrail__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
};
struct MeshTrail__StaticFields {
  bool DebugDisable;
  int32_t PropertyIdMaxVortexCount;
  int32_t PropertyId_TurbulenceCount_MaxVortexCount_TrailCount_ParticleCount;
  int32_t PropertyId_TotalParticleCount_MaxParticleCount_RandomSeed_EmitParticles;
  int32_t PropertyId_FaceCamera_FirstParticleIndex;
  int32_t PropertyId_CameraInheritedPositionDelta_CameraInheritedPositionDeltaLength;
  int32_t PropertyId_LocalToWorld;
  int32_t PropertyId_ObjectVelocity_DeltaTimeSinceLastEmission;
  int32_t PropertyId_AdditiveVelocity_DeltaTime;
  int32_t PropertyId_AdditiveVortexVelocity_Duration;
  int32_t PropertyIdEmitters;
  int32_t PropertyIdParticles;
  int32_t PropertyIdVortices;
  int32_t PropertyIdTurbulences;
  int32_t PropertyIdSkinningMatrices;
  int32_t PropertyIdTrailState;
  int32_t PropertyIdEmitParticles;
  int32_t PropertyIdMeshTrailRenderAsQuads;
  int32_t PropertyIdMeshTrailMaxParticleCount;
  int32_t PropertyIdMeshTrailParticleCount;
  int32_t PropertyIdMeshTrailTrailCount;
  int32_t PropertyIdMeshTrailWidth;
  int32_t PropertyIdMeshTrailParticles;
  int32_t PropertyIdMeshTrailEmitters;
  int32_t PropertyIdMeshTrailState;
  int32_t PropertyIdMeshTrailBaseColorWeight;
  int32_t PropertyIdMeshTrailLifetimeAnimatedParameters;
  int32_t PropertyIdMeshTrailLifetimeAdditiveVelocityParameters;
  int32_t PropertyIdMeshTrailInitialSpeedAnimatedParameters;
  int32_t PropertyIdMeshTrailInitialSpeedAnimatedParametersMax;
  int32_t PropertyIdMeshTrailDistanceAnimatedParameters;
  int32_t PropertyIdMeshTrailDistanceAnimatedParametersMax;
  int32_t PropertyIdMeshTrailBaseColorTex;
  struct ComputeShader * m_computeShader;
};
struct MeshTrail__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MeshTrail__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MeshTrail__VTable vtable;
};

struct MeshTrailAnimator__Fields {
  struct TimelineEntity__Fields _;
  struct MoonReference_1_MeshTrail_ * MeshTrailReference;
  struct AnimationCurve * CameraVelocityInheritanceCurve;
  float m_time;
  float m_originalCameraVelocityInheritance;
  struct MeshTrail * m_meshTrail;
};
struct MeshTrailAnimator {
  struct MeshTrailAnimator__Class *klass;
  struct MonitorData *monitor;
  struct MeshTrailAnimator__Fields fields;
};
struct __declspec(align(8)) MoonReference_1_MeshTrail___Fields {
  struct MoonTypeData m_data;
  bool m_isInitialized;
  bool m_isStatic;
  bool m_canResolve;
  struct IMoonTypeResolver * m_resolver;
  struct IMoonType_1_MeshTrail_ * m_cachedProxyType;
  struct MeshTrail * m_volatileValue;
};
struct MoonReference_1_MeshTrail_ {
  struct MoonReference_1_MeshTrail___Class *klass;
  struct MonitorData *monitor;
  struct MoonReference_1_MeshTrail___Fields fields;
};
struct IMoonType_1_MeshTrail_ {
  struct IMoonType_1_MeshTrail___Class *klass;
  struct MonitorData *monitor;
};
struct IMoonType_1_MeshTrail___VTable {
  VirtualInvokeData Resolve;
  VirtualInvokeData SafeResolve;
  VirtualInvokeData TryResolve;
};
struct IMoonType_1_MeshTrail___StaticFields {
};
struct IMoonType_1_MeshTrail___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IMoonType_1_MeshTrail___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IMoonType_1_MeshTrail___VTable vtable;
};
struct MoonReference_1_MeshTrail___VTable {
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
struct MoonReference_1_MeshTrail___StaticFields {
};
struct MoonReference_1_MeshTrail___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonReference_1_MeshTrail___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonReference_1_MeshTrail___VTable vtable;
};
struct MeshTrailAnimator__VTable {
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
struct MeshTrailAnimator__StaticFields {
};
struct MeshTrailAnimator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MeshTrailAnimator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MeshTrailAnimator__VTable vtable;
};

struct MoonCurveTester__Fields {
  struct MonoBehaviour__Fields _;
  bool Mute;
  struct AnimationCurve * X;
  struct AnimationCurve * Y;
  struct AnimationCurve * Z;
};
struct MoonCurveTester {
  struct MoonCurveTester__Class *klass;
  struct MonitorData *monitor;
  struct MoonCurveTester__Fields fields;
};
struct MoonCurveTester__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MoonCurveTester__StaticFields {
};
struct MoonCurveTester__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonCurveTester__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonCurveTester__VTable vtable;
};

struct MoonTrailPerformanceTester__Fields {
  struct MonoBehaviour__Fields _;
  float RotationSpeed;
  float Radius;
  struct Vector3 m_origin;
  float m_currentAngle;
};
struct MoonTrailPerformanceTester {
  struct MoonTrailPerformanceTester__Class *klass;
  struct MonitorData *monitor;
  struct MoonTrailPerformanceTester__Fields fields;
};
struct MoonTrailPerformanceTester__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MoonTrailPerformanceTester__StaticFields {
};
struct MoonTrailPerformanceTester__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonTrailPerformanceTester__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonTrailPerformanceTester__VTable vtable;
};

struct VirtualClipsProviderTester__Fields {
  struct MonoBehaviour__Fields _;
  enum VirtualTimelineRepresentationGroup__Enum Group;
  bool _InvalidateParentTimelineCache_k__BackingField;
};
struct VirtualClipsProviderTester {
  struct VirtualClipsProviderTester__Class *klass;
  struct MonitorData *monitor;
  struct VirtualClipsProviderTester__Fields fields;
};
struct VirtualClipsProviderTester__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_VirtualTimelineTarget;
  VirtualInvokeData get_VirtualTimelineGroup;
  VirtualInvokeData get_NameDisplayedOnClip;
};
struct VirtualClipsProviderTester__StaticFields {
};
struct VirtualClipsProviderTester__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VirtualClipsProviderTester__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VirtualClipsProviderTester__VTable vtable;
};

struct MoonEffectPools {
  struct MoonEffectPools__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) MoonEffectRevertHandlePool__Fields {
  struct Stack_1_Moon_EffectsFramework_MoonEffectRevertHandle_ * _Instances_k__BackingField;
};
struct MoonEffectRevertHandlePool {
  struct MoonEffectRevertHandlePool__Class *klass;
  struct MonitorData *monitor;
  struct MoonEffectRevertHandlePool__Fields fields;
};
struct __declspec(align(8)) Stack_1_Moon_EffectsFramework_MoonEffectRevertHandle___Fields {
  struct MoonEffectRevertHandle__Array * _array;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct Stack_1_Moon_EffectsFramework_MoonEffectRevertHandle_ {
  struct Stack_1_Moon_EffectsFramework_MoonEffectRevertHandle___Class *klass;
  struct MonitorData *monitor;
  struct Stack_1_Moon_EffectsFramework_MoonEffectRevertHandle___Fields fields;
};
struct __declspec(align(8)) MoonEffectRevertHandle__Fields {
  struct Transform * Root;
  struct List_1_UnityEngine_Transform_ * Children;
  struct HashSet_1_UnityEngine_ParticleSystem_ * ParticlesWithOriginalSpeedStored;
  struct List_1_Moon_EffectsFramework_IRevertMoonEffectLogic_ * m_logic;
  struct List_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleData_ * m_revertableData;
};
struct MoonEffectRevertHandle {
  struct MoonEffectRevertHandle__Class *klass;
  struct MonitorData *monitor;
  struct MoonEffectRevertHandle__Fields fields;
};
struct MoonEffectRevertHandle__Array {
  struct MoonEffectRevertHandle__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MoonEffectRevertHandle * vector[32];
};
struct __declspec(align(8)) HashSet_1_UnityEngine_ParticleSystem___Fields {
  struct Int32__Array * _buckets;
  struct HashSet_1_T_Slot_UnityEngine_ParticleSystem___Array * _slots;
  int32_t _count;
  int32_t _lastIndex;
  int32_t _freeList;
  struct IEqualityComparer_1_UnityEngine_ParticleSystem_ * _comparer;
  int32_t _version;
  struct SerializationInfo * _siInfo;
};
struct HashSet_1_UnityEngine_ParticleSystem_ {
  struct HashSet_1_UnityEngine_ParticleSystem___Class *klass;
  struct MonitorData *monitor;
  struct HashSet_1_UnityEngine_ParticleSystem___Fields fields;
};
struct HashSet_1_T_Slot_UnityEngine_ParticleSystem_ {
  int32_t hashCode;
  int32_t next;
  struct ParticleSystem * value;
};
struct HashSet_1_T_Slot_UnityEngine_ParticleSystem___Boxed {
  struct HashSet_1_T_Slot_UnityEngine_ParticleSystem___Class *klass;
  struct MonitorData *monitor;
  struct HashSet_1_T_Slot_UnityEngine_ParticleSystem_ fields;
};
struct HashSet_1_T_Slot_UnityEngine_ParticleSystem___Array {
  struct HashSet_1_T_Slot_UnityEngine_ParticleSystem___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct HashSet_1_T_Slot_UnityEngine_ParticleSystem_ vector[32];
};
struct __declspec(align(8)) List_1_Moon_EffectsFramework_IRevertMoonEffectLogic___Fields {
  struct IRevertMoonEffectLogic__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_EffectsFramework_IRevertMoonEffectLogic_ {
  struct List_1_Moon_EffectsFramework_IRevertMoonEffectLogic___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_EffectsFramework_IRevertMoonEffectLogic___Fields fields;
};
struct IRevertMoonEffectLogic {
  struct IRevertMoonEffectLogic__Class *klass;
  struct MonitorData *monitor;
};
struct IRevertMoonEffectLogic__Array {
  struct IRevertMoonEffectLogic__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct IRevertMoonEffectLogic * vector[32];
};
struct IEnumerator_1_Moon_EffectsFramework_IRevertMoonEffectLogic_ {
  struct IEnumerator_1_Moon_EffectsFramework_IRevertMoonEffectLogic___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleData___Fields {
  struct MoonEffectGenericRevertibleData_MoonEffectRevertibleData__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleData_ {
  struct List_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleData___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleData___Fields fields;
};
struct __declspec(align(8)) MoonEffectGenericRevertibleData_MoonEffectRevertibleData__Fields {
  struct List_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData_ * ParticleData;
  struct List_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData_ * RendererData;
};
struct MoonEffectGenericRevertibleData_MoonEffectRevertibleData {
  struct MoonEffectGenericRevertibleData_MoonEffectRevertibleData__Class *klass;
  struct MonitorData *monitor;
  struct MoonEffectGenericRevertibleData_MoonEffectRevertibleData__Fields fields;
};
struct MoonEffectGenericRevertibleData_MoonEffectRevertibleData__Array {
  struct MoonEffectGenericRevertibleData_MoonEffectRevertibleData__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MoonEffectGenericRevertibleData_MoonEffectRevertibleData * vector[32];
};
struct __declspec(align(8)) List_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData___Fields {
  struct MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData_ {
  struct List_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData___Fields fields;
};
struct __declspec(align(8)) MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData__Fields {
  struct ParticleSystem * ParticleSystem;
  struct ParticleSystem_MinMaxGradient StartColor;
  struct ParticleSystem_MinMaxGradient ColorOverTime;
  struct ParticleSystem_MinMaxCurve StartSizeX;
  struct ParticleSystem_MinMaxCurve StartSizeY;
  struct ParticleSystem_MinMaxCurve StartSizeZ;
  int32_t MaxParticles;
  struct ParticleSystem_Burst__Array * Bursts;
  struct ParticleSystem_MinMaxCurve EmissionRateOverDistance;
  struct ParticleSystem_MinMaxCurve EmissionRateOverTime;
  struct ParticleSystem_MinMaxCurve StartSpeed;
  struct ParticleSystem_MinMaxCurve OrbitalOffsetX;
  struct ParticleSystem_MinMaxCurve OrbitalOffsetY;
  struct ParticleSystem_MinMaxCurve OrbitalOffsetZ;
  struct ParticleSystem_MinMaxCurve OrbitalX;
  struct ParticleSystem_MinMaxCurve OrbitalY;
  struct ParticleSystem_MinMaxCurve OrbitalZ;
  struct ParticleSystem_MinMaxCurve Radial;
  struct ParticleSystem_MinMaxCurve SpeedModifier;
  struct ParticleSystem_MinMaxCurve X;
  struct ParticleSystem_MinMaxCurve Y;
  struct ParticleSystem_MinMaxCurve Z;
  struct ParticleSystem_MinMaxCurve StartLifetime;
  float SimulationSpeed;
  float GravityModifierMultiplier;
  struct Vector3 ShapeScale;
  bool CollisionEnabled;
  bool SkipRevertingSpeed;
};
struct MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData {
  struct MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData__Class *klass;
  struct MonitorData *monitor;
  struct MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData__Fields fields;
};
struct MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData__Array {
  struct MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData * vector[32];
};
struct IEnumerator_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData_ {
  struct IEnumerator_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData___Fields {
  struct MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData_ {
  struct List_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData___Fields fields;
};
struct __declspec(align(8)) MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData__Fields {
  struct Renderer * Renderer;
  struct Color Color;
  struct Vector4 ShaderProperties;
  struct Vector3 Scale;
};
struct MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData {
  struct MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData__Class *klass;
  struct MonitorData *monitor;
  struct MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData__Fields fields;
};
struct MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData__Array {
  struct MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData * vector[32];
};
struct IEnumerator_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData_ {
  struct IEnumerator_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleData_ {
  struct IEnumerator_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleData___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_Moon_EffectsFramework_MoonEffectRevertHandle_ {
  struct IEnumerator_1_Moon_EffectsFramework_MoonEffectRevertHandle___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererDataPool__Fields {
  struct Stack_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData_ * _Instances_k__BackingField;
};
struct MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererDataPool {
  struct MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererDataPool__Class *klass;
  struct MonitorData *monitor;
  struct MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererDataPool__Fields fields;
};
struct __declspec(align(8)) Stack_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData___Fields {
  struct MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData__Array * _array;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct Stack_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData_ {
  struct Stack_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData___Class *klass;
  struct MonitorData *monitor;
  struct Stack_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData___Fields fields;
};
struct __declspec(align(8)) MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleDataPool__Fields {
  struct Stack_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData_ * _Instances_k__BackingField;
};
struct MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleDataPool {
  struct MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleDataPool__Class *klass;
  struct MonitorData *monitor;
  struct MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleDataPool__Fields fields;
};
struct __declspec(align(8)) Stack_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData___Fields {
  struct MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData__Array * _array;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct Stack_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData_ {
  struct Stack_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData___Class *klass;
  struct MonitorData *monitor;
  struct Stack_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData___Fields fields;
};
struct __declspec(align(8)) MoonEffectGenericRevertibleData_MoonEffectRevertibleDataPool__Fields {
  struct Stack_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleData_ * _Instances_k__BackingField;
};
struct MoonEffectGenericRevertibleData_MoonEffectRevertibleDataPool {
  struct MoonEffectGenericRevertibleData_MoonEffectRevertibleDataPool__Class *klass;
  struct MonitorData *monitor;
  struct MoonEffectGenericRevertibleData_MoonEffectRevertibleDataPool__Fields fields;
};
struct __declspec(align(8)) Stack_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleData___Fields {
  struct MoonEffectGenericRevertibleData_MoonEffectRevertibleData__Array * _array;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct Stack_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleData_ {
  struct Stack_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleData___Class *klass;
  struct MonitorData *monitor;
  struct Stack_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleData___Fields fields;
};
struct HashSet_1_T_Slot_UnityEngine_ParticleSystem___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct HashSet_1_T_Slot_UnityEngine_ParticleSystem___StaticFields {
};
struct HashSet_1_T_Slot_UnityEngine_ParticleSystem___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HashSet_1_T_Slot_UnityEngine_ParticleSystem___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HashSet_1_T_Slot_UnityEngine_ParticleSystem___VTable vtable;
};
struct HashSet_1_UnityEngine_ParticleSystem___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_T__get_IsReadOnly;
  VirtualInvokeData System_Collections_Generic_ICollection_T__Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData OnDeserialization;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData OnDeserialization_1;
  VirtualInvokeData Add;
  VirtualInvokeData UnionWith;
};
struct HashSet_1_UnityEngine_ParticleSystem___StaticFields {
};
struct HashSet_1_UnityEngine_ParticleSystem___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HashSet_1_UnityEngine_ParticleSystem___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HashSet_1_UnityEngine_ParticleSystem___VTable vtable;
};
struct IRevertMoonEffectLogic__VTable {
  VirtualInvokeData Revert;
};
struct IRevertMoonEffectLogic__StaticFields {
};
struct IRevertMoonEffectLogic__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IRevertMoonEffectLogic__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IRevertMoonEffectLogic__VTable vtable;
};
struct IEnumerator_1_Moon_EffectsFramework_IRevertMoonEffectLogic___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Moon_EffectsFramework_IRevertMoonEffectLogic___StaticFields {
};
struct IEnumerator_1_Moon_EffectsFramework_IRevertMoonEffectLogic___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Moon_EffectsFramework_IRevertMoonEffectLogic___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Moon_EffectsFramework_IRevertMoonEffectLogic___VTable vtable;
};
struct List_1_Moon_EffectsFramework_IRevertMoonEffectLogic___VTable {
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
struct List_1_Moon_EffectsFramework_IRevertMoonEffectLogic___StaticFields {
  struct IRevertMoonEffectLogic__Array * _emptyArray;
};
struct List_1_Moon_EffectsFramework_IRevertMoonEffectLogic___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_Moon_EffectsFramework_IRevertMoonEffectLogic___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_Moon_EffectsFramework_IRevertMoonEffectLogic___VTable vtable;
};
struct MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Reset;
};
struct MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData__StaticFields {
};
struct MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData__VTable vtable;
};
struct IEnumerator_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData___StaticFields {
};
struct IEnumerator_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData___VTable vtable;
};
struct List_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData___VTable {
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
struct List_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData___StaticFields {
  struct MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData__Array * _emptyArray;
};
struct List_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData___VTable vtable;
};
struct MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Reset;
};
struct MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData__StaticFields {
};
struct MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData__VTable vtable;
};
struct IEnumerator_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData___StaticFields {
};
struct IEnumerator_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData___VTable vtable;
};
struct List_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData___VTable {
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
struct List_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData___StaticFields {
  struct MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData__Array * _emptyArray;
};
struct List_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData___VTable vtable;
};
struct MoonEffectGenericRevertibleData_MoonEffectRevertibleData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Reset;
};
struct MoonEffectGenericRevertibleData_MoonEffectRevertibleData__StaticFields {
};
struct MoonEffectGenericRevertibleData_MoonEffectRevertibleData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonEffectGenericRevertibleData_MoonEffectRevertibleData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonEffectGenericRevertibleData_MoonEffectRevertibleData__VTable vtable;
};
}