#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CVRTrackedCamera_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CVRTrackedCamera_INITIALIZING
#if !defined(IL2CPP_STRUCT_CVRTrackedCamera_DEFINED)
#include <Modloader/app/structs/CVRTrackedCamera__Fields.h>
#if defined(IL2CPP_STRUCT_CVRTrackedCamera__Fields_DEFINED)
#define IL2CPP_STRUCT_CVRTrackedCamera_DEFINED
struct CVRTrackedCamera__Class;
struct CVRTrackedCamera {
    struct CVRTrackedCamera__Class* klass;
    MonitorData* monitor;
    struct CVRTrackedCamera__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CVRTrackedCamera_FWDDECL)
#define IL2CPP_STRUCT_CVRTrackedCamera_FWDDECL
#include <Modloader/app/structs/CVRTrackedCamera__Class.h>
#endif
#undef IL2CPP_STRUCT_CVRTrackedCamera_INITIALIZING
#if !defined(IL2CPP_STRUCT_CVRTrackedCamera_DEFINED) && !defined(IL2CPP_STRUCT_CVRTrackedCamera_FWDDECL)
#include <Modloader/app/structs/CVRTrackedCamera.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CVRTrackedCamera.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
