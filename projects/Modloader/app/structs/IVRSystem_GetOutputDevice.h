#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IVRSystem_GetOutputDevice_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IVRSystem_GetOutputDevice_INITIALIZING
#if !defined(IL2CPP_STRUCT_IVRSystem_GetOutputDevice_DEFINED)
#include <Modloader/app/structs/IVRSystem_GetOutputDevice__Fields.h>
#if defined(IL2CPP_STRUCT_IVRSystem_GetOutputDevice__Fields_DEFINED)
#define IL2CPP_STRUCT_IVRSystem_GetOutputDevice_DEFINED
struct IVRSystem_GetOutputDevice__Class;
struct IVRSystem_GetOutputDevice {
    struct IVRSystem_GetOutputDevice__Class* klass;
    MonitorData* monitor;
    struct IVRSystem_GetOutputDevice__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IVRSystem_GetOutputDevice_FWDDECL)
#define IL2CPP_STRUCT_IVRSystem_GetOutputDevice_FWDDECL
#include <Modloader/app/structs/IVRSystem_GetOutputDevice__Class.h>
#endif
#undef IL2CPP_STRUCT_IVRSystem_GetOutputDevice_INITIALIZING
#if !defined(IL2CPP_STRUCT_IVRSystem_GetOutputDevice_DEFINED) && !defined(IL2CPP_STRUCT_IVRSystem_GetOutputDevice_FWDDECL)
#include <Modloader/app/structs/IVRSystem_GetOutputDevice.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IVRSystem_GetOutputDevice.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
