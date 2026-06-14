#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XRDevice_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XRDevice_INITIALIZING
#if !defined(IL2CPP_STRUCT_XRDevice_DEFINED)
#define IL2CPP_STRUCT_XRDevice_DEFINED
struct XRDevice__Class;
struct XRDevice {
    struct XRDevice__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_XRDevice_FWDDECL)
#define IL2CPP_STRUCT_XRDevice_FWDDECL
#include <Modloader/app/structs/XRDevice__Class.h>
#endif
#undef IL2CPP_STRUCT_XRDevice_INITIALIZING
#if !defined(IL2CPP_STRUCT_XRDevice_DEFINED) && !defined(IL2CPP_STRUCT_XRDevice_FWDDECL)
#include <Modloader/app/structs/XRDevice.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XRDevice.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
