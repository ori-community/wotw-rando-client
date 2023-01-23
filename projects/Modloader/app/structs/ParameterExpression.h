#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ParameterExpression_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ParameterExpression_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParameterExpression_DEFINED)
#include <Modloader/app/structs/ParameterExpression__Fields.h>
#if defined(IL2CPP_STRUCT_ParameterExpression__Fields_DEFINED)
#define IL2CPP_STRUCT_ParameterExpression_DEFINED
struct ParameterExpression__Class;
struct ParameterExpression {
    struct ParameterExpression__Class* klass;
    MonitorData* monitor;
    struct ParameterExpression__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ParameterExpression_FWDDECL)
#define IL2CPP_STRUCT_ParameterExpression_FWDDECL
#include <Modloader/app/structs/ParameterExpression__Class.h>
#endif
#undef IL2CPP_STRUCT_ParameterExpression_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParameterExpression_DEFINED) && !defined(IL2CPP_STRUCT_ParameterExpression_FWDDECL)
#include <Modloader/app/structs/ParameterExpression.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ParameterExpression.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
