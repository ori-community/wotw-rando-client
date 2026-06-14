#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DirectProxy_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DirectProxy_INITIALIZING
#if !defined(IL2CPP_STRUCT_DirectProxy_DEFINED)
#include <Modloader/app/structs/DirectProxy__Fields.h>
#if defined(IL2CPP_STRUCT_DirectProxy__Fields_DEFINED)
#define IL2CPP_STRUCT_DirectProxy_DEFINED
struct DirectProxy__Class;
struct DirectProxy {
    struct DirectProxy__Class* klass;
    MonitorData* monitor;
    struct DirectProxy__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DirectProxy_FWDDECL)
#define IL2CPP_STRUCT_DirectProxy_FWDDECL
#include <Modloader/app/structs/DirectProxy__Class.h>
#endif
#undef IL2CPP_STRUCT_DirectProxy_INITIALIZING
#if !defined(IL2CPP_STRUCT_DirectProxy_DEFINED) && !defined(IL2CPP_STRUCT_DirectProxy_FWDDECL)
#include <Modloader/app/structs/DirectProxy.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DirectProxy.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
