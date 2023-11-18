#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DistortionProfilingSetting_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DistortionProfilingSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_DistortionProfilingSetting_DEFINED)
#include <Modloader/app/structs/DistortionProfilingSetting__Fields.h>
#if defined(IL2CPP_STRUCT_DistortionProfilingSetting__Fields_DEFINED)
#define IL2CPP_STRUCT_DistortionProfilingSetting_DEFINED
struct DistortionProfilingSetting__Class;
struct DistortionProfilingSetting {
    struct DistortionProfilingSetting__Class* klass;
    MonitorData* monitor;
    struct DistortionProfilingSetting__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DistortionProfilingSetting_FWDDECL)
#define IL2CPP_STRUCT_DistortionProfilingSetting_FWDDECL
#include <Modloader/app/structs/DistortionProfilingSetting__Class.h>
#endif
#undef IL2CPP_STRUCT_DistortionProfilingSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_DistortionProfilingSetting_DEFINED) && !defined(IL2CPP_STRUCT_DistortionProfilingSetting_FWDDECL)
#include <Modloader/app/structs/DistortionProfilingSetting.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DistortionProfilingSetting.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
