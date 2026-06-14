#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UpdateUserInternalDataRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UpdateUserInternalDataRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpdateUserInternalDataRequest_DEFINED)
#include <Modloader/app/structs/UpdateUserInternalDataRequest__Fields.h>
#if defined(IL2CPP_STRUCT_UpdateUserInternalDataRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_UpdateUserInternalDataRequest_DEFINED
struct UpdateUserInternalDataRequest__Class;
struct UpdateUserInternalDataRequest {
    struct UpdateUserInternalDataRequest__Class* klass;
    MonitorData* monitor;
    struct UpdateUserInternalDataRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UpdateUserInternalDataRequest_FWDDECL)
#define IL2CPP_STRUCT_UpdateUserInternalDataRequest_FWDDECL
#include <Modloader/app/structs/UpdateUserInternalDataRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_UpdateUserInternalDataRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpdateUserInternalDataRequest_DEFINED) && !defined(IL2CPP_STRUCT_UpdateUserInternalDataRequest_FWDDECL)
#include <Modloader/app/structs/UpdateUserInternalDataRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UpdateUserInternalDataRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
