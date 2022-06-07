namespace app {
struct BehaviourState__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Name;
    VirtualInvokeData OnBegin;
    VirtualInvokeData OnUpdate;
    VirtualInvokeData OnInterrupt;
};

struct BehaviourState__StaticFields {
};

struct BehaviourState__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BehaviourState__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BehaviourState__VTable vtable;
};

struct __declspec(align(8)) BehaviourTreeBuilder__Fields {
    struct IBehaviourTreeNode *curNode;
    struct Stack_1_UberBehaviourTree_IParentBehaviourTreeNode_ *parentNodeStack;
};

struct BehaviourTreeBuilder {
    struct BehaviourTreeBuilder__Class *klass;
    MonitorData *monitor;
    struct BehaviourTreeBuilder__Fields fields;
};

struct __declspec(align(8)) Stack_1_UberBehaviourTree_IParentBehaviourTreeNode___Fields {
    struct IParentBehaviourTreeNode__Array *_array;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct Stack_1_UberBehaviourTree_IParentBehaviourTreeNode_ {
    struct Stack_1_UberBehaviourTree_IParentBehaviourTreeNode___Class *klass;
    MonitorData *monitor;
    struct Stack_1_UberBehaviourTree_IParentBehaviourTreeNode___Fields fields;
};

struct IParentBehaviourTreeNode__Fields {
    struct IBehaviourTreeNode__Fields _;
};

struct IParentBehaviourTreeNode {
    struct IParentBehaviourTreeNode__Class *klass;
    MonitorData *monitor;
    struct IParentBehaviourTreeNode__Fields fields;
};

struct InverterNode__Fields {
    struct IParentBehaviourTreeNode__Fields _;
    struct String *name;
    struct IBehaviourTreeNode *childNode;
};

struct InverterNode {
    struct InverterNode__Class *klass;
    MonitorData *monitor;
    struct InverterNode__Fields fields;
};

struct IParentBehaviourTreeNode__Array {
    struct IParentBehaviourTreeNode__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct IParentBehaviourTreeNode *vector[32];
};

struct IEnumerator_1_UberBehaviourTree_IParentBehaviourTreeNode_ {
    struct IEnumerator_1_UberBehaviourTree_IParentBehaviourTreeNode___Class *klass;
    MonitorData *monitor;
};

struct InverterNode__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Tick;
    VirtualInvokeData Reset;
    VirtualInvokeData AddChild;
};

struct InverterNode__StaticFields {
};

struct InverterNode__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct InverterNode__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct InverterNode__VTable vtable;
};

struct IParentBehaviourTreeNode__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData __unknown;
    VirtualInvokeData Reset;
    VirtualInvokeData __unknown_1;
};

struct IParentBehaviourTreeNode__StaticFields {
};

struct IParentBehaviourTreeNode__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IParentBehaviourTreeNode__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IParentBehaviourTreeNode__VTable vtable;
};

struct IParentBehaviourTreeNode__Array__VTable {
};

struct IParentBehaviourTreeNode__Array__StaticFields {
};

struct IParentBehaviourTreeNode__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IParentBehaviourTreeNode__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IParentBehaviourTreeNode__Array__VTable vtable;
};

struct IEnumerator_1_UberBehaviourTree_IParentBehaviourTreeNode___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_UberBehaviourTree_IParentBehaviourTreeNode___StaticFields {
};

struct IEnumerator_1_UberBehaviourTree_IParentBehaviourTreeNode___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_UberBehaviourTree_IParentBehaviourTreeNode___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_UberBehaviourTree_IParentBehaviourTreeNode___VTable vtable;
};

struct Stack_1_UberBehaviourTree_IParentBehaviourTreeNode___VTable {
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

struct Stack_1_UberBehaviourTree_IParentBehaviourTreeNode___StaticFields {
};

struct Stack_1_UberBehaviourTree_IParentBehaviourTreeNode___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Stack_1_UberBehaviourTree_IParentBehaviourTreeNode___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Stack_1_UberBehaviourTree_IParentBehaviourTreeNode___VTable vtable;
};

