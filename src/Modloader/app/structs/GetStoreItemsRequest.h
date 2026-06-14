#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetStoreItemsRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetStoreItemsRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetStoreItemsRequest_DEFINED)
#include <Modloader/app/structs/GetStoreItemsRequest__Fields.h>
#if defined(IL2CPP_STRUCT_GetStoreItemsRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_GetStoreItemsRequest_DEFINED
struct GetStoreItemsRequest__Class;
struct GetStoreItemsRequest {
    struct GetStoreItemsRequest__Class* klass;
    MonitorData* monitor;
    struct GetStoreItemsRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetStoreItemsRequest_FWDDECL)
#define IL2CPP_STRUCT_GetStoreItemsRequest_FWDDECL
#include <Modloader/app/structs/GetStoreItemsRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_GetStoreItemsRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetStoreItemsRequest_DEFINED) && !defined(IL2CPP_STRUCT_GetStoreItemsRequest_FWDDECL)
#include <Modloader/app/structs/GetStoreItemsRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetStoreItemsRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
