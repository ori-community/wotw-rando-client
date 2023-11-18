#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XRDepthSubsystem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XRDepthSubsystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_XRDepthSubsystem_DEFINED)
#include <Modloader/app/structs/XRDepthSubsystem__Fields.h>
#if defined(IL2CPP_STRUCT_XRDepthSubsystem__Fields_DEFINED)
#define IL2CPP_STRUCT_XRDepthSubsystem_DEFINED
struct XRDepthSubsystem__Class;
struct XRDepthSubsystem {
    struct XRDepthSubsystem__Class* klass;
    MonitorData* monitor;
    struct XRDepthSubsystem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XRDepthSubsystem_FWDDECL)
#define IL2CPP_STRUCT_XRDepthSubsystem_FWDDECL
#include <Modloader/app/structs/XRDepthSubsystem__Class.h>
#endif
#undef IL2CPP_STRUCT_XRDepthSubsystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_XRDepthSubsystem_DEFINED) && !defined(IL2CPP_STRUCT_XRDepthSubsystem_FWDDECL)
#include <Modloader/app/structs/XRDepthSubsystem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XRDepthSubsystem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
