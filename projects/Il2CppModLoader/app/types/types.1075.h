namespace app {
struct DisabledProperty {
    struct DisabledProperty__Class *klass;
    MonitorData *monitor;
};

struct DisabledProperty__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_TypeId;
    VirtualInvokeData Match;
    VirtualInvokeData IsDefaultAttribute;
};

struct DisabledProperty__StaticFields {
};

struct DisabledProperty__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DisabledProperty__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DisabledProperty__VTable vtable;
};

struct UberAssetPrewarmContainer__Fields {
    struct MonoBehaviour__Fields _;
    struct List_1_UnityEngine_AnimationClip_ *AnimationClips;
    struct List_1_UnityEngine_Texture2D_ *Textures;
};

struct UberAssetPrewarmContainer {
    struct UberAssetPrewarmContainer__Class *klass;
    MonitorData *monitor;
    struct UberAssetPrewarmContainer__Fields fields;
};

struct __declspec(align(8)) List_1_UnityEngine_AnimationClip___Fields {
    struct AnimationClip__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_UnityEngine_AnimationClip_ {
    struct List_1_UnityEngine_AnimationClip___Class *klass;
    MonitorData *monitor;
    struct List_1_UnityEngine_AnimationClip___Fields fields;
};

struct List_1_UnityEngine_AnimationClip___VTable {
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

struct List_1_UnityEngine_AnimationClip___StaticFields {
    struct AnimationClip__Array *_emptyArray;
};

struct List_1_UnityEngine_AnimationClip___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_UnityEngine_AnimationClip___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_UnityEngine_AnimationClip___VTable vtable;
};

struct UberAssetPrewarmContainer__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct UberAssetPrewarmContainer__StaticFields {
};

struct UberAssetPrewarmContainer__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UberAssetPrewarmContainer__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UberAssetPrewarmContainer__VTable vtable;
};

struct __declspec(align(8)) MemoryLabelDebugger_MemoryManagerDataCache__Fields {
    struct List_1_UberShader_optimizations_gc_MemoryLabelDebugger_MemoryLabelAllocationCache_ *Labels;
};

struct MemoryLabelDebugger_MemoryManagerDataCache {
    struct MemoryLabelDebugger_MemoryManagerDataCache__Class *klass;
    MonitorData *monitor;
    struct MemoryLabelDebugger_MemoryManagerDataCache__Fields fields;
};

struct __declspec(align(8)) List_1_UberShader_optimizations_gc_MemoryLabelDebugger_MemoryLabelAllocationCache___Fields {
    struct MemoryLabelDebugger_MemoryLabelAllocationCache__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_UberShader_optimizations_gc_MemoryLabelDebugger_MemoryLabelAllocationCache_ {
    struct List_1_UberShader_optimizations_gc_MemoryLabelDebugger_MemoryLabelAllocationCache___Class *klass;
    MonitorData *monitor;
    struct List_1_UberShader_optimizations_gc_MemoryLabelDebugger_MemoryLabelAllocationCache___Fields fields;
};

struct __declspec(align(8)) MemoryLabelDebugger_MemoryLabelAllocationCache__Fields {
    int32_t LabelIndex;
    uint64_t SizeAllocated;
    uint64_t AllocationCount;
    struct String *LabelName;
    struct MemoryLabelDebugger_MemoryLabelBucketInfoCache__Array *Buckets;
};

struct MemoryLabelDebugger_MemoryLabelAllocationCache {
    struct MemoryLabelDebugger_MemoryLabelAllocationCache__Class *klass;
    MonitorData *monitor;
    struct MemoryLabelDebugger_MemoryLabelAllocationCache__Fields fields;
};

struct __declspec(align(8)) MemoryLabelDebugger_MemoryLabelBucketInfoCache__Fields {
    uint64_t BucketSize;
    uint64_t AllocationCount;
};

struct MemoryLabelDebugger_MemoryLabelBucketInfoCache {
    struct MemoryLabelDebugger_MemoryLabelBucketInfoCache__Class *klass;
    MonitorData *monitor;
    struct MemoryLabelDebugger_MemoryLabelBucketInfoCache__Fields fields;
};

struct MemoryLabelDebugger_MemoryLabelBucketInfoCache__Array {
    struct MemoryLabelDebugger_MemoryLabelBucketInfoCache__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct MemoryLabelDebugger_MemoryLabelBucketInfoCache *vector[32];
};

struct MemoryLabelDebugger_MemoryLabelAllocationCache__Array {
    struct MemoryLabelDebugger_MemoryLabelAllocationCache__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct MemoryLabelDebugger_MemoryLabelAllocationCache *vector[32];
};

struct IEnumerator_1_UberShader_optimizations_gc_MemoryLabelDebugger_MemoryLabelAllocationCache_ {
    struct IEnumerator_1_UberShader_optimizations_gc_MemoryLabelDebugger_MemoryLabelAllocationCache___Class *klass;
    MonitorData *monitor;
};

struct MemoryLabelDebugger_MemoryLabelBucketInfoCache__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct MemoryLabelDebugger_MemoryLabelBucketInfoCache__StaticFields {
};

struct MemoryLabelDebugger_MemoryLabelBucketInfoCache__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MemoryLabelDebugger_MemoryLabelBucketInfoCache__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MemoryLabelDebugger_MemoryLabelBucketInfoCache__VTable vtable;
};

