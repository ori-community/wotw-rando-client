#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UpdateUserDataRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UpdateUserDataRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpdateUserDataRequest_DEFINED)
#include <Modloader/app/structs/UpdateUserDataRequest__Fields.h>
#if defined(IL2CPP_STRUCT_UpdateUserDataRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_UpdateUserDataRequest_DEFINED
struct UpdateUserDataRequest__Class;
struct UpdateUserDataRequest {
    struct UpdateUserDataRequest__Class* klass;
    MonitorData* monitor;
    struct UpdateUserDataRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UpdateUserDataRequest_FWDDECL)
#define IL2CPP_STRUCT_UpdateUserDataRequest_FWDDECL
#include <Modloader/app/structs/UpdateUserDataRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_UpdateUserDataRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpdateUserDataRequest_DEFINED) && !defined(IL2CPP_STRUCT_UpdateUserDataRequest_FWDDECL)
#include <Modloader/app/structs/UpdateUserDataRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UpdateUserDataRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
