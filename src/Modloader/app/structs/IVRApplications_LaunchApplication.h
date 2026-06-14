#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IVRApplications_LaunchApplication_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IVRApplications_LaunchApplication_INITIALIZING
#if !defined(IL2CPP_STRUCT_IVRApplications_LaunchApplication_DEFINED)
#include <Modloader/app/structs/IVRApplications_LaunchApplication__Fields.h>
#if defined(IL2CPP_STRUCT_IVRApplications_LaunchApplication__Fields_DEFINED)
#define IL2CPP_STRUCT_IVRApplications_LaunchApplication_DEFINED
struct IVRApplications_LaunchApplication__Class;
struct IVRApplications_LaunchApplication {
    struct IVRApplications_LaunchApplication__Class* klass;
    MonitorData* monitor;
    struct IVRApplications_LaunchApplication__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IVRApplications_LaunchApplication_FWDDECL)
#define IL2CPP_STRUCT_IVRApplications_LaunchApplication_FWDDECL
#include <Modloader/app/structs/IVRApplications_LaunchApplication__Class.h>
#endif
#undef IL2CPP_STRUCT_IVRApplications_LaunchApplication_INITIALIZING
#if !defined(IL2CPP_STRUCT_IVRApplications_LaunchApplication_DEFINED) && !defined(IL2CPP_STRUCT_IVRApplications_LaunchApplication_FWDDECL)
#include <Modloader/app/structs/IVRApplications_LaunchApplication.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IVRApplications_LaunchApplication.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