struct BehaviourTreeBuilder__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct BehaviourTreeBuilder__StaticFields {
};

struct BehaviourTreeBuilder__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BehaviourTreeBuilder__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BehaviourTreeBuilder__VTable vtable;
};

struct Func_2_UberBehaviourTree_TickData_Boolean___Fields {
    struct MulticastDelegate__Fields _;
};

struct Func_2_UberBehaviourTree_TickData_Boolean_ {
    struct Func_2_UberBehaviourTree_TickData_Boolean___Class *klass;
    MonitorData *monitor;
    struct Func_2_UberBehaviourTree_TickData_Boolean___Fields fields;
};

struct Func_2_UberBehaviourTree_TickData_Boolean___VTable {
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

struct Func_2_UberBehaviourTree_TickData_Boolean___StaticFields {
};

struct Func_2_UberBehaviourTree_TickData_Boolean___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Func_2_UberBehaviourTree_TickData_Boolean___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Func_2_UberBehaviourTree_TickData_Boolean___VTable vtable;
};

struct __declspec(align(8)) BehaviourTreeBuilder_c_DisplayClass4_0__Fields {
    struct Func_2_UberBehaviourTree_TickData_Boolean_ *fn;
};

struct BehaviourTreeBuilder_c_DisplayClass4_0 {
    struct BehaviourTreeBuilder_c_DisplayClass4_0__Class *klass;
    MonitorData *monitor;
    struct BehaviourTreeBuilder_c_DisplayClass4_0__Fields fields;
};

struct BehaviourTreeBuilder_c_DisplayClass4_0__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct BehaviourTreeBuilder_c_DisplayClass4_0__StaticFields {
};

struct BehaviourTreeBuilder_c_DisplayClass4_0__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BehaviourTreeBuilder_c_DisplayClass4_0__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BehaviourTreeBuilder_c_DisplayClass4_0__VTable vtable;
};

struct MemSequenceNode__Fields {
    struct IParentBehaviourTreeNode__Fields _;
    struct String *name;
    struct List_1_UberBehaviourTree_IBehaviourTreeNode_ *children;
    int32_t runningChild;
};

struct MemSequenceNode {
    struct MemSequenceNode__Class *klass;
    MonitorData *monitor;
    struct MemSequenceNode__Fields fields;
};

struct __declspec(align(8)) List_1_UberBehaviourTree_IBehaviourTreeNode___Fields {
    struct IBehaviourTreeNode__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_UberBehaviourTree_IBehaviourTreeNode_ {
    struct List_1_UberBehaviourTree_IBehaviourTreeNode___Class *klass;
    MonitorData *monitor;
    struct List_1_UberBehaviourTree_IBehaviourTreeNode___Fields fields;
};

struct IBehaviourTreeNode__Array {
    struct IBehaviourTreeNode__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct IBehaviourTreeNode *vector[32];
};

struct IEnumerator_1_UberBehaviourTree_IBehaviourTreeNode_ {
    struct IEnumerator_1_UberBehaviourTree_IBehaviourTreeNode___Class *klass;
    MonitorData *monitor;
};

struct IBehaviourTreeNode__Array__VTable {
};

struct IBehaviourTreeNode__Array__StaticFields {
};

struct IBehaviourTreeNode__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IBehaviourTreeNode__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IBehaviourTreeNode__Array__VTable vtable;
};

struct IEnumerator_1_UberBehaviourTree_IBehaviourTreeNode___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_UberBehaviourTree_IBehaviourTreeNode___StaticFields {
};

struct IEnumerator_1_UberBehaviourTree_IBehaviourTreeNode___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_UberBehaviourTree_IBehaviourTreeNode___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_UberBehaviourTree_IBehaviourTreeNode___VTable vtable;
};

