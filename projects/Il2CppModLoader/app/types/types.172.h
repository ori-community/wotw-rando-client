namespace app {
struct NewArrayInitInstruction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NewArrayInitInstruction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NewArrayInitInstruction__VTable vtable;
};

struct __declspec(align(8)) NewArrayInstruction__Fields {
    struct Type *_elementType;
};

struct NewArrayInstruction {
    struct NewArrayInstruction__Class *klass;
    MonitorData *monitor;
    struct NewArrayInstruction__Fields fields;
};

struct NewArrayInstruction__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_ConsumedStack;
    VirtualInvokeData get_ProducedStack;
    VirtualInvokeData get_ConsumedContinuations;
    VirtualInvokeData get_ProducedContinuations;
    VirtualInvokeData Run;
    VirtualInvokeData get_InstructionName;
    VirtualInvokeData ToDebugString;
};

struct NewArrayInstruction__StaticFields {
};

struct NewArrayInstruction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NewArrayInstruction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NewArrayInstruction__VTable vtable;
};

struct __declspec(align(8)) NewArrayBoundsInstruction__Fields {
    struct Type *_elementType;
    int32_t _rank;
};

struct NewArrayBoundsInstruction {
    struct NewArrayBoundsInstruction__Class *klass;
    MonitorData *monitor;
    struct NewArrayBoundsInstruction__Fields fields;
};

struct NewArrayBoundsInstruction__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_ConsumedStack;
    VirtualInvokeData get_ProducedStack;
    VirtualInvokeData get_ConsumedContinuations;
    VirtualInvokeData get_ProducedContinuations;
    VirtualInvokeData Run;
    VirtualInvokeData get_InstructionName;
    VirtualInvokeData ToDebugString;
};

struct NewArrayBoundsInstruction__StaticFields {
};

struct NewArrayBoundsInstruction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NewArrayBoundsInstruction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NewArrayBoundsInstruction__VTable vtable;
};

struct GetArrayItemInstruction {
    struct GetArrayItemInstruction__Class *klass;
    MonitorData *monitor;
};

struct GetArrayItemInstruction__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_ConsumedStack;
    VirtualInvokeData get_ProducedStack;
    VirtualInvokeData get_ConsumedContinuations;
    VirtualInvokeData get_ProducedContinuations;
    VirtualInvokeData Run;
    VirtualInvokeData get_InstructionName;
    VirtualInvokeData ToDebugString;
};

struct GetArrayItemInstruction__StaticFields {
    struct GetArrayItemInstruction *Instance;
};

struct GetArrayItemInstruction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GetArrayItemInstruction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GetArrayItemInstruction__VTable vtable;
};

struct SetArrayItemInstruction {
    struct SetArrayItemInstruction__Class *klass;
    MonitorData *monitor;
};

struct SetArrayItemInstruction__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_ConsumedStack;
    VirtualInvokeData get_ProducedStack;
    VirtualInvokeData get_ConsumedContinuations;
    VirtualInvokeData get_ProducedContinuations;
    VirtualInvokeData Run;
    VirtualInvokeData get_InstructionName;
    VirtualInvokeData ToDebugString;
};

struct SetArrayItemInstruction__StaticFields {
    struct SetArrayItemInstruction *Instance;
};

struct SetArrayItemInstruction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SetArrayItemInstruction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SetArrayItemInstruction__VTable vtable;
};

struct ArrayLengthInstruction {
    struct ArrayLengthInstruction__Class *klass;
    MonitorData *monitor;
};

struct ArrayLengthInstruction__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_ConsumedStack;
    VirtualInvokeData get_ProducedStack;
    VirtualInvokeData get_ConsumedContinuations;
    VirtualInvokeData get_ProducedContinuations;
    VirtualInvokeData Run;
    VirtualInvokeData get_InstructionName;
    VirtualInvokeData ToDebugString;
};

struct ArrayLengthInstruction__StaticFields {
    struct ArrayLengthInstruction *Instance;
};

struct ArrayLengthInstruction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ArrayLengthInstruction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ArrayLengthInstruction__VTable vtable;
};

