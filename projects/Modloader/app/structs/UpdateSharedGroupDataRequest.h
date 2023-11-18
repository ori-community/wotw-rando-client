#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UpdateSharedGroupDataRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UpdateSharedGroupDataRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpdateSharedGroupDataRequest_DEFINED)
#include <Modloader/app/structs/UpdateSharedGroupDataRequest__Fields.h>
#if defined(IL2CPP_STRUCT_UpdateSharedGroupDataRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_UpdateSharedGroupDataRequest_DEFINED
struct UpdateSharedGroupDataRequest__Class;
struct UpdateSharedGroupDataRequest {
    struct UpdateSharedGroupDataRequest__Class* klass;
    MonitorData* monitor;
    struct UpdateSharedGroupDataRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UpdateSharedGroupDataRequest_FWDDECL)
#define IL2CPP_STRUCT_UpdateSharedGroupDataRequest_FWDDECL
#include <Modloader/app/structs/UpdateSharedGroupDataRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_UpdateSharedGroupDataRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpdateSharedGroupDataRequest_DEFINED) && !defined(IL2CPP_STRUCT_UpdateSharedGroupDataRequest_FWDDECL)
#include <Modloader/app/structs/UpdateSharedGroupDataRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UpdateSharedGroupDataRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
