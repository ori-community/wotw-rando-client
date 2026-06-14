#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetUserInventoryRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetUserInventoryRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetUserInventoryRequest_DEFINED)
#include <Modloader/app/structs/GetUserInventoryRequest__Fields.h>
#if defined(IL2CPP_STRUCT_GetUserInventoryRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_GetUserInventoryRequest_DEFINED
struct GetUserInventoryRequest__Class;
struct GetUserInventoryRequest {
    struct GetUserInventoryRequest__Class* klass;
    MonitorData* monitor;
    struct GetUserInventoryRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetUserInventoryRequest_FWDDECL)
#define IL2CPP_STRUCT_GetUserInventoryRequest_FWDDECL
#include <Modloader/app/structs/GetUserInventoryRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_GetUserInventoryRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetUserInventoryRequest_DEFINED) && !defined(IL2CPP_STRUCT_GetUserInventoryRequest_FWDDECL)
#include <Modloader/app/structs/GetUserInventoryRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetUserInventoryRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
