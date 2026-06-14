#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LizardSpawnTask_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LizardSpawnTask_INITIALIZING
#if !defined(IL2CPP_STRUCT_LizardSpawnTask_DEFINED)
#include <Modloader/app/structs/LizardSpawnTask__Fields.h>
#if defined(IL2CPP_STRUCT_LizardSpawnTask__Fields_DEFINED)
#define IL2CPP_STRUCT_LizardSpawnTask_DEFINED
struct LizardSpawnTask__Class;
struct LizardSpawnTask {
    struct LizardSpawnTask__Class* klass;
    MonitorData* monitor;
    struct LizardSpawnTask__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LizardSpawnTask_FWDDECL)
#define IL2CPP_STRUCT_LizardSpawnTask_FWDDECL
#include <Modloader/app/structs/LizardSpawnTask__Class.h>
#endif
#undef IL2CPP_STRUCT_LizardSpawnTask_INITIALIZING
#if !defined(IL2CPP_STRUCT_LizardSpawnTask_DEFINED) && !defined(IL2CPP_STRUCT_LizardSpawnTask_FWDDECL)
#include <Modloader/app/structs/LizardSpawnTask.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LizardSpawnTask.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
