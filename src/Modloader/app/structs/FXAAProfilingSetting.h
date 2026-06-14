#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FXAAProfilingSetting_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FXAAProfilingSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_FXAAProfilingSetting_DEFINED)
#include <Modloader/app/structs/FXAAProfilingSetting__Fields.h>
#if defined(IL2CPP_STRUCT_FXAAProfilingSetting__Fields_DEFINED)
#define IL2CPP_STRUCT_FXAAProfilingSetting_DEFINED
struct FXAAProfilingSetting__Class;
struct FXAAProfilingSetting {
    struct FXAAProfilingSetting__Class* klass;
    MonitorData* monitor;
    struct FXAAProfilingSetting__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FXAAProfilingSetting_FWDDECL)
#define IL2CPP_STRUCT_FXAAProfilingSetting_FWDDECL
#include <Modloader/app/structs/FXAAProfilingSetting__Class.h>
#endif
#undef IL2CPP_STRUCT_FXAAProfilingSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_FXAAProfilingSetting_DEFINED) && !defined(IL2CPP_STRUCT_FXAAProfilingSetting_FWDDECL)
#include <Modloader/app/structs/FXAAProfilingSetting.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FXAAProfilingSetting.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
