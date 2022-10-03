namespace app {
    struct SimpleSwayAnimPostprocess_Job__StaticFields {
    };

    struct SimpleSwayAnimPostprocess_Job__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SimpleSwayAnimPostprocess_Job__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SimpleSwayAnimPostprocess_Job__VTable vtable;
    };

    struct SimpleSwayAnimPostprocess_SwayChain__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SimpleSwayAnimPostprocess_SwayChain__StaticFields {
    };

    struct SimpleSwayAnimPostprocess_SwayChain__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SimpleSwayAnimPostprocess_SwayChain__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SimpleSwayAnimPostprocess_SwayChain__VTable vtable;
    };

    struct SimpleSwayAnimPostprocess_SwayChain__Array__VTable {
    };

    struct SimpleSwayAnimPostprocess_SwayChain__Array__StaticFields {
    };

    struct SimpleSwayAnimPostprocess_SwayChain__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SimpleSwayAnimPostprocess_SwayChain__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SimpleSwayAnimPostprocess_SwayChain__Array__VTable vtable;
    };

    struct SimpleSwayAnimPostprocess__VTable {
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

    struct SimpleSwayAnimPostprocess__StaticFields {
        bool DisableAllInstances;
        bool _UseSimpleSway_k__BackingField;
        struct List_1_Moon_SimpleSwayAnimPostprocess_* s_activeSwitches;
        bool Multithreaded;
        bool ImmediateComplete;
    };

    struct SimpleSwayAnimPostprocess__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SimpleSwayAnimPostprocess__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SimpleSwayAnimPostprocess__VTable vtable;
    };

    enum class SimpleSwayBossAnimPostprocess_Params_NoiseTypes__Enum : int32_t {
        Position = 0x00000000,
        Velocity = 0x00000001,
    };

    struct SimpleSwayBossAnimPostprocess_Params_NoiseTypes__Enum__Boxed {
        struct SimpleSwayBossAnimPostprocess_Params_NoiseTypes__Enum__Class* klass;
        MonitorData* monitor;
        SimpleSwayBossAnimPostprocess_Params_NoiseTypes__Enum value;
    };

    struct SimpleSwayBossAnimPostprocess_Params {
        float boneLen;
        float Gravity;
        float Straighten;
        float ScaleMin;
        float ScaleMax;
        struct Vector3 NoisePeriod;
        struct Vector3 NoiseAmp;
        struct Vector3 NoiseSpread;
        SimpleSwayBossAnimPostprocess_Params_NoiseTypes__Enum NoiseType;

        float Acceleration;
        float Damping;
        float DampingWater;
        float MaxDeviationPercentage;
        float MaxDeviationPivotFrac;
    };

    struct SimpleSwayBossAnimPostprocess_Params__Boxed {
        struct SimpleSwayBossAnimPostprocess_Params__Class* klass;
        MonitorData* monitor;
        struct SimpleSwayBossAnimPostprocess_Params fields;
    };

    struct SimpleSwayBossAnimPostprocess_PerFrameReadOnly {
        float t;
        float dt;
        float axx;
        float gravity;
        float damping;
        float weight;
        float dtInv;
        float maxDeviationDist;
        float maxDeviationDistSqr;
        bool ApplyScale;
        bool ApplyVeloNoise;
        bool ApplyPosNoise;
    };

    struct SimpleSwayBossAnimPostprocess_PerFrameReadOnly__Boxed {
        struct SimpleSwayBossAnimPostprocess_PerFrameReadOnly__Class* klass;
        MonitorData* monitor;
        struct SimpleSwayBossAnimPostprocess_PerFrameReadOnly fields;
    };

    struct SimpleSwayBossAnimPostprocess_Job {
        struct SimpleSwayBossAnimPostprocess_Params p;
        struct SimpleSwayBossAnimPostprocess_PerFrameReadOnly q;
        struct NativeArray_1_UnityEngine_Vector3_ m_jointPosLocalInitial;
        struct NativeArray_1_UnityEngine_Vector3_ m_jointUpWorldInitial;
        struct NativeArray_1_UnityEngine_Vector3_ m_tipPosWorld;
        struct NativeArray_1_UnityEngine_Vector3_ m_tipVeloWorld;
    };

    struct SimpleSwayBossAnimPostprocess_Job__Boxed {
        struct SimpleSwayBossAnimPostprocess_Job__Class* klass;
        MonitorData* monitor;
        struct SimpleSwayBossAnimPostprocess_Job fields;
    };

    struct SimpleSwayBossAnimPostprocess__Fields {
        struct AnimationPostprocess__Fields _;
        int32_t OrderNumber;
        struct JointChains* JointChains;
        bool InWater;
        struct SimpleSwayBossAnimPostprocess_Params m_params;
        bool ForceUpdateParamsEachFrame;
        bool DebugDraw;
        bool m_wasJustActivated;
        struct VerletPhysicsAnimationPostprocess* m_fancyVerlet;
        struct JointChains_Chain__Array* m_chains;
        bool m_swaysInitialized;
        struct SimpleSwayBossAnimPostprocess_Job m_job;
        bool m_scheduled;
        bool m_executed;
        struct JobHandle m_jobHandle;
        struct TransformAccessArray m_transforms;
        struct SimpleSwayBossAnimPostprocess_PerFrameReadOnly m_common;
    };

    struct SimpleSwayBossAnimPostprocess {
        struct SimpleSwayBossAnimPostprocess__Class* klass;
        MonitorData* monitor;
        struct SimpleSwayBossAnimPostprocess__Fields fields;
    };

    struct __declspec(align(8)) List_1_Moon_SimpleSwayBossAnimPostprocess___Fields {
        struct SimpleSwayBossAnimPostprocess__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Moon_SimpleSwayBossAnimPostprocess_ {
        struct List_1_Moon_SimpleSwayBossAnimPostprocess___Class* klass;
        MonitorData* monitor;
        struct List_1_Moon_SimpleSwayBossAnimPostprocess___Fields fields;
    };

    struct SimpleSwayBossAnimPostprocess__Array {
        struct SimpleSwayBossAnimPostprocess__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct SimpleSwayBossAnimPostprocess* vector[32];
    };

    struct IEnumerator_1_Moon_SimpleSwayBossAnimPostprocess_ {
        struct IEnumerator_1_Moon_SimpleSwayBossAnimPostprocess___Class* klass;
        MonitorData* monitor;
    };

    struct SimpleSwayBossAnimPostprocess_Params_NoiseTypes__Enum__VTable {
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

    struct SimpleSwayBossAnimPostprocess_Params_NoiseTypes__Enum__StaticFields {
    };

    struct SimpleSwayBossAnimPostprocess_Params_NoiseTypes__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SimpleSwayBossAnimPostprocess_Params_NoiseTypes__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SimpleSwayBossAnimPostprocess_Params_NoiseTypes__Enum__VTable vtable;
    };

    struct SimpleSwayBossAnimPostprocess_Params__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SimpleSwayBossAnimPostprocess_Params__StaticFields {
    };

    struct SimpleSwayBossAnimPostprocess_Params__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SimpleSwayBossAnimPostprocess_Params__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SimpleSwayBossAnimPostprocess_Params__VTable vtable;
    };

    struct SimpleSwayBossAnimPostprocess__Array__VTable {
    };

    struct SimpleSwayBossAnimPostprocess__Array__StaticFields {
    };

    struct SimpleSwayBossAnimPostprocess__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SimpleSwayBossAnimPostprocess__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SimpleSwayBossAnimPostprocess__Array__VTable vtable;
    };

    struct IEnumerator_1_Moon_SimpleSwayBossAnimPostprocess___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_Moon_SimpleSwayBossAnimPostprocess___StaticFields {
    };

    struct IEnumerator_1_Moon_SimpleSwayBossAnimPostprocess___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_Moon_SimpleSwayBossAnimPostprocess___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_Moon_SimpleSwayBossAnimPostprocess___VTable vtable;
    };

    struct List_1_Moon_SimpleSwayBossAnimPostprocess___VTable {
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

    struct List_1_Moon_SimpleSwayBossAnimPostprocess___StaticFields {
        struct SimpleSwayBossAnimPostprocess__Array* _emptyArray;
    };

    struct List_1_Moon_SimpleSwayBossAnimPostprocess___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_Moon_SimpleSwayBossAnimPostprocess___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_Moon_SimpleSwayBossAnimPostprocess___VTable vtable;
    };

    struct SimpleSwayBossAnimPostprocess_PerFrameReadOnly__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SimpleSwayBossAnimPostprocess_PerFrameReadOnly__StaticFields {
    };

    struct SimpleSwayBossAnimPostprocess_PerFrameReadOnly__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SimpleSwayBossAnimPostprocess_PerFrameReadOnly__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SimpleSwayBossAnimPostprocess_PerFrameReadOnly__VTable vtable;
    };

    struct SimpleSwayBossAnimPostprocess_Job__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Execute;
    };

    struct SimpleSwayBossAnimPostprocess_Job__StaticFields {
    };

    struct SimpleSwayBossAnimPostprocess_Job__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SimpleSwayBossAnimPostprocess_Job__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SimpleSwayBossAnimPostprocess_Job__VTable vtable;
    };

    struct SimpleSwayBossAnimPostprocess__VTable {
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

    struct SimpleSwayBossAnimPostprocess__StaticFields {
        bool DisableAllInstances;
        bool m_useSway;
        struct List_1_Moon_SimpleSwayBossAnimPostprocess_* m_instances;
        bool ImmediateComplete;
    };

    struct SimpleSwayBossAnimPostprocess__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SimpleSwayBossAnimPostprocess__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SimpleSwayBossAnimPostprocess__VTable vtable;
    };

    struct __declspec(align(8)) VectorAnimationParameter_Instance__Fields {
        struct VectorAnimationParameter* m_parameter;
        struct Vector3 m_targetValue;
        struct Vector3 m_currentValue;
        bool m_previewMode;
    };

    struct VectorAnimationParameter_Instance {
        struct VectorAnimationParameter_Instance__Class* klass;
        MonitorData* monitor;
        struct VectorAnimationParameter_Instance__Fields fields;
    };

    struct VectorAnimationParameter_Instance__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_PreviewMode;
        VirtualInvokeData set_PreviewMode;
        VirtualInvokeData Update;
    };

    struct VectorAnimationParameter_Instance__StaticFields {
    };

    struct VectorAnimationParameter_Instance__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct VectorAnimationParameter_Instance__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct VectorAnimationParameter_Instance__VTable vtable;
    };

    struct __declspec(align(8)) VerletBody__Fields {
        struct List_1_Moon_VerletBody_Point_* Points;
        struct List_1_Moon_VerletBody_Link_* Links;
        struct List_1_Moon_VerletBody_AngularContraint_* AngularConstraints;
        int32_t LinksAccuracy;
        struct Vector3 Gravity;
    };

    struct VerletBody {
        struct VerletBody__Class* klass;
        MonitorData* monitor;
        struct VerletBody__Fields fields;
    };

    struct __declspec(align(8)) List_1_Moon_VerletBody_Point___Fields {
        struct VerletBody_Point__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Moon_VerletBody_Point_ {
        struct List_1_Moon_VerletBody_Point___Class* klass;
        MonitorData* monitor;
        struct List_1_Moon_VerletBody_Point___Fields fields;
    };

    struct __declspec(align(8)) VerletBody_Point__Fields {
        struct Vector3 m_prevPosition;
        struct Vector3 m_position;
        struct Vector3 m_acceleration;
        float m_damping;
        float m_inverseMass;
    };

    struct VerletBody_Point {
        struct VerletBody_Point__Class* klass;
        MonitorData* monitor;
        struct VerletBody_Point__Fields fields;
    };

    struct VerletBody_Point__Array {
        struct VerletBody_Point__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct VerletBody_Point* vector[32];
    };

    struct IEnumerator_1_Moon_VerletBody_Point_ {
        struct IEnumerator_1_Moon_VerletBody_Point___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_Moon_VerletBody_Link___Fields {
        struct VerletBody_Link__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Moon_VerletBody_Link_ {
        struct List_1_Moon_VerletBody_Link___Class* klass;
        MonitorData* monitor;
        struct List_1_Moon_VerletBody_Link___Fields fields;
    };

    struct __declspec(align(8)) VerletBody_Link__Fields {
        struct VerletBody_Point* m_p0;
        struct VerletBody_Point* m_p1;
        float m_restDistance;
        float m_stiffness;
    };

    struct VerletBody_Link {
        struct VerletBody_Link__Class* klass;
        MonitorData* monitor;
        struct VerletBody_Link__Fields fields;
    };

    struct VerletBody_Link__Array {
        struct VerletBody_Link__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct VerletBody_Link* vector[32];
    };

    struct IEnumerator_1_Moon_VerletBody_Link_ {
        struct IEnumerator_1_Moon_VerletBody_Link___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_Moon_VerletBody_AngularContraint___Fields {
        struct VerletBody_AngularContraint__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Moon_VerletBody_AngularContraint_ {
        struct List_1_Moon_VerletBody_AngularContraint___Class* klass;
        MonitorData* monitor;
        struct List_1_Moon_VerletBody_AngularContraint___Fields fields;
    };

    struct __declspec(align(8)) VerletBody_AngularContraint__Fields {
        struct VerletBody_Link* m_link0;
        struct VerletBody_Link* m_link1;
        float m_maxAngle;
    };

    struct VerletBody_AngularContraint {
        struct VerletBody_AngularContraint__Class* klass;
        MonitorData* monitor;
        struct VerletBody_AngularContraint__Fields fields;
    };

    struct VerletBody_AngularContraint__Array {
        struct VerletBody_AngularContraint__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct VerletBody_AngularContraint* vector[32];
    };

    struct IEnumerator_1_Moon_VerletBody_AngularContraint_ {
        struct IEnumerator_1_Moon_VerletBody_AngularContraint___Class* klass;
        MonitorData* monitor;
    };

    struct VerletBody_Point__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct VerletBody_Point__StaticFields {
        float ImovableMass;
    };

    struct VerletBody_Point__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct VerletBody_Point__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct VerletBody_Point__VTable vtable;
    };

    struct VerletBody_Point__Array__VTable {
    };

    struct VerletBody_Point__Array__StaticFields {
    };

    struct VerletBody_Point__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct VerletBody_Point__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct VerletBody_Point__Array__VTable vtable;
    };

    struct IEnumerator_1_Moon_VerletBody_Point___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_Moon_VerletBody_Point___StaticFields {
    };

    struct IEnumerator_1_Moon_VerletBody_Point___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_Moon_VerletBody_Point___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_Moon_VerletBody_Point___VTable vtable;
    };

    struct List_1_Moon_VerletBody_Point___VTable {
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

    struct List_1_Moon_VerletBody_Point___StaticFields {
        struct VerletBody_Point__Array* _emptyArray;
    };

    struct List_1_Moon_VerletBody_Point___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_Moon_VerletBody_Point___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_Moon_VerletBody_Point___VTable vtable;
    };

    struct VerletBody_Link__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct VerletBody_Link__StaticFields {
    };

    struct VerletBody_Link__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct VerletBody_Link__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct VerletBody_Link__VTable vtable;
    };

    struct VerletBody_Link__Array__VTable {
    };

    struct VerletBody_Link__Array__StaticFields {
    };

    struct VerletBody_Link__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct VerletBody_Link__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct VerletBody_Link__Array__VTable vtable;
    };

    struct IEnumerator_1_Moon_VerletBody_Link___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_Moon_VerletBody_Link___StaticFields {
    };

    struct IEnumerator_1_Moon_VerletBody_Link___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_Moon_VerletBody_Link___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_Moon_VerletBody_Link___VTable vtable;
    };

    struct List_1_Moon_VerletBody_Link___VTable {
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

    struct List_1_Moon_VerletBody_Link___StaticFields {
        struct VerletBody_Link__Array* _emptyArray;
    };

    struct List_1_Moon_VerletBody_Link___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_Moon_VerletBody_Link___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_Moon_VerletBody_Link___VTable vtable;
    };

    struct VerletBody_AngularContraint__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct VerletBody_AngularContraint__StaticFields {
    };

    struct VerletBody_AngularContraint__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct VerletBody_AngularContraint__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct VerletBody_AngularContraint__VTable vtable;
    };

    struct VerletBody_AngularContraint__Array__VTable {
    };

    struct VerletBody_AngularContraint__Array__StaticFields {
    };

    struct VerletBody_AngularContraint__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct VerletBody_AngularContraint__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct VerletBody_AngularContraint__Array__VTable vtable;
    };

    struct IEnumerator_1_Moon_VerletBody_AngularContraint___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_Moon_VerletBody_AngularContraint___StaticFields {
    };

    struct IEnumerator_1_Moon_VerletBody_AngularContraint___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_Moon_VerletBody_AngularContraint___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_Moon_VerletBody_AngularContraint___VTable vtable;
    };

    struct List_1_Moon_VerletBody_AngularContraint___VTable {
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

    struct List_1_Moon_VerletBody_AngularContraint___StaticFields {
        struct VerletBody_AngularContraint__Array* _emptyArray;
    };

    struct List_1_Moon_VerletBody_AngularContraint___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_Moon_VerletBody_AngularContraint___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_Moon_VerletBody_AngularContraint___VTable vtable;
    };

    struct VerletBody__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct VerletBody__StaticFields {
    };

    struct VerletBody__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct VerletBody__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct VerletBody__VTable vtable;
    };

    struct VerletPhysicsAnimationPostprocess_Job {
    };

    struct VerletPhysicsAnimationPostprocess_Job__Boxed {
        struct VerletPhysicsAnimationPostprocess_Job__Class* klass;
        MonitorData* monitor;
        struct VerletPhysicsAnimationPostprocess_Job fields;
    };

    struct VerletPhysicsAnimationPostprocess_Job__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Execute;
    };

    struct VerletPhysicsAnimationPostprocess_Job__StaticFields {
        struct VerletPhysicsAnimationPostprocess* Current;
        struct Vector3 AdditionalForce;
        float DeltaTime;
        float Weight;
        bool TransformDeterminantChanged;
    };

    struct VerletPhysicsAnimationPostprocess_Job__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct VerletPhysicsAnimationPostprocess_Job__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct VerletPhysicsAnimationPostprocess_Job__VTable vtable;
    };

    struct AnimatorPostprocessPlayer__Fields {
        struct MonoBehaviour__Fields _;
        struct MoonReference_1_MoonAnimator_* Animator;
        struct MoonReference_1_Moon_Animation_IAnimatorPostprocessPlayerCompatible_* Postprocess;
        float BlendInDuration;
        float BlendOutDuration;
        struct MoonAnimator* m_resolvedAnimator;
        struct IAnimatorPostprocessPlayerCompatible* m_resolvedPostprocess;
    };

    struct AnimatorPostprocessPlayer {
        struct AnimatorPostprocessPlayer__Class* klass;
        MonitorData* monitor;
        struct AnimatorPostprocessPlayer__Fields fields;
    };

    struct __declspec(align(8)) MoonReference_1_MoonAnimator___Fields {
        struct MoonTypeData m_data;
        bool m_isInitialized;
        bool m_isStatic;
        bool m_canResolve;
        struct IMoonTypeResolver* m_resolver;
        struct IMoonType_1_MoonAnimator_* m_cachedProxyType;
        struct MoonAnimator* m_volatileValue;
    };

    struct MoonReference_1_MoonAnimator_ {
        struct MoonReference_1_MoonAnimator___Class* klass;
        MonitorData* monitor;
        struct MoonReference_1_MoonAnimator___Fields fields;
    };

    struct IMoonType_1_MoonAnimator_ {
        struct IMoonType_1_MoonAnimator___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) MoonReference_1_Moon_Animation_IAnimatorPostprocessPlayerCompatible___Fields {
        struct MoonTypeData m_data;
        bool m_isInitialized;
        bool m_isStatic;
        bool m_canResolve;
        struct IMoonTypeResolver* m_resolver;
        struct IMoonType_1_Moon_Animation_IAnimatorPostprocessPlayerCompatible_* m_cachedProxyType;
        struct IAnimatorPostprocessPlayerCompatible* m_volatileValue;
    };

    struct MoonReference_1_Moon_Animation_IAnimatorPostprocessPlayerCompatible_ {
        struct MoonReference_1_Moon_Animation_IAnimatorPostprocessPlayerCompatible___Class* klass;
        MonitorData* monitor;
        struct MoonReference_1_Moon_Animation_IAnimatorPostprocessPlayerCompatible___Fields fields;
    };

} // namespace app
