namespace app {
struct Action_1_IDialogNode___StaticFields {
};

struct Action_1_IDialogNode___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_1_IDialogNode___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Action_1_IDialogNode___VTable vtable;
};

struct IDialogNode__Array__VTable {
};

struct IDialogNode__Array__StaticFields {
};

struct IDialogNode__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IDialogNode__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IDialogNode__Array__VTable vtable;
};

struct DialogGraph_DialogGraphContext__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct DialogGraph_DialogGraphContext__StaticFields {
};

struct DialogGraph_DialogGraphContext__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DialogGraph_DialogGraphContext__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DialogGraph_DialogGraphContext__VTable vtable;
};

struct DialogGraph_MessageFinishedCondition__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Validate;
};

struct DialogGraph_MessageFinishedCondition__StaticFields {
};

struct DialogGraph_MessageFinishedCondition__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DialogGraph_MessageFinishedCondition__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DialogGraph_MessageFinishedCondition__VTable vtable;
};

struct DialogGraph__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData get_UpdateType;
    VirtualInvokeData OnUpdate;
};

struct DialogGraph__StaticFields {
};

struct DialogGraph__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DialogGraph__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DialogGraph__VTable vtable;
};

struct __declspec(align(8)) DialogNodeContext__Fields {
    struct DialogNode *Node;
};

struct DialogNodeContext {
    struct DialogNodeContext__Class *klass;
    MonitorData *monitor;
    struct DialogNodeContext__Fields fields;
};

struct DialogNode__Fields {
    struct MonoBehaviour__Fields _;
    struct MoonReference_1_IDialogActor_ *DialogActor;
    struct MessageProvider *Message;
    struct MoonReference_1_Moon_Timeline_MoonTimeline_ *DialogTimeline;
    struct List_1_Moon_Timeline_ShowTextEntity_ *m_showTextEntities;
    struct List_1_Moon_MoonReference_1__15 *NodeTransitions;
    struct List_1_Moon_MoonReference_1__16 *NodeDecorators;
    struct MessageBox *m_messageBox;
    struct IDialogActor *m_resolvedActor;
    struct List_1_IDialogTransition_ *m_resolvedTransitions;
    struct List_1_IDialogDecorator_ *m_resolvedDecorators;
    struct InteractionSettings *m_interactionSettings;
    struct IDialogInteractionTransition__Array *m_interactiveTransitions;
    struct Action_1_IContext_ *_OnActivated_k__BackingField;
    struct Action_1_IContext_ *_OnFinished_k__BackingField;
};

struct DialogNode {
    struct DialogNode__Class *klass;
    MonitorData *monitor;
    struct DialogNode__Fields fields;
};

struct __declspec(align(8)) MoonReference_1_IDialogActor___Fields {
    struct MoonTypeData m_data;
    bool m_isInitialized;
    bool m_isStatic;
    bool m_canResolve;
    struct IMoonTypeResolver *m_resolver;
    struct IMoonType_1_IDialogActor_ *m_cachedProxyType;
    struct IDialogActor *m_volatileValue;
};

struct MoonReference_1_IDialogActor_ {
    struct MoonReference_1_IDialogActor___Class *klass;
    MonitorData *monitor;
    struct MoonReference_1_IDialogActor___Fields fields;
};

struct IMoonType_1_IDialogActor_ {
    struct IMoonType_1_IDialogActor___Class *klass;
    MonitorData *monitor;
};

