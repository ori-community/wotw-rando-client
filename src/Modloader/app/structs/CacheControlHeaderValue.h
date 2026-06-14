#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CacheControlHeaderValue_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CacheControlHeaderValue_INITIALIZING
#if !defined(IL2CPP_STRUCT_CacheControlHeaderValue_DEFINED)
#include <Modloader/app/structs/CacheControlHeaderValue__Fields.h>
#if defined(IL2CPP_STRUCT_CacheControlHeaderValue__Fields_DEFINED)
#define IL2CPP_STRUCT_CacheControlHeaderValue_DEFINED
struct CacheControlHeaderValue__Class;
struct CacheControlHeaderValue {
    struct CacheControlHeaderValue__Class* klass;
    MonitorData* monitor;
    struct CacheControlHeaderValue__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CacheControlHeaderValue_FWDDECL)
#define IL2CPP_STRUCT_CacheControlHeaderValue_FWDDECL
#include <Modloader/app/structs/CacheControlHeaderValue__Class.h>
#endif
#undef IL2CPP_STRUCT_CacheControlHeaderValue_INITIALIZING
#if !defined(IL2CPP_STRUCT_CacheControlHeaderValue_DEFINED) && !defined(IL2CPP_STRUCT_CacheControlHeaderValue_FWDDECL)
#include <Modloader/app/structs/CacheControlHeaderValue.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CacheControlHeaderValue.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
