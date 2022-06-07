namespace app {
struct PlayAnimationOnStart__Fields {
    struct MonoBehaviour__Fields _;
    struct MoonAnimation *Animation;
};

struct PlayAnimationOnStart {
    struct PlayAnimationOnStart__Class *klass;
    MonitorData *monitor;
    struct PlayAnimationOnStart__Fields fields;
};

struct PlayAnimationOnStart__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct PlayAnimationOnStart__StaticFields {
};

struct PlayAnimationOnStart__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PlayAnimationOnStart__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PlayAnimationOnStart__VTable vtable;
};

struct SimpleSwayAnimPostprocess_Params {
    float Gravity;
    float FracPow;
    float Acceleration;
    float Damping;
    float DampingWater;
    float MaxDeviationPercentage;
    float MaxDeviationPivotFrac;
};

struct SimpleSwayAnimPostprocess_Params__Boxed {
    struct SimpleSwayAnimPostprocess_Params__Class *klass;
    MonitorData *monitor;
    struct SimpleSwayAnimPostprocess_Params fields;
};

struct SimpleSwayAnimPostprocess_PerFrameReadOnly {
    float axx;
    float gravity;
    float damping;
    float weight;
    float dt;
    float dtInv;
    bool DebugDraw;
};

struct SimpleSwayAnimPostprocess_PerFrameReadOnly__Boxed {
    struct SimpleSwayAnimPostprocess_PerFrameReadOnly__Class *klass;
    MonitorData *monitor;
    struct SimpleSwayAnimPostprocess_PerFrameReadOnly fields;
};

struct SimpleSwayAnimPostprocess__Fields {
    struct AnimationPostprocess__Fields _;
    struct VerletPhysicsAnimationPostprocess *FancyPostprocess;
    int32_t OrderNumber;
    struct JointChains *JointChains;
    bool InWater;
    struct SimpleSwayAnimPostprocess_Params m_params;
    bool ForceUpdateParamsEachFrame;
    bool DebugDraw;
    bool m_wasJustActivated;
    struct JointChains_Chain__Array *m_chains;
    bool m_swaysInitialized;
    struct SimpleSwayAnimPostprocess_SwayChain__Array *m_sways;
    struct SimpleSwayAnimPostprocess_PerFrameReadOnly m_common;
};

struct SimpleSwayAnimPostprocess {
    struct SimpleSwayAnimPostprocess__Class *klass;
    MonitorData *monitor;
    struct SimpleSwayAnimPostprocess__Fields fields;
};

