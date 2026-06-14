#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RequestCacheBinding_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RequestCacheBinding_INITIALIZING
#if !defined(IL2CPP_STRUCT_RequestCacheBinding_DEFINED)
#include <Modloader/app/structs/RequestCacheBinding__Fields.h>
#if defined(IL2CPP_STRUCT_RequestCacheBinding__Fields_DEFINED)
#define IL2CPP_STRUCT_RequestCacheBinding_DEFINED
struct RequestCacheBinding__Class;
struct RequestCacheBinding {
    struct RequestCacheBinding__Class* klass;
    MonitorData* monitor;
    struct RequestCacheBinding__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RequestCacheBinding_FWDDECL)
#define IL2CPP_STRUCT_RequestCacheBinding_FWDDECL
#include <Modloader/app/structs/RequestCacheBinding__Class.h>
#endif
#undef IL2CPP_STRUCT_RequestCacheBinding_INITIALIZING
#if !defined(IL2CPP_STRUCT_RequestCacheBinding_DEFINED) && !defined(IL2CPP_STRUCT_RequestCacheBinding_FWDDECL)
#include <Modloader/app/structs/RequestCacheBinding.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RequestCacheBinding.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
