#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NewArrayInitExpression_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NewArrayInitExpression_INITIALIZING
#if !defined(IL2CPP_STRUCT_NewArrayInitExpression_DEFINED)
#include <Modloader/app/structs/NewArrayInitExpression__Fields.h>
#if defined(IL2CPP_STRUCT_NewArrayInitExpression__Fields_DEFINED)
#define IL2CPP_STRUCT_NewArrayInitExpression_DEFINED
struct NewArrayInitExpression__Class;
struct NewArrayInitExpression {
    struct NewArrayInitExpression__Class* klass;
    MonitorData* monitor;
    struct NewArrayInitExpression__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NewArrayInitExpression_FWDDECL)
#define IL2CPP_STRUCT_NewArrayInitExpression_FWDDECL
#include <Modloader/app/structs/NewArrayInitExpression__Class.h>
#endif
#undef IL2CPP_STRUCT_NewArrayInitExpression_INITIALIZING
#if !defined(IL2CPP_STRUCT_NewArrayInitExpression_DEFINED) && !defined(IL2CPP_STRUCT_NewArrayInitExpression_FWDDECL)
#include <Modloader/app/structs/NewArrayInitExpression.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NewArrayInitExpression.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
