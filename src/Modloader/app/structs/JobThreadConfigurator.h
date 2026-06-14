#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JobThreadConfigurator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JobThreadConfigurator_INITIALIZING
#if !defined(IL2CPP_STRUCT_JobThreadConfigurator_DEFINED)
#define IL2CPP_STRUCT_JobThreadConfigurator_DEFINED
struct JobThreadConfigurator__Class;
struct JobThreadConfigurator {
    struct JobThreadConfigurator__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_JobThreadConfigurator_FWDDECL)
#define IL2CPP_STRUCT_JobThreadConfigurator_FWDDECL
#include <Modloader/app/structs/JobThreadConfigurator__Class.h>
#endif
#undef IL2CPP_STRUCT_JobThreadConfigurator_INITIALIZING
#if !defined(IL2CPP_STRUCT_JobThreadConfigurator_DEFINED) && !defined(IL2CPP_STRUCT_JobThreadConfigurator_FWDDECL)
#include <Modloader/app/structs/JobThreadConfigurator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JobThreadConfigurator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
