#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RequestCacheValidator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RequestCacheValidator_INITIALIZING
#if !defined(IL2CPP_STRUCT_RequestCacheValidator_DEFINED)
#define IL2CPP_STRUCT_RequestCacheValidator_DEFINED
struct RequestCacheValidator__Class;
struct RequestCacheValidator {
    struct RequestCacheValidator__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_RequestCacheValidator_FWDDECL)
#define IL2CPP_STRUCT_RequestCacheValidator_FWDDECL
#include <Modloader/app/structs/RequestCacheValidator__Class.h>
#endif
#undef IL2CPP_STRUCT_RequestCacheValidator_INITIALIZING
#if !defined(IL2CPP_STRUCT_RequestCacheValidator_DEFINED) && !defined(IL2CPP_STRUCT_RequestCacheValidator_FWDDECL)
#include <Modloader/app/structs/RequestCacheValidator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RequestCacheValidator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
