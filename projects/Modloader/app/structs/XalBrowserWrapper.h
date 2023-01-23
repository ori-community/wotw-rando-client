#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XalBrowserWrapper_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XalBrowserWrapper_INITIALIZING
#if !defined(IL2CPP_STRUCT_XalBrowserWrapper_DEFINED)
#include <Modloader/app/structs/XalBrowserWrapper__Fields.h>
#if defined(IL2CPP_STRUCT_XalBrowserWrapper__Fields_DEFINED)
#define IL2CPP_STRUCT_XalBrowserWrapper_DEFINED
struct XalBrowserWrapper__Class;
struct XalBrowserWrapper {
    struct XalBrowserWrapper__Class* klass;
    MonitorData* monitor;
    struct XalBrowserWrapper__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XalBrowserWrapper_FWDDECL)
#define IL2CPP_STRUCT_XalBrowserWrapper_FWDDECL
#include <Modloader/app/structs/XalBrowserWrapper__Class.h>
#endif
#undef IL2CPP_STRUCT_XalBrowserWrapper_INITIALIZING
#if !defined(IL2CPP_STRUCT_XalBrowserWrapper_DEFINED) && !defined(IL2CPP_STRUCT_XalBrowserWrapper_FWDDECL)
#include <Modloader/app/structs/XalBrowserWrapper.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XalBrowserWrapper.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
