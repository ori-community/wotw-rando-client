namespace app {
struct GoThroughPlatform___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GoThroughPlatform___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GoThroughPlatform___VTable vtable;
};

struct __declspec(align(8)) PhysicalSystemManager_TimeSliceDisablePhysics_d_157__Fields {
    int32_t __1__state;
    struct Object *__2__current;
    struct PhysicalSystemManager *__4__this;
    struct PhysicalSystemState *_state_5__2;
    int32_t _i_5__3;
};

struct PhysicalSystemManager_TimeSliceDisablePhysics_d_157 {
    struct PhysicalSystemManager_TimeSliceDisablePhysics_d_157__Class *klass;
    MonitorData *monitor;
    struct PhysicalSystemManager_TimeSliceDisablePhysics_d_157__Fields fields;
};

struct PhysicalSystemManager_TimeSliceDisablePhysics_d_157__VTable {
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

struct PhysicalSystemManager_TimeSliceDisablePhysics_d_157__StaticFields {
};

struct PhysicalSystemManager_TimeSliceDisablePhysics_d_157__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PhysicalSystemManager_TimeSliceDisablePhysics_d_157__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PhysicalSystemManager_TimeSliceDisablePhysics_d_157__VTable vtable;
};

struct __declspec(align(8)) PhysicalSystemManager_TimeSliceActivatePhysics_d_159__Fields {
    int32_t __1__state;
    struct Object *__2__current;
    struct PhysicalSystemManager *__4__this;
    struct PhysicalSystemState *_state_5__2;
    int32_t _i_5__3;
};

struct PhysicalSystemManager_TimeSliceActivatePhysics_d_159 {
    struct PhysicalSystemManager_TimeSliceActivatePhysics_d_159__Class *klass;
    MonitorData *monitor;
    struct PhysicalSystemManager_TimeSliceActivatePhysics_d_159__Fields fields;
};

struct PhysicalSystemManager_TimeSliceActivatePhysics_d_159__VTable {
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

struct PhysicalSystemManager_TimeSliceActivatePhysics_d_159__StaticFields {
};

struct PhysicalSystemManager_TimeSliceActivatePhysics_d_159__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PhysicalSystemManager_TimeSliceActivatePhysics_d_159__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PhysicalSystemManager_TimeSliceActivatePhysics_d_159__VTable vtable;
};

struct PhysicalSystemStateModifier__Fields {
    struct SetupStateModifierData__Fields _;
};

struct PhysicalSystemStateModifier {
    struct PhysicalSystemStateModifier__Class *klass;
    MonitorData *monitor;
    struct PhysicalSystemStateModifier__Fields fields;
};

struct PhysicalSystemStateModifier__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetResolverForType;
    VirtualInvokeData GetIdToTypeMap;
    VirtualInvokeData Apply;
    VirtualInvokeData OnTargetChange;
    VirtualInvokeData CaptureCurrentTargetState;
    VirtualInvokeData GetIdToTypeMap_1;
};

struct PhysicalSystemStateModifier__StaticFields {
};

struct PhysicalSystemStateModifier__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PhysicalSystemStateModifier__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PhysicalSystemStateModifier__VTable vtable;
};

struct PhysicsCage__Fields {
    struct CageStructureTool__Fields _;
    int32_t solverIterations;
    struct PhysicMaterial *physicMaterial;
    float tension;
    struct PhysicsEdgeMetaData *edgeMetadata;
    struct List_1_SkinningModifier_ *skinnedSprites;
    bool rail;
    bool railStartActivated;
    RailType__Enum railType;
    
    float railMaxWidth;
    bool railAllowFlipping;
    bool EditorSpriteMovement;
    bool SegmentPivotAtVertex;
    bool GenerateAngularDriveForWorld;
    bool m_isSuspended;
};

struct PhysicsCage {
    struct PhysicsCage__Class *klass;
    MonitorData *monitor;
    struct PhysicsCage__Fields fields;
};

struct CageMetaData_1_PhysicsEdge___Fields {
    struct MonoBehaviour__Fields _;
    struct List_1_System_Int32_ *IDs;
    struct List_1_PhysicsEdge_ *Data;
    struct PhysicsEdge *DefaultValue;
    struct CageStructureTool *CageStructureTool;
    bool ShouldSerialize;
};

