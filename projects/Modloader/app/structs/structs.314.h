namespace app {
    struct ValueType__Enum__VTable {
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

    struct ValueType__Enum__StaticFields {
    };

    struct ValueType__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ValueType__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ValueType__Enum__VTable vtable;
    };

    enum class Tokens__Enum : int32_t {
        None = 0x00000000,
        Name = 0x00000001,
        Numeric = 0x00000002,
        Decimal = 0x00000003,
        Float = 0x00000004,
        BinaryConst = 0x00000005,
        StringConst = 0x00000006,
        Date = 0x00000007,
        ListSeparator = 0x00000008,
        LeftParen = 0x00000009,
        RightParen = 0x0000000a,
        ZeroOp = 0x0000000b,
        UnaryOp = 0x0000000c,
        BinaryOp = 0x0000000d,
        Child = 0x0000000e,
        Parent = 0x0000000f,
        Dot = 0x00000010,
        Unknown = 0x00000011,
        EOS = 0x00000012,
    };

    struct Tokens__Enum__Boxed {
        struct Tokens__Enum__Class* klass;
        MonitorData* monitor;
        Tokens__Enum value;
    };

    struct __declspec(align(8)) ExpressionParser__Fields {
        uint16_t _escape;
        uint16_t _decimalSeparator;
        uint16_t _listSeparator;
        uint16_t _exponentL;
        uint16_t _exponentU;
        struct Char__Array* _text;
        int32_t _pos;
        int32_t _start;
        Tokens__Enum _token;

        int32_t _op;
        struct OperatorInfo__Array* _ops;
        int32_t _topOperator;
        int32_t _topNode;
        struct DataTable* _table;
        struct ExpressionNode__Array* _nodeStack;
        int32_t _prevOperand;
        struct ExpressionNode* _expression;
    };

    struct ExpressionParser {
        struct ExpressionParser__Class* klass;
        MonitorData* monitor;
        struct ExpressionParser__Fields fields;
    };

    struct ExpressionParser_ReservedWords {
        struct String* _word;
        Tokens__Enum _token;

        int32_t _op;
    };

    struct ExpressionParser_ReservedWords__Boxed {
        struct ExpressionParser_ReservedWords__Class* klass;
        MonitorData* monitor;
        struct ExpressionParser_ReservedWords fields;
    };

    struct ExpressionParser_ReservedWords__Array {
        struct ExpressionParser_ReservedWords__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct ExpressionParser_ReservedWords vector[32];
    };

    enum class Nodes__Enum : int32_t {
        Noop = 0x00000000,
        Unop = 0x00000001,
        UnopSpec = 0x00000002,
        Binop = 0x00000003,
        BinopSpec = 0x00000004,
        Zop = 0x00000005,
        Call = 0x00000006,
        Const = 0x00000007,
        Name = 0x00000008,
        Paren = 0x00000009,
        Conv = 0x0000000a,
    };

    struct Nodes__Enum__Boxed {
        struct Nodes__Enum__Class* klass;
        MonitorData* monitor;
        Nodes__Enum value;
    };

    struct __declspec(align(8)) OperatorInfo__Fields {
        Nodes__Enum _type;

        int32_t _op;
        int32_t _priority;
    };

    struct OperatorInfo {
        struct OperatorInfo__Class* klass;
        MonitorData* monitor;
        struct OperatorInfo__Fields fields;
    };

    struct OperatorInfo__Array {
        struct OperatorInfo__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct OperatorInfo* vector[32];
    };

    struct ExpressionNode__Array {
        struct ExpressionNode__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct ExpressionNode* vector[32];
    };

    struct Tokens__Enum__VTable {
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

    struct Tokens__Enum__StaticFields {
    };

    struct Tokens__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Tokens__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Tokens__Enum__VTable vtable;
    };

    struct ExpressionParser_ReservedWords__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ExpressionParser_ReservedWords__StaticFields {
    };

    struct ExpressionParser_ReservedWords__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ExpressionParser_ReservedWords__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ExpressionParser_ReservedWords__VTable vtable;
    };

    struct ExpressionParser_ReservedWords__Array__VTable {
    };

    struct ExpressionParser_ReservedWords__Array__StaticFields {
    };

    struct ExpressionParser_ReservedWords__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ExpressionParser_ReservedWords__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ExpressionParser_ReservedWords__Array__VTable vtable;
    };

    struct Nodes__Enum__VTable {
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

    struct Nodes__Enum__StaticFields {
    };

    struct Nodes__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Nodes__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Nodes__Enum__VTable vtable;
    };

    struct OperatorInfo__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct OperatorInfo__StaticFields {
    };

    struct OperatorInfo__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct OperatorInfo__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct OperatorInfo__VTable vtable;
    };

    struct OperatorInfo__Array__VTable {
    };

    struct OperatorInfo__Array__StaticFields {
    };

    struct OperatorInfo__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct OperatorInfo__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct OperatorInfo__Array__VTable vtable;
    };

    struct ExpressionNode__Array__VTable {
    };

    struct ExpressionNode__Array__StaticFields {
    };

    struct ExpressionNode__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ExpressionNode__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ExpressionNode__Array__VTable vtable;
    };

    struct ExpressionParser__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ExpressionParser__StaticFields {
        struct ExpressionParser_ReservedWords__Array* s_reservedwords;
    };

    struct ExpressionParser__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ExpressionParser__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ExpressionParser__VTable vtable;
    };

    struct InvalidExpressionException__Fields {
        struct DataException__Fields _;
    };

    struct InvalidExpressionException {
        struct InvalidExpressionException__Class* klass;
        MonitorData* monitor;
        struct InvalidExpressionException__Fields fields;
    };

    struct InvalidExpressionException__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData GetObjectData;
        VirtualInvokeData get_Message;
        VirtualInvokeData get_Data;
        VirtualInvokeData get_InnerException;
        VirtualInvokeData get_StackTrace;
        VirtualInvokeData get_Source;
        VirtualInvokeData GetObjectData_1;
        VirtualInvokeData GetType;
    };

    struct InvalidExpressionException__StaticFields {
    };

    struct InvalidExpressionException__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct InvalidExpressionException__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct InvalidExpressionException__VTable vtable;
    };

    struct EvaluateException__Fields {
        struct InvalidExpressionException__Fields _;
    };

    struct EvaluateException {
        struct EvaluateException__Class* klass;
        MonitorData* monitor;
        struct EvaluateException__Fields fields;
    };

    struct EvaluateException__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData GetObjectData;
        VirtualInvokeData get_Message;
        VirtualInvokeData get_Data;
        VirtualInvokeData get_InnerException;
        VirtualInvokeData get_StackTrace;
        VirtualInvokeData get_Source;
        VirtualInvokeData GetObjectData_1;
        VirtualInvokeData GetType;
    };

    struct EvaluateException__StaticFields {
    };

    struct EvaluateException__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EvaluateException__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EvaluateException__VTable vtable;
    };

    struct SyntaxErrorException__Fields {
        struct InvalidExpressionException__Fields _;
    };

    struct SyntaxErrorException {
        struct SyntaxErrorException__Class* klass;
        MonitorData* monitor;
        struct SyntaxErrorException__Fields fields;
    };

    struct SyntaxErrorException__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData GetObjectData;
        VirtualInvokeData get_Message;
        VirtualInvokeData get_Data;
        VirtualInvokeData get_InnerException;
        VirtualInvokeData get_StackTrace;
        VirtualInvokeData get_Source;
        VirtualInvokeData GetObjectData_1;
        VirtualInvokeData GetType;
    };

    struct SyntaxErrorException__StaticFields {
    };

    struct SyntaxErrorException__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SyntaxErrorException__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SyntaxErrorException__VTable vtable;
    };

    struct FunctionNode__Fields {
        struct ExpressionNode__Fields _;
        struct String* _name;
        int32_t _info;
        int32_t _argumentCount;
        struct ExpressionNode__Array* _arguments;
    };

    struct FunctionNode {
        struct FunctionNode__Class* klass;
        MonitorData* monitor;
        struct FunctionNode__Fields fields;
    };

    struct __declspec(align(8)) Function_1__Fields {
        struct String* _name;
        FunctionId__Enum _id;

        struct Type* _result;
        bool _isValidateArguments;
        bool _isVariantArgumentList;
        int32_t _argumentCount;
        struct Type__Array* _parameters;
    };

    struct Function_1 {
        struct Function_1__Class* klass;
        MonitorData* monitor;
        struct Function_1__Fields fields;
    };

    struct Function_1__Array {
        struct Function_1__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Function_1* vector[32];
    };

    struct Function_1__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Function_1__StaticFields {
        struct String__Array* s_functionName;
    };

    struct Function_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Function_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Function_1__VTable vtable;
    };

    struct Function_1__Array__VTable {
    };

    struct Function_1__Array__StaticFields {
    };

    struct Function_1__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Function_1__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Function_1__Array__VTable vtable;
    };

    struct FunctionNode__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_IsSqlColumn;
        VirtualInvokeData Bind;
        VirtualInvokeData Eval;
        VirtualInvokeData Eval_1;
        VirtualInvokeData Eval_2;
        VirtualInvokeData IsConstant;
        VirtualInvokeData IsTableConstant;
        VirtualInvokeData HasLocalAggregate;
        VirtualInvokeData HasRemoteAggregate;
        VirtualInvokeData Optimize;
        VirtualInvokeData DependsOn;
    };

    struct FunctionNode__StaticFields {
        struct Function_1__Array* s_funcs;
    };

    struct FunctionNode__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FunctionNode__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FunctionNode__VTable vtable;
    };

    struct LookupNode__Fields {
        struct ExpressionNode__Fields _;
        struct String* _relationName;
        struct String* _columnName;
        struct DataColumn* _column;
        struct DataRelation* _relation;
    };

    struct LookupNode {
        struct LookupNode__Class* klass;
        MonitorData* monitor;
        struct LookupNode__Fields fields;
    };

    struct LookupNode__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_IsSqlColumn;
        VirtualInvokeData Bind;
        VirtualInvokeData Eval;
        VirtualInvokeData Eval_1;
        VirtualInvokeData Eval_2;
        VirtualInvokeData IsConstant;
        VirtualInvokeData IsTableConstant;
        VirtualInvokeData HasLocalAggregate;
        VirtualInvokeData HasRemoteAggregate;
        VirtualInvokeData Optimize;
        VirtualInvokeData DependsOn;
    };

    struct LookupNode__StaticFields {
    };

    struct LookupNode__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LookupNode__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LookupNode__VTable vtable;
    };

    struct NameNode__Fields {
        struct ExpressionNode__Fields _;
        struct String* _name;
        bool _found;
        struct DataColumn* _column;
    };

    struct NameNode {
        struct NameNode__Class* klass;
        MonitorData* monitor;
        struct NameNode__Fields fields;
    };

    struct NameNode__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_IsSqlColumn;
        VirtualInvokeData Bind;
        VirtualInvokeData Eval;
        VirtualInvokeData Eval_1;
        VirtualInvokeData Eval_2;
        VirtualInvokeData IsConstant;
        VirtualInvokeData IsTableConstant;
        VirtualInvokeData HasLocalAggregate;
        VirtualInvokeData HasRemoteAggregate;
        VirtualInvokeData Optimize;
        VirtualInvokeData DependsOn;
    };

    struct NameNode__StaticFields {
    };

    struct NameNode__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct NameNode__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct NameNode__VTable vtable;
    };

    struct UnaryNode__Fields {
        struct ExpressionNode__Fields _;
        int32_t _op;
        struct ExpressionNode* _right;
    };

    struct UnaryNode {
        struct UnaryNode__Class* klass;
        MonitorData* monitor;
        struct UnaryNode__Fields fields;
    };

    struct UnaryNode__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_IsSqlColumn;
        VirtualInvokeData Bind;
        VirtualInvokeData Eval;
        VirtualInvokeData Eval_1;
        VirtualInvokeData Eval_2;
        VirtualInvokeData IsConstant;
        VirtualInvokeData IsTableConstant;
        VirtualInvokeData HasLocalAggregate;
        VirtualInvokeData HasRemoteAggregate;
        VirtualInvokeData Optimize;
        VirtualInvokeData DependsOn;
    };

    struct UnaryNode__StaticFields {
    };

    struct UnaryNode__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UnaryNode__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UnaryNode__VTable vtable;
    };

    struct ZeroOpNode__Fields {
        struct ExpressionNode__Fields _;
        int32_t _op;
    };

    struct ZeroOpNode {
        struct ZeroOpNode__Class* klass;
        MonitorData* monitor;
        struct ZeroOpNode__Fields fields;
    };

    struct ZeroOpNode__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_IsSqlColumn;
        VirtualInvokeData Bind;
        VirtualInvokeData Eval;
        VirtualInvokeData Eval_1;
        VirtualInvokeData Eval_2;
        VirtualInvokeData IsConstant;
        VirtualInvokeData IsTableConstant;
        VirtualInvokeData HasLocalAggregate;
        VirtualInvokeData HasRemoteAggregate;
        VirtualInvokeData Optimize;
        VirtualInvokeData DependsOn;
    };

    struct ZeroOpNode__StaticFields {
    };

    struct ZeroOpNode__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ZeroOpNode__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ZeroOpNode__VTable vtable;
    };

    struct __declspec(align(8)) Merger__Fields {
        struct DataSet* _dataSet;
        struct DataTable* _dataTable;
        bool _preserveChanges;
        MissingSchemaAction__Enum _missingSchemaAction;

        bool _isStandAlonetable;
        bool _IgnoreNSforTableLookup;
    };

    struct Merger {
        struct Merger__Class* klass;
        MonitorData* monitor;
        struct Merger__Fields fields;
    };

    struct Merger__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Merger__StaticFields {
    };

    struct Merger__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Merger__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Merger__VTable vtable;
    };

    struct PrimaryKeyTypeConverter__Fields {
        struct ReferenceConverter__Fields _;
    };

    struct PrimaryKeyTypeConverter {
        struct PrimaryKeyTypeConverter__Class* klass;
        MonitorData* monitor;
        struct PrimaryKeyTypeConverter__Fields fields;
    };

    struct PrimaryKeyTypeConverter__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CanConvertFrom;
        VirtualInvokeData CanConvertTo;
        VirtualInvokeData ConvertFrom;
        VirtualInvokeData ConvertTo;
        VirtualInvokeData CreateInstance;
        VirtualInvokeData GetCreateInstanceSupported;
        VirtualInvokeData GetProperties;
        VirtualInvokeData GetPropertiesSupported;
        VirtualInvokeData GetStandardValues;
        VirtualInvokeData GetStandardValuesExclusive;
        VirtualInvokeData GetStandardValuesSupported;
        VirtualInvokeData IsValid;
        VirtualInvokeData IsValueAllowed;
    };

    struct PrimaryKeyTypeConverter__StaticFields {
    };

    struct PrimaryKeyTypeConverter__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PrimaryKeyTypeConverter__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PrimaryKeyTypeConverter__VTable vtable;
    };

    struct Range {
        int32_t _min;
        int32_t _max;
        bool _isNotNull;
    };

    struct Range__Boxed {
        struct Range__Class* klass;
        MonitorData* monitor;
        struct Range fields;
    };

    struct Range__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Range__StaticFields {
    };

    struct Range__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Range__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Range__VTable vtable;
    };

    struct Nullable_1_System_Data_DataKey_ {
        struct DataKey value;
        bool has_value;
    };

    struct Nullable_1_System_Data_DataKey___Boxed {
        struct Nullable_1_System_Data_DataKey___Class* klass;
        MonitorData* monitor;
        struct Nullable_1_System_Data_DataKey_ fields;
    };

    struct RelatedView__Fields {
        struct DataView__Fields _;
        struct Nullable_1_System_Data_DataKey_ _parentKey;
        struct DataKey _childKey;
        struct DataRowView* _parentRowView;
        struct Object__Array* _filterValues;
    };

    struct RelatedView {
        struct RelatedView__Class* klass;
        MonitorData* monitor;
        struct RelatedView__Fields fields;
    };

    struct Nullable_1_System_Data_DataKey___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Nullable_1_System_Data_DataKey___StaticFields {
    };

    struct Nullable_1_System_Data_DataKey___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Nullable_1_System_Data_DataKey___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Nullable_1_System_Data_DataKey___VTable vtable;
    };

    struct RelatedView__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Site;
        VirtualInvokeData set_Site;
        VirtualInvokeData add_Disposed;
        VirtualInvokeData remove_Disposed;
        VirtualInvokeData Dispose;
        VirtualInvokeData GetService;
        VirtualInvokeData get_Site_1;
        VirtualInvokeData set_Site_1;
        VirtualInvokeData Dispose_1;
        VirtualInvokeData get_Container;
        VirtualInvokeData GetService_1;
        VirtualInvokeData get_DesignMode;
        VirtualInvokeData System_ComponentModel_IBindingListView_ApplySort;
        VirtualInvokeData System_ComponentModel_IBindingListView_get_Filter;
        VirtualInvokeData System_ComponentModel_IBindingListView_set_Filter;
        VirtualInvokeData System_ComponentModel_IBindingListView_get_SortDescriptions;
        VirtualInvokeData System_ComponentModel_IBindingListView_RemoveFilter;
        VirtualInvokeData System_ComponentModel_IBindingListView_get_SupportsAdvancedSorting;
        VirtualInvokeData System_ComponentModel_IBindingListView_get_SupportsFiltering;
        VirtualInvokeData System_ComponentModel_IBindingList_get_AllowNew;
        VirtualInvokeData System_ComponentModel_IBindingList_AddNew;
        VirtualInvokeData System_ComponentModel_IBindingList_get_AllowEdit;
        VirtualInvokeData System_ComponentModel_IBindingList_get_AllowRemove;
        VirtualInvokeData System_ComponentModel_IBindingList_get_SupportsChangeNotification;
        VirtualInvokeData System_ComponentModel_IBindingList_get_SupportsSearching;
        VirtualInvokeData System_ComponentModel_IBindingList_get_SupportsSorting;
        VirtualInvokeData System_ComponentModel_IBindingList_get_IsSorted;
        VirtualInvokeData System_ComponentModel_IBindingList_get_SortProperty;
        VirtualInvokeData System_ComponentModel_IBindingList_get_SortDirection;
        VirtualInvokeData add_ListChanged;
        VirtualInvokeData remove_ListChanged;
        VirtualInvokeData System_ComponentModel_IBindingList_AddIndex;
        VirtualInvokeData System_ComponentModel_IBindingList_ApplySort;
        VirtualInvokeData System_ComponentModel_IBindingList_Find;
        VirtualInvokeData System_ComponentModel_IBindingList_RemoveIndex;
        VirtualInvokeData System_ComponentModel_IBindingList_RemoveSort;
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
        VirtualInvokeData CopyTo;
        VirtualInvokeData get_Count;
        VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
        VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
        VirtualInvokeData GetEnumerator;
        VirtualInvokeData System_ComponentModel_ITypedList_GetListName;
        VirtualInvokeData System_ComponentModel_ITypedList_GetItemProperties;
        VirtualInvokeData get_IsInitialized;
        VirtualInvokeData add_Initialized;
        VirtualInvokeData remove_Initialized;
        VirtualInvokeData BeginInit;
        VirtualInvokeData EndInit;
        VirtualInvokeData get_RowFilter;
        VirtualInvokeData set_RowFilter;
        VirtualInvokeData AddNew;
        VirtualInvokeData GetFilter;
        VirtualInvokeData IndexListChanged;
        VirtualInvokeData OnListChanged;
        VirtualInvokeData SetIndex;
        VirtualInvokeData UpdateIndex;
        VirtualInvokeData ColumnCollectionChanged;
        VirtualInvokeData Invoke;
    };

    struct RelatedView__StaticFields {
    };

    struct RelatedView__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RelatedView__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RelatedView__VTable vtable;
    };

    struct RelationshipConverter {
        struct RelationshipConverter__Class* klass;
        MonitorData* monitor;
    };

    struct RelationshipConverter__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CanConvertFrom;
        VirtualInvokeData CanConvertTo;
        VirtualInvokeData ConvertFrom;
        VirtualInvokeData ConvertTo;
        VirtualInvokeData CreateInstance;
        VirtualInvokeData GetCreateInstanceSupported;
        VirtualInvokeData GetProperties;
        VirtualInvokeData GetPropertiesSupported;
        VirtualInvokeData GetStandardValues;
        VirtualInvokeData GetStandardValuesExclusive;
        VirtualInvokeData GetStandardValuesSupported;
        VirtualInvokeData IsValid;
    };

    struct RelationshipConverter__StaticFields {
    };

    struct RelationshipConverter__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RelationshipConverter__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RelationshipConverter__VTable vtable;
    };

} // namespace app
