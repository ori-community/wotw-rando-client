#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Regex__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Regex__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Regex__StaticFields_DEFINED)
#include <Modloader/app/structs/TimeSpan.h>
#if defined(IL2CPP_STRUCT_TimeSpan_DEFINED)
#define IL2CPP_STRUCT_Regex__StaticFields_DEFINED
struct LinkedList_1_System_Text_RegularExpressions_CachedCodeEntry_;
struct Regex__StaticFields {
    struct TimeSpan MaximumMatchTimeout;
    struct TimeSpan InfiniteMatchTimeout;
    struct TimeSpan FallbackDefaultMatchTimeout;
    struct TimeSpan DefaultMatchTimeout;
    struct LinkedList_1_System_Text_RegularExpressions_CachedCodeEntry_* livecode;
    int32_t cacheSize;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Regex__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_Regex__StaticFields_FWDDECL
#include <Modloader/app/structs/LinkedList_1_System_Text_RegularExpressions_CachedCodeEntry_.h>
#endif
#undef IL2CPP_STRUCT_Regex__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Regex__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_Regex__StaticFields_FWDDECL)
#include <Modloader/app/structs/Regex__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Regex__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
