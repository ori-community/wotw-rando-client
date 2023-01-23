#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XRReferencePointSubsystem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XRReferencePointSubsystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_XRReferencePointSubsystem_DEFINED)
#include <Modloader/app/structs/XRReferencePointSubsystem__Fields.h>
#if defined(IL2CPP_STRUCT_XRReferencePointSubsystem__Fields_DEFINED)
#define IL2CPP_STRUCT_XRReferencePointSubsystem_DEFINED
struct XRReferencePointSubsystem__Class;
struct XRReferencePointSubsystem {
    struct XRReferencePointSubsystem__Class* klass;
    MonitorData* monitor;
    struct XRReferencePointSubsystem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XRReferencePointSubsystem_FWDDECL)
#define IL2CPP_STRUCT_XRReferencePointSubsystem_FWDDECL
#include <Modloader/app/structs/XRReferencePointSubsystem__Class.h>
#endif
#undef IL2CPP_STRUCT_XRReferencePointSubsystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_XRReferencePointSubsystem_DEFINED) && !defined(IL2CPP_STRUCT_XRReferencePointSubsystem_FWDDECL)
#include <Modloader/app/structs/XRReferencePointSubsystem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XRReferencePointSubsystem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
