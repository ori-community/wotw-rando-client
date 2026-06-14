#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RequestCacheManager__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RequestCacheManager__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RequestCacheManager__StaticFields_DEFINED)
#define IL2CPP_STRUCT_RequestCacheManager__StaticFields_DEFINED
struct RequestCachingSectionInternal;
struct RequestCacheBinding;
struct RequestCacheManager__StaticFields {
    struct RequestCachingSectionInternal* s_CacheConfigSettings;
    struct RequestCacheBinding* s_BypassCacheBinding;
    struct RequestCacheBinding* s_DefaultGlobalBinding;
    struct RequestCacheBinding* s_DefaultHttpBinding;
    struct RequestCacheBinding* s_DefaultFtpBinding;
};
#endif
#if !defined(IL2CPP_STRUCT_RequestCacheManager__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_RequestCacheManager__StaticFields_FWDDECL
#include <Modloader/app/structs/RequestCacheBinding.h>
#include <Modloader/app/structs/RequestCachingSectionInternal.h>
#endif
#undef IL2CPP_STRUCT_RequestCacheManager__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RequestCacheManager__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_RequestCacheManager__StaticFields_FWDDECL)
#include <Modloader/app/structs/RequestCacheManager__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RequestCacheManager__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
