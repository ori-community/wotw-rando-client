#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DebugInfoExpression_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DebugInfoExpression_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugInfoExpression_DEFINED)
#include <Modloader/app/structs/DebugInfoExpression__Fields.h>
#if defined(IL2CPP_STRUCT_DebugInfoExpression__Fields_DEFINED)
#define IL2CPP_STRUCT_DebugInfoExpression_DEFINED
struct DebugInfoExpression__Class;
struct DebugInfoExpression {
    struct DebugInfoExpression__Class* klass;
    MonitorData* monitor;
    struct DebugInfoExpression__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DebugInfoExpression_FWDDECL)
#define IL2CPP_STRUCT_DebugInfoExpression_FWDDECL
#include <Modloader/app/structs/DebugInfoExpression__Class.h>
#endif
#undef IL2CPP_STRUCT_DebugInfoExpression_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugInfoExpression_DEFINED) && !defined(IL2CPP_STRUCT_DebugInfoExpression_FWDDECL)
#include <Modloader/app/structs/DebugInfoExpression.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DebugInfoExpression.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
