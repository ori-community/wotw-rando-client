#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ICullingCategoryManager__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ICullingCategoryManager__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ICullingCategoryManager__VTable_DEFINED)
#define IL2CPP_STRUCT_ICullingCategoryManager__VTable_DEFINED
struct ICullingCategoryManager__VTable {
    VirtualInvokeData get_Parameters;
    VirtualInvokeData OnPreCull;
    VirtualInvokeData OnResultsReady;
    VirtualInvokeData OnPostCull;
};
#endif
#if !defined(IL2CPP_STRUCT_ICullingCategoryManager__VTable_FWDDECL)
#define IL2CPP_STRUCT_ICullingCategoryManager__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_ICullingCategoryManager__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ICullingCategoryManager__VTable_DEFINED) && !defined(IL2CPP_STRUCT_ICullingCategoryManager__VTable_FWDDECL)
#include <Modloader/app/structs/ICullingCategoryManager__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ICullingCategoryManager__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
