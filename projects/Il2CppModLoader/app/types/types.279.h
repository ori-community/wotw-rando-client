namespace app {
struct IEnumerator_1_DynamicInstantiationDescriptor_ {
    struct IEnumerator_1_DynamicInstantiationDescriptor___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) DynamicInstantiationScanner__Fields {
    bool m_findGameObjectsWithoutAttribute;
    struct Dictionary_2_System_ValueTuple_2_DynamicInstantiationScanner_Visitor_ *m_visitors;
    struct Dictionary_2_System_Type_DynamicInstantiationScanner_EvaluationFn_1_ *m_evaluateObjFns;
};

struct DynamicInstantiationScanner {
    struct DynamicInstantiationScanner__Class *klass;
    MonitorData *monitor;
    struct DynamicInstantiationScanner__Fields fields;
};

struct DynamicInstantiationScanner_EvaluationFn_1_UnityEngine_Object___Fields {
    struct MulticastDelegate__Fields _;
};

struct DynamicInstantiationScanner_EvaluationFn_1_UnityEngine_Object_ {
    struct DynamicInstantiationScanner_EvaluationFn_1_UnityEngine_Object___Class *klass;
    MonitorData *monitor;
    struct DynamicInstantiationScanner_EvaluationFn_1_UnityEngine_Object___Fields fields;
};

struct __declspec(align(8)) DynamicInstantiationScanner_EvaluationCtx__Fields {
    struct MonoBehaviour *RootComponent;
    struct List_1_DynamicInstantiationDescriptor_ *Descriptors;
    struct Action_2_UnityEngine_GameObject_System_Reflection_FieldInfo_ *OnGameObjectFound;
    struct List_1_DynamicInstantiationDescriptor_ *DescriptorsTemp;
    struct Stack_1_System_Single_ *PrewarmPriorities;
    struct Dictionary_2_UnityEngine_ScriptableObject_System_Int32_ *EvaluatedScriptableObjects;
    int32_t EvaluationDepth;
    int32_t EvaluationCount;
    bool CycleReferenceDetected;
    bool DepthExceeded;
    bool CountExceeded;
};

struct DynamicInstantiationScanner_EvaluationCtx {
    struct DynamicInstantiationScanner_EvaluationCtx__Class *klass;
    MonitorData *monitor;
    struct DynamicInstantiationScanner_EvaluationCtx__Fields fields;
};

struct Action_2_UnityEngine_GameObject_System_Reflection_FieldInfo___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_2_UnityEngine_GameObject_System_Reflection_FieldInfo_ {
    struct Action_2_UnityEngine_GameObject_System_Reflection_FieldInfo___Class *klass;
    MonitorData *monitor;
    struct Action_2_UnityEngine_GameObject_System_Reflection_FieldInfo___Fields fields;
};

struct __declspec(align(8)) Stack_1_System_Single___Fields {
    struct Single__Array *_array;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct Stack_1_System_Single_ {
    struct Stack_1_System_Single___Class *klass;
    MonitorData *monitor;
    struct Stack_1_System_Single___Fields fields;
};

struct IEnumerator_1_System_Single_ {
    struct IEnumerator_1_System_Single___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_UnityEngine_ScriptableObject_System_Int32___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_ScriptableObject_System_Int32___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_UnityEngine_ScriptableObject_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_ScriptableObject_System_Int32_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_ScriptableObject_System_Int32_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_UnityEngine_ScriptableObject_System_Int32_ {
    struct Dictionary_2_UnityEngine_ScriptableObject_System_Int32___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_UnityEngine_ScriptableObject_System_Int32___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_UnityEngine_ScriptableObject_System_Int32_ {
    int32_t hashCode;
    int32_t next;
    struct ScriptableObject *key;
    int32_t value;
};

struct Dictionary_2_TKey_TValue_Entry_UnityEngine_ScriptableObject_System_Int32___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_ScriptableObject_System_Int32___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_ScriptableObject_System_Int32_ fields;
};

struct Dictionary_2_TKey_TValue_Entry_UnityEngine_ScriptableObject_System_Int32___Array {
    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_ScriptableObject_System_Int32___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_ScriptableObject_System_Int32_ vector[32];
};

struct IEqualityComparer_1_UnityEngine_ScriptableObject_ {
    struct IEqualityComparer_1_UnityEngine_ScriptableObject___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_ScriptableObject_System_Int32___Fields {
    struct Dictionary_2_UnityEngine_ScriptableObject_System_Int32_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_ScriptableObject_System_Int32_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_ScriptableObject_System_Int32___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_ScriptableObject_System_Int32___Fields fields;
};

struct IEnumerator_1_UnityEngine_ScriptableObject_ {
    struct IEnumerator_1_UnityEngine_ScriptableObject___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_ScriptableObject_System_Int32___Fields {
    struct Dictionary_2_UnityEngine_ScriptableObject_System_Int32_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_ScriptableObject_System_Int32_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_ScriptableObject_System_Int32___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_ScriptableObject_System_Int32___Fields fields;
};

struct ICollection_1_UnityEngine_ScriptableObject_ {
    struct ICollection_1_UnityEngine_ScriptableObject___Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_UnityEngine_ScriptableObject_System_Int32_ {
    struct ScriptableObject *key;
    int32_t value;
};

struct KeyValuePair_2_UnityEngine_ScriptableObject_System_Int32___Boxed {
    struct KeyValuePair_2_UnityEngine_ScriptableObject_System_Int32___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_UnityEngine_ScriptableObject_System_Int32_ fields;
};

struct KeyValuePair_2_UnityEngine_ScriptableObject_System_Int32___Array {
    struct KeyValuePair_2_UnityEngine_ScriptableObject_System_Int32___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_UnityEngine_ScriptableObject_System_Int32_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_UnityEngine_ScriptableObject_System_Int32_ {
    struct IEnumerator_1_KeyValuePair_2_UnityEngine_ScriptableObject_System_Int32___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_UnityEngine_ScriptableObject_ {
    struct IEnumerable_1_UnityEngine_ScriptableObject___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_System_ValueTuple_2_DynamicInstantiationScanner_Visitor___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_System_ValueTuple_2_DynamicInstantiationScanner_Visitor___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_System_ValueTuple_2_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_ValueTuple_2_DynamicInstantiationScanner_Visitor_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_ValueTuple_2_DynamicInstantiationScanner_Visitor_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_System_ValueTuple_2_DynamicInstantiationScanner_Visitor_ {
    struct Dictionary_2_System_ValueTuple_2_DynamicInstantiationScanner_Visitor___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_System_ValueTuple_2_DynamicInstantiationScanner_Visitor___Fields fields;
};

struct ValueTuple_2_Type_System_Reflection_FieldInfo_ {
    struct Type *Item1;
    struct FieldInfo_1 *Item2;
};

struct ValueTuple_2_Type_System_Reflection_FieldInfo___Boxed {
    struct ValueTuple_2_Type_System_Reflection_FieldInfo___Class *klass;
    MonitorData *monitor;
    struct ValueTuple_2_Type_System_Reflection_FieldInfo_ fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_ValueTuple_2_DynamicInstantiationScanner_Visitor_ {
    int32_t hashCode;
    int32_t next;
    struct ValueTuple_2_Type_System_Reflection_FieldInfo_ key;
    struct DynamicInstantiationScanner_Visitor *value;
};

struct Dictionary_2_TKey_TValue_Entry_System_ValueTuple_2_DynamicInstantiationScanner_Visitor___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_System_ValueTuple_2_DynamicInstantiationScanner_Visitor___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_System_ValueTuple_2_DynamicInstantiationScanner_Visitor_ fields;
};

struct __declspec(align(8)) DynamicInstantiationScanner_Visitor__Fields {
    struct Type *Type;
    struct ParameterExpression *CurrentValue;
};

struct DynamicInstantiationScanner_Visitor {
    struct DynamicInstantiationScanner_Visitor__Class *klass;
    MonitorData *monitor;
    struct DynamicInstantiationScanner_Visitor__Fields fields;
};

struct DynamicInstantiationScanner_DynamicInstantiationPrewarmPriorityVisitor__Fields {
    struct DynamicInstantiationScanner_Visitor__Fields _;
    struct FieldInfo_1 *m_fieldInfo;
    struct DynamicInstantiationPrewarmPriorityAttribute *m_attribute;
    struct DynamicInstantiationScanner_Visitor *m_underlying;
};

struct DynamicInstantiationScanner_DynamicInstantiationPrewarmPriorityVisitor {
    struct DynamicInstantiationScanner_DynamicInstantiationPrewarmPriorityVisitor__Class *klass;
    MonitorData *monitor;
    struct DynamicInstantiationScanner_DynamicInstantiationPrewarmPriorityVisitor__Fields fields;
};

struct __declspec(align(8)) DynamicInstantiationScanner_VisitorCtx__Fields {
    struct DynamicInstantiationScanner *Scanner;
    struct ParameterExpression *EvaluationCtxExpr;
    struct ParameterExpression *DeclaringInstance;
    struct HashSet_1_System_Type_ *TypesVisited;
    struct List_1_System_Linq_Expressions_ParameterExpression_ *ArrayIndexExpression;
};

struct DynamicInstantiationScanner_VisitorCtx {
    struct DynamicInstantiationScanner_VisitorCtx__Class *klass;
    MonitorData *monitor;
    struct DynamicInstantiationScanner_VisitorCtx__Fields fields;
};

struct __declspec(align(8)) HashSet_1_System_Type___Fields {
    struct Int32__Array *_buckets;
    struct HashSet_1_T_Slot_System_Type___Array *_slots;
    int32_t _count;
    int32_t _lastIndex;
    int32_t _freeList;
    struct IEqualityComparer_1_System_Type_ *_comparer;
    int32_t _version;
    struct SerializationInfo *_siInfo;
};

struct HashSet_1_System_Type_ {
    struct HashSet_1_System_Type___Class *klass;
    MonitorData *monitor;
    struct HashSet_1_System_Type___Fields fields;
};

struct HashSet_1_T_Slot_System_Type_ {
    int32_t hashCode;
    int32_t next;
    struct Type *value;
};

struct HashSet_1_T_Slot_System_Type___Boxed {
    struct HashSet_1_T_Slot_System_Type___Class *klass;
    MonitorData *monitor;
    struct HashSet_1_T_Slot_System_Type_ fields;
};

struct HashSet_1_T_Slot_System_Type___Array {
    struct HashSet_1_T_Slot_System_Type___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct HashSet_1_T_Slot_System_Type_ vector[32];
};

struct __declspec(align(8)) List_1_System_Linq_Expressions_ParameterExpression___Fields {
    struct ParameterExpression__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_System_Linq_Expressions_ParameterExpression_ {
    struct List_1_System_Linq_Expressions_ParameterExpression___Class *klass;
    MonitorData *monitor;
    struct List_1_System_Linq_Expressions_ParameterExpression___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_ValueTuple_2_DynamicInstantiationScanner_Visitor___Array {
    struct Dictionary_2_TKey_TValue_Entry_System_ValueTuple_2_DynamicInstantiationScanner_Visitor___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_System_ValueTuple_2_DynamicInstantiationScanner_Visitor_ vector[32];
};

struct IEqualityComparer_1_System_ValueTuple_2_ {
    struct IEqualityComparer_1_System_ValueTuple_2___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_ValueTuple_2_DynamicInstantiationScanner_Visitor___Fields {
    struct Dictionary_2_System_ValueTuple_2_DynamicInstantiationScanner_Visitor_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_ValueTuple_2_DynamicInstantiationScanner_Visitor_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_System_ValueTuple_2_DynamicInstantiationScanner_Visitor___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_ValueTuple_2_DynamicInstantiationScanner_Visitor___Fields fields;
};

struct ValueTuple_2_Type_System_Reflection_FieldInfo___Array {
    struct ValueTuple_2_Type_System_Reflection_FieldInfo___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct ValueTuple_2_Type_System_Reflection_FieldInfo_ vector[32];
};

struct IEnumerator_1_System_ValueTuple_2_ {
    struct IEnumerator_1_System_ValueTuple_2___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_ValueTuple_2_DynamicInstantiationScanner_Visitor___Fields {
    struct Dictionary_2_System_ValueTuple_2_DynamicInstantiationScanner_Visitor_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_ValueTuple_2_DynamicInstantiationScanner_Visitor_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_System_ValueTuple_2_DynamicInstantiationScanner_Visitor___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_ValueTuple_2_DynamicInstantiationScanner_Visitor___Fields fields;
};

struct DynamicInstantiationScanner_Visitor__Array {
    struct DynamicInstantiationScanner_Visitor__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct DynamicInstantiationScanner_Visitor *vector[32];
};

struct IEnumerator_1_DynamicInstantiationScanner_Visitor_ {
    struct IEnumerator_1_DynamicInstantiationScanner_Visitor___Class *klass;
    MonitorData *monitor;
};

struct ICollection_1_System_ValueTuple_2_ {
    struct ICollection_1_System_ValueTuple_2___Class *klass;
    MonitorData *monitor;
};

struct ICollection_1_DynamicInstantiationScanner_Visitor_ {
    struct ICollection_1_DynamicInstantiationScanner_Visitor___Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_System_ValueTuple_2_DynamicInstantiationScanner_Visitor_ {
    struct ValueTuple_2_Type_System_Reflection_FieldInfo_ key;
    struct DynamicInstantiationScanner_Visitor *value;
};

struct KeyValuePair_2_System_ValueTuple_2_DynamicInstantiationScanner_Visitor___Boxed {
    struct KeyValuePair_2_System_ValueTuple_2_DynamicInstantiationScanner_Visitor___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_System_ValueTuple_2_DynamicInstantiationScanner_Visitor_ fields;
};

struct KeyValuePair_2_System_ValueTuple_2_DynamicInstantiationScanner_Visitor___Array {
    struct KeyValuePair_2_System_ValueTuple_2_DynamicInstantiationScanner_Visitor___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_System_ValueTuple_2_DynamicInstantiationScanner_Visitor_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_System_ValueTuple_2_DynamicInstantiationScanner_Visitor_ {
    struct IEnumerator_1_KeyValuePair_2_System_ValueTuple_2_DynamicInstantiationScanner_Visitor___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_System_ValueTuple_2_ {
    struct IEnumerable_1_System_ValueTuple_2___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_DynamicInstantiationScanner_Visitor_ {
    struct IEnumerable_1_DynamicInstantiationScanner_Visitor___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_System_Type_DynamicInstantiationScanner_EvaluationFn_1___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_System_Type_DynamicInstantiationScanner_EvaluationFn_1___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_System_Type_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_DynamicInstantiationScanner_EvaluationFn_1_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_DynamicInstantiationScanner_EvaluationFn_1_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_System_Type_DynamicInstantiationScanner_EvaluationFn_1_ {
    struct Dictionary_2_System_Type_DynamicInstantiationScanner_EvaluationFn_1___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_System_Type_DynamicInstantiationScanner_EvaluationFn_1___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_Type_DynamicInstantiationScanner_EvaluationFn_1_ {
    int32_t hashCode;
    int32_t next;
    struct Type *key;
    struct DynamicInstantiationScanner_EvaluationFn_1_UnityEngine_Object_ *value;
};

struct Dictionary_2_TKey_TValue_Entry_System_Type_DynamicInstantiationScanner_EvaluationFn_1___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_System_Type_DynamicInstantiationScanner_EvaluationFn_1___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_System_Type_DynamicInstantiationScanner_EvaluationFn_1_ fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_Type_DynamicInstantiationScanner_EvaluationFn_1___Array {
    struct Dictionary_2_TKey_TValue_Entry_System_Type_DynamicInstantiationScanner_EvaluationFn_1___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_System_Type_DynamicInstantiationScanner_EvaluationFn_1_ vector[32];
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Type_DynamicInstantiationScanner_EvaluationFn_1___Fields {
    struct Dictionary_2_System_Type_DynamicInstantiationScanner_EvaluationFn_1_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_DynamicInstantiationScanner_EvaluationFn_1_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_DynamicInstantiationScanner_EvaluationFn_1___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_DynamicInstantiationScanner_EvaluationFn_1___Fields fields;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Type_DynamicInstantiationScanner_EvaluationFn_1___Fields {
    struct Dictionary_2_System_Type_DynamicInstantiationScanner_EvaluationFn_1_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_DynamicInstantiationScanner_EvaluationFn_1_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_DynamicInstantiationScanner_EvaluationFn_1___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_DynamicInstantiationScanner_EvaluationFn_1___Fields fields;
};

struct DynamicInstantiationScanner_EvaluationFn_1_UnityEngine_Object___Array {
    struct DynamicInstantiationScanner_EvaluationFn_1_UnityEngine_Object___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct DynamicInstantiationScanner_EvaluationFn_1_UnityEngine_Object_ *vector[32];
};

struct IEnumerator_1_DynamicInstantiationScanner_EvaluationFn_1_ {
    struct IEnumerator_1_DynamicInstantiationScanner_EvaluationFn_1___Class *klass;
    MonitorData *monitor;
};

struct ICollection_1_DynamicInstantiationScanner_EvaluationFn_1_ {
    struct ICollection_1_DynamicInstantiationScanner_EvaluationFn_1___Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_System_Type_DynamicInstantiationScanner_EvaluationFn_1_ {
    struct Type *key;
    struct DynamicInstantiationScanner_EvaluationFn_1_UnityEngine_Object_ *value;
};

struct KeyValuePair_2_System_Type_DynamicInstantiationScanner_EvaluationFn_1___Boxed {
    struct KeyValuePair_2_System_Type_DynamicInstantiationScanner_EvaluationFn_1___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_System_Type_DynamicInstantiationScanner_EvaluationFn_1_ fields;
};

struct KeyValuePair_2_System_Type_DynamicInstantiationScanner_EvaluationFn_1___Array {
    struct KeyValuePair_2_System_Type_DynamicInstantiationScanner_EvaluationFn_1___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_System_Type_DynamicInstantiationScanner_EvaluationFn_1_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_System_Type_DynamicInstantiationScanner_EvaluationFn_1_ {
    struct IEnumerator_1_KeyValuePair_2_System_Type_DynamicInstantiationScanner_EvaluationFn_1___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_DynamicInstantiationScanner_EvaluationFn_1_ {
    struct IEnumerable_1_DynamicInstantiationScanner_EvaluationFn_1___Class *klass;
    MonitorData *monitor;
};

struct DynamicInstantiationDescriptor_CountGetter__VTable {
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

struct DynamicInstantiationDescriptor_CountGetter__StaticFields {
};

struct DynamicInstantiationDescriptor_CountGetter__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DynamicInstantiationDescriptor_CountGetter__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DynamicInstantiationDescriptor_CountGetter__VTable vtable;
};

struct DynamicInstantiationDescriptor_ReflectionInfo__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct DynamicInstantiationDescriptor_ReflectionInfo__StaticFields {
};

struct DynamicInstantiationDescriptor_ReflectionInfo__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DynamicInstantiationDescriptor_ReflectionInfo__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DynamicInstantiationDescriptor_ReflectionInfo__VTable vtable;
};

struct DynamicInstantiationDescriptor_ReflectionInfo__Array__VTable {
};

struct DynamicInstantiationDescriptor_ReflectionInfo__Array__StaticFields {
};

struct DynamicInstantiationDescriptor_ReflectionInfo__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DynamicInstantiationDescriptor_ReflectionInfo__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DynamicInstantiationDescriptor_ReflectionInfo__Array__VTable vtable;
};

struct IEnumerator_1_DynamicInstantiationDescriptor_ReflectionInfo___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_DynamicInstantiationDescriptor_ReflectionInfo___StaticFields {
};

struct IEnumerator_1_DynamicInstantiationDescriptor_ReflectionInfo___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_DynamicInstantiationDescriptor_ReflectionInfo___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_DynamicInstantiationDescriptor_ReflectionInfo___VTable vtable;
};

struct List_1_DynamicInstantiationDescriptor_ReflectionInfo___VTable {
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

struct List_1_DynamicInstantiationDescriptor_ReflectionInfo___StaticFields {
    struct DynamicInstantiationDescriptor_ReflectionInfo__Array *_emptyArray;
};

struct List_1_DynamicInstantiationDescriptor_ReflectionInfo___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_DynamicInstantiationDescriptor_ReflectionInfo___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_DynamicInstantiationDescriptor_ReflectionInfo___VTable vtable;
};

struct Dictionary_2_TKey_TValue_Entry_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Dictionary_2_TKey_TValue_Entry_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___VTable vtable;
};

struct Dictionary_2_TKey_TValue_Entry_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___Array__VTable {
};

struct Dictionary_2_TKey_TValue_Entry_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___Array__StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___Array__VTable vtable;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___VTable {
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

struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___StaticFields {
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___VTable vtable;
};

struct List_1_DynamicInstantiationDescriptor_ReflectionInfo___Array__VTable {
};

struct List_1_DynamicInstantiationDescriptor_ReflectionInfo___Array__StaticFields {
};

struct List_1_DynamicInstantiationDescriptor_ReflectionInfo___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_DynamicInstantiationDescriptor_ReflectionInfo___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_DynamicInstantiationDescriptor_ReflectionInfo___Array__VTable vtable;
};

struct IEnumerator_1_List_1_DynamicInstantiationDescriptor_ReflectionInfo___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_List_1_DynamicInstantiationDescriptor_ReflectionInfo___StaticFields {
};

struct IEnumerator_1_List_1_DynamicInstantiationDescriptor_ReflectionInfo___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_List_1_DynamicInstantiationDescriptor_ReflectionInfo___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_List_1_DynamicInstantiationDescriptor_ReflectionInfo___VTable vtable;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___VTable {
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

struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___StaticFields {
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___VTable vtable;
};

struct ICollection_1_List_1_DynamicInstantiationDescriptor_ReflectionInfo___VTable {
    VirtualInvokeData get_Count;
    VirtualInvokeData get_IsReadOnly;
    VirtualInvokeData Add;
    VirtualInvokeData Clear;
    VirtualInvokeData Contains;
    VirtualInvokeData CopyTo;
    VirtualInvokeData Remove;
};

struct ICollection_1_List_1_DynamicInstantiationDescriptor_ReflectionInfo___StaticFields {
};

struct ICollection_1_List_1_DynamicInstantiationDescriptor_ReflectionInfo___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ICollection_1_List_1_DynamicInstantiationDescriptor_ReflectionInfo___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ICollection_1_List_1_DynamicInstantiationDescriptor_ReflectionInfo___VTable vtable;
};

struct List_1_DynamicInstantiationDescriptor_ReflectionInfo__1__VTable {
};

struct List_1_DynamicInstantiationDescriptor_ReflectionInfo__1__StaticFields {
};

struct List_1_DynamicInstantiationDescriptor_ReflectionInfo__1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_DynamicInstantiationDescriptor_ReflectionInfo__1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_DynamicInstantiationDescriptor_ReflectionInfo__1__VTable vtable;
};

struct KeyValuePair_2_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct KeyValuePair_2_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___StaticFields {
};

struct KeyValuePair_2_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyValuePair_2_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyValuePair_2_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___VTable vtable;
};

struct KeyValuePair_2_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___Array__VTable {
};

struct KeyValuePair_2_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___Array__StaticFields {
};

struct KeyValuePair_2_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyValuePair_2_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyValuePair_2_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___Array__VTable vtable;
};

struct IEnumerator_1_KeyValuePair_2_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_KeyValuePair_2_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___StaticFields {
};

struct IEnumerator_1_KeyValuePair_2_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_KeyValuePair_2_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_KeyValuePair_2_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___VTable vtable;
};

struct IEnumerable_1_List_1_DynamicInstantiationDescriptor_ReflectionInfo___VTable {
    VirtualInvokeData GetEnumerator;
};

struct IEnumerable_1_List_1_DynamicInstantiationDescriptor_ReflectionInfo___StaticFields {
};

struct IEnumerable_1_List_1_DynamicInstantiationDescriptor_ReflectionInfo___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerable_1_List_1_DynamicInstantiationDescriptor_ReflectionInfo___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerable_1_List_1_DynamicInstantiationDescriptor_ReflectionInfo___VTable vtable;
};

struct Dictionary_2_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___VTable {
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

struct Dictionary_2_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___StaticFields {
};

struct Dictionary_2_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___VTable vtable;
};

struct DynamicInstantiationDescriptor__Array__VTable {
};

struct DynamicInstantiationDescriptor__Array__StaticFields {
};

struct DynamicInstantiationDescriptor__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DynamicInstantiationDescriptor__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DynamicInstantiationDescriptor__Array__VTable vtable;
};

struct IEnumerator_1_DynamicInstantiationDescriptor___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_DynamicInstantiationDescriptor___StaticFields {
};

struct IEnumerator_1_DynamicInstantiationDescriptor___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_DynamicInstantiationDescriptor___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_DynamicInstantiationDescriptor___VTable vtable;
};

struct List_1_DynamicInstantiationDescriptor___VTable {
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

}