struct __declspec(align(8)) BranchLabel__Fields {
    int32_t _targetIndex;
    int32_t _stackDepth;
    int32_t _continuationStackDepth;
    struct List_1_System_Int32_ *_forwardBranchFixups;
    int32_t _LabelIndex_k__BackingField;
};

struct BranchLabel {
    struct BranchLabel__Class *klass;
    MonitorData *monitor;
    struct BranchLabel__Fields fields;
};

struct BranchLabel__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct BranchLabel__StaticFields {
};

struct BranchLabel__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BranchLabel__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BranchLabel__VTable vtable;
};

struct __declspec(align(8)) InstructionList__Fields {
    struct List_1_System_Linq_Expressions_Interpreter_Instruction_ *_instructions;
    struct List_1_System_Object_ *_objects;
    int32_t _currentStackDepth;
    int32_t _maxStackDepth;
    int32_t _currentContinuationsDepth;
    int32_t _maxContinuationDepth;
    int32_t _runtimeLabelCount;
    struct List_1_System_Linq_Expressions_Interpreter_BranchLabel_ *_labels;
    struct List_1_KeyValuePair_2_System_Int32_System_Object_ *_debugCookies;
};

struct InstructionList {
    struct InstructionList__Class *klass;
    MonitorData *monitor;
    struct InstructionList__Fields fields;
};

