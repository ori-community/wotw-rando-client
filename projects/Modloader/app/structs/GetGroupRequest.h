#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetGroupRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetGroupRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetGroupRequest_DEFINED)
#include <Modloader/app/structs/GetGroupRequest__Fields.h>
#if defined(IL2CPP_STRUCT_GetGroupRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_GetGroupRequest_DEFINED
struct GetGroupRequest__Class;
struct GetGroupRequest {
    struct GetGroupRequest__Class* klass;
    MonitorData* monitor;
    struct GetGroupRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetGroupRequest_FWDDECL)
#define IL2CPP_STRUCT_GetGroupRequest_FWDDECL
#include <Modloader/app/structs/GetGroupRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_GetGroupRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetGroupRequest_DEFINED) && !defined(IL2CPP_STRUCT_GetGroupRequest_FWDDECL)
#include <Modloader/app/structs/GetGroupRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetGroupRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
