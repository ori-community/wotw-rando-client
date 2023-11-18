#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetCharacterInventoryRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetCharacterInventoryRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetCharacterInventoryRequest_DEFINED)
#include <Modloader/app/structs/GetCharacterInventoryRequest__Fields.h>
#if defined(IL2CPP_STRUCT_GetCharacterInventoryRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_GetCharacterInventoryRequest_DEFINED
struct GetCharacterInventoryRequest__Class;
struct GetCharacterInventoryRequest {
    struct GetCharacterInventoryRequest__Class* klass;
    MonitorData* monitor;
    struct GetCharacterInventoryRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetCharacterInventoryRequest_FWDDECL)
#define IL2CPP_STRUCT_GetCharacterInventoryRequest_FWDDECL
#include <Modloader/app/structs/GetCharacterInventoryRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_GetCharacterInventoryRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetCharacterInventoryRequest_DEFINED) && !defined(IL2CPP_STRUCT_GetCharacterInventoryRequest_FWDDECL)
#include <Modloader/app/structs/GetCharacterInventoryRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetCharacterInventoryRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