struct MemoryLabelDebugger_MemoryLabelBucketInfoCache__Array__VTable {
};

struct MemoryLabelDebugger_MemoryLabelBucketInfoCache__Array__StaticFields {
};

struct MemoryLabelDebugger_MemoryLabelBucketInfoCache__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MemoryLabelDebugger_MemoryLabelBucketInfoCache__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MemoryLabelDebugger_MemoryLabelBucketInfoCache__Array__VTable vtable;
};

struct MemoryLabelDebugger_MemoryLabelAllocationCache__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct MemoryLabelDebugger_MemoryLabelAllocationCache__StaticFields {
};

struct MemoryLabelDebugger_MemoryLabelAllocationCache__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MemoryLabelDebugger_MemoryLabelAllocationCache__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MemoryLabelDebugger_MemoryLabelAllocationCache__VTable vtable;
};

struct MemoryLabelDebugger_MemoryLabelAllocationCache__Array__VTable {
};

struct MemoryLabelDebugger_MemoryLabelAllocationCache__Array__StaticFields {
};

struct MemoryLabelDebugger_MemoryLabelAllocationCache__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MemoryLabelDebugger_MemoryLabelAllocationCache__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MemoryLabelDebugger_MemoryLabelAllocationCache__Array__VTable vtable;
};

struct IEnumerator_1_UberShader_optimizations_gc_MemoryLabelDebugger_MemoryLabelAllocationCache___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_UberShader_optimizations_gc_MemoryLabelDebugger_MemoryLabelAllocationCache___StaticFields {
};

struct IEnumerator_1_UberShader_optimizations_gc_MemoryLabelDebugger_MemoryLabelAllocationCache___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_UberShader_optimizations_gc_MemoryLabelDebugger_MemoryLabelAllocationCache___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_UberShader_optimizations_gc_MemoryLabelDebugger_MemoryLabelAllocationCache___VTable vtable;
};

struct List_1_UberShader_optimizations_gc_MemoryLabelDebugger_MemoryLabelAllocationCache___VTable {
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

struct List_1_UberShader_optimizations_gc_MemoryLabelDebugger_MemoryLabelAllocationCache___StaticFields {
    struct MemoryLabelDebugger_MemoryLabelAllocationCache__Array *_emptyArray;
};

struct List_1_UberShader_optimizations_gc_MemoryLabelDebugger_MemoryLabelAllocationCache___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_UberShader_optimizations_gc_MemoryLabelDebugger_MemoryLabelAllocationCache___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_UberShader_optimizations_gc_MemoryLabelDebugger_MemoryLabelAllocationCache___VTable vtable;
};

struct MemoryLabelDebugger_MemoryManagerDataCache__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct MemoryLabelDebugger_MemoryManagerDataCache__StaticFields {
};

