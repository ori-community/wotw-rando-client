#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CacheControlHeaderValue__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CacheControlHeaderValue__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CacheControlHeaderValue__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_TimeSpan_.h>
#if defined(IL2CPP_STRUCT_Nullable_1_TimeSpan__DEFINED)
#define IL2CPP_STRUCT_CacheControlHeaderValue__Fields_DEFINED
struct List_1_System_Net_Http_Headers_NameValueHeaderValue_;
struct List_1_System_String_;
struct __declspec(align(8)) CacheControlHeaderValue__Fields {
    struct List_1_System_Net_Http_Headers_NameValueHeaderValue_* extensions;
    struct List_1_System_String_* no_cache_headers;
    struct List_1_System_String_* private_headers;
    struct Nullable_1_TimeSpan_ _MaxAge_k__BackingField;
    bool _MaxStale_k__BackingField;
    struct Nullable_1_TimeSpan_ _MaxStaleLimit_k__BackingField;
    struct Nullable_1_TimeSpan_ _MinFresh_k__BackingField;
    bool _MustRevalidate_k__BackingField;
    bool _NoCache_k__BackingField;
    bool _NoStore_k__BackingField;
    bool _NoTransform_k__BackingField;
    bool _OnlyIfCached_k__BackingField;
    bool _Private_k__BackingField;
    bool _ProxyRevalidate_k__BackingField;
    bool _Public_k__BackingField;
    struct Nullable_1_TimeSpan_ _SharedMaxAge_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CacheControlHeaderValue__Fields_FWDDECL)
#define IL2CPP_STRUCT_CacheControlHeaderValue__Fields_FWDDECL
#include <Modloader/app/structs/List_1_System_Net_Http_Headers_NameValueHeaderValue_.h>
#include <Modloader/app/structs/List_1_System_String_.h>
#endif
#undef IL2CPP_STRUCT_CacheControlHeaderValue__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CacheControlHeaderValue__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CacheControlHeaderValue__Fields_FWDDECL)
#include <Modloader/app/structs/CacheControlHeaderValue__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CacheControlHeaderValue__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