struct List_1_UberBehaviourTree_IBehaviourTreeNode___VTable {
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

struct List_1_UberBehaviourTree_IBehaviourTreeNode___StaticFields {
    struct IBehaviourTreeNode__Array *_emptyArray;
};

struct List_1_UberBehaviourTree_IBehaviourTreeNode___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_UberBehaviourTree_IBehaviourTreeNode___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_UberBehaviourTree_IBehaviourTreeNode___VTable vtable;
};

struct MemSequenceNode__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Tick;
    VirtualInvokeData Reset;
    VirtualInvokeData AddChild;
};

struct MemSequenceNode__StaticFields {
};

struct MemSequenceNode__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MemSequenceNode__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MemSequenceNode__VTable vtable;
};

struct ParallelNode_1__Fields {
    struct IParentBehaviourTreeNode__Fields _;
    struct String *name;
    struct List_1_UberBehaviourTree_IBehaviourTreeNode_ *children;
    int32_t numRequiredToFail;
    int32_t numRequiredToSucceed;
};

struct ParallelNode_1 {
    struct ParallelNode_1__Class *klass;
    MonitorData *monitor;
    struct ParallelNode_1__Fields fields;
};

struct ParallelNode_1__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Tick;
    VirtualInvokeData Reset;
    VirtualInvokeData AddChild;
};

struct ParallelNode_1__StaticFields {
};

struct ParallelNode_1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ParallelNode_1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ParallelNode_1__VTable vtable;
};

struct SelectorNode_1__Fields {
    struct IParentBehaviourTreeNode__Fields _;
    struct String *name;
    struct List_1_UberBehaviourTree_IBehaviourTreeNode_ *children;
};

struct SelectorNode_1 {
    struct SelectorNode_1__Class *klass;
    MonitorData *monitor;
    struct SelectorNode_1__Fields fields;
};

struct SelectorNode_1__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Tick;
    VirtualInvokeData Reset;
    VirtualInvokeData AddChild;
};

struct SelectorNode_1__StaticFields {
};

struct SelectorNode_1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SelectorNode_1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SelectorNode_1__VTable vtable;
};

struct SequenceNode_2__Fields {
    struct IParentBehaviourTreeNode__Fields _;
    struct String *name;
    struct List_1_UberBehaviourTree_IBehaviourTreeNode_ *children;
};

struct SequenceNode_2 {
    struct SequenceNode_2__Class *klass;
    MonitorData *monitor;
    struct SequenceNode_2__Fields fields;
};

struct SequenceNode_2__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Tick;
    VirtualInvokeData Reset;
    VirtualInvokeData AddChild;
};

struct SequenceNode_2__StaticFields {
};

struct SequenceNode_2__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SequenceNode_2__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SequenceNode_2__VTable vtable;
};

struct StateNode__Fields {
    struct IBehaviourTreeNode__Fields _;
    struct String *name;
    struct IBehaviourState *state;
};

struct StateNode {
    struct StateNode__Class *klass;
    MonitorData *monitor;
    struct StateNode__Fields fields;
};

struct StateNode__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Tick;
    VirtualInvokeData Reset;
};

struct StateNode__StaticFields {
};

struct StateNode__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct StateNode__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct StateNode__VTable vtable;
};

struct BehaviourEvent_1_UberBehaviourTree_Events_OnReceiveDamage_ {
    struct BehaviourEvent_1_UberBehaviourTree_Events_OnReceiveDamage___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) OnReceiveDamage_1__Fields {
    struct Damage *Damage;
};

struct OnReceiveDamage_1 {
    struct OnReceiveDamage_1__Class *klass;
    MonitorData *monitor;
    struct OnReceiveDamage_1__Fields fields;
};

struct BehaviourEvent_1_UberBehaviourTree_Events_OnReceiveDamage___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_ID;
};

