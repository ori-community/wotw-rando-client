#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BoostModeProfilingSetting_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BoostModeProfilingSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_BoostModeProfilingSetting_DEFINED)
#include <Modloader/app/structs/BoostModeProfilingSetting__Fields.h>
#if defined(IL2CPP_STRUCT_BoostModeProfilingSetting__Fields_DEFINED)
#define IL2CPP_STRUCT_BoostModeProfilingSetting_DEFINED
struct BoostModeProfilingSetting__Class;
struct BoostModeProfilingSetting {
    struct BoostModeProfilingSetting__Class* klass;
    MonitorData* monitor;
    struct BoostModeProfilingSetting__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BoostModeProfilingSetting_FWDDECL)
#define IL2CPP_STRUCT_BoostModeProfilingSetting_FWDDECL
#include <Modloader/app/structs/BoostModeProfilingSetting__Class.h>
#endif
#undef IL2CPP_STRUCT_BoostModeProfilingSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_BoostModeProfilingSetting_DEFINED) && !defined(IL2CPP_STRUCT_BoostModeProfilingSetting_FWDDECL)
#include <Modloader/app/structs/BoostModeProfilingSetting.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BoostModeProfilingSetting.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
