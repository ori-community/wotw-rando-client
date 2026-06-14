#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetCatalogItemsResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetCatalogItemsResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetCatalogItemsResult_DEFINED)
#include <Modloader/app/structs/GetCatalogItemsResult__Fields.h>
#if defined(IL2CPP_STRUCT_GetCatalogItemsResult__Fields_DEFINED)
#define IL2CPP_STRUCT_GetCatalogItemsResult_DEFINED
struct GetCatalogItemsResult__Class;
struct GetCatalogItemsResult {
    struct GetCatalogItemsResult__Class* klass;
    MonitorData* monitor;
    struct GetCatalogItemsResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetCatalogItemsResult_FWDDECL)
#define IL2CPP_STRUCT_GetCatalogItemsResult_FWDDECL
#include <Modloader/app/structs/GetCatalogItemsResult__Class.h>
#endif
#undef IL2CPP_STRUCT_GetCatalogItemsResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetCatalogItemsResult_DEFINED) && !defined(IL2CPP_STRUCT_GetCatalogItemsResult_FWDDECL)
#include <Modloader/app/structs/GetCatalogItemsResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetCatalogItemsResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
