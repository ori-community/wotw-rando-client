#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InvocationExpression_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InvocationExpression_INITIALIZING
#if !defined(IL2CPP_STRUCT_InvocationExpression_DEFINED)
#include <Modloader/app/structs/InvocationExpression__Fields.h>
#if defined(IL2CPP_STRUCT_InvocationExpression__Fields_DEFINED)
#define IL2CPP_STRUCT_InvocationExpression_DEFINED
struct InvocationExpression__Class;
struct InvocationExpression {
    struct InvocationExpression__Class* klass;
    MonitorData* monitor;
    struct InvocationExpression__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InvocationExpression_FWDDECL)
#define IL2CPP_STRUCT_InvocationExpression_FWDDECL
#include <Modloader/app/structs/InvocationExpression__Class.h>
#endif
#undef IL2CPP_STRUCT_InvocationExpression_INITIALIZING
#if !defined(IL2CPP_STRUCT_InvocationExpression_DEFINED) && !defined(IL2CPP_STRUCT_InvocationExpression_FWDDECL)
#include <Modloader/app/structs/InvocationExpression.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InvocationExpression.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
