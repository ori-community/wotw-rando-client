#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ICullingCategoryManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ICullingCategoryManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_ICullingCategoryManager_DEFINED)
#define IL2CPP_STRUCT_ICullingCategoryManager_DEFINED
struct ICullingCategoryManager__Class;
struct ICullingCategoryManager {
    struct ICullingCategoryManager__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ICullingCategoryManager_FWDDECL)
#define IL2CPP_STRUCT_ICullingCategoryManager_FWDDECL
#include <Modloader/app/structs/ICullingCategoryManager__Class.h>
#endif
#undef IL2CPP_STRUCT_ICullingCategoryManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_ICullingCategoryManager_DEFINED) && !defined(IL2CPP_STRUCT_ICullingCategoryManager_FWDDECL)
#include <Modloader/app/structs/ICullingCategoryManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ICullingCategoryManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
