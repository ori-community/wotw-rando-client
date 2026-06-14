#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SimpleBinaryExpression__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SimpleBinaryExpression__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleBinaryExpression__Fields_DEFINED)
#include <Modloader/app/structs/BinaryExpression__Fields.h>
#include <Modloader/app/structs/ExpressionType__Enum.h>
#if defined(IL2CPP_STRUCT_BinaryExpression__Fields_DEFINED) && defined(IL2CPP_STRUCT_ExpressionType__Enum_DEFINED)
#define IL2CPP_STRUCT_SimpleBinaryExpression__Fields_DEFINED
struct Type;
struct SimpleBinaryExpression__Fields {
    struct BinaryExpression__Fields _;
    ExpressionType__Enum _NodeType_k__BackingField;

    struct Type* _Type_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SimpleBinaryExpression__Fields_FWDDECL)
#define IL2CPP_STRUCT_SimpleBinaryExpression__Fields_FWDDECL
#include <Modloader/app/structs/Type.h>
#endif
#undef IL2CPP_STRUCT_SimpleBinaryExpression__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleBinaryExpression__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SimpleBinaryExpression__Fields_FWDDECL)
#include <Modloader/app/structs/SimpleBinaryExpression__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SimpleBinaryExpression__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
