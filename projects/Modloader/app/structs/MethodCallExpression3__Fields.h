#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MethodCallExpression3__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MethodCallExpression3__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MethodCallExpression3__Fields_DEFINED)
#include <Modloader/app/structs/MethodCallExpression__Fields.h>
#if defined(IL2CPP_STRUCT_MethodCallExpression__Fields_DEFINED)
#define IL2CPP_STRUCT_MethodCallExpression3__Fields_DEFINED
struct Object;
struct Expression;
struct MethodCallExpression3__Fields {
    struct MethodCallExpression__Fields _;
    struct Object* _arg0;
    struct Expression* _arg1;
    struct Expression* _arg2;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MethodCallExpression3__Fields_FWDDECL)
#define IL2CPP_STRUCT_MethodCallExpression3__Fields_FWDDECL
#include <Modloader/app/structs/Expression.h>
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_MethodCallExpression3__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MethodCallExpression3__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MethodCallExpression3__Fields_FWDDECL)
#include <Modloader/app/structs/MethodCallExpression3__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MethodCallExpression3__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