struct BehaviourEvent_1_UberBehaviourTree_Events_OnReceiveDamage___StaticFields {
    int32_t UniqueID;
};

struct BehaviourEvent_1_UberBehaviourTree_Events_OnReceiveDamage___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BehaviourEvent_1_UberBehaviourTree_Events_OnReceiveDamage___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BehaviourEvent_1_UberBehaviourTree_Events_OnReceiveDamage___VTable vtable;
};

struct OnReceiveDamage_1__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_ID;
};

struct OnReceiveDamage_1__StaticFields {
};

struct OnReceiveDamage_1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct OnReceiveDamage_1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct OnReceiveDamage_1__VTable vtable;
};

struct BehaviourEvent_1_UberBehaviourTree_Events_OnCollisionEnter_ {
    struct BehaviourEvent_1_UberBehaviourTree_Events_OnCollisionEnter___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) OnCollisionEnter_1__Fields {
    struct Collision *Collision;
};

struct OnCollisionEnter_1 {
    struct OnCollisionEnter_1__Class *klass;
    MonitorData *monitor;
    struct OnCollisionEnter_1__Fields fields;
};

struct BehaviourEvent_1_UberBehaviourTree_Events_OnCollisionEnter___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_ID;
};

struct BehaviourEvent_1_UberBehaviourTree_Events_OnCollisionEnter___StaticFields {
    int32_t UniqueID;
};

struct BehaviourEvent_1_UberBehaviourTree_Events_OnCollisionEnter___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BehaviourEvent_1_UberBehaviourTree_Events_OnCollisionEnter___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BehaviourEvent_1_UberBehaviourTree_Events_OnCollisionEnter___VTable vtable;
};

struct OnCollisionEnter_1__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_ID;
};

struct OnCollisionEnter_1__StaticFields {
};

struct OnCollisionEnter_1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct OnCollisionEnter_1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct OnCollisionEnter_1__VTable vtable;
};

struct BehaviourEvent_1_UberBehaviourTree_Events_BatPeerDeath_ {
    struct BehaviourEvent_1_UberBehaviourTree_Events_BatPeerDeath___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) BatPeerDeath__Fields {
    struct Vector2 position;
    struct Damage *damage;
};

struct BatPeerDeath {
    struct BatPeerDeath__Class *klass;
    MonitorData *monitor;
    struct BatPeerDeath__Fields fields;
};

struct BehaviourEvent_1_UberBehaviourTree_Events_BatPeerDeath___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_ID;
};

struct BehaviourEvent_1_UberBehaviourTree_Events_BatPeerDeath___StaticFields {
    int32_t UniqueID;
};

struct BehaviourEvent_1_UberBehaviourTree_Events_BatPeerDeath___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BehaviourEvent_1_UberBehaviourTree_Events_BatPeerDeath___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BehaviourEvent_1_UberBehaviourTree_Events_BatPeerDeath___VTable vtable;
};

struct BatPeerDeath__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_ID;
};

struct BatPeerDeath__StaticFields {
};

struct BatPeerDeath__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BatPeerDeath__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BatPeerDeath__VTable vtable;
};

struct BehaviourEvent_1_UberBehaviourTree_Events_BatPeerStickyMineStuck_ {
    struct BehaviourEvent_1_UberBehaviourTree_Events_BatPeerStickyMineStuck___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) BatPeerStickyMineStuck__Fields {
    struct Vector2 position;
};

struct BatPeerStickyMineStuck {
    struct BatPeerStickyMineStuck__Class *klass;
    MonitorData *monitor;
    struct BatPeerStickyMineStuck__Fields fields;
};

struct BehaviourEvent_1_UberBehaviourTree_Events_BatPeerStickyMineStuck___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_ID;
};

struct BehaviourEvent_1_UberBehaviourTree_Events_BatPeerStickyMineStuck___StaticFields {
    int32_t UniqueID;
};

