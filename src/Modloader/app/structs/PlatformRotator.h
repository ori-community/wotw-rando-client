#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlatformRotator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlatformRotator_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlatformRotator_DEFINED)
#include <Modloader/app/structs/PlatformRotator__Fields.h>
#if defined(IL2CPP_STRUCT_PlatformRotator__Fields_DEFINED)
#define IL2CPP_STRUCT_PlatformRotator_DEFINED
struct PlatformRotator__Class;
struct PlatformRotator {
    struct PlatformRotator__Class* klass;
    MonitorData* monitor;
    struct PlatformRotator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlatformRotator_FWDDECL)
#define IL2CPP_STRUCT_PlatformRotator_FWDDECL
#include <Modloader/app/structs/PlatformRotator__Class.h>
#endif
#undef IL2CPP_STRUCT_PlatformRotator_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlatformRotator_DEFINED) && !defined(IL2CPP_STRUCT_PlatformRotator_FWDDECL)
#include <Modloader/app/structs/PlatformRotator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlatformRotator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
