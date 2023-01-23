#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CullingCategoryManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CullingCategoryManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_CullingCategoryManager_DEFINED)
#include <Modloader/app/structs/CullingCategoryManager__Fields.h>
#if defined(IL2CPP_STRUCT_CullingCategoryManager__Fields_DEFINED)
#define IL2CPP_STRUCT_CullingCategoryManager_DEFINED
struct CullingCategoryManager__Class;
struct CullingCategoryManager {
    struct CullingCategoryManager__Class* klass;
    MonitorData* monitor;
    struct CullingCategoryManager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CullingCategoryManager_FWDDECL)
#define IL2CPP_STRUCT_CullingCategoryManager_FWDDECL
#include <Modloader/app/structs/CullingCategoryManager__Class.h>
#endif
#undef IL2CPP_STRUCT_CullingCategoryManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_CullingCategoryManager_DEFINED) && !defined(IL2CPP_STRUCT_CullingCategoryManager_FWDDECL)
#include <Modloader/app/structs/CullingCategoryManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CullingCategoryManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
