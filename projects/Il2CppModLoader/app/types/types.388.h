namespace app {
struct GZipDecoder_GzipHeaderState__Enum__StaticFields {
};

struct GZipDecoder_GzipHeaderState__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GZipDecoder_GzipHeaderState__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GZipDecoder_GzipHeaderState__Enum__VTable vtable;
};

struct GZipDecoder__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData ReadHeader;
    VirtualInvokeData ReadFooter;
    VirtualInvokeData UpdateWithBytesRead;
    VirtualInvokeData Validate;
};

struct GZipDecoder__StaticFields {
};

struct GZipDecoder__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GZipDecoder__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GZipDecoder__VTable vtable;
};

struct GZipStream_2__Fields {
    struct Stream__Fields _;
    struct DeflateStream_1 *deflateStream;
};

struct GZipStream_2 {
    struct GZipStream_2__Class *klass;
    MonitorData *monitor;
    struct GZipStream_2__Fields fields;
};

struct GZipStream_2__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CreateObjRef;
    VirtualInvokeData InitializeLifetimeService;
    VirtualInvokeData Dispose;
    VirtualInvokeData get_CanRead;
    VirtualInvokeData get_CanSeek;
    VirtualInvokeData get_CanTimeout;
    VirtualInvokeData get_CanWrite;
    VirtualInvokeData get_Length;
    VirtualInvokeData get_Position;
    VirtualInvokeData set_Position;
    VirtualInvokeData get_ReadTimeout;
    VirtualInvokeData set_ReadTimeout;
    VirtualInvokeData get_WriteTimeout;
    VirtualInvokeData set_WriteTimeout;
    VirtualInvokeData Close;
    VirtualInvokeData Dispose_1;
    VirtualInvokeData Flush;
    VirtualInvokeData FlushAsync;
    VirtualInvokeData BeginRead;
    VirtualInvokeData EndRead;
    VirtualInvokeData ReadAsync;
    VirtualInvokeData BeginWrite;
    VirtualInvokeData EndWrite;
    VirtualInvokeData WriteAsync;
    VirtualInvokeData Seek;
    VirtualInvokeData SetLength;
    VirtualInvokeData Read;
    VirtualInvokeData ReadByte;
    VirtualInvokeData Write;
    VirtualInvokeData WriteByte;
};

struct GZipStream_2__StaticFields {
};

struct GZipStream_2__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GZipStream_2__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GZipStream_2__VTable vtable;
};

struct __declspec(align(8)) GZipFormatter__Fields {
    struct Byte__Array *headerBytes;
    uint32_t _crc32;
    int64_t _inputStreamSizeModulo;
};

struct GZipFormatter {
    struct GZipFormatter__Class *klass;
    MonitorData *monitor;
    struct GZipFormatter__Fields fields;
};

struct GZipFormatter__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetHeader;
    VirtualInvokeData UpdateWithBytesRead;
    VirtualInvokeData GetFooter;
};

struct GZipFormatter__StaticFields {
};

struct GZipFormatter__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GZipFormatter__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GZipFormatter__VTable vtable;
};

struct InvalidDataException_1__Fields {
    struct SystemException__Fields _;
};

struct InvalidDataException_1 {
    struct InvalidDataException_1__Class *klass;
    MonitorData *monitor;
    struct InvalidDataException_1__Fields fields;
};

struct InvalidDataException_1__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetObjectData;
    VirtualInvokeData get_Message;
    VirtualInvokeData get_Data;
    VirtualInvokeData get_InnerException;
    VirtualInvokeData get_StackTrace;
    VirtualInvokeData get_Source;
    VirtualInvokeData GetObjectData_1;
    VirtualInvokeData GetType;
};

struct InvalidDataException_1__StaticFields {
};

struct InvalidDataException_1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct InvalidDataException_1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct InvalidDataException_1__VTable vtable;
};

struct OutputBuffer_BufferState {
    int32_t pos;
    uint32_t bitBuf;
    int32_t bitCount;
};