struct __declspec(align(8)) List_1_Moon_SimpleSwayAnimPostprocess___Fields {
    struct SimpleSwayAnimPostprocess__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_Moon_SimpleSwayAnimPostprocess_ {
    struct List_1_Moon_SimpleSwayAnimPostprocess___Class *klass;
    MonitorData *monitor;
    struct List_1_Moon_SimpleSwayAnimPostprocess___Fields fields;
};

struct SimpleSwayAnimPostprocess__Array {
    struct SimpleSwayAnimPostprocess__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct SimpleSwayAnimPostprocess *vector[32];
};

struct IEnumerator_1_Moon_SimpleSwayAnimPostprocess_ {
    struct IEnumerator_1_Moon_SimpleSwayAnimPostprocess___Class *klass;
    MonitorData *monitor;
};

struct VerletPhysicsAnimationPostprocess__Fields {
    struct AnimationPostprocess__Fields _;
    int32_t OrderNumber;
    struct JointChains *JointChains;
    struct Vector3 BoneDirectionAxis;
    bool AutoDetectBoneDirectionAxis;
    int32_t VerletIterationCount;
    bool AnimateLastJointRotation;
    float LastLinkLength;
    struct VectorAnimationParameter *AdditionalForceParameter;
    struct Vector3 AdditionalForce;
    struct Vector3 TurbulenceForce;
    float TurbulenceOscillationSpeed;
    bool AttenuateTurbulence;
    float AnimationPoseRetainForce;
    bool UseAnimationPoseRetainForceTip;
    float AnimationPoseRetainForceTip;
    float AnimationPoseRetainForceDuringCrossfade;
    float AnimationRetainForceGravityFactor;
    float DampingRoot;
    float DampingTip;
    float AngularLimit;
    float Stiffness;
    float Gravity;
    bool JointsAreAnimated;
    bool DebugDraw;
    bool Jobify;
    bool UseOptimizedValueWriteout;
    bool DetectDeterminantSignChange;
    float DistanceTolerance;
    float AngleTolerance;
    float MaxRootDeviationFromPoseDistance;
    float MaxDeviationFromPoseDistance;
    bool OnlyEnableDuringBaseLayerAnimationCrossfade;
    float CrossfadeEnableBlendInSpeed;
    float CrossfadeEnableBlendOutSpeed;
    float CrossfadeEnableMinWeight;
    bool MakeThreadSafe;
    bool ForceBlockOnJobCompletion;
    struct IRng *m_rng;
    bool m_wasJustActivated;
    int32_t m_transformDeterminantSign;
    bool m_useJobs;
    struct List_1_Moon_VerletPhysicsAnimationPostprocess_VerletChain_ *m_verletChains;
    struct JobHandle m_jobHandle;
    float m_simulationTime;
    float m_crossfadeBasedWeight;
};

struct VerletPhysicsAnimationPostprocess {
    struct VerletPhysicsAnimationPostprocess__Class *klass;
    MonitorData *monitor;
    struct VerletPhysicsAnimationPostprocess__Fields fields;
};

struct __declspec(align(8)) List_1_Moon_VerletPhysicsAnimationPostprocess_VerletChain___Fields {
    struct VerletPhysicsAnimationPostprocess_VerletChain__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_Moon_VerletPhysicsAnimationPostprocess_VerletChain_ {
    struct List_1_Moon_VerletPhysicsAnimationPostprocess_VerletChain___Class *klass;
    MonitorData *monitor;
    struct List_1_Moon_VerletPhysicsAnimationPostprocess_VerletChain___Fields fields;
};

struct __declspec(align(8)) VerletPhysicsAnimationPostprocess_VerletChain__Fields {
    struct Vector3 TurbulenceForce;
    bool HasTurbulenceForce;
    struct Quaternion RootParentRotation;
    struct Quaternion RootWorldRotation;
    struct Matrix4x4 RootWorldMatrix;
    struct Matrix4x4 RootLocalMatrix;
    struct VerletBodyIndexed *Body;
    struct List_1_Moon_VerletPhysicsAnimationPostprocess_JointMetadata_ *Joints;
};

struct VerletPhysicsAnimationPostprocess_VerletChain {
    struct VerletPhysicsAnimationPostprocess_VerletChain__Class *klass;
    MonitorData *monitor;
    struct VerletPhysicsAnimationPostprocess_VerletChain__Fields fields;
};

struct __declspec(align(8)) VerletBodyIndexed__Fields {
    int32_t LinksAccuracy;
    struct Vector3 Gravity;
    float DistanceTolerance;
    float AngleTolerance;
    struct VerletBodyIndexed_Point__Array *Points;
    struct VerletBodyIndexed_Link__Array *Links;
    struct VerletBodyIndexed_AngularConstraint__Array *AngularConstraints;
};

struct VerletBodyIndexed {
    struct VerletBodyIndexed__Class *klass;
    MonitorData *monitor;
    struct VerletBodyIndexed__Fields fields;
};

struct VerletBodyIndexed_Point {
    struct Vector3 PrevPosition;
    struct Vector3 Position;
    struct Vector3 Acceleration;
    float Damping;
    float InverseMass;
};

struct VerletBodyIndexed_Point__Boxed {
    struct VerletBodyIndexed_Point__Class *klass;
    MonitorData *monitor;
    struct VerletBodyIndexed_Point fields;
};

struct VerletBodyIndexed_Point__Array {
    struct VerletBodyIndexed_Point__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct VerletBodyIndexed_Point vector[32];
};

struct VerletBodyIndexed_Link {
    int32_t IndexP0;
    int32_t IndexP1;
    float RestDistance;
    float Stiffness;
};

struct VerletBodyIndexed_Link__Boxed {
    struct VerletBodyIndexed_Link__Class *klass;
    MonitorData *monitor;
    struct VerletBodyIndexed_Link fields;
};

struct VerletBodyIndexed_Link__Array {
    struct VerletBodyIndexed_Link__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct VerletBodyIndexed_Link vector[32];
};

struct VerletBodyIndexed_AngularConstraint {
    int32_t IndexL0;
    int32_t IndexL1;
    float MaxAngle;
};

struct VerletBodyIndexed_AngularConstraint__Boxed {
    struct VerletBodyIndexed_AngularConstraint__Class *klass;
    MonitorData *monitor;
    struct VerletBodyIndexed_AngularConstraint fields;
};

struct VerletBodyIndexed_AngularConstraint__Array {
    struct VerletBodyIndexed_AngularConstraint__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct VerletBodyIndexed_AngularConstraint vector[32];
};

struct __declspec(align(8)) List_1_Moon_VerletPhysicsAnimationPostprocess_JointMetadata___Fields {
    struct VerletPhysicsAnimationPostprocess_JointMetadata__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_Moon_VerletPhysicsAnimationPostprocess_JointMetadata_ {
    struct List_1_Moon_VerletPhysicsAnimationPostprocess_JointMetadata___Class *klass;
    MonitorData *monitor;
    struct List_1_Moon_VerletPhysicsAnimationPostprocess_JointMetadata___Fields fields;
};

struct __declspec(align(8)) VerletPhysicsAnimationPostprocess_JointMetadata__Fields {
    struct Transform *InstanceTransform;
    bool HasInstanceTransform;
    struct Vector3 InstancePosition;
    struct Vector3 InstanceRootLocalPosition;
    struct Quaternion AnimationOutputJointRotation;
    struct Vector3 AnimationOutputJointPosition;
    struct Quaternion ResultLocalRotation;
    struct Quaternion CachedLocalRotation;
    struct Quaternion PreviousLocalRotation;
    int32_t VerletPointIndex;
    int32_t VerletLinkIndex;
    struct Vector3 Axis;
    struct Vector3 OriginalLocalPosition;
    struct Quaternion OriginalLocalRotation;
    float TurbulenceOffset;
    struct Vector3 AxisDirection;
};

struct VerletPhysicsAnimationPostprocess_JointMetadata {
    struct VerletPhysicsAnimationPostprocess_JointMetadata__Class *klass;
    MonitorData *monitor;
    struct VerletPhysicsAnimationPostprocess_JointMetadata__Fields fields;
};

struct VerletPhysicsAnimationPostprocess_JointMetadata__Array {
    struct VerletPhysicsAnimationPostprocess_JointMetadata__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct VerletPhysicsAnimationPostprocess_JointMetadata *vector[32];
};

struct IEnumerator_1_Moon_VerletPhysicsAnimationPostprocess_JointMetadata_ {
    struct IEnumerator_1_Moon_VerletPhysicsAnimationPostprocess_JointMetadata___Class *klass;
    MonitorData *monitor;
};

struct VerletPhysicsAnimationPostprocess_VerletChain__Array {
    struct VerletPhysicsAnimationPostprocess_VerletChain__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct VerletPhysicsAnimationPostprocess_VerletChain *vector[32];
};

struct IEnumerator_1_Moon_VerletPhysicsAnimationPostprocess_VerletChain_ {
    struct IEnumerator_1_Moon_VerletPhysicsAnimationPostprocess_VerletChain___Class *klass;
    MonitorData *monitor;
};

struct NativeArray_1_System_Single_ {
    struct Void *m_Buffer;
    int32_t m_Length;
    Allocator__Enum m_AllocatorLabel;
    
};

struct NativeArray_1_System_Single___Boxed {
    struct NativeArray_1_System_Single___Class *klass;
    MonitorData *monitor;
    struct NativeArray_1_System_Single_ fields;
};

struct NativeArray_1_UnityEngine_Vector3_ {
    struct Void *m_Buffer;
    int32_t m_Length;
    Allocator__Enum m_AllocatorLabel;
    
};

struct NativeArray_1_UnityEngine_Vector3___Boxed {
    struct NativeArray_1_UnityEngine_Vector3___Class *klass;
    MonitorData *monitor;
    struct NativeArray_1_UnityEngine_Vector3_ fields;
};

struct NativeArray_1_UnityEngine_Quaternion_ {
    struct Void *m_Buffer;
    int32_t m_Length;
    Allocator__Enum m_AllocatorLabel;
    
};

struct NativeArray_1_UnityEngine_Quaternion___Boxed {
    struct NativeArray_1_UnityEngine_Quaternion___Class *klass;
    MonitorData *monitor;
    struct NativeArray_1_UnityEngine_Quaternion_ fields;
};

struct SimpleSwayAnimPostprocess_Job {
    int32_t m_jointCount;
    float m_chainLen;
    struct SimpleSwayAnimPostprocess_Params p;
    struct NativeArray_1_System_Single_ m_jointFrac;
    struct SimpleSwayAnimPostprocess_PerFrameReadOnly q;
    struct NativeArray_1_UnityEngine_Vector3_ m_jointPosWorld;
    struct NativeArray_1_UnityEngine_Vector3_ m_jointPosDelta;
    struct NativeArray_1_UnityEngine_Quaternion_ m_jointRotWorld;
    struct NativeArray_1_UnityEngine_Vector3_ m_tipPosWorld;
    struct NativeArray_1_UnityEngine_Vector3_ m_tipVeloWorld;
    struct Vector3 m_tipPosDeviationWorld;
    float maxDeviationDist;
    float maxDeviationDistSqr;
};

struct SimpleSwayAnimPostprocess_Job__Boxed {
    struct SimpleSwayAnimPostprocess_Job__Class *klass;
    MonitorData *monitor;
    struct SimpleSwayAnimPostprocess_Job fields;
};

struct __declspec(align(8)) SimpleSwayAnimPostprocess_SwayChain__Fields {
    struct SimpleSwayAnimPostprocess_Job m_job;
    bool m_scheduled;
    bool m_executed;
    struct JobHandle m_jobHandle;
    int32_t m_jointCount;
    struct Vector3__Array *m_jointPosWorldIn;
    struct Vector3__Array *m_jointPosDeltaOut;
    struct Quaternion__Array *m_jointRotWorld;
};

struct SimpleSwayAnimPostprocess_SwayChain {
    struct SimpleSwayAnimPostprocess_SwayChain__Class *klass;
    MonitorData *monitor;
    struct SimpleSwayAnimPostprocess_SwayChain__Fields fields;
};

struct IEnumerator_1_UnityEngine_Quaternion_ {
    struct IEnumerator_1_UnityEngine_Quaternion___Class *klass;
    MonitorData *monitor;
};

struct SimpleSwayAnimPostprocess_SwayChain__Array {
    struct SimpleSwayAnimPostprocess_SwayChain__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct SimpleSwayAnimPostprocess_SwayChain *vector[32];
};

struct SimpleSwayAnimPostprocess__Array__VTable {
};

struct SimpleSwayAnimPostprocess__Array__StaticFields {
};

struct SimpleSwayAnimPostprocess__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SimpleSwayAnimPostprocess__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SimpleSwayAnimPostprocess__Array__VTable vtable;
};

struct IEnumerator_1_Moon_SimpleSwayAnimPostprocess___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_Moon_SimpleSwayAnimPostprocess___StaticFields {
};

struct IEnumerator_1_Moon_SimpleSwayAnimPostprocess___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_Moon_SimpleSwayAnimPostprocess___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_Moon_SimpleSwayAnimPostprocess___VTable vtable;
};

struct List_1_Moon_SimpleSwayAnimPostprocess___VTable {
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

struct List_1_Moon_SimpleSwayAnimPostprocess___StaticFields {
    struct SimpleSwayAnimPostprocess__Array *_emptyArray;
};

struct List_1_Moon_SimpleSwayAnimPostprocess___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_Moon_SimpleSwayAnimPostprocess___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_Moon_SimpleSwayAnimPostprocess___VTable vtable;
};

struct VerletBodyIndexed_Point__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct VerletBodyIndexed_Point__StaticFields {
};

struct VerletBodyIndexed_Point__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct VerletBodyIndexed_Point__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct VerletBodyIndexed_Point__VTable vtable;
};

