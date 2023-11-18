#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StandaloneWebResources_IndexEntry_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StandaloneWebResources_IndexEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_StandaloneWebResources_IndexEntry_DEFINED)
#define IL2CPP_STRUCT_StandaloneWebResources_IndexEntry_DEFINED
struct String;
struct StandaloneWebResources_IndexEntry {
    struct String* name;
    int64_t offset;
    int32_t length;
};
#endif
#if !defined(IL2CPP_STRUCT_StandaloneWebResources_IndexEntry_FWDDECL)
#define IL2CPP_STRUCT_StandaloneWebResources_IndexEntry_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_StandaloneWebResources_IndexEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_StandaloneWebResources_IndexEntry_DEFINED) && !defined(IL2CPP_STRUCT_StandaloneWebResources_IndexEntry_FWDDECL)
#include <Modloader/app/structs/StandaloneWebResources_IndexEntry.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StandaloneWebResources_IndexEntry.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