struct OutputBuffer_BufferState__Boxed {
    struct OutputBuffer_BufferState__Class *klass;
    MonitorData *monitor;
    struct OutputBuffer_BufferState fields;
};

struct OutputBuffer_BufferState__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct OutputBuffer_BufferState__StaticFields {
};

struct OutputBuffer_BufferState__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct OutputBuffer_BufferState__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct OutputBuffer_BufferState__VTable vtable;
};

struct SR_6 {
    struct SR_6__Class *klass;
    MonitorData *monitor;
};

struct SR_6__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SR_6__StaticFields {
};

struct SR_6__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SR_6__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SR_6__VTable vtable;
};

struct MeshTrail__Fields {
    struct MonoBehaviour__Fields _;
    struct SkinnedMeshRenderer *SourceSkinnedMesh;
    struct MeshFilter *SourceMesh;
    struct Material *Material;
    struct Texture2D *DensityTexture;
    bool InverseDensityTexture;
    float Width;
    int32_t SubSampling;
    int32_t TrailCount;
    int32_t MaxParticleCount;
    int32_t ParticlesPerSecond;
    float Duration;
    struct Vector3 AdditiveVelocity;
    struct Vector3 AdditiveVortexVelocity;
    float CameraVelocityInheritance;
    struct MeshTrail_MeshTrailTurbulence__Array *Turbulences;
    float TeleportationThreshold;
    bool EnableBaseColor;
    struct Texture2D *BaseColorTexture;
    bool RenderAsQuads;
    bool DebugDrawParticles;
    bool DebugDrawVortices;
    bool FaceCamera;
    bool UseXCoordToScaleEmitterDistribution;
    struct Vector3 EmitterMaxDistance;
    struct Vector3 AdditionalWorldBoundsExtents;
    struct Renderer *Renderer;
    struct AnimationCurve *ScaleOverLifetime;
    struct AnimationCurve *OpacityOverLifetime;
    struct AnimationCurve *ColorSaturationOverLifetime;
    struct AnimationCurve *InitialSpeedToOpacity;
    struct AnimationCurve *DistanceToOpacity;
    struct AnimationCurve *AdditiveVelocityXCurve;
    struct AnimationCurve *AdditiveVelocityYCurve;
    struct AnimationCurve *AdditiveVelocityZCurve;
    struct Transform__Array *m_bones;
    struct Matrix4x4__Array *m_bindPoses;
    struct Mesh *m_mesh;
    struct Material *m_visualizerMaterial;
    struct MeshFilter *m_meshFilter;
    struct Mesh *m_renderMesh;
    struct Mesh *m_precomputedRenderMesh;
    struct MeshFilter *m_prefetchedMeshFilter;
    bool m_initialized;
    int32_t m_effectiveTrailCount;
    int32_t m_effectiveMaxParticleCount;
    int32_t m_totalParticleCount;
    struct List_1_MeshTrail_MeshTrailEmitter_ *m_emitters;
    int32_t m_step1EmitNewParticlesComputeKernelId;
    int32_t m_step1UpdateParticlesComputeKernelId;
    int32_t m_step2ComputeKernelId;
    int32_t m_step3ComputeKernelId;
    int32_t m_clearStateComputeKernelId;
    int32_t m_clearParticlesComputeKernelId;
    int32_t m_clearVorticesComputeKernelId;
    int32_t m_maxVorticesCount;
    int32_t m_particleCount;
    int32_t m_firstParticleIndex;
    int32_t m_SavedParticlesCount;
    bool m_CanRestoreParticlesCount;
    bool m_clear;
    float m_initialSpeedAnimatedParametersMaxSpeed;
    float m_distanceAnimatedParametersMaxDistance;
    struct Texture2D *m_lifetimeAnimatedParametersTexture;
    struct Texture2D *m_initialSpeedAnimatedParametersTexture;
    struct Texture2D *m_lifetimeAdditiveVelocityTexture;
    struct Texture2D *m_distanceAnimatedParametersTexture;
    struct Matrix4x4__Array *m_skinningMatricesBufferData;
    bool m_runtimeInitialized;
    int32_t m_frameIdOfLastSimulationUpdate;
    struct Vector3 m_previousPosition;
    struct Nullable_1_UnityEngine_Vector3_ m_previousCameraPosition;
    float m_timeToEmitParticles;
    float m_teleportationThresholdSq;
    struct Vector3__Array *m_positionHistoryBuffer;
    int32_t m_positionHistoryBufferPointer;
    int32_t m_positionHistoryBufferCount;
    float m_rotationInvariantBoundsExtents;
    struct Texture2D *m_precomputedLifetimeAnimatedParametersTexture;
    struct Texture2D *m_precomputedInitialSpeedAnimatedParametersTexture;
    struct Texture2D *m_precomputedLifetimeAdditiveVelocityTexture;
    struct Texture2D *m_precomputedDistanceAnimatedParametersTexture;
    struct ComputeBuffer *m_emittersBuffer;
    struct ComputeBuffer *m_skinningMatricesBuffer;
    struct ComputeBuffer *m_particlesBuffer;
    struct ComputeBuffer *m_meshTrailStateBuffer;
    struct ComputeBuffer *m_turbulencesBuffer;
    struct ComputeBuffer *m_vorticesBuffer;
    struct ComputeBuffer *m_vorticesBufferStub;
    struct MaterialPropertyBlock *m_materialPropertyBlock;
    struct MaterialPropertyBlock *m_customMaterialPropertyBlock;
    bool _IsSuspended_k__BackingField;
    float m_timelineDeltaTime;
    float m_previousTimelineSampleTime;
    bool m_timelineWasInPreview;
};

