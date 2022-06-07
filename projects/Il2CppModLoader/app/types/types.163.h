namespace app {
struct ExpressionType__Enum__Boxed {
    struct ExpressionType__Enum__Class *klass;
    MonitorData *monitor;
    ExpressionType__Enum value;
    
};

struct ExpressionVisitor {
    struct ExpressionVisitor__Class *klass;
    MonitorData *monitor;
};

struct BlockExpression {
    struct BlockExpression__Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) ReadOnlyCollection_1_System_Linq_Expressions_Expression___Fields {
    struct IList_1_System_Linq_Expressions_Expression_ *list;
    struct Object *_syncRoot;
};

struct ReadOnlyCollection_1_System_Linq_Expressions_Expression_ {
    struct ReadOnlyCollection_1_System_Linq_Expressions_Expression___Class *klass;
    MonitorData *monitor;
    struct ReadOnlyCollection_1_System_Linq_Expressions_Expression___Fields fields;
};

struct IList_1_System_Linq_Expressions_Expression_ {
    struct IList_1_System_Linq_Expressions_Expression___Class *klass;
    MonitorData *monitor;
};

struct Expression__Array {
    struct Expression__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Expression *vector[32];
};

struct IEnumerator_1_System_Linq_Expressions_Expression_ {
    struct IEnumerator_1_System_Linq_Expressions_Expression___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression___Fields {
    struct IList_1_System_Linq_Expressions_ParameterExpression_ *list;
    struct Object *_syncRoot;
};

struct ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_ {
    struct ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression___Class *klass;
    MonitorData *monitor;
    struct ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression___Fields fields;
};

struct IList_1_System_Linq_Expressions_ParameterExpression_ {
    struct IList_1_System_Linq_Expressions_ParameterExpression___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) ParameterExpression__Fields {
    struct String *_Name_k__BackingField;
};

struct ParameterExpression {
    struct ParameterExpression__Class *klass;
    MonitorData *monitor;
    struct ParameterExpression__Fields fields;
};

struct ParameterExpression__Array {
    struct ParameterExpression__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct ParameterExpression *vector[32];
};

struct IEnumerator_1_System_Linq_Expressions_ParameterExpression_ {
    struct IEnumerator_1_System_Linq_Expressions_ParameterExpression___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) ConditionalExpression__Fields {
    struct Expression *_Test_k__BackingField;
    struct Expression *_IfTrue_k__BackingField;
};

struct ConditionalExpression {
    struct ConditionalExpression__Class *klass;
    MonitorData *monitor;
    struct ConditionalExpression__Fields fields;
};

struct __declspec(align(8)) ConstantExpression__Fields {
    struct Object *_Value_k__BackingField;
};

struct ConstantExpression {
    struct ConstantExpression__Class *klass;
    MonitorData *monitor;
    struct ConstantExpression__Fields fields;
};

struct __declspec(align(8)) DebugInfoExpression__Fields {
    struct SymbolDocumentInfo *_Document_k__BackingField;
};

struct DebugInfoExpression {
    struct DebugInfoExpression__Class *klass;
    MonitorData *monitor;
    struct DebugInfoExpression__Fields fields;
};

struct __declspec(align(8)) SymbolDocumentInfo__Fields {
    struct String *_FileName_k__BackingField;
};

struct SymbolDocumentInfo {
    struct SymbolDocumentInfo__Class *klass;
    MonitorData *monitor;
    struct SymbolDocumentInfo__Fields fields;
};

struct __declspec(align(8)) DefaultExpression__Fields {
    struct Type *_Type_k__BackingField;
};

struct DefaultExpression {
    struct DefaultExpression__Class *klass;
    MonitorData *monitor;
    struct DefaultExpression__Fields fields;
};

enum class GotoExpressionKind__Enum : int32_t {
    Goto = 0x00000000,
    Return = 0x00000001,
    Break = 0x00000002,
    Continue = 0x00000003,
};

struct GotoExpressionKind__Enum__Boxed {
    struct GotoExpressionKind__Enum__Class *klass;
    MonitorData *monitor;
    GotoExpressionKind__Enum value;
    
};

struct __declspec(align(8)) GotoExpression__Fields {
    struct Type *_Type_k__BackingField;
    struct Expression *_Value_k__BackingField;
    struct LabelTarget *_Target_k__BackingField;
    GotoExpressionKind__Enum _Kind_k__BackingField;
    
};

struct GotoExpression {
    struct GotoExpression__Class *klass;
    MonitorData *monitor;
    struct GotoExpression__Fields fields;
};

struct __declspec(align(8)) LabelTarget__Fields {
    struct String *_Name_k__BackingField;
    struct Type *_Type_k__BackingField;
};

struct LabelTarget {
    struct LabelTarget__Class *klass;
    MonitorData *monitor;
    struct LabelTarget__Fields fields;
};

struct __declspec(align(8)) InvocationExpression__Fields {
    struct Type *_Type_k__BackingField;
    struct Expression *_Expression_k__BackingField;
};

struct InvocationExpression {
    struct InvocationExpression__Class *klass;
    MonitorData *monitor;
    struct InvocationExpression__Fields fields;
};

struct __declspec(align(8)) LabelExpression__Fields {
    struct LabelTarget *_Target_k__BackingField;
    struct Expression *_DefaultValue_k__BackingField;
};

struct LabelExpression {
    struct LabelExpression__Class *klass;
    MonitorData *monitor;
    struct LabelExpression__Fields fields;
};

struct __declspec(align(8)) LoopExpression__Fields {
    struct Expression *_Body_k__BackingField;
    struct LabelTarget *_BreakLabel_k__BackingField;
    struct LabelTarget *_ContinueLabel_k__BackingField;
};

struct LoopExpression {
    struct LoopExpression__Class *klass;
    MonitorData *monitor;
    struct LoopExpression__Fields fields;
};

struct __declspec(align(8)) MemberExpression__Fields {
    struct Expression *_Expression_k__BackingField;
};

struct MemberExpression {
    struct MemberExpression__Class *klass;
    MonitorData *monitor;
    struct MemberExpression__Fields fields;
};

struct __declspec(align(8)) IndexExpression__Fields {
    struct IReadOnlyList_1_System_Linq_Expressions_Expression_ *_arguments;
    struct Expression *_Object_k__BackingField;
    struct PropertyInfo_1 *_Indexer_k__BackingField;
};

struct IndexExpression {
    struct IndexExpression__Class *klass;
    MonitorData *monitor;
    struct IndexExpression__Fields fields;
};

struct IReadOnlyList_1_System_Linq_Expressions_Expression_ {
    struct IReadOnlyList_1_System_Linq_Expressions_Expression___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) MethodCallExpression__Fields {
    struct MethodInfo_1 *_Method_k__BackingField;
};

struct MethodCallExpression {
    struct MethodCallExpression__Class *klass;
    MonitorData *monitor;
    struct MethodCallExpression__Fields fields;
};

struct __declspec(align(8)) NewArrayExpression__Fields {
    struct Type *_Type_k__BackingField;
    struct ReadOnlyCollection_1_System_Linq_Expressions_Expression_ *_Expressions_k__BackingField;
};

struct NewArrayExpression {
    struct NewArrayExpression__Class *klass;
    MonitorData *monitor;
    struct NewArrayExpression__Fields fields;
};

struct __declspec(align(8)) NewExpression__Fields {
    struct IReadOnlyList_1_System_Linq_Expressions_Expression_ *_arguments;
    struct ConstructorInfo *_Constructor_k__BackingField;
    struct ReadOnlyCollection_1_System_Reflection_MemberInfo_ *_Members_k__BackingField;
};

struct NewExpression {
    struct NewExpression__Class *klass;
    MonitorData *monitor;
    struct NewExpression__Fields fields;
};

struct __declspec(align(8)) ReadOnlyCollection_1_System_Reflection_MemberInfo___Fields {
    struct IList_1_System_Reflection_MemberInfo_ *list;
    struct Object *_syncRoot;
};

struct ReadOnlyCollection_1_System_Reflection_MemberInfo_ {
    struct ReadOnlyCollection_1_System_Reflection_MemberInfo___Class *klass;
    MonitorData *monitor;
    struct ReadOnlyCollection_1_System_Reflection_MemberInfo___Fields fields;
};

struct IList_1_System_Reflection_MemberInfo_ {
    struct IList_1_System_Reflection_MemberInfo___Class *klass;
    MonitorData *monitor;
};

struct IEnumerator_1_System_Reflection_MemberInfo_ {
    struct IEnumerator_1_System_Reflection_MemberInfo___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) RuntimeVariablesExpression__Fields {
    struct ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_ *_Variables_k__BackingField;
};

struct RuntimeVariablesExpression {
    struct RuntimeVariablesExpression__Class *klass;
    MonitorData *monitor;
    struct RuntimeVariablesExpression__Fields fields;
};

struct __declspec(align(8)) SwitchCase__Fields {
    struct ReadOnlyCollection_1_System_Linq_Expressions_Expression_ *_TestValues_k__BackingField;
    struct Expression *_Body_k__BackingField;
};

struct SwitchCase {
    struct SwitchCase__Class *klass;
    MonitorData *monitor;
    struct SwitchCase__Fields fields;
};

struct __declspec(align(8)) SwitchExpression__Fields {
    struct Type *_Type_k__BackingField;
    struct Expression *_SwitchValue_k__BackingField;
    struct ReadOnlyCollection_1_System_Linq_Expressions_SwitchCase_ *_Cases_k__BackingField;
    struct Expression *_DefaultBody_k__BackingField;
    struct MethodInfo_1 *_Comparison_k__BackingField;
};

struct SwitchExpression {
    struct SwitchExpression__Class *klass;
    MonitorData *monitor;
    struct SwitchExpression__Fields fields;
};

struct __declspec(align(8)) ReadOnlyCollection_1_System_Linq_Expressions_SwitchCase___Fields {
    struct IList_1_System_Linq_Expressions_SwitchCase_ *list;
    struct Object *_syncRoot;
};

struct ReadOnlyCollection_1_System_Linq_Expressions_SwitchCase_ {
    struct ReadOnlyCollection_1_System_Linq_Expressions_SwitchCase___Class *klass;
    MonitorData *monitor;
    struct ReadOnlyCollection_1_System_Linq_Expressions_SwitchCase___Fields fields;
};

struct IList_1_System_Linq_Expressions_SwitchCase_ {
    struct IList_1_System_Linq_Expressions_SwitchCase___Class *klass;
    MonitorData *monitor;
};

struct SwitchCase__Array {
    struct SwitchCase__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct SwitchCase *vector[32];
};

struct IEnumerator_1_System_Linq_Expressions_SwitchCase_ {
    struct IEnumerator_1_System_Linq_Expressions_SwitchCase___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) CatchBlock__Fields {
    struct ParameterExpression *_Variable_k__BackingField;
    struct Type *_Test_k__BackingField;
    struct Expression *_Body_k__BackingField;
    struct Expression *_Filter_k__BackingField;
};

struct CatchBlock {
    struct CatchBlock__Class *klass;
    MonitorData *monitor;
    struct CatchBlock__Fields fields;
};

struct __declspec(align(8)) TryExpression__Fields {
    struct Type *_Type_k__BackingField;
    struct Expression *_Body_k__BackingField;
    struct ReadOnlyCollection_1_System_Linq_Expressions_CatchBlock_ *_Handlers_k__BackingField;
    struct Expression *_Finally_k__BackingField;
    struct Expression *_Fault_k__BackingField;
};

struct TryExpression {
    struct TryExpression__Class *klass;
    MonitorData *monitor;
    struct TryExpression__Fields fields;
};

struct __declspec(align(8)) ReadOnlyCollection_1_System_Linq_Expressions_CatchBlock___Fields {
    struct IList_1_System_Linq_Expressions_CatchBlock_ *list;
    struct Object *_syncRoot;
};

struct ReadOnlyCollection_1_System_Linq_Expressions_CatchBlock_ {
    struct ReadOnlyCollection_1_System_Linq_Expressions_CatchBlock___Class *klass;
    MonitorData *monitor;
    struct ReadOnlyCollection_1_System_Linq_Expressions_CatchBlock___Fields fields;
};

struct IList_1_System_Linq_Expressions_CatchBlock_ {
    struct IList_1_System_Linq_Expressions_CatchBlock___Class *klass;
    MonitorData *monitor;
};

struct CatchBlock__Array {
    struct CatchBlock__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct CatchBlock *vector[32];
};

struct IEnumerator_1_System_Linq_Expressions_CatchBlock_ {
    struct IEnumerator_1_System_Linq_Expressions_CatchBlock___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) TypeBinaryExpression__Fields {
    ExpressionType__Enum _NodeType_k__BackingField;
    
    struct Expression *_Expression_k__BackingField;
    struct Type *_TypeOperand_k__BackingField;
};

struct TypeBinaryExpression {
    struct TypeBinaryExpression__Class *klass;
    MonitorData *monitor;
    struct TypeBinaryExpression__Fields fields;
};

struct __declspec(align(8)) UnaryExpression__Fields {
    struct Type *_Type_k__BackingField;
    ExpressionType__Enum _NodeType_k__BackingField;
    
    struct Expression *_Operand_k__BackingField;
    struct MethodInfo_1 *_Method_k__BackingField;
};

struct UnaryExpression {
    struct UnaryExpression__Class *klass;
    MonitorData *monitor;
    struct UnaryExpression__Fields fields;
};

struct __declspec(align(8)) MemberInitExpression__Fields {
    struct NewExpression *_NewExpression_k__BackingField;
    struct ReadOnlyCollection_1_System_Linq_Expressions_MemberBinding_ *_Bindings_k__BackingField;
};

struct MemberInitExpression {
    struct MemberInitExpression__Class *klass;
    MonitorData *monitor;
    struct MemberInitExpression__Fields fields;
};

struct __declspec(align(8)) ReadOnlyCollection_1_System_Linq_Expressions_MemberBinding___Fields {
    struct IList_1_System_Linq_Expressions_MemberBinding_ *list;
    struct Object *_syncRoot;
};

struct ReadOnlyCollection_1_System_Linq_Expressions_MemberBinding_ {
    struct ReadOnlyCollection_1_System_Linq_Expressions_MemberBinding___Class *klass;
    MonitorData *monitor;
    struct ReadOnlyCollection_1_System_Linq_Expressions_MemberBinding___Fields fields;
};

struct IList_1_System_Linq_Expressions_MemberBinding_ {
    struct IList_1_System_Linq_Expressions_MemberBinding___Class *klass;
    MonitorData *monitor;
};

enum class MemberBindingType__Enum : int32_t {
    Assignment = 0x00000000,
    MemberBinding = 0x00000001,
    ListBinding = 0x00000002,
};

struct MemberBindingType__Enum__Boxed {
    struct MemberBindingType__Enum__Class *klass;
    MonitorData *monitor;
    MemberBindingType__Enum value;
    
};

struct __declspec(align(8)) MemberBinding__Fields {
    MemberBindingType__Enum _BindingType_k__BackingField;
    
    struct MemberInfo_1 *_Member_k__BackingField;
};

struct MemberBinding {
    struct MemberBinding__Class *klass;
    MonitorData *monitor;
    struct MemberBinding__Fields fields;
};

struct MemberBinding__Array {
    struct MemberBinding__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct MemberBinding *vector[32];
};

struct IEnumerator_1_System_Linq_Expressions_MemberBinding_ {
    struct IEnumerator_1_System_Linq_Expressions_MemberBinding___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) ListInitExpression__Fields {
    struct NewExpression *_NewExpression_k__BackingField;
    struct ReadOnlyCollection_1_System_Linq_Expressions_ElementInit_ *_Initializers_k__BackingField;
};

struct ListInitExpression {
    struct ListInitExpression__Class *klass;
    MonitorData *monitor;
    struct ListInitExpression__Fields fields;
};

struct __declspec(align(8)) ReadOnlyCollection_1_System_Linq_Expressions_ElementInit___Fields {
    struct IList_1_System_Linq_Expressions_ElementInit_ *list;
    struct Object *_syncRoot;
};

struct ReadOnlyCollection_1_System_Linq_Expressions_ElementInit_ {
    struct ReadOnlyCollection_1_System_Linq_Expressions_ElementInit___Class *klass;
    MonitorData *monitor;
    struct ReadOnlyCollection_1_System_Linq_Expressions_ElementInit___Fields fields;
};

struct IList_1_System_Linq_Expressions_ElementInit_ {
    struct IList_1_System_Linq_Expressions_ElementInit___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) ElementInit__Fields {
    struct MethodInfo_1 *_AddMethod_k__BackingField;
    struct ReadOnlyCollection_1_System_Linq_Expressions_Expression_ *_Arguments_k__BackingField;
};

struct ElementInit {
    struct ElementInit__Class *klass;
    MonitorData *monitor;
    struct ElementInit__Fields fields;
};

struct ElementInit__Array {
    struct ElementInit__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct ElementInit *vector[32];
};

struct IEnumerator_1_System_Linq_Expressions_ElementInit_ {
    struct IEnumerator_1_System_Linq_Expressions_ElementInit___Class *klass;
    MonitorData *monitor;
};

struct MemberAssignment__Fields {
    struct MemberBinding__Fields _;
    struct Expression *_expression;
};

struct MemberAssignment {
    struct MemberAssignment__Class *klass;
    MonitorData *monitor;
    struct MemberAssignment__Fields fields;
};

struct MemberMemberBinding__Fields {
    struct MemberBinding__Fields _;
    struct ReadOnlyCollection_1_System_Linq_Expressions_MemberBinding_ *_Bindings_k__BackingField;
};

struct MemberMemberBinding {
    struct MemberMemberBinding__Class *klass;
    MonitorData *monitor;
    struct MemberMemberBinding__Fields fields;
};

struct MemberListBinding__Fields {
    struct MemberBinding__Fields _;
    struct ReadOnlyCollection_1_System_Linq_Expressions_ElementInit_ *_Initializers_k__BackingField;
};

struct MemberListBinding {
    struct MemberListBinding__Class *klass;
    MonitorData *monitor;
    struct MemberListBinding__Fields fields;
};

struct CacheDict_2_TKey_TValue_Entry_System_Type_System_Func_5___Array {
    struct CacheDict_2_TKey_TValue_Entry_System_Type_System_Func_5___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct CacheDict_2_TKey_TValue_Entry_System_Type_System_Func_5_ *vector[32];
};

struct __declspec(align(8)) ConditionalWeakTable_2_System_Linq_Expressions_Expression_System_Linq_Expressions_Expression_ExtensionInfo___Fields {
    struct Ephemeron__Array *data;
    struct Object *_lock;
    int32_t size;
};

struct ConditionalWeakTable_2_System_Linq_Expressions_Expression_System_Linq_Expressions_Expression_ExtensionInfo_ {
    struct ConditionalWeakTable_2_System_Linq_Expressions_Expression_System_Linq_Expressions_Expression_ExtensionInfo___Class *klass;
    MonitorData *monitor;
    struct ConditionalWeakTable_2_System_Linq_Expressions_Expression_System_Linq_Expressions_Expression_ExtensionInfo___Fields fields;
};

struct CacheDict_2_TKey_TValue_Entry_System_Type_System_Reflection_MethodInfo___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct CacheDict_2_TKey_TValue_Entry_System_Type_System_Reflection_MethodInfo___StaticFields {
};

struct CacheDict_2_TKey_TValue_Entry_System_Type_System_Reflection_MethodInfo___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CacheDict_2_TKey_TValue_Entry_System_Type_System_Reflection_MethodInfo___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CacheDict_2_TKey_TValue_Entry_System_Type_System_Reflection_MethodInfo___VTable vtable;
};

struct CacheDict_2_TKey_TValue_Entry_System_Type_System_Reflection_MethodInfo___Array__VTable {
};

struct CacheDict_2_TKey_TValue_Entry_System_Type_System_Reflection_MethodInfo___Array__StaticFields {
};

struct CacheDict_2_TKey_TValue_Entry_System_Type_System_Reflection_MethodInfo___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CacheDict_2_TKey_TValue_Entry_System_Type_System_Reflection_MethodInfo___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CacheDict_2_TKey_TValue_Entry_System_Type_System_Reflection_MethodInfo___Array__VTable vtable;
};

