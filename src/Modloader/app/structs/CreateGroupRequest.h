#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CreateGroupRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CreateGroupRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_CreateGroupRequest_DEFINED)
#include <Modloader/app/structs/CreateGroupRequest__Fields.h>
#if defined(IL2CPP_STRUCT_CreateGroupRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_CreateGroupRequest_DEFINED
struct CreateGroupRequest__Class;
struct CreateGroupRequest {
    struct CreateGroupRequest__Class* klass;
    MonitorData* monitor;
    struct CreateGroupRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CreateGroupRequest_FWDDECL)
#define IL2CPP_STRUCT_CreateGroupRequest_FWDDECL
#include <Modloader/app/structs/CreateGroupRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_CreateGroupRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_CreateGroupRequest_DEFINED) && !defined(IL2CPP_STRUCT_CreateGroupRequest_FWDDECL)
#include <Modloader/app/structs/CreateGroupRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CreateGroupRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
