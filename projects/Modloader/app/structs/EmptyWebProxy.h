#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EmptyWebProxy_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EmptyWebProxy_INITIALIZING
#if !defined(IL2CPP_STRUCT_EmptyWebProxy_DEFINED)
#include <Modloader/app/structs/EmptyWebProxy__Fields.h>
#if defined(IL2CPP_STRUCT_EmptyWebProxy__Fields_DEFINED)
#define IL2CPP_STRUCT_EmptyWebProxy_DEFINED
struct EmptyWebProxy__Class;
struct EmptyWebProxy {
    struct EmptyWebProxy__Class* klass;
    MonitorData* monitor;
    struct EmptyWebProxy__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EmptyWebProxy_FWDDECL)
#define IL2CPP_STRUCT_EmptyWebProxy_FWDDECL
#include <Modloader/app/structs/EmptyWebProxy__Class.h>
#endif
#undef IL2CPP_STRUCT_EmptyWebProxy_INITIALIZING
#if !defined(IL2CPP_STRUCT_EmptyWebProxy_DEFINED) && !defined(IL2CPP_STRUCT_EmptyWebProxy_FWDDECL)
#include <Modloader/app/structs/EmptyWebProxy.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EmptyWebProxy.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