struct VerletBodyIndexed_Point__Array__VTable {
};

struct VerletBodyIndexed_Point__Array__StaticFields {
};

struct VerletBodyIndexed_Point__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct VerletBodyIndexed_Point__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct VerletBodyIndexed_Point__Array__VTable vtable;
};

struct VerletBodyIndexed_Link__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct VerletBodyIndexed_Link__StaticFields {
};

struct VerletBodyIndexed_Link__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct VerletBodyIndexed_Link__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct VerletBodyIndexed_Link__VTable vtable;
};

struct VerletBodyIndexed_Link__Array__VTable {
};

struct VerletBodyIndexed_Link__Array__StaticFields {
};

struct VerletBodyIndexed_Link__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct VerletBodyIndexed_Link__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct VerletBodyIndexed_Link__Array__VTable vtable;
};

struct VerletBodyIndexed_AngularConstraint__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct VerletBodyIndexed_AngularConstraint__StaticFields {
};

struct VerletBodyIndexed_AngularConstraint__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct VerletBodyIndexed_AngularConstraint__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct VerletBodyIndexed_AngularConstraint__VTable vtable;
};

struct VerletBodyIndexed_AngularConstraint__Array__VTable {
};

struct VerletBodyIndexed_AngularConstraint__Array__StaticFields {
};