struct MemoryLabelDebugger_MemoryManagerDataCache__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MemoryLabelDebugger_MemoryManagerDataCache__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MemoryLabelDebugger_MemoryManagerDataCache__VTable vtable;
};

struct MemoryLabelDebugger {
    struct MemoryLabelDebugger__Class *klass;
    MonitorData *monitor;
};

struct MemoryLabelDebugger__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct MemoryLabelDebugger__StaticFields {
    struct MemoryLabelDebugger_MemoryManagerDataCache *m_cache;
    int32_t UpdateFrameInterval;
    bool LiveUpdate;
    bool m_enabled;
    int32_t m_framesSinceUpdate;
};

struct MemoryLabelDebugger__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MemoryLabelDebugger__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MemoryLabelDebugger__VTable vtable;
};

struct __declspec(align(8)) MemoryLabelDebugger_c_DisplayClass17_0__Fields {
    struct String *label;
};

struct MemoryLabelDebugger_c_DisplayClass17_0 {
    struct MemoryLabelDebugger_c_DisplayClass17_0__Class *klass;
    MonitorData *monitor;
    struct MemoryLabelDebugger_c_DisplayClass17_0__Fields fields;
};

struct MemoryLabelDebugger_c_DisplayClass17_0__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct MemoryLabelDebugger_c_DisplayClass17_0__StaticFields {
};

struct MemoryLabelDebugger_c_DisplayClass17_0__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MemoryLabelDebugger_c_DisplayClass17_0__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MemoryLabelDebugger_c_DisplayClass17_0__VTable vtable;
};

struct __declspec(align(8)) MemoryManagerDebugger_MemoryManagerDataCache__Fields {
    struct List_1_UberShader_optimizations_gc_MemoryManagerDebugger_MemoryManagerAllocatorCache_ *Allocators;
    uint64_t TotalUsedBytes;
    uint64_t TotalAllocBytes;
    uint64_t TotalAllocCount;
};

struct MemoryManagerDebugger_MemoryManagerDataCache {
    struct MemoryManagerDebugger_MemoryManagerDataCache__Class *klass;
    MonitorData *monitor;
    struct MemoryManagerDebugger_MemoryManagerDataCache__Fields fields;
};

struct __declspec(align(8)) List_1_UberShader_optimizations_gc_MemoryManagerDebugger_MemoryManagerAllocatorCache___Fields {
    struct MemoryManagerDebugger_MemoryManagerAllocatorCache__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_UberShader_optimizations_gc_MemoryManagerDebugger_MemoryManagerAllocatorCache_ {
    struct List_1_UberShader_optimizations_gc_MemoryManagerDebugger_MemoryManagerAllocatorCache___Class *klass;
    MonitorData *monitor;
    struct List_1_UberShader_optimizations_gc_MemoryManagerDebugger_MemoryManagerAllocatorCache___Fields fields;
};

struct __declspec(align(8)) MemoryManagerDebugger_MemoryManagerAllocatorCache__Fields {
    int32_t AllocatorIndex;
    struct String *Name;
    uint64_t UsedBytes;
    uint64_t AllocBytes;
    uint64_t PeakSize;
    uint64_t AllocCount;
};

struct MemoryManagerDebugger_MemoryManagerAllocatorCache {
    struct MemoryManagerDebugger_MemoryManagerAllocatorCache__Class *klass;
    MonitorData *monitor;
    struct MemoryManagerDebugger_MemoryManagerAllocatorCache__Fields fields;
};

struct MemoryManagerDebugger_MemoryManagerAllocatorCache__Array {
    struct MemoryManagerDebugger_MemoryManagerAllocatorCache__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct MemoryManagerDebugger_MemoryManagerAllocatorCache *vector[32];
};

struct IEnumerator_1_UberShader_optimizations_gc_MemoryManagerDebugger_MemoryManagerAllocatorCache_ {
    struct IEnumerator_1_UberShader_optimizations_gc_MemoryManagerDebugger_MemoryManagerAllocatorCache___Class *klass;
    MonitorData *monitor;
};

struct MemoryManagerDebugger_MemoryManagerAllocatorCache__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct MemoryManagerDebugger_MemoryManagerAllocatorCache__StaticFields {
};

struct MemoryManagerDebugger_MemoryManagerAllocatorCache__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MemoryManagerDebugger_MemoryManagerAllocatorCache__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MemoryManagerDebugger_MemoryManagerAllocatorCache__VTable vtable;
};