struct CacheDict_2_System_Type_System_Reflection_MethodInfo___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct CacheDict_2_System_Type_System_Reflection_MethodInfo___StaticFields {
};

struct CacheDict_2_System_Type_System_Reflection_MethodInfo___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CacheDict_2_System_Type_System_Reflection_MethodInfo___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CacheDict_2_System_Type_System_Reflection_MethodInfo___VTable vtable;
};

struct ExpressionType__Enum__VTable {
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

struct ExpressionType__Enum__StaticFields {
};

struct ExpressionType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ExpressionType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ExpressionType__Enum__VTable vtable;
};

struct IList_1_System_Linq_Expressions_Expression___VTable {
    VirtualInvokeData get_Item;
    VirtualInvokeData set_Item;
    VirtualInvokeData IndexOf;
    VirtualInvokeData Insert;
    VirtualInvokeData RemoveAt;
};

struct IList_1_System_Linq_Expressions_Expression___StaticFields {
};

struct IList_1_System_Linq_Expressions_Expression___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IList_1_System_Linq_Expressions_Expression___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IList_1_System_Linq_Expressions_Expression___VTable vtable;
};

struct Expression__Array__VTable {
};

struct Expression__Array__StaticFields {
};

struct Expression__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Expression__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Expression__Array__VTable vtable;
};

