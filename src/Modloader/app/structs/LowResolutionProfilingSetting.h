#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LowResolutionProfilingSetting_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LowResolutionProfilingSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_LowResolutionProfilingSetting_DEFINED)
#include <Modloader/app/structs/LowResolutionProfilingSetting__Fields.h>
#if defined(IL2CPP_STRUCT_LowResolutionProfilingSetting__Fields_DEFINED)
#define IL2CPP_STRUCT_LowResolutionProfilingSetting_DEFINED
struct LowResolutionProfilingSetting__Class;
struct LowResolutionProfilingSetting {
    struct LowResolutionProfilingSetting__Class* klass;
    MonitorData* monitor;
    struct LowResolutionProfilingSetting__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LowResolutionProfilingSetting_FWDDECL)
#define IL2CPP_STRUCT_LowResolutionProfilingSetting_FWDDECL
#include <Modloader/app/structs/LowResolutionProfilingSetting__Class.h>
#endif
#undef IL2CPP_STRUCT_LowResolutionProfilingSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_LowResolutionProfilingSetting_DEFINED) && !defined(IL2CPP_STRUCT_LowResolutionProfilingSetting_FWDDECL)
#include <Modloader/app/structs/LowResolutionProfilingSetting.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LowResolutionProfilingSetting.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
