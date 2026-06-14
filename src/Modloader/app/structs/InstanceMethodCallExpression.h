#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InstanceMethodCallExpression_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InstanceMethodCallExpression_INITIALIZING
#if !defined(IL2CPP_STRUCT_InstanceMethodCallExpression_DEFINED)
#include <Modloader/app/structs/InstanceMethodCallExpression__Fields.h>
#if defined(IL2CPP_STRUCT_InstanceMethodCallExpression__Fields_DEFINED)
#define IL2CPP_STRUCT_InstanceMethodCallExpression_DEFINED
struct InstanceMethodCallExpression__Class;
struct InstanceMethodCallExpression {
    struct InstanceMethodCallExpression__Class* klass;
    MonitorData* monitor;
    struct InstanceMethodCallExpression__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InstanceMethodCallExpression_FWDDECL)
#define IL2CPP_STRUCT_InstanceMethodCallExpression_FWDDECL
#include <Modloader/app/structs/InstanceMethodCallExpression__Class.h>
#endif
#undef IL2CPP_STRUCT_InstanceMethodCallExpression_INITIALIZING
#if !defined(IL2CPP_STRUCT_InstanceMethodCallExpression_DEFINED) && !defined(IL2CPP_STRUCT_InstanceMethodCallExpression_FWDDECL)
#include <Modloader/app/structs/InstanceMethodCallExpression.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InstanceMethodCallExpression.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
