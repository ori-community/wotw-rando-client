#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetGroupResponse_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetGroupResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetGroupResponse_DEFINED)
#include <Modloader/app/structs/GetGroupResponse__Fields.h>
#if defined(IL2CPP_STRUCT_GetGroupResponse__Fields_DEFINED)
#define IL2CPP_STRUCT_GetGroupResponse_DEFINED
struct GetGroupResponse__Class;
struct GetGroupResponse {
    struct GetGroupResponse__Class* klass;
    MonitorData* monitor;
    struct GetGroupResponse__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetGroupResponse_FWDDECL)
#define IL2CPP_STRUCT_GetGroupResponse_FWDDECL
#include <Modloader/app/structs/GetGroupResponse__Class.h>
#endif
#undef IL2CPP_STRUCT_GetGroupResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetGroupResponse_DEFINED) && !defined(IL2CPP_STRUCT_GetGroupResponse_FWDDECL)
#include <Modloader/app/structs/GetGroupResponse.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetGroupResponse.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
