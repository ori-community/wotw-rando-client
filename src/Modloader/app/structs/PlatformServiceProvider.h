#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlatformServiceProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlatformServiceProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlatformServiceProvider_DEFINED)
#include <Modloader/app/structs/PlatformServiceProvider__Fields.h>
#if defined(IL2CPP_STRUCT_PlatformServiceProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_PlatformServiceProvider_DEFINED
struct PlatformServiceProvider__Class;
struct PlatformServiceProvider {
    struct PlatformServiceProvider__Class* klass;
    MonitorData* monitor;
    struct PlatformServiceProvider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlatformServiceProvider_FWDDECL)
#define IL2CPP_STRUCT_PlatformServiceProvider_FWDDECL
#include <Modloader/app/structs/PlatformServiceProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_PlatformServiceProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlatformServiceProvider_DEFINED) && !defined(IL2CPP_STRUCT_PlatformServiceProvider_FWDDECL)
#include <Modloader/app/structs/PlatformServiceProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlatformServiceProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
