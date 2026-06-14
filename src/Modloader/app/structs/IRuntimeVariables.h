#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IRuntimeVariables_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IRuntimeVariables_INITIALIZING
#if !defined(IL2CPP_STRUCT_IRuntimeVariables_DEFINED)
#define IL2CPP_STRUCT_IRuntimeVariables_DEFINED
struct IRuntimeVariables__Class;
struct IRuntimeVariables {
    struct IRuntimeVariables__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IRuntimeVariables_FWDDECL)
#define IL2CPP_STRUCT_IRuntimeVariables_FWDDECL
#include <Modloader/app/structs/IRuntimeVariables__Class.h>
#endif
#undef IL2CPP_STRUCT_IRuntimeVariables_INITIALIZING
#if !defined(IL2CPP_STRUCT_IRuntimeVariables_DEFINED) && !defined(IL2CPP_STRUCT_IRuntimeVariables_FWDDECL)
#include <Modloader/app/structs/IRuntimeVariables.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IRuntimeVariables.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
