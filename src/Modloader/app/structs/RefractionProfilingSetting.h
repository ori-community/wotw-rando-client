#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RefractionProfilingSetting_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RefractionProfilingSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_RefractionProfilingSetting_DEFINED)
#include <Modloader/app/structs/RefractionProfilingSetting__Fields.h>
#if defined(IL2CPP_STRUCT_RefractionProfilingSetting__Fields_DEFINED)
#define IL2CPP_STRUCT_RefractionProfilingSetting_DEFINED
struct RefractionProfilingSetting__Class;
struct RefractionProfilingSetting {
    struct RefractionProfilingSetting__Class* klass;
    MonitorData* monitor;
    struct RefractionProfilingSetting__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RefractionProfilingSetting_FWDDECL)
#define IL2CPP_STRUCT_RefractionProfilingSetting_FWDDECL
#include <Modloader/app/structs/RefractionProfilingSetting__Class.h>
#endif
#undef IL2CPP_STRUCT_RefractionProfilingSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_RefractionProfilingSetting_DEFINED) && !defined(IL2CPP_STRUCT_RefractionProfilingSetting_FWDDECL)
#include <Modloader/app/structs/RefractionProfilingSetting.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RefractionProfilingSetting.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
