namespace app {
    struct FilteredRandomRange {
        struct FilteredRandomRange__Class* klass;
        MonitorData* monitor;
        struct FilteredRandomRange__Fields fields;
    };

    struct IRng {
        struct IRng__Class* klass;
        MonitorData* monitor;
    };

    struct IRng__VTable {
        VirtualInvokeData GetNext;
        VirtualInvokeData GetNextFloat;
        VirtualInvokeData GetInRange;
        VirtualInvokeData GetFloatInRange;
    };

    struct IRng__StaticFields {
    };

    struct IRng__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IRng__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IRng__VTable vtable;
    };

    struct FilteredRandomRange__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct FilteredRandomRange__StaticFields {
    };

    struct FilteredRandomRange__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FilteredRandomRange__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FilteredRandomRange__VTable vtable;
    };

    struct ReflectionExtensions_c {
        struct ReflectionExtensions_c__Class* klass;
        MonitorData* monitor;
    };

    struct ReflectionExtensions_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ReflectionExtensions_c__StaticFields {
        struct ReflectionExtensions_c* __9;
        struct Func_2_Type_Boolean_* __9__0_0;
    };

    struct ReflectionExtensions_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ReflectionExtensions_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ReflectionExtensions_c__VTable vtable;
    };

    struct CollisionEventHandler__Fields {
        struct MonoBehaviour__Fields _;
        struct Action_1_UnityEngine_Collision_* CollisionEnterEvent;
        struct Action_1_UnityEngine_Collision_* CollisionStayEvent;
        struct Action_1_UnityEngine_Collision_* CollisionExitEvent;
    };

    struct CollisionEventHandler {
        struct CollisionEventHandler__Class* klass;
        MonitorData* monitor;
        struct CollisionEventHandler__Fields fields;
    };

    struct Action_1_UnityEngine_Collision___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Action_1_UnityEngine_Collision_ {
        struct Action_1_UnityEngine_Collision___Class* klass;
        MonitorData* monitor;
        struct Action_1_UnityEngine_Collision___Fields fields;
    };

    struct Action_1_UnityEngine_Collision___VTable {
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

    struct Action_1_UnityEngine_Collision___StaticFields {
    };

    struct Action_1_UnityEngine_Collision___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Action_1_UnityEngine_Collision___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Action_1_UnityEngine_Collision___VTable vtable;
    };

    struct CollisionEventHandler__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CollisionEventHandler__StaticFields {
    };

    struct CollisionEventHandler__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CollisionEventHandler__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CollisionEventHandler__VTable vtable;
    };

    struct CollisionEventHandler_c {
        struct CollisionEventHandler_c__Class* klass;
        MonitorData* monitor;
    };

    struct CollisionEventHandler_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CollisionEventHandler_c__StaticFields {
        struct CollisionEventHandler_c* __9;
        struct Action_1_UnityEngine_Collision_* __9__6_0;
        struct Action_1_UnityEngine_Collision_* __9__6_1;
        struct Action_1_UnityEngine_Collision_* __9__6_2;
    };

    struct CollisionEventHandler_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CollisionEventHandler_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CollisionEventHandler_c__VTable vtable;
    };

    struct MoonTrail_MoonTrailParticle {
        struct Vector3 Position;
        struct Vector3 Normal;
        struct Vector3 Binormal;
        struct Vector3 Tangent;
        struct Color Color;
        float Lifetime;
        float OriginalLifetime;
        float Thickness;
        float InitialThickness;
        float TempLenghtFromStart;
    };

    struct MoonTrail_MoonTrailParticle__Boxed {
        struct MoonTrail_MoonTrailParticle__Class* klass;
        MonitorData* monitor;
        struct MoonTrail_MoonTrailParticle fields;
    };

    struct MoonTrail_MoonTrailParticle__Array {
        struct MoonTrail_MoonTrailParticle__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct MoonTrail_MoonTrailParticle vector[32];
    };

    struct MoonTrail_MoonTrailParticle__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MoonTrail_MoonTrailParticle__StaticFields {
    };

    struct MoonTrail_MoonTrailParticle__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MoonTrail_MoonTrailParticle__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MoonTrail_MoonTrailParticle__VTable vtable;
    };

    struct MoonTrail_MoonTrailParticle__Array__VTable {
    };

    struct MoonTrail_MoonTrailParticle__Array__StaticFields {
    };

    struct MoonTrail_MoonTrailParticle__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MoonTrail_MoonTrailParticle__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MoonTrail_MoonTrailParticle__Array__VTable vtable;
    };

    struct MoonTrail_MoonTrailParticle___VTable {
    };

    struct MoonTrail_MoonTrailParticle___StaticFields {
    };

    struct MoonTrail_MoonTrailParticle___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MoonTrail_MoonTrailParticle___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MoonTrail_MoonTrailParticle___VTable vtable;
    };

    enum class MoonTrail_TwoTargetsFolowMode__Enum : int32_t {
        DistanceIsThickness = 0x00000000,
        TightFollow = 0x00000001,
    };

    struct MoonTrail_TwoTargetsFolowMode__Enum__Boxed {
        struct MoonTrail_TwoTargetsFolowMode__Enum__Class* klass;
        MonitorData* monitor;
        MoonTrail_TwoTargetsFolowMode__Enum value;
    };

    enum class MoonTrail_UVMode__Enum : int32_t {
        Default = 0x00000000,
        HighQuality = 0x00000001,
    };

    struct MoonTrail_UVMode__Enum__Boxed {
        struct MoonTrail_UVMode__Enum__Class* klass;
        MonitorData* monitor;
        MoonTrail_UVMode__Enum value;
    };

    struct MoonTrail__Fields {
        struct MonoBehaviour__Fields _;
        struct MoonReference_1_UnityEngine_Transform_* Target;
        struct MoonReference_1_UnityEngine_Transform_* SecondaryTarget;
        MoonTrail_TwoTargetsFolowMode__Enum TwoTargetsMode;

        int32_t TightFollowTangentSmoothness;
        MoonTrail_UVMode__Enum UVMappingMode;

        int32_t AmountOfDynamicParticles;
        bool Emit;
        float InitialThickness;
        struct Color InitialColor;
        bool EmitAtStart;
        float Resolution;
        float Lifetime;
        float NormalInterpolationSpeed;
        bool UseThicknessOverTime;
        struct AnimationCurve* ThicknessOverTime;
        bool UseColorOverTime;
        struct Gradient* AlphaOverTime;
        struct Gradient* AuxiliaryAOverTime;
        struct Gradient* AuxiliaryBOverTime;
        bool FlattenVerticesForUvInterpolation;
        struct MonoBehaviour* BakedPathProviderSourceFirstTarget;
        struct MonoBehaviour* BakedPathProviderSourceSecondTarget;
        float PathSampleInterval;
        bool Force2DNormals;
        bool FollowTransform;
        bool Debug;
        bool TimelineEditorEmit;
        float m_splineBendAmount;
        float m_splineBendSpeed;
        struct CatmullSpline* m_spline;
        float m_minDistanceSqr;
        float m_minDistance;
        struct Vector3__Array* m_controlPoints;
        bool m_hasControlPoints;
        struct Vector3 m_previusTargetPosition;
        struct Vector3 m_targetDelta;
        struct Vector3 m_targetSpeed;
        struct Vector3 m_lastNonZeroDelta;
        struct Vector3 m_lastEmissionTargetPosition;
        struct Vector3 m_originalTransformPosition;
        struct Vector3 m_transformDelta;
        bool m_wasEmiting;
        float m_randomOffset;
        struct MoonTrail_MoonTrailParticle__Array* m_trailParticlesBuffer;
        int32_t m_trailParticlesBufferIdx0;
        int32_t m_trailParticlesBufferIdx1;
        struct Color__Array* m_rasterizedGradients;
        bool m_useRasterizedGradients;
        struct Vector3 m_lastControllPointOffset;
        float m_uvStep;
        float m_trailLenght;
        struct TrailPathProvider* m_firstTargetPathProvider;
        struct TrailPathProvider* m_secondTargetPathProvider;
        float m_pathProviderTimer;
        struct List_1_Moon_MoonTrail_SimulationFrameData_* m_simulationFrames;
        int32_t m_simulationFrameIndex;
        struct Renderer* m_renderer;
        struct MeshFilter* m_meshFilter;
        struct MaterialPropertyBlock* m_materialPropertyBlock;
        struct Bounds m_localRotationInvariantBounds;
        struct IMaterialPropertyBlockProvider* m_materialPropertyBlockProvider;
        struct Bounds _Bounds_k__BackingField;
        bool _IsSuspended_k__BackingField;
        int32_t _FramesToSkip_k__BackingField;
        struct Camera* m_camera;
    };

    struct MoonTrail {
        struct MoonTrail__Class* klass;
        MonitorData* monitor;
        struct MoonTrail__Fields fields;
    };

    struct __declspec(align(8)) Stack_1_Moon_MoonTrail_MoonTrailParticle___Fields {
        struct MoonTrail_MoonTrailParticle__Array__Array* _array;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct Stack_1_Moon_MoonTrail_MoonTrailParticle_ {
        struct Stack_1_Moon_MoonTrail_MoonTrailParticle___Class* klass;
        MonitorData* monitor;
        struct Stack_1_Moon_MoonTrail_MoonTrailParticle___Fields fields;
    };

    struct MoonTrail_MoonTrailParticle__Array__Array {
        struct MoonTrail_MoonTrailParticle__Array__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct MoonTrail_MoonTrailParticle__Array* vector[32];
    };

    struct IEnumerator_1_Moon_MoonTrail_MoonTrailParticle_ {
        struct IEnumerator_1_Moon_MoonTrail_MoonTrailParticle___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_Moon_MoonTrail___Fields {
        struct MoonTrail__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Moon_MoonTrail_ {
        struct List_1_Moon_MoonTrail___Class* klass;
        MonitorData* monitor;
        struct List_1_Moon_MoonTrail___Fields fields;
    };

    struct MoonTrail__Array {
        struct MoonTrail__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct MoonTrail* vector[32];
    };

    struct IEnumerator_1_Moon_MoonTrail_ {
        struct IEnumerator_1_Moon_MoonTrail___Class* klass;
        MonitorData* monitor;
    };

    struct TrailPathProvider {
        struct TrailPathProvider__Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_Moon_MoonTrail_SimulationFrameData___Fields {
        struct MoonTrail_SimulationFrameData__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Moon_MoonTrail_SimulationFrameData_ {
        struct List_1_Moon_MoonTrail_SimulationFrameData___Class* klass;
        MonitorData* monitor;
        struct List_1_Moon_MoonTrail_SimulationFrameData___Fields fields;
    };

    struct MoonTrail_SimulationFrameData {
        struct Vector3 TargetALocalPosition;
        struct Vector3 TargetBLocalPosition;
        float DeltaTime;
    };

    struct MoonTrail_SimulationFrameData__Boxed {
        struct MoonTrail_SimulationFrameData__Class* klass;
        MonitorData* monitor;
        struct MoonTrail_SimulationFrameData fields;
    };

    struct MoonTrail_SimulationFrameData__Array {
        struct MoonTrail_SimulationFrameData__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct MoonTrail_SimulationFrameData vector[32];
    };

    struct IEnumerator_1_Moon_MoonTrail_SimulationFrameData_ {
        struct IEnumerator_1_Moon_MoonTrail_SimulationFrameData___Class* klass;
        MonitorData* monitor;
    };

    struct IMaterialPropertyBlockProvider {
        struct IMaterialPropertyBlockProvider__Class* klass;
        MonitorData* monitor;
    };

    struct MoonTrail_MoonTrailParticle__Array__Array__VTable {
    };

    struct MoonTrail_MoonTrailParticle__Array__Array__StaticFields {
    };

    struct MoonTrail_MoonTrailParticle__Array__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MoonTrail_MoonTrailParticle__Array__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MoonTrail_MoonTrailParticle__Array__Array__VTable vtable;
    };

    struct IEnumerator_1_Moon_MoonTrail_MoonTrailParticle___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_Moon_MoonTrail_MoonTrailParticle___StaticFields {
    };

    struct IEnumerator_1_Moon_MoonTrail_MoonTrailParticle___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_Moon_MoonTrail_MoonTrailParticle___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_Moon_MoonTrail_MoonTrailParticle___VTable vtable;
    };

    struct Stack_1_Moon_MoonTrail_MoonTrailParticle___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
        VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
        VirtualInvokeData System_Collections_ICollection_CopyTo;
        VirtualInvokeData get_Count;
        VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
        VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
        VirtualInvokeData get_Count_1;
    };

    struct Stack_1_Moon_MoonTrail_MoonTrailParticle___StaticFields {
    };

    struct Stack_1_Moon_MoonTrail_MoonTrailParticle___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Stack_1_Moon_MoonTrail_MoonTrailParticle___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Stack_1_Moon_MoonTrail_MoonTrailParticle___VTable vtable;
    };

    struct MoonTrail__Array__VTable {
    };

    struct MoonTrail__Array__StaticFields {
    };

    struct MoonTrail__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MoonTrail__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MoonTrail__Array__VTable vtable;
    };

    struct IEnumerator_1_Moon_MoonTrail___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_Moon_MoonTrail___StaticFields {
    };

    struct IEnumerator_1_Moon_MoonTrail___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_Moon_MoonTrail___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_Moon_MoonTrail___VTable vtable;
    };

    struct List_1_Moon_MoonTrail___VTable {
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

    struct List_1_Moon_MoonTrail___StaticFields {
        struct MoonTrail__Array* _emptyArray;
    };

    struct List_1_Moon_MoonTrail___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_Moon_MoonTrail___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_Moon_MoonTrail___VTable vtable;
    };

    struct MoonTrail_TwoTargetsFolowMode__Enum__VTable {
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

    struct MoonTrail_TwoTargetsFolowMode__Enum__StaticFields {
    };

    struct MoonTrail_TwoTargetsFolowMode__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MoonTrail_TwoTargetsFolowMode__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MoonTrail_TwoTargetsFolowMode__Enum__VTable vtable;
    };

    struct MoonTrail_UVMode__Enum__VTable {
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

    struct MoonTrail_UVMode__Enum__StaticFields {
    };

    struct MoonTrail_UVMode__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MoonTrail_UVMode__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MoonTrail_UVMode__Enum__VTable vtable;
    };

    struct TrailPathProvider__VTable {
        VirtualInvokeData get_Duration;
        VirtualInvokeData GetPoint;
        VirtualInvokeData GetWorldToLocal;
    };

    struct TrailPathProvider__StaticFields {
    };

    struct TrailPathProvider__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TrailPathProvider__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TrailPathProvider__VTable vtable;
    };

    struct MoonTrail_SimulationFrameData__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MoonTrail_SimulationFrameData__StaticFields {
    };

    struct MoonTrail_SimulationFrameData__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MoonTrail_SimulationFrameData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MoonTrail_SimulationFrameData__VTable vtable;
    };

    struct MoonTrail_SimulationFrameData__Array__VTable {
    };

    struct MoonTrail_SimulationFrameData__Array__StaticFields {
    };

    struct MoonTrail_SimulationFrameData__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MoonTrail_SimulationFrameData__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MoonTrail_SimulationFrameData__Array__VTable vtable;
    };

    struct IEnumerator_1_Moon_MoonTrail_SimulationFrameData___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_Moon_MoonTrail_SimulationFrameData___StaticFields {
    };

    struct IEnumerator_1_Moon_MoonTrail_SimulationFrameData___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_Moon_MoonTrail_SimulationFrameData___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_Moon_MoonTrail_SimulationFrameData___VTable vtable;
    };

    struct List_1_Moon_MoonTrail_SimulationFrameData___VTable {
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

    struct List_1_Moon_MoonTrail_SimulationFrameData___StaticFields {
        struct MoonTrail_SimulationFrameData__Array* _emptyArray;
    };

    struct List_1_Moon_MoonTrail_SimulationFrameData___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_Moon_MoonTrail_SimulationFrameData___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_Moon_MoonTrail_SimulationFrameData___VTable vtable;
    };

    struct IMaterialPropertyBlockProvider__VTable {
        VirtualInvokeData GetMaterialPropertyBlock;
    };

    struct IMaterialPropertyBlockProvider__StaticFields {
    };

    struct IMaterialPropertyBlockProvider__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IMaterialPropertyBlockProvider__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IMaterialPropertyBlockProvider__VTable vtable;
    };

    struct MoonTrail__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MoonTrail__StaticFields {
        bool debug_enable;
        bool EnableJobification;
        int32_t PropertyIdMoonTrailParticles;
        int32_t PropertyIdMoonTrailTransformDelta;
        int32_t PropertyIdMoonTrailParameters1;
        int32_t PropertyIdMoonTrailParameters2;
        int32_t PropertyIdMoonTrailCameraPosition;
        struct Stack_1_Moon_MoonTrail_MoonTrailParticle_* s_particleBuffers;
        struct List_1_Moon_MoonTrail_* All;
    };

    struct MoonTrail__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MoonTrail__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MoonTrail__VTable vtable;
    };

    struct Nullable_1_UnityEngine_Vector3_ {
        struct Vector3 value;
        bool has_value;
    };

    struct Nullable_1_UnityEngine_Vector3___Boxed {
        struct Nullable_1_UnityEngine_Vector3___Class* klass;
        MonitorData* monitor;
        struct Nullable_1_UnityEngine_Vector3_ fields;
    };

    enum class MoonTrailUpdateFlags__Enum : int32_t {
        Enabled = 0x00000001,
        Simulate = 0x00000002,
        UpdateMesh = 0x00000004,
        AllowParallelSimulation = 0x00000008,
    };

    struct MoonTrailUpdateFlags__Enum__Boxed {
        struct MoonTrailUpdateFlags__Enum__Class* klass;
        MonitorData* monitor;
        MoonTrailUpdateFlags__Enum value;
    };

    struct MoonTrailUpdateContext {
        float DeltaTime;
        float InitialThickness;
        struct Vector3 Position;
        struct Vector3 TargetPosition;
        struct Vector3 MainTargetToSecondaryTargetDirection;
        struct Vector3 TargetNormal;
        struct Nullable_1_UnityEngine_Vector3_ CameraPosition;
        struct Matrix4x4 WorldToLocal;
        struct TrailPathProvider* FirstTargetPathProvider;
        struct TrailPathProvider* SecondTargetPathProvider;
        struct Matrix4x4 FirstTargetPathProviderWorldToLocal;
        struct Matrix4x4 SecondTargetPathProviderWorldToLocal;
        MoonTrailUpdateFlags__Enum Flags;
    };

    struct MoonTrailUpdateContext__Boxed {
        struct MoonTrailUpdateContext__Class* klass;
        MonitorData* monitor;
        struct MoonTrailUpdateContext fields;
    };

    struct Nullable_1_UnityEngine_Vector3___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Nullable_1_UnityEngine_Vector3___StaticFields {
    };

    struct Nullable_1_UnityEngine_Vector3___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Nullable_1_UnityEngine_Vector3___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Nullable_1_UnityEngine_Vector3___VTable vtable;
    };

    struct MoonTrailUpdateFlags__Enum__VTable {
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

    struct MoonTrailUpdateFlags__Enum__StaticFields {
    };

    struct MoonTrailUpdateFlags__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MoonTrailUpdateFlags__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MoonTrailUpdateFlags__Enum__VTable vtable;
    };

    struct MoonTrailUpdateContext__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MoonTrailUpdateContext__StaticFields {
    };

    struct MoonTrailUpdateContext__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MoonTrailUpdateContext__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MoonTrailUpdateContext__VTable vtable;
    };

    struct MoonTrailUpdateContext___VTable {
    };

    struct MoonTrailUpdateContext___StaticFields {
    };

    struct MoonTrailUpdateContext___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MoonTrailUpdateContext___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MoonTrailUpdateContext___VTable vtable;
    };

    struct MoonTrailSystem__Fields {
        struct MonoBehaviour__Fields _;
        struct MoonTrailUpdateContext__Array* m_updateContexts;
    };

    struct MoonTrailSystem {
        struct MoonTrailSystem__Class* klass;
        MonitorData* monitor;
        struct MoonTrailSystem__Fields fields;
    };

    struct __declspec(align(8)) List_1_Moon_MoonTrailSystem_ComputeBufferWrapper___Fields {
        struct MoonTrailSystem_ComputeBufferWrapper__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Moon_MoonTrailSystem_ComputeBufferWrapper_ {
        struct List_1_Moon_MoonTrailSystem_ComputeBufferWrapper___Class* klass;
        MonitorData* monitor;
        struct List_1_Moon_MoonTrailSystem_ComputeBufferWrapper___Fields fields;
    };

    struct __declspec(align(8)) MoonTrailSystem_ComputeBufferWrapper__Fields {
        struct ComputeBuffer* ComputeBuffer;
        int32_t LastUsedFrameIndex;
    };

    struct MoonTrailSystem_ComputeBufferWrapper {
        struct MoonTrailSystem_ComputeBufferWrapper__Class* klass;
        MonitorData* monitor;
        struct MoonTrailSystem_ComputeBufferWrapper__Fields fields;
    };

} // namespace app
