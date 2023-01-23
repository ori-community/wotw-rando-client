#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IProfilingSetting_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IProfilingSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_IProfilingSetting_DEFINED)
#include <Modloader/app/structs/IProfilingSetting__Fields.h>
#if defined(IL2CPP_STRUCT_IProfilingSetting__Fields_DEFINED)
#define IL2CPP_STRUCT_IProfilingSetting_DEFINED
struct IProfilingSetting__Class;
struct IProfilingSetting {
    struct IProfilingSetting__Class* klass;
    MonitorData* monitor;
    struct IProfilingSetting__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IProfilingSetting_FWDDECL)
#define IL2CPP_STRUCT_IProfilingSetting_FWDDECL
#include <Modloader/app/structs/IProfilingSetting__Class.h>
#endif
#undef IL2CPP_STRUCT_IProfilingSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_IProfilingSetting_DEFINED) && !defined(IL2CPP_STRUCT_IProfilingSetting_FWDDECL)
#include <Modloader/app/structs/IProfilingSetting.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IProfilingSetting.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