struct MeshTrail {
    struct MeshTrail__Class *klass;
    MonitorData *monitor;
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
    MonitorData *monitor;
    struct MeshTrail_MeshTrailTurbulence fields;
};

struct MeshTrail_MeshTrailTurbulence__Array {
    struct MeshTrail_MeshTrailTurbulence__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct MeshTrail_MeshTrailTurbulence vector[32];
};

struct __declspec(align(8)) List_1_MeshTrail_MeshTrailEmitter___Fields {
    struct MeshTrail_MeshTrailEmitter__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_MeshTrail_MeshTrailEmitter_ {
    struct List_1_MeshTrail_MeshTrailEmitter___Class *klass;
    MonitorData *monitor;
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
    MonitorData *monitor;
    struct MeshTrail_MeshTrailEmitter fields;
};

struct MeshTrail_MeshTrailEmitter__Array {
    struct MeshTrail_MeshTrailEmitter__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct MeshTrail_MeshTrailEmitter vector[32];
};

struct IEnumerator_1_MeshTrail_MeshTrailEmitter_ {
    struct IEnumerator_1_MeshTrail_MeshTrailEmitter___Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MeshTrail_MeshTrailTurbulence__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MeshTrail_MeshTrailTurbulence__VTable vtable;
};

struct MeshTrail_MeshTrailTurbulence__Array__VTable {
};

struct MeshTrail_MeshTrailTurbulence__Array__StaticFields {
};

struct MeshTrail_MeshTrailTurbulence__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MeshTrail_MeshTrailTurbulence__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MeshTrail_MeshTrailTurbulence__Array__VTable vtable;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MeshTrail_MeshTrailEmitter__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MeshTrail_MeshTrailEmitter__VTable vtable;
};

struct MeshTrail_MeshTrailEmitter__Array__VTable {
};

struct MeshTrail_MeshTrailEmitter__Array__StaticFields {
};

struct MeshTrail_MeshTrailEmitter__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MeshTrail_MeshTrailEmitter__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MeshTrail_MeshTrailEmitter__Array__VTable vtable;
};

struct IEnumerator_1_MeshTrail_MeshTrailEmitter___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_MeshTrail_MeshTrailEmitter___StaticFields {
};

struct IEnumerator_1_MeshTrail_MeshTrailEmitter___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_MeshTrail_MeshTrailEmitter___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    struct MeshTrail_MeshTrailEmitter__Array *_emptyArray;
};

