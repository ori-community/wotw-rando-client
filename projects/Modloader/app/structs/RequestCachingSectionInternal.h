#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RequestCachingSectionInternal_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RequestCachingSectionInternal_INITIALIZING
#if !defined(IL2CPP_STRUCT_RequestCachingSectionInternal_DEFINED)
#include <Modloader/app/structs/RequestCachingSectionInternal__Fields.h>
#if defined(IL2CPP_STRUCT_RequestCachingSectionInternal__Fields_DEFINED)
#define IL2CPP_STRUCT_RequestCachingSectionInternal_DEFINED
struct RequestCachingSectionInternal__Class;
struct RequestCachingSectionInternal {
    struct RequestCachingSectionInternal__Class* klass;
    MonitorData* monitor;
    struct RequestCachingSectionInternal__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RequestCachingSectionInternal_FWDDECL)
#define IL2CPP_STRUCT_RequestCachingSectionInternal_FWDDECL
#include <Modloader/app/structs/RequestCachingSectionInternal__Class.h>
#endif
#undef IL2CPP_STRUCT_RequestCachingSectionInternal_INITIALIZING
#if !defined(IL2CPP_STRUCT_RequestCachingSectionInternal_DEFINED) && !defined(IL2CPP_STRUCT_RequestCachingSectionInternal_FWDDECL)
#include <Modloader/app/structs/RequestCachingSectionInternal.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RequestCachingSectionInternal.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
