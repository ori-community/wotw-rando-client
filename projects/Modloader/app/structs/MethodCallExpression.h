#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MethodCallExpression_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MethodCallExpression_INITIALIZING
#if !defined(IL2CPP_STRUCT_MethodCallExpression_DEFINED)
#include <Modloader/app/structs/MethodCallExpression__Fields.h>
#if defined(IL2CPP_STRUCT_MethodCallExpression__Fields_DEFINED)
#define IL2CPP_STRUCT_MethodCallExpression_DEFINED
struct MethodCallExpression__Class;
struct MethodCallExpression {
    struct MethodCallExpression__Class* klass;
    MonitorData* monitor;
    struct MethodCallExpression__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MethodCallExpression_FWDDECL)
#define IL2CPP_STRUCT_MethodCallExpression_FWDDECL
#include <Modloader/app/structs/MethodCallExpression__Class.h>
#endif
#undef IL2CPP_STRUCT_MethodCallExpression_INITIALIZING
#if !defined(IL2CPP_STRUCT_MethodCallExpression_DEFINED) && !defined(IL2CPP_STRUCT_MethodCallExpression_FWDDECL)
#include <Modloader/app/structs/MethodCallExpression.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MethodCallExpression.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
