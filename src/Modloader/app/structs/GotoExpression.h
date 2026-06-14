#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GotoExpression_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GotoExpression_INITIALIZING
#if !defined(IL2CPP_STRUCT_GotoExpression_DEFINED)
#include <Modloader/app/structs/GotoExpression__Fields.h>
#if defined(IL2CPP_STRUCT_GotoExpression__Fields_DEFINED)
#define IL2CPP_STRUCT_GotoExpression_DEFINED
struct GotoExpression__Class;
struct GotoExpression {
    struct GotoExpression__Class* klass;
    MonitorData* monitor;
    struct GotoExpression__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GotoExpression_FWDDECL)
#define IL2CPP_STRUCT_GotoExpression_FWDDECL
#include <Modloader/app/structs/GotoExpression__Class.h>
#endif
#undef IL2CPP_STRUCT_GotoExpression_INITIALIZING
#if !defined(IL2CPP_STRUCT_GotoExpression_DEFINED) && !defined(IL2CPP_STRUCT_GotoExpression_FWDDECL)
#include <Modloader/app/structs/GotoExpression.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GotoExpression.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
