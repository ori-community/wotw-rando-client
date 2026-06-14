#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MaxHealthContainerPickup_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MaxHealthContainerPickup_INITIALIZING
#if !defined(IL2CPP_STRUCT_MaxHealthContainerPickup_DEFINED)
#include <Modloader/app/structs/MaxHealthContainerPickup__Fields.h>
#if defined(IL2CPP_STRUCT_MaxHealthContainerPickup__Fields_DEFINED)
#define IL2CPP_STRUCT_MaxHealthContainerPickup_DEFINED
struct MaxHealthContainerPickup__Class;
struct MaxHealthContainerPickup {
    struct MaxHealthContainerPickup__Class* klass;
    MonitorData* monitor;
    struct MaxHealthContainerPickup__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MaxHealthContainerPickup_FWDDECL)
#define IL2CPP_STRUCT_MaxHealthContainerPickup_FWDDECL
#include <Modloader/app/structs/MaxHealthContainerPickup__Class.h>
#endif
#undef IL2CPP_STRUCT_MaxHealthContainerPickup_INITIALIZING
#if !defined(IL2CPP_STRUCT_MaxHealthContainerPickup_DEFINED) && !defined(IL2CPP_STRUCT_MaxHealthContainerPickup_FWDDECL)
#include <Modloader/app/structs/MaxHealthContainerPickup.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MaxHealthContainerPickup.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
