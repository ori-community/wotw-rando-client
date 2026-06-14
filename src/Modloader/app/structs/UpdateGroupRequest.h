#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UpdateGroupRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UpdateGroupRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpdateGroupRequest_DEFINED)
#include <Modloader/app/structs/UpdateGroupRequest__Fields.h>
#if defined(IL2CPP_STRUCT_UpdateGroupRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_UpdateGroupRequest_DEFINED
struct UpdateGroupRequest__Class;
struct UpdateGroupRequest {
    struct UpdateGroupRequest__Class* klass;
    MonitorData* monitor;
    struct UpdateGroupRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UpdateGroupRequest_FWDDECL)
#define IL2CPP_STRUCT_UpdateGroupRequest_FWDDECL
#include <Modloader/app/structs/UpdateGroupRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_UpdateGroupRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpdateGroupRequest_DEFINED) && !defined(IL2CPP_STRUCT_UpdateGroupRequest_FWDDECL)
#include <Modloader/app/structs/UpdateGroupRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UpdateGroupRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