struct CageMetaData_1_PhysicsEdge_ {
    struct CageMetaData_1_PhysicsEdge___Class *klass;
    MonitorData *monitor;
    struct CageMetaData_1_PhysicsEdge___Fields fields;
};

struct CageEdgeMetaData_1_PhysicsEdge___Fields {
    struct CageMetaData_1_PhysicsEdge___Fields _;
};

struct CageEdgeMetaData_1_PhysicsEdge_ {
    struct CageEdgeMetaData_1_PhysicsEdge___Class *klass;
    MonitorData *monitor;
    struct CageEdgeMetaData_1_PhysicsEdge___Fields fields;
};

struct PhysicsEdgeMetaData__Fields {
    struct CageEdgeMetaData_1_PhysicsEdge___Fields _;
};

struct PhysicsEdgeMetaData {
    struct PhysicsEdgeMetaData__Class *klass;
    MonitorData *monitor;
    struct PhysicsEdgeMetaData__Fields fields;
};

struct __declspec(align(8)) List_1_PhysicsEdge___Fields {
    struct PhysicsEdge__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_PhysicsEdge_ {
    struct List_1_PhysicsEdge___Class *klass;
    MonitorData *monitor;
    struct List_1_PhysicsEdge___Fields fields;
};

struct __declspec(align(8)) SkinningEdge__Fields {
    struct List_1_SkinningEdge_SkinningCapsule_ *skinningCapsules;
};

struct SkinningEdge {
    struct SkinningEdge__Class *klass;
    MonitorData *monitor;
    struct SkinningEdge__Fields fields;
};

struct PhysicsEdge__Fields {
    struct SkinningEdge__Fields _;
    struct CageStructureTool_Edge *tempEdge;
    bool useCapsuleCollider;
    bool useHinge;
    bool usePositionSpring;
    bool useWorldSpring;
    bool useHingeSpring;
    struct Vector3 intialPosition;
    float radius;
    bool useGravity;
    bool lockRotation;
    bool lockPosition;
    float length;
    float mass;
    float inertia;
    float drag;
    float angularDrag;
    bool goThrough;
    float hingeAngleLimit;
    float hingeSpring;
    float hingeDamper;
    float positionLimit;
    float positionSpring;
    float positionDamper;
    bool lockHorizontalMovement;
    bool allowExternalAttachments;
    bool useAngularDriveSpring;
    float angularDriveSpring;
    float angularDriveDamper;
    struct PhysicsEdge_EdgeTurbulence *turbulence;
    struct PhysicsEdge_EdgeSoftInteraction *softIntearction;
};

struct PhysicsEdge {
    struct PhysicsEdge__Class *klass;
    MonitorData *monitor;
    struct PhysicsEdge__Fields fields;
};

struct __declspec(align(8)) List_1_SkinningEdge_SkinningCapsule___Fields {
    struct SkinningEdge_SkinningCapsule__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_SkinningEdge_SkinningCapsule_ {
    struct List_1_SkinningEdge_SkinningCapsule___Class *klass;
    MonitorData *monitor;
    struct List_1_SkinningEdge_SkinningCapsule___Fields fields;
};

struct __declspec(align(8)) SkinningEdge_SkinningCapsule__Fields {
    float coreRadius1;
    float faloffWidth1;
    float coreRadius2;
    float faloffWidth2;
    struct UberShaderModifier *sprite;
};

struct SkinningEdge_SkinningCapsule {
    struct SkinningEdge_SkinningCapsule__Class *klass;
    MonitorData *monitor;
    struct SkinningEdge_SkinningCapsule__Fields fields;
};

struct SkinningEdge_SkinningCapsule__Array {
    struct SkinningEdge_SkinningCapsule__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct SkinningEdge_SkinningCapsule *vector[32];
};

struct IEnumerator_1_SkinningEdge_SkinningCapsule_ {
    struct IEnumerator_1_SkinningEdge_SkinningCapsule___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) PhysicsEdge_EdgeTurbulence__Fields {
    bool active;
    struct Vector2 force;
    float frequency;
    float magnitude;
    float offset;
};

struct PhysicsEdge_EdgeTurbulence {
    struct PhysicsEdge_EdgeTurbulence__Class *klass;
    MonitorData *monitor;
    struct PhysicsEdge_EdgeTurbulence__Fields fields;
};

struct __declspec(align(8)) PhysicsEdge_EdgeSoftInteraction__Fields {
    bool active;
    float radius;
    float velocityInteractionForce;
};

struct PhysicsEdge_EdgeSoftInteraction {
    struct PhysicsEdge_EdgeSoftInteraction__Class *klass;
    MonitorData *monitor;
    struct PhysicsEdge_EdgeSoftInteraction__Fields fields;
};

struct PhysicsEdge__Array {
    struct PhysicsEdge__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct PhysicsEdge *vector[32];
};

struct IEnumerator_1_PhysicsEdge_ {
    struct IEnumerator_1_PhysicsEdge___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_SkinningModifier___Fields {
    struct SkinningModifier__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_SkinningModifier_ {
    struct List_1_SkinningModifier___Class *klass;
    MonitorData *monitor;
    struct List_1_SkinningModifier___Fields fields;
};

struct SkinningModifier__Array {
    struct SkinningModifier__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct SkinningModifier *vector[32];
};

struct IEnumerator_1_SkinningModifier_ {
    struct IEnumerator_1_SkinningModifier___Class *klass;
    MonitorData *monitor;
};

struct SkinningEdge_SkinningCapsule__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SkinningEdge_SkinningCapsule__StaticFields {
};

struct SkinningEdge_SkinningCapsule__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SkinningEdge_SkinningCapsule__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SkinningEdge_SkinningCapsule__VTable vtable;
};

struct SkinningEdge_SkinningCapsule__Array__VTable {
};

struct SkinningEdge_SkinningCapsule__Array__StaticFields {
};

struct SkinningEdge_SkinningCapsule__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SkinningEdge_SkinningCapsule__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SkinningEdge_SkinningCapsule__Array__VTable vtable;
};

struct IEnumerator_1_SkinningEdge_SkinningCapsule___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_SkinningEdge_SkinningCapsule___StaticFields {
};

struct IEnumerator_1_SkinningEdge_SkinningCapsule___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_SkinningEdge_SkinningCapsule___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_SkinningEdge_SkinningCapsule___VTable vtable;
};

struct List_1_SkinningEdge_SkinningCapsule___VTable {
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

struct List_1_SkinningEdge_SkinningCapsule___StaticFields {
    struct SkinningEdge_SkinningCapsule__Array *_emptyArray;
};

struct List_1_SkinningEdge_SkinningCapsule___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_SkinningEdge_SkinningCapsule___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_SkinningEdge_SkinningCapsule___VTable vtable;
};

struct SkinningEdge__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SkinningEdge__StaticFields {
};

struct SkinningEdge__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SkinningEdge__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SkinningEdge__VTable vtable;
};

