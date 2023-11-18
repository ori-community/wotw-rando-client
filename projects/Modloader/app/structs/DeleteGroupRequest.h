#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DeleteGroupRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DeleteGroupRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeleteGroupRequest_DEFINED)
#include <Modloader/app/structs/DeleteGroupRequest__Fields.h>
#if defined(IL2CPP_STRUCT_DeleteGroupRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_DeleteGroupRequest_DEFINED
struct DeleteGroupRequest__Class;
struct DeleteGroupRequest {
    struct DeleteGroupRequest__Class* klass;
    MonitorData* monitor;
    struct DeleteGroupRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DeleteGroupRequest_FWDDECL)
#define IL2CPP_STRUCT_DeleteGroupRequest_FWDDECL
#include <Modloader/app/structs/DeleteGroupRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_DeleteGroupRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeleteGroupRequest_DEFINED) && !defined(IL2CPP_STRUCT_DeleteGroupRequest_FWDDECL)
#include <Modloader/app/structs/DeleteGroupRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DeleteGroupRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
