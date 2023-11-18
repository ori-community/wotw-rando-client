#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OpenVRInterop_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OpenVRInterop_INITIALIZING
#if !defined(IL2CPP_STRUCT_OpenVRInterop_DEFINED)
#define IL2CPP_STRUCT_OpenVRInterop_DEFINED
struct OpenVRInterop__Class;
struct OpenVRInterop {
    struct OpenVRInterop__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_OpenVRInterop_FWDDECL)
#define IL2CPP_STRUCT_OpenVRInterop_FWDDECL
#include <Modloader/app/structs/OpenVRInterop__Class.h>
#endif
#undef IL2CPP_STRUCT_OpenVRInterop_INITIALIZING
#if !defined(IL2CPP_STRUCT_OpenVRInterop_DEFINED) && !defined(IL2CPP_STRUCT_OpenVRInterop_FWDDECL)
#include <Modloader/app/structs/OpenVRInterop.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OpenVRInterop.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