struct PhysicsEdge_EdgeTurbulence__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct PhysicsEdge_EdgeTurbulence__StaticFields {
};

struct PhysicsEdge_EdgeTurbulence__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PhysicsEdge_EdgeTurbulence__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PhysicsEdge_EdgeTurbulence__VTable vtable;
};

struct PhysicsEdge_EdgeSoftInteraction__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct PhysicsEdge_EdgeSoftInteraction__StaticFields {
};

struct PhysicsEdge_EdgeSoftInteraction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PhysicsEdge_EdgeSoftInteraction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PhysicsEdge_EdgeSoftInteraction__VTable vtable;
};

struct PhysicsEdge__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct PhysicsEdge__StaticFields {
};

struct PhysicsEdge__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PhysicsEdge__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PhysicsEdge__VTable vtable;
};

struct PhysicsEdge__Array__VTable {
};

struct PhysicsEdge__Array__StaticFields {
};

struct PhysicsEdge__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PhysicsEdge__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PhysicsEdge__Array__VTable vtable;
};

struct IEnumerator_1_PhysicsEdge___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_PhysicsEdge___StaticFields {
};

struct IEnumerator_1_PhysicsEdge___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_PhysicsEdge___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_PhysicsEdge___VTable vtable;
};

struct List_1_PhysicsEdge___VTable {
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

struct List_1_PhysicsEdge___StaticFields {
    struct PhysicsEdge__Array *_emptyArray;
};

struct List_1_PhysicsEdge___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_PhysicsEdge___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_PhysicsEdge___VTable vtable;
};

