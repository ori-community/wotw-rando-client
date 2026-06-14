#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DefaultCameraProviderEntry_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DefaultCameraProviderEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_DefaultCameraProviderEntry_DEFINED)
#include <Modloader/app/structs/DefaultCameraProviderEntry__Fields.h>
#if defined(IL2CPP_STRUCT_DefaultCameraProviderEntry__Fields_DEFINED)
#define IL2CPP_STRUCT_DefaultCameraProviderEntry_DEFINED
struct DefaultCameraProviderEntry__Class;
struct DefaultCameraProviderEntry {
    struct DefaultCameraProviderEntry__Class* klass;
    MonitorData* monitor;
    struct DefaultCameraProviderEntry__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DefaultCameraProviderEntry_FWDDECL)
#define IL2CPP_STRUCT_DefaultCameraProviderEntry_FWDDECL
#include <Modloader/app/structs/DefaultCameraProviderEntry__Class.h>
#endif
#undef IL2CPP_STRUCT_DefaultCameraProviderEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_DefaultCameraProviderEntry_DEFINED) && !defined(IL2CPP_STRUCT_DefaultCameraProviderEntry_FWDDECL)
#include <Modloader/app/structs/DefaultCameraProviderEntry.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DefaultCameraProviderEntry.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