struct IDialogActor {
    struct IDialogActor__Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_Moon_Timeline_ShowTextEntity___Fields {
    struct ShowTextEntity__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_Moon_Timeline_ShowTextEntity_ {
    struct List_1_Moon_Timeline_ShowTextEntity___Class *klass;
    MonitorData *monitor;
    struct List_1_Moon_Timeline_ShowTextEntity___Fields fields;
};

struct ShowTextEntity__Array {
    struct ShowTextEntity__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct ShowTextEntity *vector[32];
};

struct IEnumerator_1_Moon_Timeline_ShowTextEntity_ {
    struct IEnumerator_1_Moon_Timeline_ShowTextEntity___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_Moon_MoonReference_1__15__Fields {
    struct MoonReference_1_IDialogTransition___Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_Moon_MoonReference_1__15 {
    struct List_1_Moon_MoonReference_1__15__Class *klass;
    MonitorData *monitor;
    struct List_1_Moon_MoonReference_1__15__Fields fields;
};

struct __declspec(align(8)) MoonReference_1_IDialogTransition___Fields {
    struct MoonTypeData m_data;
    bool m_isInitialized;
    bool m_isStatic;
    bool m_canResolve;
    struct IMoonTypeResolver *m_resolver;
    struct IMoonType_1_IDialogTransition_ *m_cachedProxyType;
    struct IDialogTransition *m_volatileValue;
};

struct MoonReference_1_IDialogTransition_ {
    struct MoonReference_1_IDialogTransition___Class *klass;
    MonitorData *monitor;
    struct MoonReference_1_IDialogTransition___Fields fields;
};

struct IMoonType_1_IDialogTransition_ {
    struct IMoonType_1_IDialogTransition___Class *klass;
    MonitorData *monitor;
};

struct IDialogTransition {
    struct IDialogTransition__Class *klass;
    MonitorData *monitor;
};

struct MoonReference_1_IDialogTransition___Array {
    struct MoonReference_1_IDialogTransition___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct MoonReference_1_IDialogTransition_ *vector[32];
};

struct IEnumerator_1_Moon_MoonReference_1__15 {
    struct IEnumerator_1_Moon_MoonReference_1__15__Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_Moon_MoonReference_1__16__Fields {
    struct MoonReference_1_IDialogDecorator___Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_Moon_MoonReference_1__16 {
    struct List_1_Moon_MoonReference_1__16__Class *klass;
    MonitorData *monitor;
    struct List_1_Moon_MoonReference_1__16__Fields fields;
};

struct __declspec(align(8)) MoonReference_1_IDialogDecorator___Fields {
    struct MoonTypeData m_data;
    bool m_isInitialized;
    bool m_isStatic;
    bool m_canResolve;
    struct IMoonTypeResolver *m_resolver;
    struct IMoonType_1_IDialogDecorator_ *m_cachedProxyType;
    struct IDialogDecorator *m_volatileValue;
};

struct MoonReference_1_IDialogDecorator_ {
    struct MoonReference_1_IDialogDecorator___Class *klass;
    MonitorData *monitor;
    struct MoonReference_1_IDialogDecorator___Fields fields;
};

struct IMoonType_1_IDialogDecorator_ {
    struct IMoonType_1_IDialogDecorator___Class *klass;
    MonitorData *monitor;
};

struct IDialogDecorator {
    struct IDialogDecorator__Class *klass;
    MonitorData *monitor;
};

struct MoonReference_1_IDialogDecorator___Array {
    struct MoonReference_1_IDialogDecorator___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct MoonReference_1_IDialogDecorator_ *vector[32];
};

struct IEnumerator_1_Moon_MoonReference_1__16 {
    struct IEnumerator_1_Moon_MoonReference_1__16__Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_IDialogTransition___Fields {
    struct IDialogTransition__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_IDialogTransition_ {
    struct List_1_IDialogTransition___Class *klass;
    MonitorData *monitor;
    struct List_1_IDialogTransition___Fields fields;
};

struct IDialogTransition__Array {
    struct IDialogTransition__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct IDialogTransition *vector[32];
};

struct IEnumerator_1_IDialogTransition_ {
    struct IEnumerator_1_IDialogTransition___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_IDialogDecorator___Fields {
    struct IDialogDecorator__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_IDialogDecorator_ {
    struct List_1_IDialogDecorator___Class *klass;
    MonitorData *monitor;
    struct List_1_IDialogDecorator___Fields fields;
};

struct IDialogDecorator__Array {
    struct IDialogDecorator__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct IDialogDecorator *vector[32];
};

struct IEnumerator_1_IDialogDecorator_ {
    struct IEnumerator_1_IDialogDecorator___Class *klass;
    MonitorData *monitor;
};

struct IDialogInteractionTransition {
    struct IDialogInteractionTransition__Class *klass;
    MonitorData *monitor;
};

struct IDialogInteractionTransition__Array {
    struct IDialogInteractionTransition__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct IDialogInteractionTransition *vector[32];
};

struct IMoonType_1_IDialogActor___VTable {
    VirtualInvokeData Resolve;
    VirtualInvokeData SafeResolve;
    VirtualInvokeData TryResolve;
};

struct IMoonType_1_IDialogActor___StaticFields {
};

struct IMoonType_1_IDialogActor___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IMoonType_1_IDialogActor___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IMoonType_1_IDialogActor___VTable vtable;
};

struct IDialogActor__VTable {
    VirtualInvokeData get_DialogActorName;
    VirtualInvokeData get_DialogActorAnimator;
    VirtualInvokeData get_DialogActorPosition;
};

struct IDialogActor__StaticFields {
};

struct IDialogActor__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IDialogActor__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IDialogActor__VTable vtable;
};

struct IDialogActor___VTable {
};

struct IDialogActor___StaticFields {
};

struct IDialogActor___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IDialogActor___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IDialogActor___VTable vtable;
};

struct MoonReference_1_IDialogActor___VTable {
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

struct MoonReference_1_IDialogActor___StaticFields {
};

struct MoonReference_1_IDialogActor___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonReference_1_IDialogActor___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoonReference_1_IDialogActor___VTable vtable;
};

struct ShowTextEntity__Array__VTable {
};

struct ShowTextEntity__Array__StaticFields {
};

struct ShowTextEntity__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ShowTextEntity__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ShowTextEntity__Array__VTable vtable;
};

struct IEnumerator_1_Moon_Timeline_ShowTextEntity___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_Moon_Timeline_ShowTextEntity___StaticFields {
};

struct IEnumerator_1_Moon_Timeline_ShowTextEntity___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_Moon_Timeline_ShowTextEntity___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_Moon_Timeline_ShowTextEntity___VTable vtable;
};

struct List_1_Moon_Timeline_ShowTextEntity___VTable {
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

struct List_1_Moon_Timeline_ShowTextEntity___StaticFields {
    struct ShowTextEntity__Array *_emptyArray;
};

struct List_1_Moon_Timeline_ShowTextEntity___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_Moon_Timeline_ShowTextEntity___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_Moon_Timeline_ShowTextEntity___VTable vtable;
};

struct IMoonType_1_IDialogTransition___VTable {
    VirtualInvokeData Resolve;
    VirtualInvokeData SafeResolve;
    VirtualInvokeData TryResolve;
};

struct IMoonType_1_IDialogTransition___StaticFields {
};

struct IMoonType_1_IDialogTransition___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IMoonType_1_IDialogTransition___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IMoonType_1_IDialogTransition___VTable vtable;
};

struct IDialogTransition__VTable {
    VirtualInvokeData get_TransitionDestination;
    VirtualInvokeData OnOwnerEnter;
    VirtualInvokeData OnOwnerExit;
};

struct IDialogTransition__StaticFields {
};

struct IDialogTransition__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IDialogTransition__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IDialogTransition__VTable vtable;
};

struct IDialogTransition___VTable {
};

struct IDialogTransition___StaticFields {
};

struct IDialogTransition___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IDialogTransition___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IDialogTransition___VTable vtable;
};

struct MoonReference_1_IDialogTransition___VTable {
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

struct MoonReference_1_IDialogTransition___StaticFields {
};

struct MoonReference_1_IDialogTransition___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonReference_1_IDialogTransition___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoonReference_1_IDialogTransition___VTable vtable;
};

struct MoonReference_1_IDialogTransition___Array__VTable {
};

struct MoonReference_1_IDialogTransition___Array__StaticFields {
};

struct MoonReference_1_IDialogTransition___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonReference_1_IDialogTransition___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoonReference_1_IDialogTransition___Array__VTable vtable;
};

struct IEnumerator_1_Moon_MoonReference_1__15__VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_Moon_MoonReference_1__15__StaticFields {
};

struct IEnumerator_1_Moon_MoonReference_1__15__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_Moon_MoonReference_1__15__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_Moon_MoonReference_1__15__VTable vtable;
};