struct __declspec(align(8)) List_1_System_Linq_Expressions_Interpreter_Instruction___Fields {
    struct Instruction__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_System_Linq_Expressions_Interpreter_Instruction_ {
    struct List_1_System_Linq_Expressions_Interpreter_Instruction___Class *klass;
    MonitorData *monitor;
    struct List_1_System_Linq_Expressions_Interpreter_Instruction___Fields fields;
};

struct IEnumerator_1_System_Linq_Expressions_Interpreter_Instruction_ {
    struct IEnumerator_1_System_Linq_Expressions_Interpreter_Instruction___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_System_Linq_Expressions_Interpreter_BranchLabel___Fields {
    struct BranchLabel__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_System_Linq_Expressions_Interpreter_BranchLabel_ {
    struct List_1_System_Linq_Expressions_Interpreter_BranchLabel___Class *klass;
    MonitorData *monitor;
    struct List_1_System_Linq_Expressions_Interpreter_BranchLabel___Fields fields;
};

struct BranchLabel__Array {
    struct BranchLabel__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct BranchLabel *vector[32];
};

struct IEnumerator_1_System_Linq_Expressions_Interpreter_BranchLabel_ {
    struct IEnumerator_1_System_Linq_Expressions_Interpreter_BranchLabel___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_System_Reflection_FieldInfo_System_Linq_Expressions_Interpreter_Instruction___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_System_Reflection_FieldInfo_System_Linq_Expressions_Interpreter_Instruction___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_System_Reflection_FieldInfo_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Reflection_FieldInfo_System_Linq_Expressions_Interpreter_Instruction_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Reflection_FieldInfo_System_Linq_Expressions_Interpreter_Instruction_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_System_Reflection_FieldInfo_System_Linq_Expressions_Interpreter_Instruction_ {
    struct Dictionary_2_System_Reflection_FieldInfo_System_Linq_Expressions_Interpreter_Instruction___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_System_Reflection_FieldInfo_System_Linq_Expressions_Interpreter_Instruction___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_Reflection_FieldInfo_System_Linq_Expressions_Interpreter_Instruction_ {
    int32_t hashCode;
    int32_t next;
    struct FieldInfo_1 *key;
    struct Instruction *value;
};

struct Dictionary_2_TKey_TValue_Entry_System_Reflection_FieldInfo_System_Linq_Expressions_Interpreter_Instruction___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_System_Reflection_FieldInfo_System_Linq_Expressions_Interpreter_Instruction___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_System_Reflection_FieldInfo_System_Linq_Expressions_Interpreter_Instruction_ fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_Reflection_FieldInfo_System_Linq_Expressions_Interpreter_Instruction___Array {
    struct Dictionary_2_TKey_TValue_Entry_System_Reflection_FieldInfo_System_Linq_Expressions_Interpreter_Instruction___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_System_Reflection_FieldInfo_System_Linq_Expressions_Interpreter_Instruction_ vector[32];
};

struct IEqualityComparer_1_System_Reflection_FieldInfo_ {
    struct IEqualityComparer_1_System_Reflection_FieldInfo___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Reflection_FieldInfo_System_Linq_Expressions_Interpreter_Instruction___Fields {
    struct Dictionary_2_System_Reflection_FieldInfo_System_Linq_Expressions_Interpreter_Instruction_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_Reflection_FieldInfo_System_Linq_Expressions_Interpreter_Instruction_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Reflection_FieldInfo_System_Linq_Expressions_Interpreter_Instruction___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Reflection_FieldInfo_System_Linq_Expressions_Interpreter_Instruction___Fields fields;
};

struct IEnumerator_1_System_Reflection_FieldInfo_ {
    struct IEnumerator_1_System_Reflection_FieldInfo___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Reflection_FieldInfo_System_Linq_Expressions_Interpreter_Instruction___Fields {
    struct Dictionary_2_System_Reflection_FieldInfo_System_Linq_Expressions_Interpreter_Instruction_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_Reflection_FieldInfo_System_Linq_Expressions_Interpreter_Instruction_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Reflection_FieldInfo_System_Linq_Expressions_Interpreter_Instruction___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Reflection_FieldInfo_System_Linq_Expressions_Interpreter_Instruction___Fields fields;
};

struct ICollection_1_System_Reflection_FieldInfo_ {
    struct ICollection_1_System_Reflection_FieldInfo___Class *klass;
    MonitorData *monitor;
};

struct ICollection_1_System_Linq_Expressions_Interpreter_Instruction_ {
    struct ICollection_1_System_Linq_Expressions_Interpreter_Instruction___Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_System_Reflection_FieldInfo_System_Linq_Expressions_Interpreter_Instruction_ {
    struct FieldInfo_1 *key;
    struct Instruction *value;
};

struct KeyValuePair_2_System_Reflection_FieldInfo_System_Linq_Expressions_Interpreter_Instruction___Boxed {
    struct KeyValuePair_2_System_Reflection_FieldInfo_System_Linq_Expressions_Interpreter_Instruction___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_System_Reflection_FieldInfo_System_Linq_Expressions_Interpreter_Instruction_ fields;
};

struct KeyValuePair_2_System_Reflection_FieldInfo_System_Linq_Expressions_Interpreter_Instruction___Array {
    struct KeyValuePair_2_System_Reflection_FieldInfo_System_Linq_Expressions_Interpreter_Instruction___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_System_Reflection_FieldInfo_System_Linq_Expressions_Interpreter_Instruction_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_System_Reflection_FieldInfo_System_Linq_Expressions_Interpreter_Instruction_ {
    struct IEnumerator_1_KeyValuePair_2_System_Reflection_FieldInfo_System_Linq_Expressions_Interpreter_Instruction___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_System_Linq_Expressions_Interpreter_Instruction_ {
    struct IEnumerable_1_System_Linq_Expressions_Interpreter_Instruction___Class *klass;
    MonitorData *monitor;
};

struct IEnumerator_1_System_Linq_Expressions_Interpreter_Instruction___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_System_Linq_Expressions_Interpreter_Instruction___StaticFields {
};

struct IEnumerator_1_System_Linq_Expressions_Interpreter_Instruction___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_System_Linq_Expressions_Interpreter_Instruction___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_System_Linq_Expressions_Interpreter_Instruction___VTable vtable;
};

struct List_1_System_Linq_Expressions_Interpreter_Instruction___VTable {
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

struct List_1_System_Linq_Expressions_Interpreter_Instruction___StaticFields {
    struct Instruction__Array *_emptyArray;
};

struct List_1_System_Linq_Expressions_Interpreter_Instruction___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_System_Linq_Expressions_Interpreter_Instruction___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_System_Linq_Expressions_Interpreter_Instruction___VTable vtable;
};

struct BranchLabel__Array__VTable {
};

struct BranchLabel__Array__StaticFields {
};

struct BranchLabel__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BranchLabel__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BranchLabel__Array__VTable vtable;
};

struct IEnumerator_1_System_Linq_Expressions_Interpreter_BranchLabel___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_System_Linq_Expressions_Interpreter_BranchLabel___StaticFields {
};

struct IEnumerator_1_System_Linq_Expressions_Interpreter_BranchLabel___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_System_Linq_Expressions_Interpreter_BranchLabel___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_System_Linq_Expressions_Interpreter_BranchLabel___VTable vtable;
};

struct List_1_System_Linq_Expressions_Interpreter_BranchLabel___VTable {
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

struct List_1_System_Linq_Expressions_Interpreter_BranchLabel___StaticFields {
    struct BranchLabel__Array *_emptyArray;
};

struct List_1_System_Linq_Expressions_Interpreter_BranchLabel___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_System_Linq_Expressions_Interpreter_BranchLabel___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_System_Linq_Expressions_Interpreter_BranchLabel___VTable vtable;
};

struct Dictionary_2_TKey_TValue_Entry_System_Reflection_FieldInfo_System_Linq_Expressions_Interpreter_Instruction___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Dictionary_2_TKey_TValue_Entry_System_Reflection_FieldInfo_System_Linq_Expressions_Interpreter_Instruction___StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_System_Reflection_FieldInfo_System_Linq_Expressions_Interpreter_Instruction___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_System_Reflection_FieldInfo_System_Linq_Expressions_Interpreter_Instruction___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_System_Reflection_FieldInfo_System_Linq_Expressions_Interpreter_Instruction___VTable vtable;
};

struct Dictionary_2_TKey_TValue_Entry_System_Reflection_FieldInfo_System_Linq_Expressions_Interpreter_Instruction___Array__VTable {
};

struct Dictionary_2_TKey_TValue_Entry_System_Reflection_FieldInfo_System_Linq_Expressions_Interpreter_Instruction___Array__StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_System_Reflection_FieldInfo_System_Linq_Expressions_Interpreter_Instruction___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_System_Reflection_FieldInfo_System_Linq_Expressions_Interpreter_Instruction___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_System_Reflection_FieldInfo_System_Linq_Expressions_Interpreter_Instruction___Array__VTable vtable;
};

struct IEqualityComparer_1_System_Reflection_FieldInfo___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData GetHashCode;
};

struct IEqualityComparer_1_System_Reflection_FieldInfo___StaticFields {
};

struct IEqualityComparer_1_System_Reflection_FieldInfo___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEqualityComparer_1_System_Reflection_FieldInfo___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEqualityComparer_1_System_Reflection_FieldInfo___VTable vtable;
};

struct IEnumerator_1_System_Reflection_FieldInfo___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_System_Reflection_FieldInfo___StaticFields {
};

struct IEnumerator_1_System_Reflection_FieldInfo___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_System_Reflection_FieldInfo___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_System_Reflection_FieldInfo___VTable vtable;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_Reflection_FieldInfo_System_Linq_Expressions_Interpreter_Instruction___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Count;
    VirtualInvokeData System_Collections_Generic_ICollection_TKey__get_IsReadOnly;
    VirtualInvokeData System_Collections_Generic_ICollection_TKey__Add;
    VirtualInvokeData System_Collections_Generic_ICollection_TKey__Clear;
    VirtualInvokeData System_Collections_Generic_ICollection_TKey__Contains;
    VirtualInvokeData CopyTo;
    VirtualInvokeData System_Collections_Generic_ICollection_TKey__Remove;
    VirtualInvokeData System_Collections_Generic_IEnumerable_TKey__GetEnumerator;
    VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
    VirtualInvokeData System_Collections_ICollection_CopyTo;
    VirtualInvokeData get_Count_1;
    VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
    VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
    VirtualInvokeData get_Count_2;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_Reflection_FieldInfo_System_Linq_Expressions_Interpreter_Instruction___StaticFields {
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_Reflection_FieldInfo_System_Linq_Expressions_Interpreter_Instruction___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Reflection_FieldInfo_System_Linq_Expressions_Interpreter_Instruction___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Reflection_FieldInfo_System_Linq_Expressions_Interpreter_Instruction___VTable vtable;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_Reflection_FieldInfo_System_Linq_Expressions_Interpreter_Instruction___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Count;
    VirtualInvokeData System_Collections_Generic_ICollection_TValue__get_IsReadOnly;
    VirtualInvokeData System_Collections_Generic_ICollection_TValue__Add;
    VirtualInvokeData System_Collections_Generic_ICollection_TValue__Clear;
    VirtualInvokeData System_Collections_Generic_ICollection_TValue__Contains;
    VirtualInvokeData CopyTo;
    VirtualInvokeData System_Collections_Generic_ICollection_TValue__Remove;
    VirtualInvokeData System_Collections_Generic_IEnumerable_TValue__GetEnumerator;
    VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
    VirtualInvokeData System_Collections_ICollection_CopyTo;
    VirtualInvokeData get_Count_1;
    VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
    VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
    VirtualInvokeData get_Count_2;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_Reflection_FieldInfo_System_Linq_Expressions_Interpreter_Instruction___StaticFields {
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_Reflection_FieldInfo_System_Linq_Expressions_Interpreter_Instruction___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Reflection_FieldInfo_System_Linq_Expressions_Interpreter_Instruction___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Reflection_FieldInfo_System_Linq_Expressions_Interpreter_Instruction___VTable vtable;
};

struct ICollection_1_System_Reflection_FieldInfo___VTable {
    VirtualInvokeData get_Count;
    VirtualInvokeData get_IsReadOnly;
    VirtualInvokeData Add;
    VirtualInvokeData Clear;
    VirtualInvokeData Contains;
    VirtualInvokeData CopyTo;
    VirtualInvokeData Remove;
};

struct ICollection_1_System_Reflection_FieldInfo___StaticFields {
};

struct ICollection_1_System_Reflection_FieldInfo___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ICollection_1_System_Reflection_FieldInfo___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ICollection_1_System_Reflection_FieldInfo___VTable vtable;
};

struct ICollection_1_System_Linq_Expressions_Interpreter_Instruction___VTable {
    VirtualInvokeData get_Count;
    VirtualInvokeData get_IsReadOnly;
    VirtualInvokeData Add;
    VirtualInvokeData Clear;
    VirtualInvokeData Contains;
    VirtualInvokeData CopyTo;
    VirtualInvokeData Remove;
};

struct ICollection_1_System_Linq_Expressions_Interpreter_Instruction___StaticFields {
};

struct ICollection_1_System_Linq_Expressions_Interpreter_Instruction___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ICollection_1_System_Linq_Expressions_Interpreter_Instruction___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ICollection_1_System_Linq_Expressions_Interpreter_Instruction___VTable vtable;
};

struct Instruction___VTable {
};

struct Instruction___StaticFields {
};

struct Instruction___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Instruction___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Instruction___VTable vtable;
};

struct KeyValuePair_2_System_Reflection_FieldInfo_System_Linq_Expressions_Interpreter_Instruction___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct KeyValuePair_2_System_Reflection_FieldInfo_System_Linq_Expressions_Interpreter_Instruction___StaticFields {
};

struct KeyValuePair_2_System_Reflection_FieldInfo_System_Linq_Expressions_Interpreter_Instruction___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyValuePair_2_System_Reflection_FieldInfo_System_Linq_Expressions_Interpreter_Instruction___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyValuePair_2_System_Reflection_FieldInfo_System_Linq_Expressions_Interpreter_Instruction___VTable vtable;
};

