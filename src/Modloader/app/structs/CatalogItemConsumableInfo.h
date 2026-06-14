#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CatalogItemConsumableInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CatalogItemConsumableInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_CatalogItemConsumableInfo_DEFINED)
#include <Modloader/app/structs/CatalogItemConsumableInfo__Fields.h>
#if defined(IL2CPP_STRUCT_CatalogItemConsumableInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_CatalogItemConsumableInfo_DEFINED
struct CatalogItemConsumableInfo__Class;
struct CatalogItemConsumableInfo {
    struct CatalogItemConsumableInfo__Class* klass;
    MonitorData* monitor;
    struct CatalogItemConsumableInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CatalogItemConsumableInfo_FWDDECL)
#define IL2CPP_STRUCT_CatalogItemConsumableInfo_FWDDECL
#include <Modloader/app/structs/CatalogItemConsumableInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_CatalogItemConsumableInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_CatalogItemConsumableInfo_DEFINED) && !defined(IL2CPP_STRUCT_CatalogItemConsumableInfo_FWDDECL)
#include <Modloader/app/structs/CatalogItemConsumableInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CatalogItemConsumableInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
