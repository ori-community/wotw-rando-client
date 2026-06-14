#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetCatalogItemsRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetCatalogItemsRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetCatalogItemsRequest_DEFINED)
#include <Modloader/app/structs/GetCatalogItemsRequest__Fields.h>
#if defined(IL2CPP_STRUCT_GetCatalogItemsRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_GetCatalogItemsRequest_DEFINED
struct GetCatalogItemsRequest__Class;
struct GetCatalogItemsRequest {
    struct GetCatalogItemsRequest__Class* klass;
    MonitorData* monitor;
    struct GetCatalogItemsRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetCatalogItemsRequest_FWDDECL)
#define IL2CPP_STRUCT_GetCatalogItemsRequest_FWDDECL
#include <Modloader/app/structs/GetCatalogItemsRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_GetCatalogItemsRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetCatalogItemsRequest_DEFINED) && !defined(IL2CPP_STRUCT_GetCatalogItemsRequest_FWDDECL)
#include <Modloader/app/structs/GetCatalogItemsRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetCatalogItemsRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
