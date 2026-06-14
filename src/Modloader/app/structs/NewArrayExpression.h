#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NewArrayExpression_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NewArrayExpression_INITIALIZING
#if !defined(IL2CPP_STRUCT_NewArrayExpression_DEFINED)
#include <Modloader/app/structs/NewArrayExpression__Fields.h>
#if defined(IL2CPP_STRUCT_NewArrayExpression__Fields_DEFINED)
#define IL2CPP_STRUCT_NewArrayExpression_DEFINED
struct NewArrayExpression__Class;
struct NewArrayExpression {
    struct NewArrayExpression__Class* klass;
    MonitorData* monitor;
    struct NewArrayExpression__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NewArrayExpression_FWDDECL)
#define IL2CPP_STRUCT_NewArrayExpression_FWDDECL
#include <Modloader/app/structs/NewArrayExpression__Class.h>
#endif
#undef IL2CPP_STRUCT_NewArrayExpression_INITIALIZING
#if !defined(IL2CPP_STRUCT_NewArrayExpression_DEFINED) && !defined(IL2CPP_STRUCT_NewArrayExpression_FWDDECL)
#include <Modloader/app/structs/NewArrayExpression.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NewArrayExpression.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