struct List_1_Moon_MoonReference_1__15__VTable {
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

struct List_1_Moon_MoonReference_1__15__StaticFields {
    struct MoonReference_1_IDialogTransition___Array *_emptyArray;
};

struct List_1_Moon_MoonReference_1__15__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_Moon_MoonReference_1__15__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_Moon_MoonReference_1__15__VTable vtable;
};

struct IMoonType_1_IDialogDecorator___VTable {
    VirtualInvokeData Resolve;
    VirtualInvokeData SafeResolve;
    VirtualInvokeData TryResolve;
};

struct IMoonType_1_IDialogDecorator___StaticFields {
};

struct IMoonType_1_IDialogDecorator___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IMoonType_1_IDialogDecorator___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IMoonType_1_IDialogDecorator___VTable vtable;
};

struct IDialogDecorator__VTable {
    VirtualInvokeData ExecuteDecorator;
};

struct IDialogDecorator__StaticFields {
};

struct IDialogDecorator__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IDialogDecorator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IDialogDecorator__VTable vtable;
};

struct IDialogDecorator___VTable {
};

struct IDialogDecorator___StaticFields {
};

struct IDialogDecorator___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IDialogDecorator___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IDialogDecorator___VTable vtable;
};

struct MoonReference_1_IDialogDecorator___VTable {
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

struct MoonReference_1_IDialogDecorator___StaticFields {
};

struct MoonReference_1_IDialogDecorator___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonReference_1_IDialogDecorator___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoonReference_1_IDialogDecorator___VTable vtable;
};

