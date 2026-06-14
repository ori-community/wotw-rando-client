#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TAAProfilingSetting_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TAAProfilingSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_TAAProfilingSetting_DEFINED)
#include <Modloader/app/structs/TAAProfilingSetting__Fields.h>
#if defined(IL2CPP_STRUCT_TAAProfilingSetting__Fields_DEFINED)
#define IL2CPP_STRUCT_TAAProfilingSetting_DEFINED
struct TAAProfilingSetting__Class;
struct TAAProfilingSetting {
    struct TAAProfilingSetting__Class* klass;
    MonitorData* monitor;
    struct TAAProfilingSetting__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TAAProfilingSetting_FWDDECL)
#define IL2CPP_STRUCT_TAAProfilingSetting_FWDDECL
#include <Modloader/app/structs/TAAProfilingSetting__Class.h>
#endif
#undef IL2CPP_STRUCT_TAAProfilingSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_TAAProfilingSetting_DEFINED) && !defined(IL2CPP_STRUCT_TAAProfilingSetting_FWDDECL)
#include <Modloader/app/structs/TAAProfilingSetting.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TAAProfilingSetting.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
