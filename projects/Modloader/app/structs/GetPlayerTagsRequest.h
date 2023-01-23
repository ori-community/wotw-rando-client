#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetPlayerTagsRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetPlayerTagsRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetPlayerTagsRequest_DEFINED)
#include <Modloader/app/structs/GetPlayerTagsRequest__Fields.h>
#if defined(IL2CPP_STRUCT_GetPlayerTagsRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_GetPlayerTagsRequest_DEFINED
struct GetPlayerTagsRequest__Class;
struct GetPlayerTagsRequest {
    struct GetPlayerTagsRequest__Class* klass;
    MonitorData* monitor;
    struct GetPlayerTagsRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetPlayerTagsRequest_FWDDECL)
#define IL2CPP_STRUCT_GetPlayerTagsRequest_FWDDECL
#include <Modloader/app/structs/GetPlayerTagsRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_GetPlayerTagsRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetPlayerTagsRequest_DEFINED) && !defined(IL2CPP_STRUCT_GetPlayerTagsRequest_FWDDECL)
#include <Modloader/app/structs/GetPlayerTagsRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetPlayerTagsRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
