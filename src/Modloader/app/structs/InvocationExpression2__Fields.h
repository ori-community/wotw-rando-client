#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InvocationExpression2__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InvocationExpression2__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InvocationExpression2__Fields_DEFINED)
#include <Modloader/app/structs/InvocationExpression__Fields.h>
#if defined(IL2CPP_STRUCT_InvocationExpression__Fields_DEFINED)
#define IL2CPP_STRUCT_InvocationExpression2__Fields_DEFINED
struct Object;
struct Expression;
struct InvocationExpression2__Fields {
    struct InvocationExpression__Fields _;
    struct Object* _arg0;
    struct Expression* _arg1;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InvocationExpression2__Fields_FWDDECL)
#define IL2CPP_STRUCT_InvocationExpression2__Fields_FWDDECL
#include <Modloader/app/structs/Expression.h>
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_InvocationExpression2__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InvocationExpression2__Fields_DEFINED) && !defined(IL2CPP_STRUCT_InvocationExpression2__Fields_FWDDECL)
#include <Modloader/app/structs/InvocationExpression2__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InvocationExpression2__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