struct KeyValuePair_2_System_Reflection_FieldInfo_System_Linq_Expressions_Interpreter_Instruction___Array__VTable {
};

struct KeyValuePair_2_System_Reflection_FieldInfo_System_Linq_Expressions_Interpreter_Instruction___Array__StaticFields {
};

struct KeyValuePair_2_System_Reflection_FieldInfo_System_Linq_Expressions_Interpreter_Instruction___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyValuePair_2_System_Reflection_FieldInfo_System_Linq_Expressions_Interpreter_Instruction___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyValuePair_2_System_Reflection_FieldInfo_System_Linq_Expressions_Interpreter_Instruction___Array__VTable vtable;
};

struct IEnumerator_1_KeyValuePair_2_System_Reflection_FieldInfo_System_Linq_Expressions_Interpreter_Instruction___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_KeyValuePair_2_System_Reflection_FieldInfo_System_Linq_Expressions_Interpreter_Instruction___StaticFields {
};

struct IEnumerator_1_KeyValuePair_2_System_Reflection_FieldInfo_System_Linq_Expressions_Interpreter_Instruction___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_KeyValuePair_2_System_Reflection_FieldInfo_System_Linq_Expressions_Interpreter_Instruction___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_KeyValuePair_2_System_Reflection_FieldInfo_System_Linq_Expressions_Interpreter_Instruction___VTable vtable;
};