struct List_1_MeshTrail_MeshTrailEmitter___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_MeshTrail_MeshTrailEmitter___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    struct ComputeShader *m_computeShader;
};

struct MeshTrail__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MeshTrail__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MeshTrail__VTable vtable;
};

struct Mesh___VTable {
};

struct Mesh___StaticFields {
};

struct Mesh___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Mesh___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Mesh___VTable vtable;
};

struct Texture2D___VTable {
};

struct Texture2D___StaticFields {
};

struct Texture2D___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Texture2D___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Texture2D___VTable vtable;
};

struct MeshTrailAnimator__Fields {
    struct TimelineEntity__Fields _;
    struct MoonReference_1_MeshTrail_ *MeshTrailReference;
    struct AnimationCurve *CameraVelocityInheritanceCurve;
    float m_time;
    float m_originalCameraVelocityInheritance;
    struct MeshTrail *m_meshTrail;
};

struct MeshTrailAnimator {
    struct MeshTrailAnimator__Class *klass;
    MonitorData *monitor;
    struct MeshTrailAnimator__Fields fields;
};

struct __declspec(align(8)) MoonReference_1_MeshTrail___Fields {
    struct MoonTypeData m_data;
    bool m_isInitialized;
    bool m_isStatic;
    bool m_canResolve;
    struct IMoonTypeResolver *m_resolver;
    struct IMoonType_1_MeshTrail_ *m_cachedProxyType;
    struct MeshTrail *m_volatileValue;
};

struct MoonReference_1_MeshTrail_ {
    struct MoonReference_1_MeshTrail___Class *klass;
    MonitorData *monitor;
    struct MoonReference_1_MeshTrail___Fields fields;
};

struct IMoonType_1_MeshTrail_ {
    struct IMoonType_1_MeshTrail___Class *klass;
    MonitorData *monitor;
};

struct IMoonType_1_MeshTrail___VTable {
    VirtualInvokeData Resolve;
    VirtualInvokeData SafeResolve;
    VirtualInvokeData TryResolve;
};

struct IMoonType_1_MeshTrail___StaticFields {
};

struct IMoonType_1_MeshTrail___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IMoonType_1_MeshTrail___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IMoonType_1_MeshTrail___VTable vtable;
};

struct MeshTrail___VTable {
};

struct MeshTrail___StaticFields {
};

struct MeshTrail___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MeshTrail___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MeshTrail___VTable vtable;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonReference_1_MeshTrail___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MeshTrailAnimator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MeshTrailAnimator__VTable vtable;
};

struct MoonCurveTester__Fields {
    struct MonoBehaviour__Fields _;
    bool Mute;
    struct AnimationCurve *X;
    struct AnimationCurve *Y;
    struct AnimationCurve *Z;
};

struct MoonCurveTester {
    struct MoonCurveTester__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonCurveTester__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonTrailPerformanceTester__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoonTrailPerformanceTester__VTable vtable;
};

struct VirtualClipsProviderTester__Fields {
    struct MonoBehaviour__Fields _;
    VirtualTimelineRepresentationGroup__Enum Group;
    
    bool _InvalidateParentTimelineCache_k__BackingField;
};

struct VirtualClipsProviderTester {
    struct VirtualClipsProviderTester__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct VirtualClipsProviderTester__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct VirtualClipsProviderTester__VTable vtable;
};

struct MoonEffectPools {
    struct MoonEffectPools__Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) MoonEffectRevertHandlePool__Fields {
    struct Stack_1_Moon_EffectsFramework_MoonEffectRevertHandle_ *_Instances_k__BackingField;
};

struct MoonEffectRevertHandlePool {
    struct MoonEffectRevertHandlePool__Class *klass;
    MonitorData *monitor;
    struct MoonEffectRevertHandlePool__Fields fields;
};

