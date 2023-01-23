#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HttpRequestCacheLevel__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HttpRequestCacheLevel__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpRequestCacheLevel__Enum_DEFINED)
#define IL2CPP_STRUCT_HttpRequestCacheLevel__Enum_DEFINED
enum class HttpRequestCacheLevel__Enum : int32_t {
    Default = 0x00000000,
    BypassCache = 0x00000001,
    CacheOnly = 0x00000002,
    CacheIfAvailable = 0x00000003,
    Revalidate = 0x00000004,
    Reload = 0x00000005,
    NoCacheNoStore = 0x00000006,
    CacheOrNextCacheOnly = 0x00000007,
    Refresh = 0x00000008,
};
#endif
#if !defined(IL2CPP_STRUCT_HttpRequestCacheLevel__Enum_FWDDECL)
#define IL2CPP_STRUCT_HttpRequestCacheLevel__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_HttpRequestCacheLevel__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpRequestCacheLevel__Enum_DEFINED) && !defined(IL2CPP_STRUCT_HttpRequestCacheLevel__Enum_FWDDECL)
#include <Modloader/app/structs/HttpRequestCacheLevel__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HttpRequestCacheLevel__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
