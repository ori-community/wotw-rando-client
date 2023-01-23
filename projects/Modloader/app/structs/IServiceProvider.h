#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IServiceProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IServiceProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_IServiceProvider_DEFINED)
#define IL2CPP_STRUCT_IServiceProvider_DEFINED
struct IServiceProvider__Class;
struct IServiceProvider {
    struct IServiceProvider__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IServiceProvider_FWDDECL)
#define IL2CPP_STRUCT_IServiceProvider_FWDDECL
#include <Modloader/app/structs/IServiceProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_IServiceProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_IServiceProvider_DEFINED) && !defined(IL2CPP_STRUCT_IServiceProvider_FWDDECL)
#include <Modloader/app/structs/IServiceProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IServiceProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
