#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RequestCache_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RequestCache_INITIALIZING
#if !defined(IL2CPP_STRUCT_RequestCache_DEFINED)
#include <Modloader/app/structs/RequestCache__Fields.h>
#if defined(IL2CPP_STRUCT_RequestCache__Fields_DEFINED)
#define IL2CPP_STRUCT_RequestCache_DEFINED
struct RequestCache__Class;
struct RequestCache {
    struct RequestCache__Class* klass;
    MonitorData* monitor;
    struct RequestCache__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RequestCache_FWDDECL)
#define IL2CPP_STRUCT_RequestCache_FWDDECL
#include <Modloader/app/structs/RequestCache__Class.h>
#endif
#undef IL2CPP_STRUCT_RequestCache_INITIALIZING
#if !defined(IL2CPP_STRUCT_RequestCache_DEFINED) && !defined(IL2CPP_STRUCT_RequestCache_FWDDECL)
#include <Modloader/app/structs/RequestCache.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RequestCache.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