struct VerletBodyIndexed_AngularConstraint__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct VerletBodyIndexed_AngularConstraint__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct VerletBodyIndexed_AngularConstraint__Array__VTable vtable;
};

struct VerletBodyIndexed__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct VerletBodyIndexed__StaticFields {
};

struct VerletBodyIndexed__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct VerletBodyIndexed__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct VerletBodyIndexed__VTable vtable;
};

struct VerletPhysicsAnimationPostprocess_JointMetadata__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct VerletPhysicsAnimationPostprocess_JointMetadata__StaticFields {
};

struct VerletPhysicsAnimationPostprocess_JointMetadata__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct VerletPhysicsAnimationPostprocess_JointMetadata__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct VerletPhysicsAnimationPostprocess_JointMetadata__VTable vtable;
};

struct VerletPhysicsAnimationPostprocess_JointMetadata__Array__VTable {
};

struct VerletPhysicsAnimationPostprocess_JointMetadata__Array__StaticFields {
};

struct VerletPhysicsAnimationPostprocess_JointMetadata__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct VerletPhysicsAnimationPostprocess_JointMetadata__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct VerletPhysicsAnimationPostprocess_JointMetadata__Array__VTable vtable;
};

struct IEnumerator_1_Moon_VerletPhysicsAnimationPostprocess_JointMetadata___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_Moon_VerletPhysicsAnimationPostprocess_JointMetadata___StaticFields {
};