struct MoonReference_1_IDialogDecorator___Array__VTable {
};

struct MoonReference_1_IDialogDecorator___Array__StaticFields {
};

struct MoonReference_1_IDialogDecorator___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonReference_1_IDialogDecorator___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoonReference_1_IDialogDecorator___Array__VTable vtable;
};

struct IEnumerator_1_Moon_MoonReference_1__16__VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_Moon_MoonReference_1__16__StaticFields {
};

struct IEnumerator_1_Moon_MoonReference_1__16__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_Moon_MoonReference_1__16__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_Moon_MoonReference_1__16__VTable vtable;
};

struct List_1_Moon_MoonReference_1__16__VTable {
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

struct List_1_Moon_MoonReference_1__16__StaticFields {
    struct MoonReference_1_IDialogDecorator___Array *_emptyArray;
};

struct List_1_Moon_MoonReference_1__16__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_Moon_MoonReference_1__16__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_Moon_MoonReference_1__16__VTable vtable;
};

struct IDialogTransition__Array__VTable {
};

struct IDialogTransition__Array__StaticFields {
};

struct IDialogTransition__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IDialogTransition__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IDialogTransition__Array__VTable vtable;
};

struct IEnumerator_1_IDialogTransition___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_IDialogTransition___StaticFields {
};

struct IEnumerator_1_IDialogTransition___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_IDialogTransition___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_IDialogTransition___VTable vtable;
};

struct List_1_IDialogTransition___VTable {
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

struct List_1_IDialogTransition___StaticFields {
    struct IDialogTransition__Array *_emptyArray;
};

struct List_1_IDialogTransition___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_IDialogTransition___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_IDialogTransition___VTable vtable;
};

struct IDialogDecorator__Array__VTable {
};

struct IDialogDecorator__Array__StaticFields {
};

struct IDialogDecorator__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IDialogDecorator__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IDialogDecorator__Array__VTable vtable;
};

struct IEnumerator_1_IDialogDecorator___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_IDialogDecorator___StaticFields {
};

struct IEnumerator_1_IDialogDecorator___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_IDialogDecorator___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_IDialogDecorator___VTable vtable;
};

struct List_1_IDialogDecorator___VTable {
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

struct List_1_IDialogDecorator___StaticFields {
    struct IDialogDecorator__Array *_emptyArray;
};

struct List_1_IDialogDecorator___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_IDialogDecorator___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_IDialogDecorator___VTable vtable;
};

struct IDialogInteractionTransition__VTable {
    VirtualInvokeData get_Button;
    VirtualInvokeData get_InteractionBinding;
};

struct IDialogInteractionTransition__StaticFields {
};

struct IDialogInteractionTransition__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IDialogInteractionTransition__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IDialogInteractionTransition__VTable vtable;
};

}
