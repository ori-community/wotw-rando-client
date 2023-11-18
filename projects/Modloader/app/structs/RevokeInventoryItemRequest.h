#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RevokeInventoryItemRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RevokeInventoryItemRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_RevokeInventoryItemRequest_DEFINED)
#include <Modloader/app/structs/RevokeInventoryItemRequest__Fields.h>
#if defined(IL2CPP_STRUCT_RevokeInventoryItemRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_RevokeInventoryItemRequest_DEFINED
struct RevokeInventoryItemRequest__Class;
struct RevokeInventoryItemRequest {
    struct RevokeInventoryItemRequest__Class* klass;
    MonitorData* monitor;
    struct RevokeInventoryItemRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RevokeInventoryItemRequest_FWDDECL)
#define IL2CPP_STRUCT_RevokeInventoryItemRequest_FWDDECL
#include <Modloader/app/structs/RevokeInventoryItemRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_RevokeInventoryItemRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_RevokeInventoryItemRequest_DEFINED) && !defined(IL2CPP_STRUCT_RevokeInventoryItemRequest_FWDDECL)
#include <Modloader/app/structs/RevokeInventoryItemRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RevokeInventoryItemRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