struct IEnumerator_1_Moon_VerletPhysicsAnimationPostprocess_JointMetadata___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_Moon_VerletPhysicsAnimationPostprocess_JointMetadata___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_Moon_VerletPhysicsAnimationPostprocess_JointMetadata___VTable vtable;
};

struct List_1_Moon_VerletPhysicsAnimationPostprocess_JointMetadata___VTable {
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

struct List_1_Moon_VerletPhysicsAnimationPostprocess_JointMetadata___StaticFields {
    struct VerletPhysicsAnimationPostprocess_JointMetadata__Array *_emptyArray;
};

struct List_1_Moon_VerletPhysicsAnimationPostprocess_JointMetadata___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_Moon_VerletPhysicsAnimationPostprocess_JointMetadata___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_Moon_VerletPhysicsAnimationPostprocess_JointMetadata___VTable vtable;
};

struct VerletPhysicsAnimationPostprocess_VerletChain__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct VerletPhysicsAnimationPostprocess_VerletChain__StaticFields {
};

struct VerletPhysicsAnimationPostprocess_VerletChain__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct VerletPhysicsAnimationPostprocess_VerletChain__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct VerletPhysicsAnimationPostprocess_VerletChain__VTable vtable;
};

struct VerletPhysicsAnimationPostprocess_VerletChain__Array__VTable {
};

struct VerletPhysicsAnimationPostprocess_VerletChain__Array__StaticFields {
};

struct VerletPhysicsAnimationPostprocess_VerletChain__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct VerletPhysicsAnimationPostprocess_VerletChain__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct VerletPhysicsAnimationPostprocess_VerletChain__Array__VTable vtable;
};

struct IEnumerator_1_Moon_VerletPhysicsAnimationPostprocess_VerletChain___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_Moon_VerletPhysicsAnimationPostprocess_VerletChain___StaticFields {
};

