#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UnaryExpression__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UnaryExpression__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnaryExpression__Fields_DEFINED)
#include <Modloader/app/structs/ExpressionType__Enum.h>
#if defined(IL2CPP_STRUCT_ExpressionType__Enum_DEFINED)
#define IL2CPP_STRUCT_UnaryExpression__Fields_DEFINED
struct Type;
struct Expression;
struct MethodInfo_1;
struct __declspec(align(8)) UnaryExpression__Fields {
    struct Type* _Type_k__BackingField;
    ExpressionType__Enum _NodeType_k__BackingField;

    struct Expression* _Operand_k__BackingField;
    struct MethodInfo_1* _Method_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UnaryExpression__Fields_FWDDECL)
#define IL2CPP_STRUCT_UnaryExpression__Fields_FWDDECL
#include <Modloader/app/structs/Expression.h>
#include <Modloader/app/structs/MethodInfo_1.h>
#include <Modloader/app/structs/Type.h>
#endif
#undef IL2CPP_STRUCT_UnaryExpression__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnaryExpression__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UnaryExpression__Fields_FWDDECL)
#include <Modloader/app/structs/UnaryExpression__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UnaryExpression__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
