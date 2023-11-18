#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BrowserNative_MessageFunc_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BrowserNative_MessageFunc_INITIALIZING
#if !defined(IL2CPP_STRUCT_BrowserNative_MessageFunc_DEFINED)
#include <Modloader/app/structs/BrowserNative_MessageFunc__Fields.h>
#if defined(IL2CPP_STRUCT_BrowserNative_MessageFunc__Fields_DEFINED)
#define IL2CPP_STRUCT_BrowserNative_MessageFunc_DEFINED
struct BrowserNative_MessageFunc__Class;
struct BrowserNative_MessageFunc {
    struct BrowserNative_MessageFunc__Class* klass;
    MonitorData* monitor;
    struct BrowserNative_MessageFunc__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BrowserNative_MessageFunc_FWDDECL)
#define IL2CPP_STRUCT_BrowserNative_MessageFunc_FWDDECL
#include <Modloader/app/structs/BrowserNative_MessageFunc__Class.h>
#endif
#undef IL2CPP_STRUCT_BrowserNative_MessageFunc_INITIALIZING
#if !defined(IL2CPP_STRUCT_BrowserNative_MessageFunc_DEFINED) && !defined(IL2CPP_STRUCT_BrowserNative_MessageFunc_FWDDECL)
#include <Modloader/app/structs/BrowserNative_MessageFunc.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BrowserNative_MessageFunc.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
