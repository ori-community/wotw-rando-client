#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BrowserNative_ReadyFunc_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BrowserNative_ReadyFunc_INITIALIZING
#if !defined(IL2CPP_STRUCT_BrowserNative_ReadyFunc_DEFINED)
#include <Modloader/app/structs/BrowserNative_ReadyFunc__Fields.h>
#if defined(IL2CPP_STRUCT_BrowserNative_ReadyFunc__Fields_DEFINED)
#define IL2CPP_STRUCT_BrowserNative_ReadyFunc_DEFINED
struct BrowserNative_ReadyFunc__Class;
struct BrowserNative_ReadyFunc {
    struct BrowserNative_ReadyFunc__Class* klass;
    MonitorData* monitor;
    struct BrowserNative_ReadyFunc__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BrowserNative_ReadyFunc_FWDDECL)
#define IL2CPP_STRUCT_BrowserNative_ReadyFunc_FWDDECL
#include <Modloader/app/structs/BrowserNative_ReadyFunc__Class.h>
#endif
#undef IL2CPP_STRUCT_BrowserNative_ReadyFunc_INITIALIZING
#if !defined(IL2CPP_STRUCT_BrowserNative_ReadyFunc_DEFINED) && !defined(IL2CPP_STRUCT_BrowserNative_ReadyFunc_FWDDECL)
#include <Modloader/app/structs/BrowserNative_ReadyFunc.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BrowserNative_ReadyFunc.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