struct IEnumerator_1_System_Linq_Expressions_Expression___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_System_Linq_Expressions_Expression___StaticFields {
};

struct IEnumerator_1_System_Linq_Expressions_Expression___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_System_Linq_Expressions_Expression___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_System_Linq_Expressions_Expression___VTable vtable;
};

struct ReadOnlyCollection_1_System_Linq_Expressions_Expression___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData System_Collections_Generic_IList_T__get_Item;
    VirtualInvokeData System_Collections_Generic_IList_T__set_Item;
    VirtualInvokeData IndexOf;
    VirtualInvokeData System_Collections_Generic_IList_T__Insert;
    VirtualInvokeData System_Collections_Generic_IList_T__RemoveAt;
    VirtualInvokeData get_Count;
    VirtualInvokeData System_Collections_Generic_ICollection_T__get_IsReadOnly;
    VirtualInvokeData System_Collections_Generic_ICollection_T__Add;
    VirtualInvokeData System_Collections_Generic_ICollection_T__Clear;
    VirtualInvokeData Contains;
    VirtualInvokeData CopyTo;
    VirtualInvokeData System_Collections_Generic_ICollection_T__Remove;
    VirtualInvokeData GetEnumerator;
    VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
    VirtualInvokeData System_Collections_IList_get_Item;
    VirtualInvokeData System_Collections_IList_set_Item;
    VirtualInvokeData System_Collections_IList_Add;
    VirtualInvokeData System_Collections_IList_Contains;
    VirtualInvokeData System_Collections_IList_Clear;
    VirtualInvokeData System_Collections_IList_get_IsReadOnly;
    VirtualInvokeData System_Collections_IList_get_IsFixedSize;
    VirtualInvokeData System_Collections_IList_IndexOf;
    VirtualInvokeData System_Collections_IList_Insert;
    VirtualInvokeData System_Collections_IList_Remove;
    VirtualInvokeData System_Collections_IList_RemoveAt;
    VirtualInvokeData System_Collections_ICollection_CopyTo;
    VirtualInvokeData get_Count_1;
    VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
    VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
    VirtualInvokeData get_Item;
    VirtualInvokeData get_Count_2;
};

