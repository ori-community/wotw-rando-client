#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CatalogItemBundleInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CatalogItemBundleInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_CatalogItemBundleInfo_DEFINED)
#include <Modloader/app/structs/CatalogItemBundleInfo__Fields.h>
#if defined(IL2CPP_STRUCT_CatalogItemBundleInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_CatalogItemBundleInfo_DEFINED
struct CatalogItemBundleInfo__Class;
struct CatalogItemBundleInfo {
    struct CatalogItemBundleInfo__Class* klass;
    MonitorData* monitor;
    struct CatalogItemBundleInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CatalogItemBundleInfo_FWDDECL)
#define IL2CPP_STRUCT_CatalogItemBundleInfo_FWDDECL
#include <Modloader/app/structs/CatalogItemBundleInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_CatalogItemBundleInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_CatalogItemBundleInfo_DEFINED) && !defined(IL2CPP_STRUCT_CatalogItemBundleInfo_FWDDECL)
#include <Modloader/app/structs/CatalogItemBundleInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CatalogItemBundleInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
