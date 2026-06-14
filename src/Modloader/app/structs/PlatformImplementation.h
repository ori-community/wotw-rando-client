#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlatformImplementation_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlatformImplementation_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlatformImplementation_DEFINED)
#include <Modloader/app/structs/PlatformImplementation__Fields.h>
#if defined(IL2CPP_STRUCT_PlatformImplementation__Fields_DEFINED)
#define IL2CPP_STRUCT_PlatformImplementation_DEFINED
struct PlatformImplementation__Class;
struct PlatformImplementation {
    struct PlatformImplementation__Class* klass;
    MonitorData* monitor;
    struct PlatformImplementation__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlatformImplementation_FWDDECL)
#define IL2CPP_STRUCT_PlatformImplementation_FWDDECL
#include <Modloader/app/structs/PlatformImplementation__Class.h>
#endif
#undef IL2CPP_STRUCT_PlatformImplementation_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlatformImplementation_DEFINED) && !defined(IL2CPP_STRUCT_PlatformImplementation_FWDDECL)
#include <Modloader/app/structs/PlatformImplementation.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlatformImplementation.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
