#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CatalogItem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CatalogItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_CatalogItem_DEFINED)
#include <Modloader/app/structs/CatalogItem__Fields.h>
#if defined(IL2CPP_STRUCT_CatalogItem__Fields_DEFINED)
#define IL2CPP_STRUCT_CatalogItem_DEFINED
struct CatalogItem__Class;
struct CatalogItem {
    struct CatalogItem__Class* klass;
    MonitorData* monitor;
    struct CatalogItem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CatalogItem_FWDDECL)
#define IL2CPP_STRUCT_CatalogItem_FWDDECL
#include <Modloader/app/structs/CatalogItem__Class.h>
#endif
#undef IL2CPP_STRUCT_CatalogItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_CatalogItem_DEFINED) && !defined(IL2CPP_STRUCT_CatalogItem_FWDDECL)
#include <Modloader/app/structs/CatalogItem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CatalogItem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
