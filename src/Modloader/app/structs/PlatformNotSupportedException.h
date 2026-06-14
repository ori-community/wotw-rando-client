#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlatformNotSupportedException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlatformNotSupportedException_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlatformNotSupportedException_DEFINED)
#include <Modloader/app/structs/PlatformNotSupportedException__Fields.h>
#if defined(IL2CPP_STRUCT_PlatformNotSupportedException__Fields_DEFINED)
#define IL2CPP_STRUCT_PlatformNotSupportedException_DEFINED
struct PlatformNotSupportedException__Class;
struct PlatformNotSupportedException {
    struct PlatformNotSupportedException__Class* klass;
    MonitorData* monitor;
    struct PlatformNotSupportedException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlatformNotSupportedException_FWDDECL)
#define IL2CPP_STRUCT_PlatformNotSupportedException_FWDDECL
#include <Modloader/app/structs/PlatformNotSupportedException__Class.h>
#endif
#undef IL2CPP_STRUCT_PlatformNotSupportedException_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlatformNotSupportedException_DEFINED) && !defined(IL2CPP_STRUCT_PlatformNotSupportedException_FWDDECL)
#include <Modloader/app/structs/PlatformNotSupportedException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlatformNotSupportedException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
