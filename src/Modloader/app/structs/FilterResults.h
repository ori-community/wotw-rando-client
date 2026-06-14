#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FilterResults_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FilterResults_INITIALIZING
#if !defined(IL2CPP_STRUCT_FilterResults_DEFINED)
#define IL2CPP_STRUCT_FilterResults_DEFINED
struct FilterResults {
    void* m_CullResults;
};
#endif
#if !defined(IL2CPP_STRUCT_FilterResults_FWDDECL)
#define IL2CPP_STRUCT_FilterResults_FWDDECL
#endif
#undef IL2CPP_STRUCT_FilterResults_INITIALIZING
#if !defined(IL2CPP_STRUCT_FilterResults_DEFINED) && !defined(IL2CPP_STRUCT_FilterResults_FWDDECL)
#include <Modloader/app/structs/FilterResults.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FilterResults.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