struct ReadOnlyCollection_1_System_Linq_Expressions_Expression___StaticFields {
};

struct ReadOnlyCollection_1_System_Linq_Expressions_Expression___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ReadOnlyCollection_1_System_Linq_Expressions_Expression___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ReadOnlyCollection_1_System_Linq_Expressions_Expression___VTable vtable;
};

struct IList_1_System_Linq_Expressions_ParameterExpression___VTable {
    VirtualInvokeData get_Item;
    VirtualInvokeData set_Item;
    VirtualInvokeData IndexOf;
    VirtualInvokeData Insert;
    VirtualInvokeData RemoveAt;
};

struct IList_1_System_Linq_Expressions_ParameterExpression___StaticFields {
};

struct IList_1_System_Linq_Expressions_ParameterExpression___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IList_1_System_Linq_Expressions_ParameterExpression___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IList_1_System_Linq_Expressions_ParameterExpression___VTable vtable;
};

struct ParameterExpression__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_NodeType;
    VirtualInvokeData get_Type;
    VirtualInvokeData get_CanReduce;
    VirtualInvokeData Reduce;
    VirtualInvokeData VisitChildren;
    VirtualInvokeData Accept;
    VirtualInvokeData GetIsByRef;
};

struct ParameterExpression__StaticFields {
};

