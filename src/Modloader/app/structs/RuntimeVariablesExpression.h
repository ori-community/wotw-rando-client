#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RuntimeVariablesExpression_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RuntimeVariablesExpression_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeVariablesExpression_DEFINED)
#include <Modloader/app/structs/RuntimeVariablesExpression__Fields.h>
#if defined(IL2CPP_STRUCT_RuntimeVariablesExpression__Fields_DEFINED)
#define IL2CPP_STRUCT_RuntimeVariablesExpression_DEFINED
struct RuntimeVariablesExpression__Class;
struct RuntimeVariablesExpression {
    struct RuntimeVariablesExpression__Class* klass;
    MonitorData* monitor;
    struct RuntimeVariablesExpression__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RuntimeVariablesExpression_FWDDECL)
#define IL2CPP_STRUCT_RuntimeVariablesExpression_FWDDECL
#include <Modloader/app/structs/RuntimeVariablesExpression__Class.h>
#endif
#undef IL2CPP_STRUCT_RuntimeVariablesExpression_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeVariablesExpression_DEFINED) && !defined(IL2CPP_STRUCT_RuntimeVariablesExpression_FWDDECL)
#include <Modloader/app/structs/RuntimeVariablesExpression.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RuntimeVariablesExpression.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
