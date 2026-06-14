#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CreateSharedGroupRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CreateSharedGroupRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_CreateSharedGroupRequest_DEFINED)
#include <Modloader/app/structs/CreateSharedGroupRequest__Fields.h>
#if defined(IL2CPP_STRUCT_CreateSharedGroupRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_CreateSharedGroupRequest_DEFINED
struct CreateSharedGroupRequest__Class;
struct CreateSharedGroupRequest {
    struct CreateSharedGroupRequest__Class* klass;
    MonitorData* monitor;
    struct CreateSharedGroupRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CreateSharedGroupRequest_FWDDECL)
#define IL2CPP_STRUCT_CreateSharedGroupRequest_FWDDECL
#include <Modloader/app/structs/CreateSharedGroupRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_CreateSharedGroupRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_CreateSharedGroupRequest_DEFINED) && !defined(IL2CPP_STRUCT_CreateSharedGroupRequest_FWDDECL)
#include <Modloader/app/structs/CreateSharedGroupRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CreateSharedGroupRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
