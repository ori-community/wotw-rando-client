#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XRSessionSubsystem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XRSessionSubsystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_XRSessionSubsystem_DEFINED)
#include <Modloader/app/structs/XRSessionSubsystem__Fields.h>
#if defined(IL2CPP_STRUCT_XRSessionSubsystem__Fields_DEFINED)
#define IL2CPP_STRUCT_XRSessionSubsystem_DEFINED
struct XRSessionSubsystem__Class;
struct XRSessionSubsystem {
    struct XRSessionSubsystem__Class* klass;
    MonitorData* monitor;
    struct XRSessionSubsystem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XRSessionSubsystem_FWDDECL)
#define IL2CPP_STRUCT_XRSessionSubsystem_FWDDECL
#include <Modloader/app/structs/XRSessionSubsystem__Class.h>
#endif
#undef IL2CPP_STRUCT_XRSessionSubsystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_XRSessionSubsystem_DEFINED) && !defined(IL2CPP_STRUCT_XRSessionSubsystem_FWDDECL)
#include <Modloader/app/structs/XRSessionSubsystem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XRSessionSubsystem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
