#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EarlyZProfilingSetting_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EarlyZProfilingSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_EarlyZProfilingSetting_DEFINED)
#include <Modloader/app/structs/EarlyZProfilingSetting__Fields.h>
#if defined(IL2CPP_STRUCT_EarlyZProfilingSetting__Fields_DEFINED)
#define IL2CPP_STRUCT_EarlyZProfilingSetting_DEFINED
struct EarlyZProfilingSetting__Class;
struct EarlyZProfilingSetting {
    struct EarlyZProfilingSetting__Class* klass;
    MonitorData* monitor;
    struct EarlyZProfilingSetting__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EarlyZProfilingSetting_FWDDECL)
#define IL2CPP_STRUCT_EarlyZProfilingSetting_FWDDECL
#include <Modloader/app/structs/EarlyZProfilingSetting__Class.h>
#endif
#undef IL2CPP_STRUCT_EarlyZProfilingSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_EarlyZProfilingSetting_DEFINED) && !defined(IL2CPP_STRUCT_EarlyZProfilingSetting_FWDDECL)
#include <Modloader/app/structs/EarlyZProfilingSetting.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EarlyZProfilingSetting.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
