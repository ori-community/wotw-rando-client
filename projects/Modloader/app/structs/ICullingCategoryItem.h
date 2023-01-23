#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ICullingCategoryItem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ICullingCategoryItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_ICullingCategoryItem_DEFINED)
#define IL2CPP_STRUCT_ICullingCategoryItem_DEFINED
struct ICullingCategoryItem__Class;
struct ICullingCategoryItem {
    struct ICullingCategoryItem__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ICullingCategoryItem_FWDDECL)
#define IL2CPP_STRUCT_ICullingCategoryItem_FWDDECL
#include <Modloader/app/structs/ICullingCategoryItem__Class.h>
#endif
#undef IL2CPP_STRUCT_ICullingCategoryItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_ICullingCategoryItem_DEFINED) && !defined(IL2CPP_STRUCT_ICullingCategoryItem_FWDDECL)
#include <Modloader/app/structs/ICullingCategoryItem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ICullingCategoryItem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