struct IEnumerable_1_System_Linq_Expressions_Interpreter_Instruction___VTable {
    VirtualInvokeData GetEnumerator;
};

struct IEnumerable_1_System_Linq_Expressions_Interpreter_Instruction___StaticFields {
};

struct IEnumerable_1_System_Linq_Expressions_Interpreter_Instruction___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerable_1_System_Linq_Expressions_Interpreter_Instruction___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerable_1_System_Linq_Expressions_Interpreter_Instruction___VTable vtable;
};

struct Dictionary_2_System_Reflection_FieldInfo_System_Linq_Expressions_Interpreter_Instruction___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Item;
    VirtualInvokeData set_Item;
    VirtualInvokeData System_Collections_Generic_IDictionary_TKey_TValue__get_Keys;
    VirtualInvokeData System_Collections_Generic_IDictionary_TKey_TValue__get_Values;
    VirtualInvokeData ContainsKey;
    VirtualInvokeData Add;
    VirtualInvokeData Remove;
    VirtualInvokeData TryGetValue;
    VirtualInvokeData get_Count;
    VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly;
    VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add;
    VirtualInvokeData Clear;
    VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains;
    VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo;
    VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove;
    VirtualInvokeData System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TKey_TValue___GetEnumerator;
    VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
    VirtualInvokeData System_Collections_IDictionary_get_Item;
    VirtualInvokeData System_Collections_IDictionary_set_Item;
    VirtualInvokeData System_Collections_IDictionary_get_Keys;
    VirtualInvokeData System_Collections_IDictionary_get_Values;
    VirtualInvokeData System_Collections_IDictionary_Contains;
    VirtualInvokeData System_Collections_IDictionary_Add;
    VirtualInvokeData Clear_1;
    VirtualInvokeData System_Collections_IDictionary_get_IsReadOnly;
    VirtualInvokeData System_Collections_IDictionary_get_IsFixedSize;
    VirtualInvokeData System_Collections_IDictionary_GetEnumerator;
    VirtualInvokeData System_Collections_IDictionary_Remove;
    VirtualInvokeData System_Collections_ICollection_CopyTo;
    VirtualInvokeData get_Count_1;
    VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
    VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
    VirtualInvokeData ContainsKey_1;
    VirtualInvokeData TryGetValue_1;
    VirtualInvokeData get_Item_1;
    VirtualInvokeData System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys;
    VirtualInvokeData System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values;
    VirtualInvokeData get_Count_2;
    VirtualInvokeData GetObjectData;
    VirtualInvokeData OnDeserialization;
    VirtualInvokeData GetObjectData_1;
    VirtualInvokeData OnDeserialization_1;
};

