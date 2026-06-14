#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LizardSpawnSetup_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LizardSpawnSetup_INITIALIZING
#if !defined(IL2CPP_STRUCT_LizardSpawnSetup_DEFINED)
#include <Modloader/app/structs/LizardSpawnSetup__Fields.h>
#if defined(IL2CPP_STRUCT_LizardSpawnSetup__Fields_DEFINED)
#define IL2CPP_STRUCT_LizardSpawnSetup_DEFINED
struct LizardSpawnSetup__Class;
struct LizardSpawnSetup {
    struct LizardSpawnSetup__Class* klass;
    MonitorData* monitor;
    struct LizardSpawnSetup__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LizardSpawnSetup_FWDDECL)
#define IL2CPP_STRUCT_LizardSpawnSetup_FWDDECL
#include <Modloader/app/structs/LizardSpawnSetup__Class.h>
#endif
#undef IL2CPP_STRUCT_LizardSpawnSetup_INITIALIZING
#if !defined(IL2CPP_STRUCT_LizardSpawnSetup_DEFINED) && !defined(IL2CPP_STRUCT_LizardSpawnSetup_FWDDECL)
#include <Modloader/app/structs/LizardSpawnSetup.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LizardSpawnSetup.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