struct CageMetaData_1_PhysicsEdge___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct CageMetaData_1_PhysicsEdge___StaticFields {
};

struct CageMetaData_1_PhysicsEdge___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CageMetaData_1_PhysicsEdge___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CageMetaData_1_PhysicsEdge___VTable vtable;
};

struct CageEdgeMetaData_1_PhysicsEdge___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnAddEdge;
    VirtualInvokeData OnRemoveEdge;
    VirtualInvokeData OnSplitEdge;
    VirtualInvokeData OnMergeEdge;
};

struct CageEdgeMetaData_1_PhysicsEdge___StaticFields {
};

struct CageEdgeMetaData_1_PhysicsEdge___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CageEdgeMetaData_1_PhysicsEdge___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CageEdgeMetaData_1_PhysicsEdge___VTable vtable;
};

struct PhysicsEdgeMetaData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnAddEdge;
    VirtualInvokeData OnRemoveEdge;
    VirtualInvokeData OnSplitEdge;
    VirtualInvokeData OnMergeEdge;
};

struct PhysicsEdgeMetaData__StaticFields {
};

struct PhysicsEdgeMetaData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PhysicsEdgeMetaData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PhysicsEdgeMetaData__VTable vtable;
};

struct SkinningModifier__Array__VTable {
};

struct SkinningModifier__Array__StaticFields {
};

struct SkinningModifier__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SkinningModifier__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SkinningModifier__Array__VTable vtable;
};

struct IEnumerator_1_SkinningModifier___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_SkinningModifier___StaticFields {
};

struct IEnumerator_1_SkinningModifier___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_SkinningModifier___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_SkinningModifier___VTable vtable;
};

struct List_1_SkinningModifier___VTable {
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

struct List_1_SkinningModifier___StaticFields {
    struct SkinningModifier__Array *_emptyArray;
};

struct List_1_SkinningModifier___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_SkinningModifier___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_SkinningModifier___VTable vtable;
};

struct PhysicsCage__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData IsPointInside;
    VirtualInvokeData OnBeforeStrip;
    VirtualInvokeData DoStrip;
    VirtualInvokeData SplitAtEdge;
    VirtualInvokeData GetRigidbody;
    VirtualInvokeData Attach;
    VirtualInvokeData WasAttached;
    VirtualInvokeData AttachedBodyEnabled;
};

struct PhysicsCage__StaticFields {
};

struct PhysicsCage__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PhysicsCage__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PhysicsCage__VTable vtable;
};

struct __declspec(align(8)) SkinningEdge_c_DisplayClass2_0__Fields {
    struct UberShaderModifier *sprite;
};

struct SkinningEdge_c_DisplayClass2_0 {
    struct SkinningEdge_c_DisplayClass2_0__Class *klass;
    MonitorData *monitor;
    struct SkinningEdge_c_DisplayClass2_0__Fields fields;
};

struct SkinningEdge_c_DisplayClass2_0__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SkinningEdge_c_DisplayClass2_0__StaticFields {
};

struct SkinningEdge_c_DisplayClass2_0__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SkinningEdge_c_DisplayClass2_0__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SkinningEdge_c_DisplayClass2_0__VTable vtable;
};

struct __declspec(align(8)) SkinningEdge_c_DisplayClass4_0__Fields {
    struct UberShaderModifier *sprite;
};

struct SkinningEdge_c_DisplayClass4_0 {
    struct SkinningEdge_c_DisplayClass4_0__Class *klass;
    MonitorData *monitor;
    struct SkinningEdge_c_DisplayClass4_0__Fields fields;
};

struct SkinningEdge_c_DisplayClass4_0__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SkinningEdge_c_DisplayClass4_0__StaticFields {
};

struct SkinningEdge_c_DisplayClass4_0__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SkinningEdge_c_DisplayClass4_0__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SkinningEdge_c_DisplayClass4_0__VTable vtable;
};

struct __declspec(align(8)) PhysicsEdge_EdgeSound__Fields {
    bool active;
    float movementThreshold;
    float rotationThreshold;
};

struct PhysicsEdge_EdgeSound {
    struct PhysicsEdge_EdgeSound__Class *klass;
    MonitorData *monitor;
    struct PhysicsEdge_EdgeSound__Fields fields;
};

struct PhysicsEdge_EdgeSound__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct PhysicsEdge_EdgeSound__StaticFields {
};

