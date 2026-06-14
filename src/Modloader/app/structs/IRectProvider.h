#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IRectProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IRectProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_IRectProvider_DEFINED)
#define IL2CPP_STRUCT_IRectProvider_DEFINED
struct IRectProvider__Class;
struct IRectProvider {
    struct IRectProvider__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IRectProvider_FWDDECL)
#define IL2CPP_STRUCT_IRectProvider_FWDDECL
#include <Modloader/app/structs/IRectProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_IRectProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_IRectProvider_DEFINED) && !defined(IL2CPP_STRUCT_IRectProvider_FWDDECL)
#include <Modloader/app/structs/IRectProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IRectProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