struct ParameterExpression__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ParameterExpression__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ParameterExpression__VTable vtable;
};

struct ParameterExpression__Array__VTable {
};

struct ParameterExpression__Array__StaticFields {
};

struct ParameterExpression__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ParameterExpression__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ParameterExpression__Array__VTable vtable;
};

struct IEnumerator_1_System_Linq_Expressions_ParameterExpression___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_System_Linq_Expressions_ParameterExpression___StaticFields {
};

struct IEnumerator_1_System_Linq_Expressions_ParameterExpression___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_System_Linq_Expressions_ParameterExpression___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_System_Linq_Expressions_ParameterExpression___VTable vtable;
};

struct ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData System_Collections_Generic_IList_T__get_Item;
    VirtualInvokeData System_Collections_Generic_IList_T__set_Item;
    VirtualInvokeData IndexOf;
    VirtualInvokeData System_Collections_Generic_IList_T__Insert;
    VirtualInvokeData System_Collections_Generic_IList_T__RemoveAt;
    VirtualInvokeData get_Count;
    VirtualInvokeData System_Collections_Generic_ICollection_T__get_IsReadOnly;
    VirtualInvokeData System_Collections_Generic_ICollection_T__Add;
    VirtualInvokeData System_Collections_Generic_ICollection_T__Clear;
    VirtualInvokeData Contains;
    VirtualInvokeData CopyTo;
    VirtualInvokeData System_Collections_Generic_ICollection_T__Remove;
    VirtualInvokeData GetEnumerator;
    VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
    VirtualInvokeData System_Collections_IList_get_Item;
    VirtualInvokeData System_Collections_IList_set_Item;
    VirtualInvokeData System_Collections_IList_Add;
    VirtualInvokeData System_Collections_IList_Contains;
    VirtualInvokeData System_Collections_IList_Clear;
    VirtualInvokeData System_Collections_IList_get_IsReadOnly;
    VirtualInvokeData System_Collections_IList_get_IsFixedSize;
    VirtualInvokeData System_Collections_IList_IndexOf;
    VirtualInvokeData System_Collections_IList_Insert;
    VirtualInvokeData System_Collections_IList_Remove;
    VirtualInvokeData System_Collections_IList_RemoveAt;
    VirtualInvokeData System_Collections_ICollection_CopyTo;
    VirtualInvokeData get_Count_1;
    VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
    VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
    VirtualInvokeData get_Item;
    VirtualInvokeData get_Count_2;
};

