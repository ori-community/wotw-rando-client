#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UpdateGroupResponse_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UpdateGroupResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpdateGroupResponse_DEFINED)
#include <Modloader/app/structs/UpdateGroupResponse__Fields.h>
#if defined(IL2CPP_STRUCT_UpdateGroupResponse__Fields_DEFINED)
#define IL2CPP_STRUCT_UpdateGroupResponse_DEFINED
struct UpdateGroupResponse__Class;
struct UpdateGroupResponse {
    struct UpdateGroupResponse__Class* klass;
    MonitorData* monitor;
    struct UpdateGroupResponse__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UpdateGroupResponse_FWDDECL)
#define IL2CPP_STRUCT_UpdateGroupResponse_FWDDECL
#include <Modloader/app/structs/UpdateGroupResponse__Class.h>
#endif
#undef IL2CPP_STRUCT_UpdateGroupResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpdateGroupResponse_DEFINED) && !defined(IL2CPP_STRUCT_UpdateGroupResponse_FWDDECL)
#include <Modloader/app/structs/UpdateGroupResponse.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UpdateGroupResponse.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