struct BehaviourEvent_1_UberBehaviourTree_Events_BatPeerStickyMineStuck___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BehaviourEvent_1_UberBehaviourTree_Events_BatPeerStickyMineStuck___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BehaviourEvent_1_UberBehaviourTree_Events_BatPeerStickyMineStuck___VTable vtable;
};

struct BatPeerStickyMineStuck__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_ID;
};

struct BatPeerStickyMineStuck__StaticFields {
};

struct BatPeerStickyMineStuck__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BatPeerStickyMineStuck__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BatPeerStickyMineStuck__VTable vtable;
};

struct PathfindingNavigationAgent__Fields {
    struct MonoBehaviour__Fields _;
};

struct PathfindingNavigationAgent {
    struct PathfindingNavigationAgent__Class *klass;
    MonitorData *monitor;
    struct PathfindingNavigationAgent__Fields fields;
};

struct PathfindingNavigationAgent__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct PathfindingNavigationAgent__StaticFields {
};

struct PathfindingNavigationAgent__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PathfindingNavigationAgent__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PathfindingNavigationAgent__VTable vtable;
};

struct SimpleNavigationAgent__Fields {
    struct MonoBehaviour__Fields _;
};

struct SimpleNavigationAgent {
    struct SimpleNavigationAgent__Class *klass;
    MonitorData *monitor;
    struct SimpleNavigationAgent__Fields fields;
};

struct SimpleNavigationAgent__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SimpleNavigationAgent__StaticFields {
};

struct SimpleNavigationAgent__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SimpleNavigationAgent__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SimpleNavigationAgent__VTable vtable;
};

struct PlannerNodePostProcessor__Fields {
    struct ScriptableObject__Fields _;
    bool Enabled;
    struct Transform *m_componentTranform;
};

struct PlannerNodePostProcessor {
    struct PlannerNodePostProcessor__Class *klass;
    MonitorData *monitor;
    struct PlannerNodePostProcessor__Fields fields;
};

struct PlannerNodePostProcessor__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct PlannerNodePostProcessor__StaticFields {
};

struct PlannerNodePostProcessor__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PlannerNodePostProcessor__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PlannerNodePostProcessor__VTable vtable;
};

struct Vector2__1__VTable {
};

struct Vector2__1__StaticFields {
};

struct Vector2__1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Vector2__1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Vector2__1__VTable vtable;
};

enum class HintPositioning__Enum : int32_t {
    Top = 0x00000000,
    Bottom = 0x00000001,
    Left = 0x00000002,
    Right = 0x00000003,
};

struct HintPositioning__Enum__Boxed {
    struct HintPositioning__Enum__Class *klass;
    MonitorData *monitor;
    HintPositioning__Enum value;
    
};

enum class HintSize__Enum : int32_t {
    Normal = 0x00000000,
    Micro = 0x00000001,
};

struct HintSize__Enum__Boxed {
    struct HintSize__Enum__Class *klass;
    MonitorData *monitor;
    HintSize__Enum value;
    
};

struct ManagedHintConfiguration {
    struct MessageProvider *Message;
    struct MessageDescriptor Descriptor;
    HintPositioning__Enum Alignment;
    
    struct Vector2 Offset;
    HintSize__Enum Size;
    
    bool UseDescriptor;
};

struct ManagedHintConfiguration__Boxed {
    struct ManagedHintConfiguration__Class *klass;
    MonitorData *monitor;
    struct ManagedHintConfiguration fields;
};

struct HintPositioning__Enum__VTable {
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

struct HintPositioning__Enum__StaticFields {
};

struct HintPositioning__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct HintPositioning__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct HintPositioning__Enum__VTable vtable;
};

struct HintSize__Enum__VTable {
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

struct HintSize__Enum__StaticFields {
};

struct HintSize__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct HintSize__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct HintSize__Enum__VTable vtable;
};

struct ManagedHintConfiguration__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

}