struct Dictionary_2_System_Reflection_FieldInfo_System_Linq_Expressions_Interpreter_Instruction___StaticFields {
};

struct Dictionary_2_System_Reflection_FieldInfo_System_Linq_Expressions_Interpreter_Instruction___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_System_Reflection_FieldInfo_System_Linq_Expressions_Interpreter_Instruction___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_System_Reflection_FieldInfo_System_Linq_Expressions_Interpreter_Instruction___VTable vtable;
};

struct InstructionList__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct InstructionList__StaticFields {
    struct Instruction *s_null;
    struct Instruction *s_true;
    struct Instruction *s_false;
    struct Instruction__Array *s_Ints;
    struct Instruction__Array *s_loadObjectCached;
    struct Instruction__Array *s_loadLocal;
    struct Instruction__Array *s_loadLocalBoxed;
    struct Instruction__Array *s_loadLocalFromClosure;
    struct Instruction__Array *s_loadLocalFromClosureBoxed;
    struct Instruction__Array *s_assignLocal;
    struct Instruction__Array *s_storeLocal;
    struct Instruction__Array *s_assignLocalBoxed;
    struct Instruction__Array *s_storeLocalBoxed;
    struct Instruction__Array *s_assignLocalToClosure;
    struct Dictionary_2_System_Reflection_FieldInfo_System_Linq_Expressions_Interpreter_Instruction_ *s_loadFields;
    struct RuntimeLabel__Array *s_emptyRuntimeLabels;
};

