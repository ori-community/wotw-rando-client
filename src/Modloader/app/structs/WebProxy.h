#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WebProxy_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WebProxy_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebProxy_DEFINED)
#include <Modloader/app/structs/WebProxy__Fields.h>
#if defined(IL2CPP_STRUCT_WebProxy__Fields_DEFINED)
#define IL2CPP_STRUCT_WebProxy_DEFINED
struct WebProxy__Class;
struct WebProxy {
    struct WebProxy__Class* klass;
    MonitorData* monitor;
    struct WebProxy__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WebProxy_FWDDECL)
#define IL2CPP_STRUCT_WebProxy_FWDDECL
#include <Modloader/app/structs/WebProxy__Class.h>
#endif
#undef IL2CPP_STRUCT_WebProxy_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebProxy_DEFINED) && !defined(IL2CPP_STRUCT_WebProxy_FWDDECL)
#include <Modloader/app/structs/WebProxy.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WebProxy.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
