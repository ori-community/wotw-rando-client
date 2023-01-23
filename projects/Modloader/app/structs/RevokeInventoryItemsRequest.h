#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RevokeInventoryItemsRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RevokeInventoryItemsRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_RevokeInventoryItemsRequest_DEFINED)
#include <Modloader/app/structs/RevokeInventoryItemsRequest__Fields.h>
#if defined(IL2CPP_STRUCT_RevokeInventoryItemsRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_RevokeInventoryItemsRequest_DEFINED
struct RevokeInventoryItemsRequest__Class;
struct RevokeInventoryItemsRequest {
    struct RevokeInventoryItemsRequest__Class* klass;
    MonitorData* monitor;
    struct RevokeInventoryItemsRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RevokeInventoryItemsRequest_FWDDECL)
#define IL2CPP_STRUCT_RevokeInventoryItemsRequest_FWDDECL
#include <Modloader/app/structs/RevokeInventoryItemsRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_RevokeInventoryItemsRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_RevokeInventoryItemsRequest_DEFINED) && !defined(IL2CPP_STRUCT_RevokeInventoryItemsRequest_FWDDECL)
#include <Modloader/app/structs/RevokeInventoryItemsRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RevokeInventoryItemsRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
