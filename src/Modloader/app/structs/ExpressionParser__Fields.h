#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExpressionParser__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExpressionParser__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExpressionParser__Fields_DEFINED)
#include <Modloader/app/structs/Tokens__Enum.h>
#if defined(IL2CPP_STRUCT_Tokens__Enum_DEFINED)
#define IL2CPP_STRUCT_ExpressionParser__Fields_DEFINED
struct Char__Array;
struct OperatorInfo__Array;
struct DataTable;
struct ExpressionNode__Array;
struct ExpressionNode;
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
#endif
#endif
#if !defined(IL2CPP_STRUCT_ExpressionParser__Fields_FWDDECL)
#define IL2CPP_STRUCT_ExpressionParser__Fields_FWDDECL
#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/DataTable.h>
#include <Modloader/app/structs/ExpressionNode.h>
#include <Modloader/app/structs/ExpressionNode__Array.h>
#include <Modloader/app/structs/OperatorInfo__Array.h>
#endif
#undef IL2CPP_STRUCT_ExpressionParser__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExpressionParser__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ExpressionParser__Fields_FWDDECL)
#include <Modloader/app/structs/ExpressionParser__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExpressionParser__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
