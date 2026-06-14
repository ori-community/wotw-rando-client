#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RealProxy_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RealProxy_INITIALIZING
#if !defined(IL2CPP_STRUCT_RealProxy_DEFINED)
#include <Modloader/app/structs/RealProxy__Fields.h>
#if defined(IL2CPP_STRUCT_RealProxy__Fields_DEFINED)
#define IL2CPP_STRUCT_RealProxy_DEFINED
struct RealProxy__Class;
struct RealProxy {
    struct RealProxy__Class* klass;
    MonitorData* monitor;
    struct RealProxy__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RealProxy_FWDDECL)
#define IL2CPP_STRUCT_RealProxy_FWDDECL
#include <Modloader/app/structs/RealProxy__Class.h>
#endif
#undef IL2CPP_STRUCT_RealProxy_INITIALIZING
#if !defined(IL2CPP_STRUCT_RealProxy_DEFINED) && !defined(IL2CPP_STRUCT_RealProxy_FWDDECL)
#include <Modloader/app/structs/RealProxy.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RealProxy.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
