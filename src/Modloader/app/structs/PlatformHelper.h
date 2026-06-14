#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlatformHelper_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlatformHelper_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlatformHelper_DEFINED)
#define IL2CPP_STRUCT_PlatformHelper_DEFINED
struct PlatformHelper__Class;
struct PlatformHelper {
    struct PlatformHelper__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_PlatformHelper_FWDDECL)
#define IL2CPP_STRUCT_PlatformHelper_FWDDECL
#include <Modloader/app/structs/PlatformHelper__Class.h>
#endif
#undef IL2CPP_STRUCT_PlatformHelper_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlatformHelper_DEFINED) && !defined(IL2CPP_STRUCT_PlatformHelper_FWDDECL)
#include <Modloader/app/structs/PlatformHelper.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlatformHelper.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
