#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PotatoModeProfilingSetting_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PotatoModeProfilingSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_PotatoModeProfilingSetting_DEFINED)
#include <Modloader/app/structs/PotatoModeProfilingSetting__Fields.h>
#if defined(IL2CPP_STRUCT_PotatoModeProfilingSetting__Fields_DEFINED)
#define IL2CPP_STRUCT_PotatoModeProfilingSetting_DEFINED
struct PotatoModeProfilingSetting__Class;
struct PotatoModeProfilingSetting {
    struct PotatoModeProfilingSetting__Class* klass;
    MonitorData* monitor;
    struct PotatoModeProfilingSetting__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PotatoModeProfilingSetting_FWDDECL)
#define IL2CPP_STRUCT_PotatoModeProfilingSetting_FWDDECL
#include <Modloader/app/structs/PotatoModeProfilingSetting__Class.h>
#endif
#undef IL2CPP_STRUCT_PotatoModeProfilingSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_PotatoModeProfilingSetting_DEFINED) && !defined(IL2CPP_STRUCT_PotatoModeProfilingSetting_FWDDECL)
#include <Modloader/app/structs/PotatoModeProfilingSetting.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PotatoModeProfilingSetting.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
