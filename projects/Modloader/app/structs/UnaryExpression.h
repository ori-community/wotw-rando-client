#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UnaryExpression_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UnaryExpression_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnaryExpression_DEFINED)
#include <Modloader/app/structs/UnaryExpression__Fields.h>
#if defined(IL2CPP_STRUCT_UnaryExpression__Fields_DEFINED)
#define IL2CPP_STRUCT_UnaryExpression_DEFINED
struct UnaryExpression__Class;
struct UnaryExpression {
    struct UnaryExpression__Class* klass;
    MonitorData* monitor;
    struct UnaryExpression__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UnaryExpression_FWDDECL)
#define IL2CPP_STRUCT_UnaryExpression_FWDDECL
#include <Modloader/app/structs/UnaryExpression__Class.h>
#endif
#undef IL2CPP_STRUCT_UnaryExpression_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnaryExpression_DEFINED) && !defined(IL2CPP_STRUCT_UnaryExpression_FWDDECL)
#include <Modloader/app/structs/UnaryExpression.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UnaryExpression.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
