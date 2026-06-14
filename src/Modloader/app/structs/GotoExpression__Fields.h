#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GotoExpression__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GotoExpression__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GotoExpression__Fields_DEFINED)
#include <Modloader/app/structs/GotoExpressionKind__Enum.h>
#if defined(IL2CPP_STRUCT_GotoExpressionKind__Enum_DEFINED)
#define IL2CPP_STRUCT_GotoExpression__Fields_DEFINED
struct Type;
struct Expression;
struct LabelTarget;
struct __declspec(align(8)) GotoExpression__Fields {
    struct Type* _Type_k__BackingField;
    struct Expression* _Value_k__BackingField;
    struct LabelTarget* _Target_k__BackingField;
    GotoExpressionKind__Enum _Kind_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GotoExpression__Fields_FWDDECL)
#define IL2CPP_STRUCT_GotoExpression__Fields_FWDDECL
#include <Modloader/app/structs/Expression.h>
#include <Modloader/app/structs/LabelTarget.h>
#include <Modloader/app/structs/Type.h>
#endif
#undef IL2CPP_STRUCT_GotoExpression__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GotoExpression__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GotoExpression__Fields_FWDDECL)
#include <Modloader/app/structs/GotoExpression__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GotoExpression__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
