#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DarkeningProfilingSetting_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DarkeningProfilingSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_DarkeningProfilingSetting_DEFINED)
#include <Modloader/app/structs/DarkeningProfilingSetting__Fields.h>
#if defined(IL2CPP_STRUCT_DarkeningProfilingSetting__Fields_DEFINED)
#define IL2CPP_STRUCT_DarkeningProfilingSetting_DEFINED
struct DarkeningProfilingSetting__Class;
struct DarkeningProfilingSetting {
    struct DarkeningProfilingSetting__Class* klass;
    MonitorData* monitor;
    struct DarkeningProfilingSetting__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DarkeningProfilingSetting_FWDDECL)
#define IL2CPP_STRUCT_DarkeningProfilingSetting_FWDDECL
#include <Modloader/app/structs/DarkeningProfilingSetting__Class.h>
#endif
#undef IL2CPP_STRUCT_DarkeningProfilingSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_DarkeningProfilingSetting_DEFINED) && !defined(IL2CPP_STRUCT_DarkeningProfilingSetting_FWDDECL)
#include <Modloader/app/structs/DarkeningProfilingSetting.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DarkeningProfilingSetting.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
