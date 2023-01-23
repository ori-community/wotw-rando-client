#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraTargetsProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraTargetsProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraTargetsProvider_DEFINED)
#include <Modloader/app/structs/CameraTargetsProvider__Fields.h>
#if defined(IL2CPP_STRUCT_CameraTargetsProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_CameraTargetsProvider_DEFINED
struct CameraTargetsProvider__Class;
struct CameraTargetsProvider {
    struct CameraTargetsProvider__Class* klass;
    MonitorData* monitor;
    struct CameraTargetsProvider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraTargetsProvider_FWDDECL)
#define IL2CPP_STRUCT_CameraTargetsProvider_FWDDECL
#include <Modloader/app/structs/CameraTargetsProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_CameraTargetsProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraTargetsProvider_DEFINED) && !defined(IL2CPP_STRUCT_CameraTargetsProvider_FWDDECL)
#include <Modloader/app/structs/CameraTargetsProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraTargetsProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
