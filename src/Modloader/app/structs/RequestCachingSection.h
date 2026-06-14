#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RequestCachingSection_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RequestCachingSection_INITIALIZING
#if !defined(IL2CPP_STRUCT_RequestCachingSection_DEFINED)
#define IL2CPP_STRUCT_RequestCachingSection_DEFINED
struct RequestCachingSection__Class;
struct RequestCachingSection {
    struct RequestCachingSection__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_RequestCachingSection_FWDDECL)
#define IL2CPP_STRUCT_RequestCachingSection_FWDDECL
#include <Modloader/app/structs/RequestCachingSection__Class.h>
#endif
#undef IL2CPP_STRUCT_RequestCachingSection_INITIALIZING
#if !defined(IL2CPP_STRUCT_RequestCachingSection_DEFINED) && !defined(IL2CPP_STRUCT_RequestCachingSection_FWDDECL)
#include <Modloader/app/structs/RequestCachingSection.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RequestCachingSection.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
