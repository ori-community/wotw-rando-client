#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RemovePlayerTagRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RemovePlayerTagRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemovePlayerTagRequest_DEFINED)
#include <Modloader/app/structs/RemovePlayerTagRequest__Fields.h>
#if defined(IL2CPP_STRUCT_RemovePlayerTagRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_RemovePlayerTagRequest_DEFINED
struct RemovePlayerTagRequest__Class;
struct RemovePlayerTagRequest {
    struct RemovePlayerTagRequest__Class* klass;
    MonitorData* monitor;
    struct RemovePlayerTagRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RemovePlayerTagRequest_FWDDECL)
#define IL2CPP_STRUCT_RemovePlayerTagRequest_FWDDECL
#include <Modloader/app/structs/RemovePlayerTagRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_RemovePlayerTagRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemovePlayerTagRequest_DEFINED) && !defined(IL2CPP_STRUCT_RemovePlayerTagRequest_FWDDECL)
#include <Modloader/app/structs/RemovePlayerTagRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RemovePlayerTagRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