struct __declspec(align(8)) Stack_1_Moon_EffectsFramework_MoonEffectRevertHandle___Fields {
    struct MoonEffectRevertHandle__Array *_array;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct Stack_1_Moon_EffectsFramework_MoonEffectRevertHandle_ {
    struct Stack_1_Moon_EffectsFramework_MoonEffectRevertHandle___Class *klass;
    MonitorData *monitor;
    struct Stack_1_Moon_EffectsFramework_MoonEffectRevertHandle___Fields fields;
};

struct __declspec(align(8)) MoonEffectRevertHandle__Fields {
    struct Transform *Root;
    struct List_1_UnityEngine_Transform_ *Children;
    struct HashSet_1_UnityEngine_ParticleSystem_ *ParticlesWithOriginalSpeedStored;
    struct List_1_Moon_EffectsFramework_IRevertMoonEffectLogic_ *m_logic;
    struct List_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleData_ *m_revertableData;
};

struct MoonEffectRevertHandle {
    struct MoonEffectRevertHandle__Class *klass;
    MonitorData *monitor;
    struct MoonEffectRevertHandle__Fields fields;
};

struct __declspec(align(8)) HashSet_1_UnityEngine_ParticleSystem___Fields {
    struct Int32__Array *_buckets;
    struct HashSet_1_T_Slot_UnityEngine_ParticleSystem___Array *_slots;
    int32_t _count;
    int32_t _lastIndex;
    int32_t _freeList;
    struct IEqualityComparer_1_UnityEngine_ParticleSystem_ *_comparer;
    int32_t _version;
    struct SerializationInfo *_siInfo;
};

struct HashSet_1_UnityEngine_ParticleSystem_ {
    struct HashSet_1_UnityEngine_ParticleSystem___Class *klass;
    MonitorData *monitor;
    struct HashSet_1_UnityEngine_ParticleSystem___Fields fields;
};

struct HashSet_1_T_Slot_UnityEngine_ParticleSystem_ {
    int32_t hashCode;
    int32_t next;
    struct ParticleSystem *value;
};

struct HashSet_1_T_Slot_UnityEngine_ParticleSystem___Boxed {
    struct HashSet_1_T_Slot_UnityEngine_ParticleSystem___Class *klass;
    MonitorData *monitor;
    struct HashSet_1_T_Slot_UnityEngine_ParticleSystem_ fields;
};

struct HashSet_1_T_Slot_UnityEngine_ParticleSystem___Array {
    struct HashSet_1_T_Slot_UnityEngine_ParticleSystem___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct HashSet_1_T_Slot_UnityEngine_ParticleSystem_ vector[32];
};

struct __declspec(align(8)) List_1_Moon_EffectsFramework_IRevertMoonEffectLogic___Fields {
    struct IRevertMoonEffectLogic__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_Moon_EffectsFramework_IRevertMoonEffectLogic_ {
    struct List_1_Moon_EffectsFramework_IRevertMoonEffectLogic___Class *klass;
    MonitorData *monitor;
    struct List_1_Moon_EffectsFramework_IRevertMoonEffectLogic___Fields fields;
};

struct IRevertMoonEffectLogic {
    struct IRevertMoonEffectLogic__Class *klass;
    MonitorData *monitor;
};

struct IRevertMoonEffectLogic__Array {
    struct IRevertMoonEffectLogic__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct IRevertMoonEffectLogic *vector[32];
};

struct IEnumerator_1_Moon_EffectsFramework_IRevertMoonEffectLogic_ {
    struct IEnumerator_1_Moon_EffectsFramework_IRevertMoonEffectLogic___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleData___Fields {
    struct MoonEffectGenericRevertibleData_MoonEffectRevertibleData__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleData_ {
    struct List_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleData___Class *klass;
    MonitorData *monitor;
    struct List_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleData___Fields fields;
};

struct __declspec(align(8)) MoonEffectGenericRevertibleData_MoonEffectRevertibleData__Fields {
    struct List_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData_ *ParticleData;
    struct List_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData_ *RendererData;
};

struct MoonEffectGenericRevertibleData_MoonEffectRevertibleData {
    struct MoonEffectGenericRevertibleData_MoonEffectRevertibleData__Class *klass;
    MonitorData *monitor;
    struct MoonEffectGenericRevertibleData_MoonEffectRevertibleData__Fields fields;
};

}
