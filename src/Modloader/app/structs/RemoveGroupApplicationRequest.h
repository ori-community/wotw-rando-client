#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RemoveGroupApplicationRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RemoveGroupApplicationRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemoveGroupApplicationRequest_DEFINED)
#include <Modloader/app/structs/RemoveGroupApplicationRequest__Fields.h>
#if defined(IL2CPP_STRUCT_RemoveGroupApplicationRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_RemoveGroupApplicationRequest_DEFINED
struct RemoveGroupApplicationRequest__Class;
struct RemoveGroupApplicationRequest {
    struct RemoveGroupApplicationRequest__Class* klass;
    MonitorData* monitor;
    struct RemoveGroupApplicationRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RemoveGroupApplicationRequest_FWDDECL)
#define IL2CPP_STRUCT_RemoveGroupApplicationRequest_FWDDECL
#include <Modloader/app/structs/RemoveGroupApplicationRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_RemoveGroupApplicationRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemoveGroupApplicationRequest_DEFINED) && !defined(IL2CPP_STRUCT_RemoveGroupApplicationRequest_FWDDECL)
#include <Modloader/app/structs/RemoveGroupApplicationRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RemoveGroupApplicationRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
