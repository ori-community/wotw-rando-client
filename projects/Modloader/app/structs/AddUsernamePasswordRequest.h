#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AddUsernamePasswordRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AddUsernamePasswordRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_AddUsernamePasswordRequest_DEFINED)
#include <Modloader/app/structs/AddUsernamePasswordRequest__Fields.h>
#if defined(IL2CPP_STRUCT_AddUsernamePasswordRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_AddUsernamePasswordRequest_DEFINED
struct AddUsernamePasswordRequest__Class;
struct AddUsernamePasswordRequest {
    struct AddUsernamePasswordRequest__Class* klass;
    MonitorData* monitor;
    struct AddUsernamePasswordRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AddUsernamePasswordRequest_FWDDECL)
#define IL2CPP_STRUCT_AddUsernamePasswordRequest_FWDDECL
#include <Modloader/app/structs/AddUsernamePasswordRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_AddUsernamePasswordRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_AddUsernamePasswordRequest_DEFINED) && !defined(IL2CPP_STRUCT_AddUsernamePasswordRequest_FWDDECL)
#include <Modloader/app/structs/AddUsernamePasswordRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AddUsernamePasswordRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