struct MemoryManagerDebugger_MemoryManagerAllocatorCache__Array__VTable {
};

struct MemoryManagerDebugger_MemoryManagerAllocatorCache__Array__StaticFields {
};

struct MemoryManagerDebugger_MemoryManagerAllocatorCache__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MemoryManagerDebugger_MemoryManagerAllocatorCache__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MemoryManagerDebugger_MemoryManagerAllocatorCache__Array__VTable vtable;
};

struct IEnumerator_1_UberShader_optimizations_gc_MemoryManagerDebugger_MemoryManagerAllocatorCache___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_UberShader_optimizations_gc_MemoryManagerDebugger_MemoryManagerAllocatorCache___StaticFields {
};

struct IEnumerator_1_UberShader_optimizations_gc_MemoryManagerDebugger_MemoryManagerAllocatorCache___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_UberShader_optimizations_gc_MemoryManagerDebugger_MemoryManagerAllocatorCache___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_UberShader_optimizations_gc_MemoryManagerDebugger_MemoryManagerAllocatorCache___VTable vtable;
};

struct List_1_UberShader_optimizations_gc_MemoryManagerDebugger_MemoryManagerAllocatorCache___VTable {
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

struct List_1_UberShader_optimizations_gc_MemoryManagerDebugger_MemoryManagerAllocatorCache___StaticFields {
    struct MemoryManagerDebugger_MemoryManagerAllocatorCache__Array *_emptyArray;
};

struct List_1_UberShader_optimizations_gc_MemoryManagerDebugger_MemoryManagerAllocatorCache___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_UberShader_optimizations_gc_MemoryManagerDebugger_MemoryManagerAllocatorCache___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_UberShader_optimizations_gc_MemoryManagerDebugger_MemoryManagerAllocatorCache___VTable vtable;
};

struct MemoryManagerDebugger_MemoryManagerDataCache__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct MemoryManagerDebugger_MemoryManagerDataCache__StaticFields {
};

struct MemoryManagerDebugger_MemoryManagerDataCache__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MemoryManagerDebugger_MemoryManagerDataCache__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MemoryManagerDebugger_MemoryManagerDataCache__VTable vtable;
};

struct MemoryManagerDebugger {
    struct MemoryManagerDebugger__Class *klass;
    MonitorData *monitor;
};

struct MemoryManagerDebugger__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct MemoryManagerDebugger__StaticFields {
    struct MemoryManagerDebugger_MemoryManagerDataCache *m_cache;
    int32_t UpdateFrameInterval;
    bool LiveUpdate;
    bool m_enabled;
    int32_t m_framesSinceUpdate;
};

struct MemoryManagerDebugger__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MemoryManagerDebugger__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MemoryManagerDebugger__VTable vtable;
};

struct __declspec(align(8)) NvnMemoryDebugger_NvnDataCache__Fields {
    struct List_1_UberShader_optimizations_gc_NvnMemoryDebugger_NvnPoolCache_ *Pools;
    uint64_t TotalUsedBytes;
    uint64_t TotalAllocBytes;
    uint64_t LargestLBufferCurrent;
    uint64_t LargestLBufferPeak;
};

struct NvnMemoryDebugger_NvnDataCache {
    struct NvnMemoryDebugger_NvnDataCache__Class *klass;
    MonitorData *monitor;
    struct NvnMemoryDebugger_NvnDataCache__Fields fields;
};

