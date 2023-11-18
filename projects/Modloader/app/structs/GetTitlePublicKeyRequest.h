#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetTitlePublicKeyRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetTitlePublicKeyRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetTitlePublicKeyRequest_DEFINED)
#include <Modloader/app/structs/GetTitlePublicKeyRequest__Fields.h>
#if defined(IL2CPP_STRUCT_GetTitlePublicKeyRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_GetTitlePublicKeyRequest_DEFINED
struct GetTitlePublicKeyRequest__Class;
struct GetTitlePublicKeyRequest {
    struct GetTitlePublicKeyRequest__Class* klass;
    MonitorData* monitor;
    struct GetTitlePublicKeyRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetTitlePublicKeyRequest_FWDDECL)
#define IL2CPP_STRUCT_GetTitlePublicKeyRequest_FWDDECL
#include <Modloader/app/structs/GetTitlePublicKeyRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_GetTitlePublicKeyRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetTitlePublicKeyRequest_DEFINED) && !defined(IL2CPP_STRUCT_GetTitlePublicKeyRequest_FWDDECL)
#include <Modloader/app/structs/GetTitlePublicKeyRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetTitlePublicKeyRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
