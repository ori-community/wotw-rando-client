#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShowFPSGraphProfilingSetting_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShowFPSGraphProfilingSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShowFPSGraphProfilingSetting_DEFINED)
#include <Modloader/app/structs/ShowFPSGraphProfilingSetting__Fields.h>
#if defined(IL2CPP_STRUCT_ShowFPSGraphProfilingSetting__Fields_DEFINED)
#define IL2CPP_STRUCT_ShowFPSGraphProfilingSetting_DEFINED
struct ShowFPSGraphProfilingSetting__Class;
struct ShowFPSGraphProfilingSetting {
    struct ShowFPSGraphProfilingSetting__Class* klass;
    MonitorData* monitor;
    struct ShowFPSGraphProfilingSetting__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ShowFPSGraphProfilingSetting_FWDDECL)
#define IL2CPP_STRUCT_ShowFPSGraphProfilingSetting_FWDDECL
#include <Modloader/app/structs/ShowFPSGraphProfilingSetting__Class.h>
#endif
#undef IL2CPP_STRUCT_ShowFPSGraphProfilingSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShowFPSGraphProfilingSetting_DEFINED) && !defined(IL2CPP_STRUCT_ShowFPSGraphProfilingSetting_FWDDECL)
#include <Modloader/app/structs/ShowFPSGraphProfilingSetting.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShowFPSGraphProfilingSetting.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