struct InstructionList__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct InstructionList__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct InstructionList__VTable vtable;
};

struct CallInstruction {
    struct CallInstruction__Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) MethodInfoCallInstruction__Fields {
    struct MethodInfo_1 *_target;
    int32_t _argumentCount;
};

struct MethodInfoCallInstruction {
    struct MethodInfoCallInstruction__Class *klass;
    MonitorData *monitor;
    struct MethodInfoCallInstruction__Fields fields;
};

struct MethodInfoCallInstruction__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_ConsumedStack;
    VirtualInvokeData get_ProducedStack;
    VirtualInvokeData get_ConsumedContinuations;
    VirtualInvokeData get_ProducedContinuations;
    VirtualInvokeData Run;
    VirtualInvokeData get_InstructionName;
    VirtualInvokeData ToDebugString;
    VirtualInvokeData get_ArgumentCount;
};

struct MethodInfoCallInstruction__StaticFields {
};

struct MethodInfoCallInstruction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MethodInfoCallInstruction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MethodInfoCallInstruction__VTable vtable;
};

struct CallInstruction__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_ConsumedStack;
    VirtualInvokeData get_ProducedStack;
    VirtualInvokeData get_ConsumedContinuations;
    VirtualInvokeData get_ProducedContinuations;
    VirtualInvokeData __unknown;
    VirtualInvokeData get_InstructionName;
    VirtualInvokeData ToDebugString;
    VirtualInvokeData __unknown_1;
};

struct CallInstruction__StaticFields {
};

struct CallInstruction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CallInstruction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CallInstruction__VTable vtable;
};

struct __declspec(align(8)) LightLambda__Fields {
    struct IStrongBox__Array *_closure;
    struct Interpreter *_interpreter;
    struct LightDelegateCreator *_delegateCreator;
};

struct LightLambda {
    struct LightLambda__Class *klass;
    MonitorData *monitor;
    struct LightLambda__Fields fields;
};

struct __declspec(align(8)) CacheDict_2_System_Type_System_Func_2___Fields {
    int32_t _mask;
    struct CacheDict_2_TKey_TValue_Entry_System_Type_System_Func_2___Array *_entries;
};

struct CacheDict_2_System_Type_System_Func_2_ {
    struct CacheDict_2_System_Type_System_Func_2___Class *klass;
    MonitorData *monitor;
    struct CacheDict_2_System_Type_System_Func_2___Fields fields;
};

struct __declspec(align(8)) CacheDict_2_TKey_TValue_Entry_System_Type_System_Func_2___Fields {
    int32_t _hash;
    struct Type *_key;
    struct Func_2_System_Linq_Expressions_Interpreter_LightLambda_Delegate_ *_value;
};

struct CacheDict_2_TKey_TValue_Entry_System_Type_System_Func_2_ {
    struct CacheDict_2_TKey_TValue_Entry_System_Type_System_Func_2___Class *klass;
    MonitorData *monitor;
    struct CacheDict_2_TKey_TValue_Entry_System_Type_System_Func_2___Fields fields;
};

struct Func_2_System_Linq_Expressions_Interpreter_LightLambda_Delegate___Fields {
    struct MulticastDelegate__Fields _;
};

struct Func_2_System_Linq_Expressions_Interpreter_LightLambda_Delegate_ {
    struct Func_2_System_Linq_Expressions_Interpreter_LightLambda_Delegate___Class *klass;
    MonitorData *monitor;
    struct Func_2_System_Linq_Expressions_Interpreter_LightLambda_Delegate___Fields fields;
};

struct CacheDict_2_TKey_TValue_Entry_System_Type_System_Func_2___Array {
    struct CacheDict_2_TKey_TValue_Entry_System_Type_System_Func_2___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct CacheDict_2_TKey_TValue_Entry_System_Type_System_Func_2_ *vector[32];
};

}