struct ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression___StaticFields {
};

struct ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression___VTable vtable;
};

struct BlockExpression__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_NodeType;
    VirtualInvokeData get_Type;
    VirtualInvokeData get_CanReduce;
    VirtualInvokeData Reduce;
    VirtualInvokeData VisitChildren;
    VirtualInvokeData Accept;
    VirtualInvokeData GetExpression;
    VirtualInvokeData get_ExpressionCount;
    VirtualInvokeData GetOrMakeExpressions;
    VirtualInvokeData GetOrMakeVariables;
    VirtualInvokeData Rewrite;
};

struct BlockExpression__StaticFields {
};

struct BlockExpression__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BlockExpression__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BlockExpression__VTable vtable;
};

struct ConditionalExpression__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_NodeType;
    VirtualInvokeData get_Type;
    VirtualInvokeData get_CanReduce;
    VirtualInvokeData Reduce;
    VirtualInvokeData VisitChildren;
    VirtualInvokeData Accept;
    VirtualInvokeData GetFalse;
};

struct ConditionalExpression__StaticFields {
};

struct ConditionalExpression__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ConditionalExpression__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ConditionalExpression__VTable vtable;
};

struct ConstantExpression__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_NodeType;
    VirtualInvokeData get_Type;
    VirtualInvokeData get_CanReduce;
    VirtualInvokeData Reduce;
    VirtualInvokeData VisitChildren;
    VirtualInvokeData Accept;
};

struct ConstantExpression__StaticFields {
};

struct ConstantExpression__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ConstantExpression__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ConstantExpression__VTable vtable;
};

}
