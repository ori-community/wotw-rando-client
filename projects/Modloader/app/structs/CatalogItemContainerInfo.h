#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CatalogItemContainerInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CatalogItemContainerInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_CatalogItemContainerInfo_DEFINED)
#include <Modloader/app/structs/CatalogItemContainerInfo__Fields.h>
#if defined(IL2CPP_STRUCT_CatalogItemContainerInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_CatalogItemContainerInfo_DEFINED
struct CatalogItemContainerInfo__Class;
struct CatalogItemContainerInfo {
    struct CatalogItemContainerInfo__Class* klass;
    MonitorData* monitor;
    struct CatalogItemContainerInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CatalogItemContainerInfo_FWDDECL)
#define IL2CPP_STRUCT_CatalogItemContainerInfo_FWDDECL
#include <Modloader/app/structs/CatalogItemContainerInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_CatalogItemContainerInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_CatalogItemContainerInfo_DEFINED) && !defined(IL2CPP_STRUCT_CatalogItemContainerInfo_FWDDECL)
#include <Modloader/app/structs/CatalogItemContainerInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CatalogItemContainerInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
