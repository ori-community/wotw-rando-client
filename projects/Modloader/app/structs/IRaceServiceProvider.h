#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IRaceServiceProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IRaceServiceProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_IRaceServiceProvider_DEFINED)
#define IL2CPP_STRUCT_IRaceServiceProvider_DEFINED
struct IRaceServiceProvider__Class;
struct IRaceServiceProvider {
    struct IRaceServiceProvider__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IRaceServiceProvider_FWDDECL)
#define IL2CPP_STRUCT_IRaceServiceProvider_FWDDECL
#include <Modloader/app/structs/IRaceServiceProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_IRaceServiceProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_IRaceServiceProvider_DEFINED) && !defined(IL2CPP_STRUCT_IRaceServiceProvider_FWDDECL)
#include <Modloader/app/structs/IRaceServiceProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IRaceServiceProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
