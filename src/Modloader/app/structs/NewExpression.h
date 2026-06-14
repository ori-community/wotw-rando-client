#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NewExpression_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NewExpression_INITIALIZING
#if !defined(IL2CPP_STRUCT_NewExpression_DEFINED)
#include <Modloader/app/structs/NewExpression__Fields.h>
#if defined(IL2CPP_STRUCT_NewExpression__Fields_DEFINED)
#define IL2CPP_STRUCT_NewExpression_DEFINED
struct NewExpression__Class;
struct NewExpression {
    struct NewExpression__Class* klass;
    MonitorData* monitor;
    struct NewExpression__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NewExpression_FWDDECL)
#define IL2CPP_STRUCT_NewExpression_FWDDECL
#include <Modloader/app/structs/NewExpression__Class.h>
#endif
#undef IL2CPP_STRUCT_NewExpression_INITIALIZING
#if !defined(IL2CPP_STRUCT_NewExpression_DEFINED) && !defined(IL2CPP_STRUCT_NewExpression_FWDDECL)
#include <Modloader/app/structs/NewExpression.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NewExpression.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
