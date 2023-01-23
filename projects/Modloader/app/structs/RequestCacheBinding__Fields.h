#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RequestCacheBinding__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RequestCacheBinding__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RequestCacheBinding__Fields_DEFINED)
#define IL2CPP_STRUCT_RequestCacheBinding__Fields_DEFINED
struct RequestCache;
struct RequestCacheValidator;
struct RequestCachePolicy;
struct __declspec(align(8)) RequestCacheBinding__Fields {
    struct RequestCache* m_RequestCache;
    struct RequestCacheValidator* m_CacheValidator;
    struct RequestCachePolicy* m_Policy;
};
#endif
#if !defined(IL2CPP_STRUCT_RequestCacheBinding__Fields_FWDDECL)
#define IL2CPP_STRUCT_RequestCacheBinding__Fields_FWDDECL
#include <Modloader/app/structs/RequestCache.h>
#include <Modloader/app/structs/RequestCachePolicy.h>
#include <Modloader/app/structs/RequestCacheValidator.h>
#endif
#undef IL2CPP_STRUCT_RequestCacheBinding__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RequestCacheBinding__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RequestCacheBinding__Fields_FWDDECL)
#include <Modloader/app/structs/RequestCacheBinding__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RequestCacheBinding__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
