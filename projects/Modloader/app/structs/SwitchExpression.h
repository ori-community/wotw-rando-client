#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SwitchExpression_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SwitchExpression_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwitchExpression_DEFINED)
#include <Modloader/app/structs/SwitchExpression__Fields.h>
#if defined(IL2CPP_STRUCT_SwitchExpression__Fields_DEFINED)
#define IL2CPP_STRUCT_SwitchExpression_DEFINED
struct SwitchExpression__Class;
struct SwitchExpression {
    struct SwitchExpression__Class* klass;
    MonitorData* monitor;
    struct SwitchExpression__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SwitchExpression_FWDDECL)
#define IL2CPP_STRUCT_SwitchExpression_FWDDECL
#include <Modloader/app/structs/SwitchExpression__Class.h>
#endif
#undef IL2CPP_STRUCT_SwitchExpression_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwitchExpression_DEFINED) && !defined(IL2CPP_STRUCT_SwitchExpression_FWDDECL)
#include <Modloader/app/structs/SwitchExpression.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SwitchExpression.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
