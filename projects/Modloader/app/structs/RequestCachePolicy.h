#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RequestCachePolicy_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RequestCachePolicy_INITIALIZING
#if !defined(IL2CPP_STRUCT_RequestCachePolicy_DEFINED)
#include <Modloader/app/structs/RequestCachePolicy__Fields.h>
#if defined(IL2CPP_STRUCT_RequestCachePolicy__Fields_DEFINED)
#define IL2CPP_STRUCT_RequestCachePolicy_DEFINED
struct RequestCachePolicy__Class;
struct RequestCachePolicy {
    struct RequestCachePolicy__Class* klass;
    MonitorData* monitor;
    struct RequestCachePolicy__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RequestCachePolicy_FWDDECL)
#define IL2CPP_STRUCT_RequestCachePolicy_FWDDECL
#include <Modloader/app/structs/RequestCachePolicy__Class.h>
#endif
#undef IL2CPP_STRUCT_RequestCachePolicy_INITIALIZING
#if !defined(IL2CPP_STRUCT_RequestCachePolicy_DEFINED) && !defined(IL2CPP_STRUCT_RequestCachePolicy_FWDDECL)
#include <Modloader/app/structs/RequestCachePolicy.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RequestCachePolicy.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
