#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SearchResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SearchResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_SearchResult_DEFINED)
#include <Modloader/app/structs/SearchResult__Fields.h>
#if defined(IL2CPP_STRUCT_SearchResult__Fields_DEFINED)
#define IL2CPP_STRUCT_SearchResult_DEFINED
struct SearchResult__Class;
struct SearchResult {
    struct SearchResult__Class* klass;
    MonitorData* monitor;
    struct SearchResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SearchResult_FWDDECL)
#define IL2CPP_STRUCT_SearchResult_FWDDECL
#include <Modloader/app/structs/SearchResult__Class.h>
#endif
#undef IL2CPP_STRUCT_SearchResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_SearchResult_DEFINED) && !defined(IL2CPP_STRUCT_SearchResult_FWDDECL)
#include <Modloader/app/structs/SearchResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SearchResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
