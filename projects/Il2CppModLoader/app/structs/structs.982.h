namespace app {
    struct __declspec(align(8)) List_1_VerletVertex___Fields {
        struct VerletVertex__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_VerletVertex_ {
        struct List_1_VerletVertex___Class* klass;
        MonitorData* monitor;
        struct List_1_VerletVertex___Fields fields;
    };

    struct __declspec(align(8)) VerletVertex__Fields {
        float mass;
        struct Transform* attachmentTranform;
        float attachmentForce;
        float animationForce1;
        bool attachToPhysicsSystem;
        float turbulenceForce;
        bool useInteraction;
        float interactionRadius;
        float interactionForce;
    };

    struct VerletVertex {
        struct VerletVertex__Class* klass;
        MonitorData* monitor;
        struct VerletVertex__Fields fields;
    };

    struct VerletVertex__Array {
        struct VerletVertex__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct VerletVertex* vector[32];
    };

    struct IEnumerator_1_VerletVertex_ {
        struct IEnumerator_1_VerletVertex___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_VerletSkinning2DModifier___Fields {
        struct VerletSkinning2DModifier__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_VerletSkinning2DModifier_ {
        struct List_1_VerletSkinning2DModifier___Class* klass;
        MonitorData* monitor;
        struct List_1_VerletSkinning2DModifier___Fields fields;
    };

    struct VerletSkinning2DModifier__Array {
        struct VerletSkinning2DModifier__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct VerletSkinning2DModifier* vector[32];
    };

    struct IEnumerator_1_VerletSkinning2DModifier_ {
        struct IEnumerator_1_VerletSkinning2DModifier___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_VerletSkinning3DModifier___Fields {
        struct VerletSkinning3DModifier__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_VerletSkinning3DModifier_ {
        struct List_1_VerletSkinning3DModifier___Class* klass;
        MonitorData* monitor;
        struct List_1_VerletSkinning3DModifier___Fields fields;
    };

    struct VerletSkinning3DModifier__Array {
        struct VerletSkinning3DModifier__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct VerletSkinning3DModifier* vector[32];
    };

    struct IEnumerator_1_VerletSkinning3DModifier_ {
        struct IEnumerator_1_VerletSkinning3DModifier___Class* klass;
        MonitorData* monitor;
    };

    struct VerletEdge__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct VerletEdge__StaticFields {
    };

    struct VerletEdge__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct VerletEdge__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct VerletEdge__VTable vtable;
    };

    struct VerletEdge__Array__VTable {
    };

    struct VerletEdge__Array__StaticFields {
    };

    struct VerletEdge__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct VerletEdge__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct VerletEdge__Array__VTable vtable;
    };

    struct IEnumerator_1_VerletEdge___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_VerletEdge___StaticFields {
    };

    struct IEnumerator_1_VerletEdge___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_VerletEdge___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_VerletEdge___VTable vtable;
    };

    struct List_1_VerletEdge___VTable {
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

    struct List_1_VerletEdge___StaticFields {
        struct VerletEdge__Array* _emptyArray;
    };

    struct List_1_VerletEdge___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_VerletEdge___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_VerletEdge___VTable vtable;
    };

    struct CageMetaData_1_VerletEdge___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CageMetaData_1_VerletEdge___StaticFields {
    };

    struct CageMetaData_1_VerletEdge___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CageMetaData_1_VerletEdge___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CageMetaData_1_VerletEdge___VTable vtable;
    };

    struct CageEdgeMetaData_1_VerletEdge___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData OnAddEdge;
        VirtualInvokeData OnRemoveEdge;
        VirtualInvokeData OnSplitEdge;
        VirtualInvokeData OnMergeEdge;
    };

    struct CageEdgeMetaData_1_VerletEdge___StaticFields {
    };

    struct CageEdgeMetaData_1_VerletEdge___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CageEdgeMetaData_1_VerletEdge___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CageEdgeMetaData_1_VerletEdge___VTable vtable;
    };

    struct VerletEdgeMetaData__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData OnAddEdge;
        VirtualInvokeData OnRemoveEdge;
        VirtualInvokeData OnSplitEdge;
        VirtualInvokeData OnMergeEdge;
    };

    struct VerletEdgeMetaData__StaticFields {
    };

    struct VerletEdgeMetaData__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct VerletEdgeMetaData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct VerletEdgeMetaData__VTable vtable;
    };

    struct VerletVertex__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct VerletVertex__StaticFields {
    };

    struct VerletVertex__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct VerletVertex__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct VerletVertex__VTable vtable;
    };

    struct VerletVertex__Array__VTable {
    };

    struct VerletVertex__Array__StaticFields {
    };

    struct VerletVertex__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct VerletVertex__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct VerletVertex__Array__VTable vtable;
    };

    struct IEnumerator_1_VerletVertex___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_VerletVertex___StaticFields {
    };

    struct IEnumerator_1_VerletVertex___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_VerletVertex___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_VerletVertex___VTable vtable;
    };

    struct List_1_VerletVertex___VTable {
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

    struct List_1_VerletVertex___StaticFields {
        struct VerletVertex__Array* _emptyArray;
    };

    struct List_1_VerletVertex___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_VerletVertex___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_VerletVertex___VTable vtable;
    };

    struct CageMetaData_1_VerletVertex___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CageMetaData_1_VerletVertex___StaticFields {
    };

    struct CageMetaData_1_VerletVertex___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CageMetaData_1_VerletVertex___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CageMetaData_1_VerletVertex___VTable vtable;
    };

    struct CageVertexMetaData_1_VerletVertex___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData OnAddVertex;
        VirtualInvokeData OnRemoveVertex;
    };

    struct CageVertexMetaData_1_VerletVertex___StaticFields {
    };

    struct CageVertexMetaData_1_VerletVertex___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CageVertexMetaData_1_VerletVertex___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CageVertexMetaData_1_VerletVertex___VTable vtable;
    };

    struct VerletVertexMetaData__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData OnAddVertex;
        VirtualInvokeData OnRemoveVertex;
    };

    struct VerletVertexMetaData__StaticFields {
    };

    struct VerletVertexMetaData__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct VerletVertexMetaData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct VerletVertexMetaData__VTable vtable;
    };

    struct VerletSkinning2DModifier__Array__VTable {
    };

    struct VerletSkinning2DModifier__Array__StaticFields {
    };

    struct VerletSkinning2DModifier__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct VerletSkinning2DModifier__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct VerletSkinning2DModifier__Array__VTable vtable;
    };

    struct IEnumerator_1_VerletSkinning2DModifier___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_VerletSkinning2DModifier___StaticFields {
    };

    struct IEnumerator_1_VerletSkinning2DModifier___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_VerletSkinning2DModifier___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_VerletSkinning2DModifier___VTable vtable;
    };

    struct List_1_VerletSkinning2DModifier___VTable {
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

    struct List_1_VerletSkinning2DModifier___StaticFields {
        struct VerletSkinning2DModifier__Array* _emptyArray;
    };

    struct List_1_VerletSkinning2DModifier___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_VerletSkinning2DModifier___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_VerletSkinning2DModifier___VTable vtable;
    };

    struct VerletSkinning3DModifier__Array__VTable {
    };

    struct VerletSkinning3DModifier__Array__StaticFields {
    };

    struct VerletSkinning3DModifier__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct VerletSkinning3DModifier__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct VerletSkinning3DModifier__Array__VTable vtable;
    };

    struct IEnumerator_1_VerletSkinning3DModifier___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_VerletSkinning3DModifier___StaticFields {
    };

    struct IEnumerator_1_VerletSkinning3DModifier___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_VerletSkinning3DModifier___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_VerletSkinning3DModifier___VTable vtable;
    };

    struct List_1_VerletSkinning3DModifier___VTable {
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

    struct List_1_VerletSkinning3DModifier___StaticFields {
        struct VerletSkinning3DModifier__Array* _emptyArray;
    };

    struct List_1_VerletSkinning3DModifier___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_VerletSkinning3DModifier___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_VerletSkinning3DModifier___VTable vtable;
    };

    struct VerletCage__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData IsPointInside;
        VirtualInvokeData OnBeforeStrip;
        VirtualInvokeData DoStrip;
        VirtualInvokeData SplitAtEdge;
    };

    struct VerletCage__StaticFields {
    };

    struct VerletCage__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct VerletCage__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct VerletCage__VTable vtable;
    };

    struct PhysicsCollisionResender__Fields {
        struct MonoBehaviour__Fields _;
        struct GameObject* CollisionReceiver;
        struct IPhysicsCollisionReceiver* m_receiver;
    };

    struct PhysicsCollisionResender {
        struct PhysicsCollisionResender__Class* klass;
        MonitorData* monitor;
        struct PhysicsCollisionResender__Fields fields;
    };

    struct IPhysicsCollisionReceiver {
        struct IPhysicsCollisionReceiver__Class* klass;
        MonitorData* monitor;
    };

    struct IPhysicsCollisionReceiver__VTable {
        VirtualInvokeData ReceivedOnCollisionEnter;
    };

    struct IPhysicsCollisionReceiver__StaticFields {
    };

    struct IPhysicsCollisionReceiver__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IPhysicsCollisionReceiver__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IPhysicsCollisionReceiver__VTable vtable;
    };

    struct PhysicsCollisionResender__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct PhysicsCollisionResender__StaticFields {
    };

    struct PhysicsCollisionResender__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PhysicsCollisionResender__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PhysicsCollisionResender__VTable vtable;
    };

    struct PhysicsIgnoreCollisions__Fields {
        struct MonoBehaviour__Fields _;
        struct EventTriggerAnimator* TimelineTrigger;
        struct Collider__Array* CollidersA;
        struct Collider__Array* CollidersB;
    };

    struct PhysicsIgnoreCollisions {
        struct PhysicsIgnoreCollisions__Class* klass;
        MonitorData* monitor;
        struct PhysicsIgnoreCollisions__Fields fields;
    };

    struct PhysicsIgnoreCollisions__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct PhysicsIgnoreCollisions__StaticFields {
    };

    struct PhysicsIgnoreCollisions__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PhysicsIgnoreCollisions__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PhysicsIgnoreCollisions__VTable vtable;
    };

    struct PhysicsSystemPointSet__Fields {
        struct LocalSpacePointSet__Fields _;
        struct List_1_PhysicsSystemPointSet_PhysicsSystemPoint_* m_physicsSystemPoints;
    };

    struct PhysicsSystemPointSet {
        struct PhysicsSystemPointSet__Class* klass;
        MonitorData* monitor;
        struct PhysicsSystemPointSet__Fields fields;
    };

    struct __declspec(align(8)) List_1_PhysicsSystemPointSet_PhysicsSystemPoint___Fields {
        struct PhysicsSystemPointSet_PhysicsSystemPoint__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_PhysicsSystemPointSet_PhysicsSystemPoint_ {
        struct List_1_PhysicsSystemPointSet_PhysicsSystemPoint___Class* klass;
        MonitorData* monitor;
        struct List_1_PhysicsSystemPointSet_PhysicsSystemPoint___Fields fields;
    };

    struct __declspec(align(8)) PhysicsSystemPointSet_PhysicsSystemPoint__Fields {
        struct Transform* transform;
        struct Vector3 anchor;
    };

    struct PhysicsSystemPointSet_PhysicsSystemPoint {
        struct PhysicsSystemPointSet_PhysicsSystemPoint__Class* klass;
        MonitorData* monitor;
        struct PhysicsSystemPointSet_PhysicsSystemPoint__Fields fields;
    };

    struct PhysicsSystemPointSet_PhysicsSystemPoint__Array {
        struct PhysicsSystemPointSet_PhysicsSystemPoint__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct PhysicsSystemPointSet_PhysicsSystemPoint* vector[32];
    };

    struct IEnumerator_1_PhysicsSystemPointSet_PhysicsSystemPoint_ {
        struct IEnumerator_1_PhysicsSystemPointSet_PhysicsSystemPoint___Class* klass;
        MonitorData* monitor;
    };

    struct PhysicsSystemPointSet_PhysicsSystemPoint__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct PhysicsSystemPointSet_PhysicsSystemPoint__StaticFields {
    };

    struct PhysicsSystemPointSet_PhysicsSystemPoint__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PhysicsSystemPointSet_PhysicsSystemPoint__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PhysicsSystemPointSet_PhysicsSystemPoint__VTable vtable;
    };

    struct PhysicsSystemPointSet_PhysicsSystemPoint__Array__VTable {
    };

    struct PhysicsSystemPointSet_PhysicsSystemPoint__Array__StaticFields {
    };

    struct PhysicsSystemPointSet_PhysicsSystemPoint__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PhysicsSystemPointSet_PhysicsSystemPoint__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PhysicsSystemPointSet_PhysicsSystemPoint__Array__VTable vtable;
    };

    struct IEnumerator_1_PhysicsSystemPointSet_PhysicsSystemPoint___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_PhysicsSystemPointSet_PhysicsSystemPoint___StaticFields {
    };

    struct IEnumerator_1_PhysicsSystemPointSet_PhysicsSystemPoint___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_PhysicsSystemPointSet_PhysicsSystemPoint___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_PhysicsSystemPointSet_PhysicsSystemPoint___VTable vtable;
    };

    struct List_1_PhysicsSystemPointSet_PhysicsSystemPoint___VTable {
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

    struct List_1_PhysicsSystemPointSet_PhysicsSystemPoint___StaticFields {
        struct PhysicsSystemPointSet_PhysicsSystemPoint__Array* _emptyArray;
    };

    struct List_1_PhysicsSystemPointSet_PhysicsSystemPoint___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_PhysicsSystemPointSet_PhysicsSystemPoint___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_PhysicsSystemPointSet_PhysicsSystemPoint___VTable vtable;
    };

    struct PhysicsSystemPointSet__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_WorldSpaceWorldSpaceInteractionPoints;
        VirtualInvokeData set_WorldSpaceWorldSpaceInteractionPoints;
        VirtualInvokeData UpdateWorldSpacePointCache;
    };

    struct PhysicsSystemPointSet__StaticFields {
    };

    struct PhysicsSystemPointSet__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PhysicsSystemPointSet__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PhysicsSystemPointSet__VTable vtable;
    };

    struct RigidbodySolverIterationsModifier__Fields {
        struct MonoBehaviour__Fields _;
        int32_t solverIterations;
    };

    struct RigidbodySolverIterationsModifier {
        struct RigidbodySolverIterationsModifier__Class* klass;
        MonitorData* monitor;
        struct RigidbodySolverIterationsModifier__Fields fields;
    };

    struct RigidbodySolverIterationsModifier__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct RigidbodySolverIterationsModifier__StaticFields {
    };

    struct RigidbodySolverIterationsModifier__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RigidbodySolverIterationsModifier__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RigidbodySolverIterationsModifier__VTable vtable;
    };

    struct SnowBall__Fields {
        struct MonoBehaviour__Fields _;
        float MaxScale;
        float ScaleUpSpeed;
        struct Rigidbody* m_rigidbody;
        struct Vector3 m_originalScale;
    };

    struct SnowBall {
        struct SnowBall__Class* klass;
        MonitorData* monitor;
        struct SnowBall__Fields fields;
    };

    struct SnowBall__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SnowBall__StaticFields {
    };

    struct SnowBall__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SnowBall__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SnowBall__VTable vtable;
    };

    struct VerletStructureStateModifier__Fields {
        struct SetupStateModifierData__Fields _;
    };

    struct VerletStructureStateModifier {
        struct VerletStructureStateModifier__Class* klass;
        MonitorData* monitor;
        struct VerletStructureStateModifier__Fields fields;
    };

    struct VerletStructureStateModifier__VTable {
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

    struct VerletStructureStateModifier__StaticFields {
    };

    struct VerletStructureStateModifier__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct VerletStructureStateModifier__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct VerletStructureStateModifier__VTable vtable;
    };

    struct __declspec(align(8)) FrameInfo__Fields {
        float CPUTime;
        float GPUTime;
        float OtherTime;
        bool GCCollected;
    };

    struct FrameInfo {
        struct FrameInfo__Class* klass;
        MonitorData* monitor;
        struct FrameInfo__Fields fields;
    };

    struct FrameInfo__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct FrameInfo__StaticFields {
    };

    struct FrameInfo__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FrameInfo__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FrameInfo__VTable vtable;
    };

    struct FpsGraph__Fields {
        struct MonoBehaviour__Fields _;
        int32_t GraphMinFPS;
        int32_t GraphMaxFPS;
        int32_t GraphHeight;
        float GraphScale;
        struct Vector2 GraphPositionOffset;
        struct Color__Array* GraphColors;
        struct Color LineColor;
        struct Color GraphBackgroundColor;
        struct Material* m_material;
        struct FrameInfo__Array* Frames;
        int32_t HistoryLength;
        int32_t m_frameIndex;
        float FPSRefreshFrequency;
        struct Stopwatch* m_stopWatch;
        float m_fpsRefreshTime;
        float m_lastUpdateRealtime;
        float m_lastUpdateTime;
        float m_lastLateUpdateTime;
        float m_lastPostRenderTime;
        int32_t m_frameCount;
        int32_t m_currentAverageFps;
    };

} // namespace app
