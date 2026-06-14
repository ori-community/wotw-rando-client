#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ResourcesUnloadingProfilingSetting_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ResourcesUnloadingProfilingSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_ResourcesUnloadingProfilingSetting_DEFINED)
#include <Modloader/app/structs/ResourcesUnloadingProfilingSetting__Fields.h>
#if defined(IL2CPP_STRUCT_ResourcesUnloadingProfilingSetting__Fields_DEFINED)
#define IL2CPP_STRUCT_ResourcesUnloadingProfilingSetting_DEFINED
struct ResourcesUnloadingProfilingSetting__Class;
struct ResourcesUnloadingProfilingSetting {
    struct ResourcesUnloadingProfilingSetting__Class* klass;
    MonitorData* monitor;
    struct ResourcesUnloadingProfilingSetting__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ResourcesUnloadingProfilingSetting_FWDDECL)
#define IL2CPP_STRUCT_ResourcesUnloadingProfilingSetting_FWDDECL
#include <Modloader/app/structs/ResourcesUnloadingProfilingSetting__Class.h>
#endif
#undef IL2CPP_STRUCT_ResourcesUnloadingProfilingSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_ResourcesUnloadingProfilingSetting_DEFINED) && !defined(IL2CPP_STRUCT_ResourcesUnloadingProfilingSetting_FWDDECL)
#include <Modloader/app/structs/ResourcesUnloadingProfilingSetting.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ResourcesUnloadingProfilingSetting.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
