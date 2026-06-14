#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TryExpression_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TryExpression_INITIALIZING
#if !defined(IL2CPP_STRUCT_TryExpression_DEFINED)
#include <Modloader/app/structs/TryExpression__Fields.h>
#if defined(IL2CPP_STRUCT_TryExpression__Fields_DEFINED)
#define IL2CPP_STRUCT_TryExpression_DEFINED
struct TryExpression__Class;
struct TryExpression {
    struct TryExpression__Class* klass;
    MonitorData* monitor;
    struct TryExpression__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TryExpression_FWDDECL)
#define IL2CPP_STRUCT_TryExpression_FWDDECL
#include <Modloader/app/structs/TryExpression__Class.h>
#endif
#undef IL2CPP_STRUCT_TryExpression_INITIALIZING
#if !defined(IL2CPP_STRUCT_TryExpression_DEFINED) && !defined(IL2CPP_STRUCT_TryExpression_FWDDECL)
#include <Modloader/app/structs/TryExpression.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TryExpression.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
