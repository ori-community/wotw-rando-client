#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DeleteSharedGroupRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DeleteSharedGroupRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeleteSharedGroupRequest_DEFINED)
#include <Modloader/app/structs/DeleteSharedGroupRequest__Fields.h>
#if defined(IL2CPP_STRUCT_DeleteSharedGroupRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_DeleteSharedGroupRequest_DEFINED
struct DeleteSharedGroupRequest__Class;
struct DeleteSharedGroupRequest {
    struct DeleteSharedGroupRequest__Class* klass;
    MonitorData* monitor;
    struct DeleteSharedGroupRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DeleteSharedGroupRequest_FWDDECL)
#define IL2CPP_STRUCT_DeleteSharedGroupRequest_FWDDECL
#include <Modloader/app/structs/DeleteSharedGroupRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_DeleteSharedGroupRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeleteSharedGroupRequest_DEFINED) && !defined(IL2CPP_STRUCT_DeleteSharedGroupRequest_FWDDECL)
#include <Modloader/app/structs/DeleteSharedGroupRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DeleteSharedGroupRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
