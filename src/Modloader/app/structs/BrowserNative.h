#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BrowserNative_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BrowserNative_INITIALIZING
#if !defined(IL2CPP_STRUCT_BrowserNative_DEFINED)
#define IL2CPP_STRUCT_BrowserNative_DEFINED
struct BrowserNative__Class;
struct BrowserNative {
    struct BrowserNative__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_BrowserNative_FWDDECL)
#define IL2CPP_STRUCT_BrowserNative_FWDDECL
#include <Modloader/app/structs/BrowserNative__Class.h>
#endif
#undef IL2CPP_STRUCT_BrowserNative_INITIALIZING
#if !defined(IL2CPP_STRUCT_BrowserNative_DEFINED) && !defined(IL2CPP_STRUCT_BrowserNative_FWDDECL)
#include <Modloader/app/structs/BrowserNative.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BrowserNative.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
