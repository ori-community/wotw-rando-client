#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StaticProxy_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StaticProxy_INITIALIZING
#if !defined(IL2CPP_STRUCT_StaticProxy_DEFINED)
#include <Modloader/app/structs/StaticProxy__Fields.h>
#if defined(IL2CPP_STRUCT_StaticProxy__Fields_DEFINED)
#define IL2CPP_STRUCT_StaticProxy_DEFINED
struct StaticProxy__Class;
struct StaticProxy {
    struct StaticProxy__Class* klass;
    MonitorData* monitor;
    struct StaticProxy__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StaticProxy_FWDDECL)
#define IL2CPP_STRUCT_StaticProxy_FWDDECL
#include <Modloader/app/structs/StaticProxy__Class.h>
#endif
#undef IL2CPP_STRUCT_StaticProxy_INITIALIZING
#if !defined(IL2CPP_STRUCT_StaticProxy_DEFINED) && !defined(IL2CPP_STRUCT_StaticProxy_FWDDECL)
#include <Modloader/app/structs/StaticProxy.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StaticProxy.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