struct __declspec(align(8)) List_1_UberShader_optimizations_gc_NvnMemoryDebugger_NvnPoolCache___Fields {
    struct NvnMemoryDebugger_NvnPoolCache__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_UberShader_optimizations_gc_NvnMemoryDebugger_NvnPoolCache_ {
    struct List_1_UberShader_optimizations_gc_NvnMemoryDebugger_NvnPoolCache___Class *klass;
    MonitorData *monitor;
    struct List_1_UberShader_optimizations_gc_NvnMemoryDebugger_NvnPoolCache___Fields fields;
};

struct __declspec(align(8)) NvnMemoryDebugger_NvnPoolCache__Fields {
    Application_NvnBufferUsage__Enum Usage;
    
    struct String *UsageName;
    uint64_t UsedBytes;
    uint64_t AllocBytes;
    int32_t PoolCount;
};

struct NvnMemoryDebugger_NvnPoolCache {
    struct NvnMemoryDebugger_NvnPoolCache__Class *klass;
    MonitorData *monitor;
    struct NvnMemoryDebugger_NvnPoolCache__Fields fields;
};

struct NvnMemoryDebugger_NvnPoolCache__Array {
    struct NvnMemoryDebugger_NvnPoolCache__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct NvnMemoryDebugger_NvnPoolCache *vector[32];
};

struct IEnumerator_1_UberShader_optimizations_gc_NvnMemoryDebugger_NvnPoolCache_ {
    struct IEnumerator_1_UberShader_optimizations_gc_NvnMemoryDebugger_NvnPoolCache___Class *klass;
    MonitorData *monitor;
};

struct NvnMemoryDebugger_NvnPoolCache__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct NvnMemoryDebugger_NvnPoolCache__StaticFields {
};

struct NvnMemoryDebugger_NvnPoolCache__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NvnMemoryDebugger_NvnPoolCache__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NvnMemoryDebugger_NvnPoolCache__VTable vtable;
};

struct NvnMemoryDebugger_NvnPoolCache__Array__VTable {
};

struct NvnMemoryDebugger_NvnPoolCache__Array__StaticFields {
};

struct NvnMemoryDebugger_NvnPoolCache__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NvnMemoryDebugger_NvnPoolCache__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NvnMemoryDebugger_NvnPoolCache__Array__VTable vtable;
};

struct IEnumerator_1_UberShader_optimizations_gc_NvnMemoryDebugger_NvnPoolCache___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_UberShader_optimizations_gc_NvnMemoryDebugger_NvnPoolCache___StaticFields {
};

struct IEnumerator_1_UberShader_optimizations_gc_NvnMemoryDebugger_NvnPoolCache___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_UberShader_optimizations_gc_NvnMemoryDebugger_NvnPoolCache___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_UberShader_optimizations_gc_NvnMemoryDebugger_NvnPoolCache___VTable vtable;
};

struct List_1_UberShader_optimizations_gc_NvnMemoryDebugger_NvnPoolCache___VTable {
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

struct List_1_UberShader_optimizations_gc_NvnMemoryDebugger_NvnPoolCache___StaticFields {
    struct NvnMemoryDebugger_NvnPoolCache__Array *_emptyArray;
};

struct List_1_UberShader_optimizations_gc_NvnMemoryDebugger_NvnPoolCache___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_UberShader_optimizations_gc_NvnMemoryDebugger_NvnPoolCache___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_UberShader_optimizations_gc_NvnMemoryDebugger_NvnPoolCache___VTable vtable;
};

struct NvnMemoryDebugger_NvnDataCache__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct NvnMemoryDebugger_NvnDataCache__StaticFields {
};

struct NvnMemoryDebugger_NvnDataCache__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NvnMemoryDebugger_NvnDataCache__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NvnMemoryDebugger_NvnDataCache__VTable vtable;
};

struct NvnMemoryDebugger {
    struct NvnMemoryDebugger__Class *klass;
    MonitorData *monitor;
};

struct Application_NvnBufferUsage__Enum__Array {
    struct Application_NvnBufferUsage__Enum__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    Application_NvnBufferUsage__Enum vector[32];
};

struct Application_NvnBufferUsage__Enum__Array__VTable {
};

struct Application_NvnBufferUsage__Enum__Array__StaticFields {
};

