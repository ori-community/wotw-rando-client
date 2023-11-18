#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FoxGrabber_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FoxGrabber_INITIALIZING
#if !defined(IL2CPP_STRUCT_FoxGrabber_DEFINED)
#include <Modloader/app/structs/FoxGrabber__Fields.h>
#if defined(IL2CPP_STRUCT_FoxGrabber__Fields_DEFINED)
#define IL2CPP_STRUCT_FoxGrabber_DEFINED
struct FoxGrabber__Class;
struct FoxGrabber {
    struct FoxGrabber__Class* klass;
    MonitorData* monitor;
    struct FoxGrabber__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FoxGrabber_FWDDECL)
#define IL2CPP_STRUCT_FoxGrabber_FWDDECL
#include <Modloader/app/structs/FoxGrabber__Class.h>
#endif
#undef IL2CPP_STRUCT_FoxGrabber_INITIALIZING
#if !defined(IL2CPP_STRUCT_FoxGrabber_DEFINED) && !defined(IL2CPP_STRUCT_FoxGrabber_FWDDECL)
#include <Modloader/app/structs/FoxGrabber.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FoxGrabber.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
