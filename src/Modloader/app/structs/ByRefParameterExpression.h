#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ByRefParameterExpression_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ByRefParameterExpression_INITIALIZING
#if !defined(IL2CPP_STRUCT_ByRefParameterExpression_DEFINED)
#include <Modloader/app/structs/ByRefParameterExpression__Fields.h>
#if defined(IL2CPP_STRUCT_ByRefParameterExpression__Fields_DEFINED)
#define IL2CPP_STRUCT_ByRefParameterExpression_DEFINED
struct ByRefParameterExpression__Class;
struct ByRefParameterExpression {
    struct ByRefParameterExpression__Class* klass;
    MonitorData* monitor;
    struct ByRefParameterExpression__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ByRefParameterExpression_FWDDECL)
#define IL2CPP_STRUCT_ByRefParameterExpression_FWDDECL
#include <Modloader/app/structs/ByRefParameterExpression__Class.h>
#endif
#undef IL2CPP_STRUCT_ByRefParameterExpression_INITIALIZING
#if !defined(IL2CPP_STRUCT_ByRefParameterExpression_DEFINED) && !defined(IL2CPP_STRUCT_ByRefParameterExpression_FWDDECL)
#include <Modloader/app/structs/ByRefParameterExpression.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ByRefParameterExpression.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