struct Application_NvnBufferUsage__Enum__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Application_NvnBufferUsage__Enum__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Application_NvnBufferUsage__Enum__Array__VTable vtable;
};

struct NvnMemoryDebugger__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct NvnMemoryDebugger__StaticFields {
    struct NvnMemoryDebugger_NvnDataCache *m_cache;
    struct Application_NvnBufferUsage__Enum__Array *m_usages;
    int32_t UpdateFrameInterval;
    bool LiveUpdate;
    bool m_enabled;
    int32_t m_framesSinceUpdate;
};

struct NvnMemoryDebugger__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NvnMemoryDebugger__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NvnMemoryDebugger__VTable vtable;
};

struct SwitchUndockingController {
    struct SwitchUndockingController__Class *klass;
    MonitorData *monitor;
};

struct SwitchUndockingController__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SwitchUndockingController__StaticFields {
    int32_t s_frameDelay;
    int32_t s_frameCounter;
    bool m_initialized;
    bool m_enabled;
};

struct SwitchUndockingController__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SwitchUndockingController__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SwitchUndockingController__VTable vtable;
};

enum class UberGCLogic_MemoryProbeType__Enum : int32_t {
    GcHeapAllocated = 0x00000000,
    MemoryManagerAllocated = 0x00000001,
    NvnAllocated = 0x00000002,
    GcHeapReserved = 0x00000003,
    MemoryManagerReserved = 0x00000004,
    NvnReserved = 0x00000005,
    PhysicalFree = 0x00000006,
    PhysicalAllocatable = 0x00000007,
    DesiredMaxHeapSize = 0x00000008,
    SystemMemorySize = 0x00000009,
    ActualUsage = 0x0000000a,
    Count = 0x0000000b,
};

struct UberGCLogic_MemoryProbeType__Enum__Boxed {
    struct UberGCLogic_MemoryProbeType__Enum__Class *klass;
    MonitorData *monitor;
    UberGCLogic_MemoryProbeType__Enum value;
    
};

struct UberGCLogic_MemoryProbeType__Enum__VTable {
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

struct UberGCLogic_MemoryProbeType__Enum__StaticFields {
};

struct UberGCLogic_MemoryProbeType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UberGCLogic_MemoryProbeType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UberGCLogic_MemoryProbeType__Enum__VTable vtable;
};

enum class UberGCLogic_CleanupType__Enum : int32_t {
    Gc = 0x00000000,
    Proactive = 0x00000001,
    Panic = 0x00000002,
    Count = 0x00000003,
};

struct UberGCLogic_CleanupType__Enum__Boxed {
    struct UberGCLogic_CleanupType__Enum__Class *klass;
    MonitorData *monitor;
    UberGCLogic_CleanupType__Enum value;
    
};

struct UberGCLogic_CleanupType__Enum__VTable {
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

struct UberGCLogic_CleanupType__Enum__StaticFields {
};

struct UberGCLogic_CleanupType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UberGCLogic_CleanupType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UberGCLogic_CleanupType__Enum__VTable vtable;
};

struct UberGCLogic {
    struct UberGCLogic__Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) UberGCLogic_GCLogicSettings__Fields {
    bool DisableAllCleanups;
    float RecheckTimegate;
    bool SimpleFaderGating;
    int32_t DefaultFaderSceneUnloadGate;
    float DefaultFaderCleanupTimegate;
    int32_t PanicSceneUnloadGate;
    float PanicTimeGate;
    bool UsePanicMemoryGate;
    float PanicMemoryGateMegabytes;
    float PanicGcUsageRatioGate;
    float PanicGcTimeGate;
    float DefaultFaderGcUsageRatioGate;
    float GcOnBlackTimegate;
    int32_t ForceCleansAfterTeleporter;
    bool AllowFaderSources;
    struct Dictionary_2_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction_ *FaderOverrideActions;
};

struct UberGCLogic_GCLogicSettings {
    struct UberGCLogic_GCLogicSettings__Class *klass;
    MonitorData *monitor;
    struct UberGCLogic_GCLogicSettings__Fields fields;
};

}