struct IEnumerator_1_Moon_VerletPhysicsAnimationPostprocess_VerletChain___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_Moon_VerletPhysicsAnimationPostprocess_VerletChain___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_Moon_VerletPhysicsAnimationPostprocess_VerletChain___VTable vtable;
};

struct List_1_Moon_VerletPhysicsAnimationPostprocess_VerletChain___VTable {
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

struct List_1_Moon_VerletPhysicsAnimationPostprocess_VerletChain___StaticFields {
    struct VerletPhysicsAnimationPostprocess_VerletChain__Array *_emptyArray;
};

struct List_1_Moon_VerletPhysicsAnimationPostprocess_VerletChain___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_Moon_VerletPhysicsAnimationPostprocess_VerletChain___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_Moon_VerletPhysicsAnimationPostprocess_VerletChain___VTable vtable;
};

struct VerletPhysicsAnimationPostprocess__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_UpdateType;
    VirtualInvokeData OnUpdate;
    VirtualInvokeData get_RequiresOnUpdate;
    VirtualInvokeData get_IsActive;
    VirtualInvokeData OnUpdate_1;
    VirtualInvokeData get_TotalWeight;
    VirtualInvokeData get_HasFinished;
    VirtualInvokeData get_Order;
    VirtualInvokeData OnPostEnable;
    VirtualInvokeData OnPostDisable;
    VirtualInvokeData OnAddedToAnimator;
    VirtualInvokeData OnRemovedFromAnimator;
    VirtualInvokeData OnActivated;
    VirtualInvokeData OnDeactivated;
    VirtualInvokeData Process;
    VirtualInvokeData OnSceneGui;
};

struct VerletPhysicsAnimationPostprocess__StaticFields {
    bool DisableVerletPostProcess;
    bool BlockOnJobCompletion;
    bool AutomaticallyUseJobs;
};

struct VerletPhysicsAnimationPostprocess__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct VerletPhysicsAnimationPostprocess__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct VerletPhysicsAnimationPostprocess__VTable vtable;
};

struct SimpleSwayAnimPostprocess_Params__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SimpleSwayAnimPostprocess_Params__StaticFields {
};

struct SimpleSwayAnimPostprocess_Params__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SimpleSwayAnimPostprocess_Params__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SimpleSwayAnimPostprocess_Params__VTable vtable;
};

struct NativeArray_1_System_Single___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Dispose;
    VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
    VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
    VirtualInvokeData Equals_1;
};

struct NativeArray_1_System_Single___StaticFields {
};

struct NativeArray_1_System_Single___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NativeArray_1_System_Single___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NativeArray_1_System_Single___VTable vtable;
};

struct SimpleSwayAnimPostprocess_PerFrameReadOnly__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SimpleSwayAnimPostprocess_PerFrameReadOnly__StaticFields {
};

struct SimpleSwayAnimPostprocess_PerFrameReadOnly__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SimpleSwayAnimPostprocess_PerFrameReadOnly__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SimpleSwayAnimPostprocess_PerFrameReadOnly__VTable vtable;
};

struct NativeArray_1_UnityEngine_Vector3___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Dispose;
    VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
    VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
    VirtualInvokeData Equals_1;
};

struct NativeArray_1_UnityEngine_Vector3___StaticFields {
};

struct NativeArray_1_UnityEngine_Vector3___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NativeArray_1_UnityEngine_Vector3___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NativeArray_1_UnityEngine_Vector3___VTable vtable;
};

struct IEnumerator_1_UnityEngine_Quaternion___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_UnityEngine_Quaternion___StaticFields {
};

struct IEnumerator_1_UnityEngine_Quaternion___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_UnityEngine_Quaternion___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_UnityEngine_Quaternion___VTable vtable;
};

struct NativeArray_1_UnityEngine_Quaternion___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Dispose;
    VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
    VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
    VirtualInvokeData Equals_1;
};

struct NativeArray_1_UnityEngine_Quaternion___StaticFields {
};

struct NativeArray_1_UnityEngine_Quaternion___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NativeArray_1_UnityEngine_Quaternion___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NativeArray_1_UnityEngine_Quaternion___VTable vtable;
};

struct SimpleSwayAnimPostprocess_Job__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Execute;
};

}
