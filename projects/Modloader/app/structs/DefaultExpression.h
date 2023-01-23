#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DefaultExpression_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DefaultExpression_INITIALIZING
#if !defined(IL2CPP_STRUCT_DefaultExpression_DEFINED)
#include <Modloader/app/structs/DefaultExpression__Fields.h>
#if defined(IL2CPP_STRUCT_DefaultExpression__Fields_DEFINED)
#define IL2CPP_STRUCT_DefaultExpression_DEFINED
struct DefaultExpression__Class;
struct DefaultExpression {
    struct DefaultExpression__Class* klass;
    MonitorData* monitor;
    struct DefaultExpression__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DefaultExpression_FWDDECL)
#define IL2CPP_STRUCT_DefaultExpression_FWDDECL
#include <Modloader/app/structs/DefaultExpression__Class.h>
#endif
#undef IL2CPP_STRUCT_DefaultExpression_INITIALIZING
#if !defined(IL2CPP_STRUCT_DefaultExpression_DEFINED) && !defined(IL2CPP_STRUCT_DefaultExpression_FWDDECL)
#include <Modloader/app/structs/DefaultExpression.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DefaultExpression.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
