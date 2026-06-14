#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OneCorePerWorkerProfilingSetting_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OneCorePerWorkerProfilingSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_OneCorePerWorkerProfilingSetting_DEFINED)
#include <Modloader/app/structs/OneCorePerWorkerProfilingSetting__Fields.h>
#if defined(IL2CPP_STRUCT_OneCorePerWorkerProfilingSetting__Fields_DEFINED)
#define IL2CPP_STRUCT_OneCorePerWorkerProfilingSetting_DEFINED
struct OneCorePerWorkerProfilingSetting__Class;
struct OneCorePerWorkerProfilingSetting {
    struct OneCorePerWorkerProfilingSetting__Class* klass;
    MonitorData* monitor;
    struct OneCorePerWorkerProfilingSetting__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OneCorePerWorkerProfilingSetting_FWDDECL)
#define IL2CPP_STRUCT_OneCorePerWorkerProfilingSetting_FWDDECL
#include <Modloader/app/structs/OneCorePerWorkerProfilingSetting__Class.h>
#endif
#undef IL2CPP_STRUCT_OneCorePerWorkerProfilingSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_OneCorePerWorkerProfilingSetting_DEFINED) && !defined(IL2CPP_STRUCT_OneCorePerWorkerProfilingSetting_FWDDECL)
#include <Modloader/app/structs/OneCorePerWorkerProfilingSetting.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OneCorePerWorkerProfilingSetting.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
