#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataExpression__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataExpression__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataExpression__Fields_DEFINED)
#include <Modloader/app/structs/StorageType__Enum.h>
#if defined(IL2CPP_STRUCT_StorageType__Enum_DEFINED)
#define IL2CPP_STRUCT_DataExpression__Fields_DEFINED
struct String;
struct ExpressionNode;
struct DataTable;
struct Type;
struct DataColumn__Array;
struct __declspec(align(8)) DataExpression__Fields {
    struct String* _originalExpression;
    bool _parsed;
    bool _bound;
    struct ExpressionNode* _expr;
    struct DataTable* _table;
    StorageType__Enum _storageType;

    struct Type* _dataType;
    struct DataColumn__Array* _dependency;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DataExpression__Fields_FWDDECL)
#define IL2CPP_STRUCT_DataExpression__Fields_FWDDECL
#include <Modloader/app/structs/DataColumn__Array.h>
#include <Modloader/app/structs/DataTable.h>
#include <Modloader/app/structs/ExpressionNode.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#endif
#undef IL2CPP_STRUCT_DataExpression__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataExpression__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DataExpression__Fields_FWDDECL)
#include <Modloader/app/structs/DataExpression__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataExpression__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