struct PhysicsEdge_EdgeSound__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PhysicsEdge_EdgeSound__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PhysicsEdge_EdgeSound__VTable vtable;
};

struct VerletCage__Fields {
    struct CageStructureTool__Fields _;
    struct MeshFilter *verletMesh;
    struct Transform *attachToSystem;
    struct VerletEdgeMetaData *edgeMetadata;
    struct VerletVertexMetaData *vertexMetadata;
    struct List_1_VerletSkinning2DModifier_ *skinning2DModifiers;
    struct List_1_VerletSkinning3DModifier_ *skinning3DModifiers;
    bool generateAngularConstraints;
    float angularConstraintThreshold;
    float angularConstraintForce;
    bool LockAttachmentAnchors;
    struct AnimationCurve *ChainAlignmentCurve;
    struct AnimationCurve *ChainMassCurve;
};

struct VerletCage {
    struct VerletCage__Class *klass;
    MonitorData *monitor;
    struct VerletCage__Fields fields;
};

struct CageMetaData_1_VerletEdge___Fields {
    struct MonoBehaviour__Fields _;
    struct List_1_System_Int32_ *IDs;
    struct List_1_VerletEdge_ *Data;
    struct VerletEdge *DefaultValue;
    struct CageStructureTool *CageStructureTool;
    bool ShouldSerialize;
};

struct CageMetaData_1_VerletEdge_ {
    struct CageMetaData_1_VerletEdge___Class *klass;
    MonitorData *monitor;
    struct CageMetaData_1_VerletEdge___Fields fields;
};

struct CageEdgeMetaData_1_VerletEdge___Fields {
    struct CageMetaData_1_VerletEdge___Fields _;
};

struct CageEdgeMetaData_1_VerletEdge_ {
    struct CageEdgeMetaData_1_VerletEdge___Class *klass;
    MonitorData *monitor;
    struct CageEdgeMetaData_1_VerletEdge___Fields fields;
};

struct VerletEdgeMetaData__Fields {
    struct CageEdgeMetaData_1_VerletEdge___Fields _;
};

struct VerletEdgeMetaData {
    struct VerletEdgeMetaData__Class *klass;
    MonitorData *monitor;
    struct VerletEdgeMetaData__Fields fields;
};

struct __declspec(align(8)) List_1_VerletEdge___Fields {
    struct VerletEdge__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_VerletEdge_ {
    struct List_1_VerletEdge___Class *klass;
    MonitorData *monitor;
    struct List_1_VerletEdge___Fields fields;
};

struct VerletEdge__Fields {
    struct SkinningEdge__Fields _;
    float spring;
    float length;
    float boneInfluence;
};

struct VerletEdge {
    struct VerletEdge__Class *klass;
    MonitorData *monitor;
    struct VerletEdge__Fields fields;
};

struct VerletEdge__Array {
    struct VerletEdge__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct VerletEdge *vector[32];
};

struct IEnumerator_1_VerletEdge_ {
    struct IEnumerator_1_VerletEdge___Class *klass;
    MonitorData *monitor;
};

struct CageMetaData_1_VerletVertex___Fields {
    struct MonoBehaviour__Fields _;
    struct List_1_System_Int32_ *IDs;
    struct List_1_VerletVertex_ *Data;
    struct VerletVertex *DefaultValue;
    struct CageStructureTool *CageStructureTool;
    bool ShouldSerialize;
};

struct CageMetaData_1_VerletVertex_ {
    struct CageMetaData_1_VerletVertex___Class *klass;
    MonitorData *monitor;
    struct CageMetaData_1_VerletVertex___Fields fields;
};

struct CageVertexMetaData_1_VerletVertex___Fields {
    struct CageMetaData_1_VerletVertex___Fields _;
};

struct CageVertexMetaData_1_VerletVertex_ {
    struct CageVertexMetaData_1_VerletVertex___Class *klass;
    MonitorData *monitor;
    struct CageVertexMetaData_1_VerletVertex___Fields fields;
};

struct VerletVertexMetaData__Fields {
    struct CageVertexMetaData_1_VerletVertex___Fields _;
};

struct VerletVertexMetaData {
    struct VerletVertexMetaData__Class *klass;
    MonitorData *monitor;
    struct VerletVertexMetaData__Fields fields;
};

}
