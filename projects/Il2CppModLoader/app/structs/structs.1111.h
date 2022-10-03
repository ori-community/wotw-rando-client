namespace app {
    struct List_1_Moon_WaterFall_WaterLine___StaticFields {
        struct WaterFall_WaterLine__Array* _emptyArray;
    };

    struct List_1_Moon_WaterFall_WaterLine___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_Moon_WaterFall_WaterLine___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_Moon_WaterFall_WaterLine___VTable vtable;
    };

    struct WaterFall__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
        VirtualInvokeData OnFrustumEnter;
        VirtualInvokeData OnFrustumExit;
        VirtualInvokeData get_InsideFrustum;
        VirtualInvokeData get_Bounds;
        VirtualInvokeData get_AllowCacheBounds;
    };

    struct WaterFall__StaticFields {
    };

    struct WaterFall__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WaterFall__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WaterFall__VTable vtable;
    };

    struct WaterFallMask__Fields {
        struct MonoBehaviour__Fields _;
        bool ExtinguishFlammables;
        float MaxLength;
        float Width;
        int32_t AmountOfLines;
        struct Vector2 Offset;
        struct Vector3 Gravity;
        struct Vector3 GravityAffectingRigidbodies;
        float GravityAffectingOri;
        struct ParticleSystem* StaticParticles;
        struct ParticleSystem* ImpactParticles;
        float ImpactParticleBurstAmount;
        struct Event_1* m_impactSoundLoop;
        struct SoundHost* m_impactSoundHost;
        struct WwiseEventSystem_SoundHandle m_impactSoundHandle;
        float VelocityInfluence;
        bool OrientParticlesTowardsVelocity;
        bool EditorTestMode;
        struct Rect EditorTestRect;
        struct AmbienceZone* WaterFallingAmbienceZone;
        struct LegacyPointAmbienceZone* WaterImpactAmbienceZone;
        struct List_1_Moon_WaterFallMask_WaterLineGroup_* m_waterLines;
        struct RaycastHit m_hitInfo;
        struct HashSet_1_Moon_IWaterfallInteractionAgent_* m_affectedAgents;
        struct List_1_Moon_IWaterfallInteractionAgent_* m_validAgents;
        struct List_1_UnityEngine_Renderer_* m_renderes;
        struct Vector4__Array* m_masksTransforms;
        float m_particleAngle;
        float m_particleAngleCooldown;
        struct Bounds m_bounds;
        struct Rect m_optimzationBoundsRect;
        bool m_boundsRecalculated;
        struct LayerMask m_dynamicLayerMask;
        bool _IsSuspended_k__BackingField;
        SuspendableMask__Enum m_suspensionMask;

        bool m_isRegistered;
        struct HashSet_1_Moon_ISuspendable_* m_suspendables;
        bool m_insideFrustum;
    };

    struct WaterFallMask {
        struct WaterFallMask__Class* klass;
        MonitorData* monitor;
        struct WaterFallMask__Fields fields;
    };

    struct __declspec(align(8)) List_1_Moon_WaterFallMask_WaterLineGroup___Fields {
        struct WaterFallMask_WaterLineGroup__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Moon_WaterFallMask_WaterLineGroup_ {
        struct List_1_Moon_WaterFallMask_WaterLineGroup___Class* klass;
        MonitorData* monitor;
        struct List_1_Moon_WaterFallMask_WaterLineGroup___Fields fields;
    };

    struct __declspec(align(8)) WaterFallMask_WaterLineGroup__Fields {
        struct Vector2 SourceStart;
        struct Vector2 SourceEnd;
        struct Rect Rect;
        struct WaterFallMask_WaterLineInterruption* Interruption;
        struct ParticleSystem__Array* StaticCollisionParticleEffects;
        struct Vector2__Array* StaticCollisionPoints;
        struct Vector2 OriginalEnd;
    };

    struct WaterFallMask_WaterLineGroup {
        struct WaterFallMask_WaterLineGroup__Class* klass;
        MonitorData* monitor;
        struct WaterFallMask_WaterLineGroup__Fields fields;
    };

    struct __declspec(align(8)) WaterFallMask_WaterLineInterruption__Fields {
        struct Vector2 m_startPosition;
        struct Vector2 m_endPosition;
        struct Vector2 m_topVelocity;
        struct Vector2 m_bottonVelocity;
        bool m_active;
    };

    struct WaterFallMask_WaterLineInterruption {
        struct WaterFallMask_WaterLineInterruption__Class* klass;
        MonitorData* monitor;
        struct WaterFallMask_WaterLineInterruption__Fields fields;
    };

    struct WaterFallMask_WaterLineGroup__Array {
        struct WaterFallMask_WaterLineGroup__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct WaterFallMask_WaterLineGroup* vector[32];
    };

    struct IEnumerator_1_Moon_WaterFallMask_WaterLineGroup_ {
        struct IEnumerator_1_Moon_WaterFallMask_WaterLineGroup___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) HashSet_1_Moon_IWaterfallInteractionAgent___Fields {
        struct Int32__Array* _buckets;
        struct HashSet_1_T_Slot_Moon_IWaterfallInteractionAgent___Array* _slots;
        int32_t _count;
        int32_t _lastIndex;
        int32_t _freeList;
        struct IEqualityComparer_1_Moon_IWaterfallInteractionAgent_* _comparer;
        int32_t _version;
        struct SerializationInfo* _siInfo;
    };

    struct HashSet_1_Moon_IWaterfallInteractionAgent_ {
        struct HashSet_1_Moon_IWaterfallInteractionAgent___Class* klass;
        MonitorData* monitor;
        struct HashSet_1_Moon_IWaterfallInteractionAgent___Fields fields;
    };

    struct HashSet_1_T_Slot_Moon_IWaterfallInteractionAgent_ {
        int32_t hashCode;
        int32_t next;
        struct IWaterfallInteractionAgent* value;
    };

    struct HashSet_1_T_Slot_Moon_IWaterfallInteractionAgent___Boxed {
        struct HashSet_1_T_Slot_Moon_IWaterfallInteractionAgent___Class* klass;
        MonitorData* monitor;
        struct HashSet_1_T_Slot_Moon_IWaterfallInteractionAgent_ fields;
    };

    struct IWaterfallInteractionAgent {
        struct IWaterfallInteractionAgent__Class* klass;
        MonitorData* monitor;
    };

    struct HashSet_1_T_Slot_Moon_IWaterfallInteractionAgent___Array {
        struct HashSet_1_T_Slot_Moon_IWaterfallInteractionAgent___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct HashSet_1_T_Slot_Moon_IWaterfallInteractionAgent_ vector[32];
    };

    struct IEqualityComparer_1_Moon_IWaterfallInteractionAgent_ {
        struct IEqualityComparer_1_Moon_IWaterfallInteractionAgent___Class* klass;
        MonitorData* monitor;
    };

    struct IWaterfallInteractionAgent__Array {
        struct IWaterfallInteractionAgent__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct IWaterfallInteractionAgent* vector[32];
    };

    struct IEnumerator_1_Moon_IWaterfallInteractionAgent_ {
        struct IEnumerator_1_Moon_IWaterfallInteractionAgent___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_Moon_IWaterfallInteractionAgent_ {
        struct IEnumerable_1_Moon_IWaterfallInteractionAgent___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_Moon_IWaterfallInteractionAgent___Fields {
        struct IWaterfallInteractionAgent__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Moon_IWaterfallInteractionAgent_ {
        struct List_1_Moon_IWaterfallInteractionAgent___Class* klass;
        MonitorData* monitor;
        struct List_1_Moon_IWaterfallInteractionAgent___Fields fields;
    };

    struct WaterFallMask_WaterLineInterruption__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct WaterFallMask_WaterLineInterruption__StaticFields {
    };

    struct WaterFallMask_WaterLineInterruption__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WaterFallMask_WaterLineInterruption__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WaterFallMask_WaterLineInterruption__VTable vtable;
    };

    struct WaterFallMask_WaterLineGroup__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct WaterFallMask_WaterLineGroup__StaticFields {
    };

    struct WaterFallMask_WaterLineGroup__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WaterFallMask_WaterLineGroup__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WaterFallMask_WaterLineGroup__VTable vtable;
    };

    struct WaterFallMask_WaterLineGroup__Array__VTable {
    };

    struct WaterFallMask_WaterLineGroup__Array__StaticFields {
    };

    struct WaterFallMask_WaterLineGroup__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WaterFallMask_WaterLineGroup__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WaterFallMask_WaterLineGroup__Array__VTable vtable;
    };

    struct IEnumerator_1_Moon_WaterFallMask_WaterLineGroup___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_Moon_WaterFallMask_WaterLineGroup___StaticFields {
    };

    struct IEnumerator_1_Moon_WaterFallMask_WaterLineGroup___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_Moon_WaterFallMask_WaterLineGroup___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_Moon_WaterFallMask_WaterLineGroup___VTable vtable;
    };

    struct List_1_Moon_WaterFallMask_WaterLineGroup___VTable {
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

    struct List_1_Moon_WaterFallMask_WaterLineGroup___StaticFields {
        struct WaterFallMask_WaterLineGroup__Array* _emptyArray;
    };

    struct List_1_Moon_WaterFallMask_WaterLineGroup___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_Moon_WaterFallMask_WaterLineGroup___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_Moon_WaterFallMask_WaterLineGroup___VTable vtable;
    };

    struct IWaterfallInteractionAgent__VTable {
        VirtualInvokeData get_PreviusPositionForWaterfallInteraction;
        VirtualInvokeData get_PositionForWaterfallInteraction;
        VirtualInvokeData get_SpeedForWaterfallInteraction;
        VirtualInvokeData set_SpeedForWaterfallInteraction;
        VirtualInvokeData get_BoundsForWaterfallInteraction;
        VirtualInvokeData get_WaterfallIntersectionMode;
        VirtualInvokeData get_RigidbodyForWaterfallInteraction;
        VirtualInvokeData get_IsFlamable;
    };

    struct IWaterfallInteractionAgent__StaticFields {
    };

    struct IWaterfallInteractionAgent__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IWaterfallInteractionAgent__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IWaterfallInteractionAgent__VTable vtable;
    };

    struct HashSet_1_T_Slot_Moon_IWaterfallInteractionAgent___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct HashSet_1_T_Slot_Moon_IWaterfallInteractionAgent___StaticFields {
    };

    struct HashSet_1_T_Slot_Moon_IWaterfallInteractionAgent___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HashSet_1_T_Slot_Moon_IWaterfallInteractionAgent___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HashSet_1_T_Slot_Moon_IWaterfallInteractionAgent___VTable vtable;
    };

    struct HashSet_1_T_Slot_Moon_IWaterfallInteractionAgent___Array__VTable {
    };

    struct HashSet_1_T_Slot_Moon_IWaterfallInteractionAgent___Array__StaticFields {
    };

    struct HashSet_1_T_Slot_Moon_IWaterfallInteractionAgent___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HashSet_1_T_Slot_Moon_IWaterfallInteractionAgent___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HashSet_1_T_Slot_Moon_IWaterfallInteractionAgent___Array__VTable vtable;
    };

    struct IEqualityComparer_1_Moon_IWaterfallInteractionAgent___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData GetHashCode;
    };

    struct IEqualityComparer_1_Moon_IWaterfallInteractionAgent___StaticFields {
    };

    struct IEqualityComparer_1_Moon_IWaterfallInteractionAgent___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEqualityComparer_1_Moon_IWaterfallInteractionAgent___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEqualityComparer_1_Moon_IWaterfallInteractionAgent___VTable vtable;
    };

    struct IWaterfallInteractionAgent__Array__VTable {
    };

    struct IWaterfallInteractionAgent__Array__StaticFields {
    };

    struct IWaterfallInteractionAgent__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IWaterfallInteractionAgent__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IWaterfallInteractionAgent__Array__VTable vtable;
    };

    struct IEnumerator_1_Moon_IWaterfallInteractionAgent___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_Moon_IWaterfallInteractionAgent___StaticFields {
    };

    struct IEnumerator_1_Moon_IWaterfallInteractionAgent___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_Moon_IWaterfallInteractionAgent___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_Moon_IWaterfallInteractionAgent___VTable vtable;
    };

    struct IEnumerable_1_Moon_IWaterfallInteractionAgent___VTable {
        VirtualInvokeData GetEnumerator;
    };

    struct IEnumerable_1_Moon_IWaterfallInteractionAgent___StaticFields {
    };

    struct IEnumerable_1_Moon_IWaterfallInteractionAgent___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerable_1_Moon_IWaterfallInteractionAgent___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerable_1_Moon_IWaterfallInteractionAgent___VTable vtable;
    };

    struct HashSet_1_Moon_IWaterfallInteractionAgent___VTable {
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

    struct HashSet_1_Moon_IWaterfallInteractionAgent___StaticFields {
    };

    struct HashSet_1_Moon_IWaterfallInteractionAgent___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HashSet_1_Moon_IWaterfallInteractionAgent___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HashSet_1_Moon_IWaterfallInteractionAgent___VTable vtable;
    };

    struct List_1_Moon_IWaterfallInteractionAgent___VTable {
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

    struct List_1_Moon_IWaterfallInteractionAgent___StaticFields {
        struct IWaterfallInteractionAgent__Array* _emptyArray;
    };

    struct List_1_Moon_IWaterfallInteractionAgent___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_Moon_IWaterfallInteractionAgent___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_Moon_IWaterfallInteractionAgent___VTable vtable;
    };

    struct WaterFallMask__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
        VirtualInvokeData OnFrustumEnter;
        VirtualInvokeData OnFrustumExit;
        VirtualInvokeData get_InsideFrustum;
        VirtualInvokeData get_Bounds;
        VirtualInvokeData get_AllowCacheBounds;
    };

    struct WaterFallMask__StaticFields {
    };

    struct WaterFallMask__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WaterFallMask__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WaterFallMask__VTable vtable;
    };

    struct __declspec(align(8)) WaterFallMasksSystem__Fields {
        struct List_1_Moon_WaterFallMask_* m_waterFalls;
        struct List_1_Moon_ISuspendable_* m_waterFallsSuspendables;
        struct List_1_Moon_IWaterfallInteractionAgent_* m_agents;
        struct LayerMask m_staticCollisionMask;
        struct LayerMask m_dynamicCollisionMask;
        struct Queue_1_Moon_WaterFallMask_* m_waterFallInitQueue;
        bool m_initQueueIsBeingProcessed;
        struct String* m_contextualDebugData;
    };

    struct WaterFallMasksSystem {
        struct WaterFallMasksSystem__Class* klass;
        MonitorData* monitor;
        struct WaterFallMasksSystem__Fields fields;
    };

    struct __declspec(align(8)) List_1_Moon_WaterFallMask___Fields {
        struct WaterFallMask__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Moon_WaterFallMask_ {
        struct List_1_Moon_WaterFallMask___Class* klass;
        MonitorData* monitor;
        struct List_1_Moon_WaterFallMask___Fields fields;
    };

    struct WaterFallMask__Array {
        struct WaterFallMask__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct WaterFallMask* vector[32];
    };

    struct IEnumerator_1_Moon_WaterFallMask_ {
        struct IEnumerator_1_Moon_WaterFallMask___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) Queue_1_Moon_WaterFallMask___Fields {
        struct WaterFallMask__Array* _array;
        int32_t _head;
        int32_t _tail;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct Queue_1_Moon_WaterFallMask_ {
        struct Queue_1_Moon_WaterFallMask___Class* klass;
        MonitorData* monitor;
        struct Queue_1_Moon_WaterFallMask___Fields fields;
    };

    struct WaterFallMask__Array__VTable {
    };

    struct WaterFallMask__Array__StaticFields {
    };

    struct WaterFallMask__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WaterFallMask__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WaterFallMask__Array__VTable vtable;
    };

    struct IEnumerator_1_Moon_WaterFallMask___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_Moon_WaterFallMask___StaticFields {
    };

    struct IEnumerator_1_Moon_WaterFallMask___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_Moon_WaterFallMask___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_Moon_WaterFallMask___VTable vtable;
    };

    struct List_1_Moon_WaterFallMask___VTable {
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

    struct List_1_Moon_WaterFallMask___StaticFields {
        struct WaterFallMask__Array* _emptyArray;
    };

    struct List_1_Moon_WaterFallMask___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_Moon_WaterFallMask___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_Moon_WaterFallMask___VTable vtable;
    };

    struct Queue_1_Moon_WaterFallMask___VTable {
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

    struct Queue_1_Moon_WaterFallMask___StaticFields {
    };

    struct Queue_1_Moon_WaterFallMask___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Queue_1_Moon_WaterFallMask___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Queue_1_Moon_WaterFallMask___VTable vtable;
    };

    struct WaterFallMasksSystem__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_UpdateType;
        VirtualInvokeData OnUpdate;
    };

    struct WaterFallMasksSystem__StaticFields {
        bool BlockSimulation;
        bool IsForcedDisable;
        struct WaterFallMasksSystem* s_instance;
    };

    struct WaterFallMasksSystem__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WaterFallMasksSystem__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WaterFallMasksSystem__VTable vtable;
    };

    struct __declspec(align(8)) WaterFallMasksSystem_TimeslicedInit_d_27__Fields {
        int32_t __1__state;
        struct Object* __2__current;
        struct WaterFallMasksSystem* __4__this;
    };

    struct WaterFallMasksSystem_TimeslicedInit_d_27 {
        struct WaterFallMasksSystem_TimeslicedInit_d_27__Class* klass;
        MonitorData* monitor;
        struct WaterFallMasksSystem_TimeslicedInit_d_27__Fields fields;
    };

    struct WaterFallMasksSystem_TimeslicedInit_d_27__VTable {
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

    struct WaterFallMasksSystem_TimeslicedInit_d_27__StaticFields {
    };

    struct WaterFallMasksSystem_TimeslicedInit_d_27__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WaterFallMasksSystem_TimeslicedInit_d_27__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WaterFallMasksSystem_TimeslicedInit_d_27__VTable vtable;
    };

    struct BlueFlameVineDoorController__Fields {
        struct MonoBehaviour__Fields _;
        struct SerializedBooleanUberState* DoorOpenState;
        bool CreateCheckpoint;
        struct Condition_1* DoorOpenCondition;
        struct MoonTimeline* TransitionTimeline;
        struct PlayerInsideZoneChecker* SeinInsideZoneChecker;
        struct GameObject* Collider;
        struct Renderer* BoxRenderer;
        float OpenAlpha;
        float ClosedAlpha;
        struct IUberState__Array* m_affectingUberStates;
    };

    struct BlueFlameVineDoorController {
        struct BlueFlameVineDoorController__Class* klass;
        MonitorData* monitor;
        struct BlueFlameVineDoorController__Fields fields;
    };

    struct BlueFlameVineDoorController__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Apply;
        VirtualInvokeData get_ApplyOnEditor;
        VirtualInvokeData get_AffectingUberStates;
        VirtualInvokeData get_AllTargets;
        VirtualInvokeData get_UpdateType;
        VirtualInvokeData OnUpdate;
    };

    struct BlueFlameVineDoorController__StaticFields {
    };

    struct BlueFlameVineDoorController__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BlueFlameVineDoorController__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BlueFlameVineDoorController__VTable vtable;
    };

    struct MovingDiscController__Fields {
        struct MonoBehaviour__Fields _;
        struct SerializedFloatUberState* SavedDiscPositon;
        struct Condition_1* MoveCondition;
        struct MoonTimeline* ConditionTrueTimeline;
        struct MoonTimeline* ConditionFalseTimeline;
        float m_startingDiscPositionIfNoSerialization;
        struct VelocityBezierSplineComponent* PathSpline;
        float Acceleration;
        float FrictionCoefficient;
        float RollingGravity;
        float RollingRadius;
        float m_angularVelocity;
        float m_currentSpeed;
        bool m_playerOnSurface;
        bool m_previousShouldMove;
        struct IUberState__Array* m_affectingUberStates;
    };

    struct MovingDiscController {
        struct MovingDiscController__Class* klass;
        MonitorData* monitor;
        struct MovingDiscController__Fields fields;
    };

    struct MovingDiscController__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_UpdateType;
        VirtualInvokeData OnUpdate;
        VirtualInvokeData Apply;
        VirtualInvokeData get_ApplyOnEditor;
        VirtualInvokeData get_AffectingUberStates;
        VirtualInvokeData get_AllTargets;
    };

    struct MovingDiscController__StaticFields {
    };

    struct MovingDiscController__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MovingDiscController__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MovingDiscController__VTable vtable;
    };

    struct ConditionalPlatform__Fields {
        struct MonoBehaviour__Fields _;
        struct Condition_1* PlatformMoveCondition;
        bool PlayerRequiredOnPlatform;
        struct PlayerInsideZoneChecker* TriggerZone;
        struct MoonTimeline* ConditionTrueTimeline;
        struct MoonTimeline* ConditionFalseTimeline;
        struct PlatformImplementation* Implementation;
        bool m_playerIsOnPlatform;
        bool m_conditionWasTrue;
    };

    struct ConditionalPlatform {
        struct ConditionalPlatform__Class* klass;
        MonitorData* monitor;
        struct ConditionalPlatform__Fields fields;
    };

    struct PlatformImplementation__Fields {
        struct MonoBehaviour__Fields _;
    };

    struct PlatformImplementation {
        struct PlatformImplementation__Class* klass;
        MonitorData* monitor;
        struct PlatformImplementation__Fields fields;
    };

    struct PlatformImplementation__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Reset;
        VirtualInvokeData OnUpdate;
    };

    struct PlatformImplementation__StaticFields {
    };

    struct PlatformImplementation__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PlatformImplementation__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PlatformImplementation__VTable vtable;
    };

    struct ConditionalPlatform__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_UpdateType;
        VirtualInvokeData OnUpdate;
        VirtualInvokeData Apply;
        VirtualInvokeData get_ApplyOnEditor;
        VirtualInvokeData get_AffectingUberStates;
        VirtualInvokeData get_AllTargets;
    };

    struct ConditionalPlatform__StaticFields {
    };

    struct ConditionalPlatform__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ConditionalPlatform__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ConditionalPlatform__VTable vtable;
    };

    struct PathFollowingPlatform__Fields {
        struct MonoBehaviour__Fields _;
        struct SerializedFloatUberState* NormalizedPositionOnSpline;
        struct Condition_1* PlatformMoveCondition;
        struct PlayerInsideZoneChecker* TriggerZone;
        struct VelocityBezierSplineComponent* PathSpline;
        struct GameObject* PlatformObject;
        struct MoonTimeline* ConditionTrueTimeline;
        struct MoonTimeline* ConditionFalseTimeline;
        struct DynamicDataResolver* m_dynamicDataResolver;
        float m_currentPlatformPosition;
        bool m_playerIsOnPlatform;
        bool m_conditionWasTrue;
        struct IUberState__Array* m_affectingUberStates;
    };

    struct PathFollowingPlatform {
        struct PathFollowingPlatform__Class* klass;
        MonitorData* monitor;
        struct PathFollowingPlatform__Fields fields;
    };

    struct PathFollowingPlatform__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData GetResolverForType;
        VirtualInvokeData Apply;
        VirtualInvokeData get_ApplyOnEditor;
        VirtualInvokeData get_AffectingUberStates;
        VirtualInvokeData get_AllTargets;
        VirtualInvokeData get_UpdateType;
        VirtualInvokeData OnUpdate;
    };

} // namespace app
