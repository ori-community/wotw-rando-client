namespace app {
enum class PromiseState__Enum : int32_t {
    Pending = 0x00000000,
    Rejected = 0x00000001,
    Resolved = 0x00000002,
};

struct PromiseState__Enum__Boxed {
    struct PromiseState__Enum__Class *klass;
    MonitorData *monitor;
    PromiseState__Enum value;
    
};

struct __declspec(align(8)) Promise_1_System_Collections_Generic_List_1___Fields {
    struct Exception *rejectionException;
    struct List_1_ZenFulcrum_EmbeddedBrowser_Cookie_ *resolveValue;
    struct List_1_ZenFulcrum_EmbeddedBrowser_RejectHandler_ *rejectHandlers;
    struct List_1_System_Action_1__2 *resolveCallbacks;
    struct List_1_ZenFulcrum_EmbeddedBrowser_IRejectable_ *resolveRejectables;
    int32_t _Id_k__BackingField;
    struct String *_Name_k__BackingField;
    PromiseState__Enum _CurState_k__BackingField;
    
};

struct Promise_1_System_Collections_Generic_List_1_ {
    struct Promise_1_System_Collections_Generic_List_1___Class *klass;
    MonitorData *monitor;
    struct Promise_1_System_Collections_Generic_List_1___Fields fields;
};

struct __declspec(align(8)) List_1_ZenFulcrum_EmbeddedBrowser_Cookie___Fields {
    struct Cookie_1__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_ZenFulcrum_EmbeddedBrowser_Cookie_ {
    struct List_1_ZenFulcrum_EmbeddedBrowser_Cookie___Class *klass;
    MonitorData *monitor;
    struct List_1_ZenFulcrum_EmbeddedBrowser_Cookie___Fields fields;
};

struct __declspec(align(8)) Cookie_1__Fields {
    struct CookieManager *cookies;
    struct BrowserNative_NativeCookie *original;
    struct String *name;
    struct String *value;
    struct String *domain;
    struct String *path;
    struct DateTime creation;
    struct DateTime lastAccess;
    struct Nullable_1_DateTime_ expires;
    bool secure;
    bool httpOnly;
};

struct Cookie_1 {
    struct Cookie_1__Class *klass;
    MonitorData *monitor;
    struct Cookie_1__Fields fields;
};

struct Cookie_1__Array {
    struct Cookie_1__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Cookie_1 *vector[32];
};

struct IEnumerator_1_ZenFulcrum_EmbeddedBrowser_Cookie_ {
    struct IEnumerator_1_ZenFulcrum_EmbeddedBrowser_Cookie___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_ZenFulcrum_EmbeddedBrowser_RejectHandler___Fields {
    struct RejectHandler__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_ZenFulcrum_EmbeddedBrowser_RejectHandler_ {
    struct List_1_ZenFulcrum_EmbeddedBrowser_RejectHandler___Class *klass;
    MonitorData *monitor;
    struct List_1_ZenFulcrum_EmbeddedBrowser_RejectHandler___Fields fields;
};

struct RejectHandler {
    struct Action_1_Exception_ *callback;
    struct IRejectable *rejectable;
};

struct RejectHandler__Boxed {
    struct RejectHandler__Class *klass;
    MonitorData *monitor;
    struct RejectHandler fields;
};

struct Action_1_Exception___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_1_Exception_ {
    struct Action_1_Exception___Class *klass;
    MonitorData *monitor;
    struct Action_1_Exception___Fields fields;
};

struct IRejectable {
    struct IRejectable__Class *klass;
    MonitorData *monitor;
};

struct RejectHandler__Array {
    struct RejectHandler__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct RejectHandler vector[32];
};

struct IEnumerator_1_ZenFulcrum_EmbeddedBrowser_RejectHandler_ {
    struct IEnumerator_1_ZenFulcrum_EmbeddedBrowser_RejectHandler___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_System_Action_1__2__Fields {
    struct Action_1_System_Collections_Generic_List_1__4__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_System_Action_1__2 {
    struct List_1_System_Action_1__2__Class *klass;
    MonitorData *monitor;
    struct List_1_System_Action_1__2__Fields fields;
};

struct Action_1_System_Collections_Generic_List_1__4__Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_1_System_Collections_Generic_List_1__4 {
    struct Action_1_System_Collections_Generic_List_1__4__Class *klass;
    MonitorData *monitor;
    struct Action_1_System_Collections_Generic_List_1__4__Fields fields;
};

struct Action_1_System_Collections_Generic_List_1__4__Array {
    struct Action_1_System_Collections_Generic_List_1__4__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Action_1_System_Collections_Generic_List_1__4 *vector[32];
};

struct IEnumerator_1_System_Action_1__5 {
    struct IEnumerator_1_System_Action_1__5__Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_ZenFulcrum_EmbeddedBrowser_IRejectable___Fields {
    struct IRejectable__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_ZenFulcrum_EmbeddedBrowser_IRejectable_ {
    struct List_1_ZenFulcrum_EmbeddedBrowser_IRejectable___Class *klass;
    MonitorData *monitor;
    struct List_1_ZenFulcrum_EmbeddedBrowser_IRejectable___Fields fields;
};

struct IRejectable__Array {
    struct IRejectable__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct IRejectable *vector[32];
};

struct IEnumerator_1_ZenFulcrum_EmbeddedBrowser_IRejectable_ {
    struct IEnumerator_1_ZenFulcrum_EmbeddedBrowser_IRejectable___Class *klass;
    MonitorData *monitor;
};

struct IPromise_1_System_Collections_Generic_List_1_ {
    struct IPromise_1_System_Collections_Generic_List_1___Class *klass;
    MonitorData *monitor;
};

struct IPromise {
    struct IPromise__Class *klass;
    MonitorData *monitor;
};

struct Func_2_System_Collections_Generic_List_1_ZenFulcrum_EmbeddedBrowser_IPromise___Fields {
    struct MulticastDelegate__Fields _;
};

struct Func_2_System_Collections_Generic_List_1_ZenFulcrum_EmbeddedBrowser_IPromise_ {
    struct Func_2_System_Collections_Generic_List_1_ZenFulcrum_EmbeddedBrowser_IPromise___Class *klass;
    MonitorData *monitor;
    struct Func_2_System_Collections_Generic_List_1_ZenFulcrum_EmbeddedBrowser_IPromise___Fields fields;
};

struct Func_2_System_Collections_Generic_List_1_System_Collections_Generic_IEnumerable_1___Fields {
    struct MulticastDelegate__Fields _;
};

struct Func_2_System_Collections_Generic_List_1_System_Collections_Generic_IEnumerable_1_ {
    struct Func_2_System_Collections_Generic_List_1_System_Collections_Generic_IEnumerable_1___Class *klass;
    MonitorData *monitor;
    struct Func_2_System_Collections_Generic_List_1_System_Collections_Generic_IEnumerable_1___Fields fields;
};

struct IEnumerable_1_ZenFulcrum_EmbeddedBrowser_IPromise_ {
    struct IEnumerable_1_ZenFulcrum_EmbeddedBrowser_IPromise___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_System_Int32_List_1_System_Object___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_List_1_System_Object___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_System_Int32_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_List_1_System_Object_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_List_1_System_Object_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_System_Int32_List_1_System_Object_ {
    struct Dictionary_2_System_Int32_List_1_System_Object___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_System_Int32_List_1_System_Object___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_List_1_System_Object_ {
    int32_t hashCode;
    int32_t next;
    int32_t key;
    struct List_1_System_Object_ *value;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_List_1_System_Object___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_List_1_System_Object___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_List_1_System_Object_ fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_List_1_System_Object___Array {
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_List_1_System_Object___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_List_1_System_Object_ vector[32];
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int32_List_1_System_Object___Fields {
    struct Dictionary_2_System_Int32_List_1_System_Object_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_List_1_System_Object_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_List_1_System_Object___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_List_1_System_Object___Fields fields;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int32_List_1_System_Object___Fields {
    struct Dictionary_2_System_Int32_List_1_System_Object_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_List_1_System_Object_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_List_1_System_Object___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_List_1_System_Object___Fields fields;
};

struct List_1_System_Object___Array {
    struct List_1_System_Object___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct List_1_System_Object_ *vector[32];
};

struct IEnumerator_1_List_1_System_Object_ {
    struct IEnumerator_1_List_1_System_Object___Class *klass;
    MonitorData *monitor;
};

struct ICollection_1_List_1_System_Object_ {
    struct ICollection_1_List_1_System_Object___Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_System_Int32_List_1_System_Object_ {
    int32_t key;
    struct List_1_System_Object_ *value;
};

struct KeyValuePair_2_System_Int32_List_1_System_Object___Boxed {
    struct KeyValuePair_2_System_Int32_List_1_System_Object___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_System_Int32_List_1_System_Object_ fields;
};

struct KeyValuePair_2_System_Int32_List_1_System_Object___Array {
    struct KeyValuePair_2_System_Int32_List_1_System_Object___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_System_Int32_List_1_System_Object_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_System_Int32_List_1_System_Object_ {
    struct IEnumerator_1_KeyValuePair_2_System_Int32_List_1_System_Object___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_List_1_System_Object_ {
    struct IEnumerable_1_List_1_System_Object___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_JSResultFunc___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_JSResultFunc___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_System_Int32_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_JSResultFunc_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_JSResultFunc_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_JSResultFunc_ {
    struct Dictionary_2_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_JSResultFunc___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_JSResultFunc___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_JSResultFunc_ {
    int32_t hashCode;
    int32_t next;
    int32_t key;
    struct Browser_JSResultFunc *value;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_JSResultFunc___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_JSResultFunc___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_JSResultFunc_ fields;
};

struct Browser_JSResultFunc__Fields {
    struct MulticastDelegate__Fields _;
};

struct Browser_JSResultFunc {
    struct Browser_JSResultFunc__Class *klass;
    MonitorData *monitor;
    struct Browser_JSResultFunc__Fields fields;
};

enum class JSONNode_NodeType__Enum : int32_t {
    Invalid = 0x00000000,
    String = 0x00000001,
    Number = 0x00000002,
    Object = 0x00000003,
    Array = 0x00000004,
    Bool = 0x00000005,
    Null = 0x00000006,
};

struct JSONNode_NodeType__Enum__Boxed {
    struct JSONNode_NodeType__Enum__Class *klass;
    MonitorData *monitor;
    JSONNode_NodeType__Enum value;
    
};

struct __declspec(align(8)) JSONNode__Fields {
    JSONNode_NodeType__Enum _type;
    
    struct String *_stringValue;
    double _numberValue;
    struct Dictionary_2_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode_ *_objectValue;
    struct List_1_ZenFulcrum_EmbeddedBrowser_JSONNode_ *_arrayValue;
    bool _boolValue;
};

struct JSONNode {
    struct JSONNode__Class *klass;
    MonitorData *monitor;
    struct JSONNode__Fields fields;
};

struct __declspec(align(8)) Dictionary_2_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_System_String_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode_ {
    struct Dictionary_2_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode_ {
    int32_t hashCode;
    int32_t next;
    struct String *key;
    struct JSONNode *value;
};

struct Dictionary_2_TKey_TValue_Entry_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode_ fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode___Array {
    struct Dictionary_2_TKey_TValue_Entry_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode_ vector[32];
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode___Fields {
    struct Dictionary_2_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode___Fields fields;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode___Fields {
    struct Dictionary_2_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode___Fields fields;
};

struct JSONNode__Array {
    struct JSONNode__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct JSONNode *vector[32];
};

struct IEnumerator_1_ZenFulcrum_EmbeddedBrowser_JSONNode_ {
    struct IEnumerator_1_ZenFulcrum_EmbeddedBrowser_JSONNode___Class *klass;
    MonitorData *monitor;
};

struct ICollection_1_ZenFulcrum_EmbeddedBrowser_JSONNode_ {
    struct ICollection_1_ZenFulcrum_EmbeddedBrowser_JSONNode___Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode_ {
    struct String *key;
    struct JSONNode *value;
};

struct KeyValuePair_2_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode___Boxed {
    struct KeyValuePair_2_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode_ fields;
};

struct KeyValuePair_2_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode___Array {
    struct KeyValuePair_2_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode_ {
    struct IEnumerator_1_KeyValuePair_2_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_ZenFulcrum_EmbeddedBrowser_JSONNode_ {
    struct IEnumerable_1_ZenFulcrum_EmbeddedBrowser_JSONNode___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_ZenFulcrum_EmbeddedBrowser_JSONNode___Fields {
    struct JSONNode__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_ZenFulcrum_EmbeddedBrowser_JSONNode_ {
    struct List_1_ZenFulcrum_EmbeddedBrowser_JSONNode___Class *klass;
    MonitorData *monitor;
    struct List_1_ZenFulcrum_EmbeddedBrowser_JSONNode___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_JSResultFunc___Array {
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_JSResultFunc___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_JSResultFunc_ vector[32];
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_JSResultFunc___Fields {
    struct Dictionary_2_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_JSResultFunc_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_JSResultFunc_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_JSResultFunc___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_JSResultFunc___Fields fields;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_JSResultFunc___Fields {
    struct Dictionary_2_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_JSResultFunc_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_JSResultFunc_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_JSResultFunc___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_JSResultFunc___Fields fields;
};

struct Browser_JSResultFunc__Array {
    struct Browser_JSResultFunc__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Browser_JSResultFunc *vector[32];
};

struct IEnumerator_1_ZenFulcrum_EmbeddedBrowser_Browser_JSResultFunc_ {
    struct IEnumerator_1_ZenFulcrum_EmbeddedBrowser_Browser_JSResultFunc___Class *klass;
    MonitorData *monitor;
};

struct ICollection_1_ZenFulcrum_EmbeddedBrowser_Browser_JSResultFunc_ {
    struct ICollection_1_ZenFulcrum_EmbeddedBrowser_Browser_JSResultFunc___Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_JSResultFunc_ {
    int32_t key;
    struct Browser_JSResultFunc *value;
};

struct KeyValuePair_2_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_JSResultFunc___Boxed {
    struct KeyValuePair_2_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_JSResultFunc___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_JSResultFunc_ fields;
};

struct KeyValuePair_2_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_JSResultFunc___Array {
    struct KeyValuePair_2_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_JSResultFunc___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_JSResultFunc_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_JSResultFunc_ {
    struct IEnumerator_1_KeyValuePair_2_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_JSResultFunc___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_ZenFulcrum_EmbeddedBrowser_Browser_JSResultFunc_ {
    struct IEnumerable_1_ZenFulcrum_EmbeddedBrowser_Browser_JSResultFunc___Class *klass;
    MonitorData *monitor;
};

struct BrowserNative_ReadyFunc__Fields {
    struct MulticastDelegate__Fields _;
};

struct BrowserNative_ReadyFunc {
    struct BrowserNative_ReadyFunc__Class *klass;
    MonitorData *monitor;
    struct BrowserNative_ReadyFunc__Fields fields;
};

struct Action_1_ZenFulcrum_EmbeddedBrowser_JSONNode___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_1_ZenFulcrum_EmbeddedBrowser_JSONNode_ {
    struct Action_1_ZenFulcrum_EmbeddedBrowser_JSONNode___Class *klass;
    MonitorData *monitor;
    struct Action_1_ZenFulcrum_EmbeddedBrowser_JSONNode___Fields fields;
};

struct Action_2_Int32_ZenFulcrum_EmbeddedBrowser_JSONNode___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_2_Int32_ZenFulcrum_EmbeddedBrowser_JSONNode_ {
    struct Action_2_Int32_ZenFulcrum_EmbeddedBrowser_JSONNode___Class *klass;
    MonitorData *monitor;
    struct Action_2_Int32_ZenFulcrum_EmbeddedBrowser_JSONNode___Fields fields;
};

struct Action_3_String_Boolean_String___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_3_String_Boolean_String_ {
    struct Action_3_String_Boolean_String___Class *klass;
    MonitorData *monitor;
    struct Action_3_String_Boolean_String___Fields fields;
};

struct Action_2_Boolean_Boolean___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_2_Boolean_Boolean_ {
    struct Action_2_Boolean_Boolean___Class *klass;
    MonitorData *monitor;
    struct Action_2_Boolean_Boolean___Fields fields;
};

struct __declspec(align(8)) BrowserFocusState__Fields {
    bool hasKeyboardFocus;
    bool hasMouseFocus;
    struct String *focusedTagName;
    bool focusedNodeEditable;
};

struct BrowserFocusState {
    struct BrowserFocusState__Class *klass;
    MonitorData *monitor;
    struct BrowserFocusState__Fields fields;
};

struct Action_1_ZenFulcrum_EmbeddedBrowser_Browser___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_1_ZenFulcrum_EmbeddedBrowser_Browser_ {
    struct Action_1_ZenFulcrum_EmbeddedBrowser_Browser___Class *klass;
    MonitorData *monitor;
    struct Action_1_ZenFulcrum_EmbeddedBrowser_Browser___Fields fields;
};

enum class MouseButton__Enum : int32_t {
    Left = 0x00000001,
    Middle = 0x00000002,
    Right = 0x00000004,
};

struct MouseButton__Enum__Boxed {
    struct MouseButton__Enum__Class *klass;
    MonitorData *monitor;
    MouseButton__Enum value;
    
};

struct __declspec(align(8)) BrowserInput__Fields {
    struct Browser *browser;
    bool kbWasFocused;
    bool mouseWasFocused;
    struct List_1_UnityEngine_Event_ *extraEventsToInject;
    MouseButton__Enum prevButtons;
    
    struct Vector2 prevPos;
    struct BrowserInput_ButtonHistory *leftClickHistory;
    struct Vector2 accumulatedScroll;
    float lastScrollEvent;
};

struct BrowserInput {
    struct BrowserInput__Class *klass;
    MonitorData *monitor;
    struct BrowserInput__Fields fields;
};

struct __declspec(align(8)) HashSet_1_UnityEngine_KeyCode___Fields {
    struct Int32__Array *_buckets;
    struct HashSet_1_T_Slot_UnityEngine_KeyCode___Array *_slots;
    int32_t _count;
    int32_t _lastIndex;
    int32_t _freeList;
    struct IEqualityComparer_1_UnityEngine_KeyCode_ *_comparer;
    int32_t _version;
    struct SerializationInfo *_siInfo;
};

struct HashSet_1_UnityEngine_KeyCode_ {
    struct HashSet_1_UnityEngine_KeyCode___Class *klass;
    MonitorData *monitor;
    struct HashSet_1_UnityEngine_KeyCode___Fields fields;
};

struct HashSet_1_T_Slot_UnityEngine_KeyCode_ {
    int32_t hashCode;
    int32_t next;
    KeyCode__Enum value;
    
};

struct HashSet_1_T_Slot_UnityEngine_KeyCode___Boxed {
    struct HashSet_1_T_Slot_UnityEngine_KeyCode___Class *klass;
    MonitorData *monitor;
    struct HashSet_1_T_Slot_UnityEngine_KeyCode_ fields;
};

struct HashSet_1_T_Slot_UnityEngine_KeyCode___Array {
    struct HashSet_1_T_Slot_UnityEngine_KeyCode___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct HashSet_1_T_Slot_UnityEngine_KeyCode_ vector[32];
};

struct __declspec(align(8)) List_1_UnityEngine_Event___Fields {
    struct Event__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_UnityEngine_Event_ {
    struct List_1_UnityEngine_Event___Class *klass;
    MonitorData *monitor;
    struct List_1_UnityEngine_Event___Fields fields;
};

struct __declspec(align(8)) BrowserInput_ButtonHistory__Fields {
    float lastPressTime;
    int32_t repeatCount;
    struct Vector3 lastPosition;
};

struct BrowserInput_ButtonHistory {
    struct BrowserInput_ButtonHistory__Class *klass;
    MonitorData *monitor;
    struct BrowserInput_ButtonHistory__Fields fields;
};

struct __declspec(align(8)) BrowserNavState__Fields {
    bool canGoForward;
    bool canGoBack;
    bool loading;
    struct String *url;
};

struct BrowserNavState {
    struct BrowserNavState__Class *klass;
    MonitorData *monitor;
    struct BrowserNavState__Fields fields;
};

struct DialogHandler__Fields {
    struct MonoBehaviour__Fields _;
    struct Browser *parentBrowser;
    struct Browser *dialogBrowser;
    struct DialogHandler_DialogCallback *dialogCallback;
    struct DialogHandler_MenuCallback *contextCallback;
};

struct DialogHandler {
    struct DialogHandler__Class *klass;
    MonitorData *monitor;
    struct DialogHandler__Fields fields;
};

struct DialogHandler_DialogCallback__Fields {
    struct MulticastDelegate__Fields _;
};

struct DialogHandler_DialogCallback {
    struct DialogHandler_DialogCallback__Class *klass;
    MonitorData *monitor;
    struct DialogHandler_DialogCallback__Fields fields;
};

struct DialogHandler_MenuCallback__Fields {
    struct MulticastDelegate__Fields _;
};

struct DialogHandler_MenuCallback {
    struct DialogHandler_MenuCallback__Class *klass;
    MonitorData *monitor;
    struct DialogHandler_MenuCallback__Fields fields;
};

struct __declspec(align(8)) Dictionary_2_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_System_Int32_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_ {
    struct Dictionary_2_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_ {
    int32_t hashCode;
    int32_t next;
    int32_t key;
    struct Browser *value;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_ fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser___Array {
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_ vector[32];
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser___Fields {
    struct Dictionary_2_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser___Fields fields;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser___Fields {
    struct Dictionary_2_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser___Fields fields;
};

struct Browser__Array {
    struct Browser__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Browser *vector[32];
};

struct IEnumerator_1_ZenFulcrum_EmbeddedBrowser_Browser_ {
    struct IEnumerator_1_ZenFulcrum_EmbeddedBrowser_Browser___Class *klass;
    MonitorData *monitor;
};

struct ICollection_1_ZenFulcrum_EmbeddedBrowser_Browser_ {
    struct ICollection_1_ZenFulcrum_EmbeddedBrowser_Browser___Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_ {
    int32_t key;
    struct Browser *value;
};

struct KeyValuePair_2_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser___Boxed {
    struct KeyValuePair_2_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_ fields;
};

struct KeyValuePair_2_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser___Array {
    struct KeyValuePair_2_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_ {
    struct IEnumerator_1_KeyValuePair_2_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_ZenFulcrum_EmbeddedBrowser_Browser_ {
    struct IEnumerable_1_ZenFulcrum_EmbeddedBrowser_Browser___Class *klass;
    MonitorData *monitor;
};

struct Action_2_String_String___VTable {
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

struct Action_2_String_String___StaticFields {
};

struct Action_2_String_String___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_2_String_String___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Action_2_String_String___VTable vtable;
};

struct BrowserNative_ContextMenuOrigin__Enum__VTable {
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

struct BrowserNative_ContextMenuOrigin__Enum__StaticFields {
};

struct BrowserNative_ContextMenuOrigin__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BrowserNative_ContextMenuOrigin__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BrowserNative_ContextMenuOrigin__Enum__VTable vtable;
};

struct Browser_NewWindowAction__Enum__VTable {
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

}
