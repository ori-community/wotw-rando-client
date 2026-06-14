#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UpdateBansRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UpdateBansRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpdateBansRequest_DEFINED)
#include <Modloader/app/structs/UpdateBansRequest__Fields.h>
#if defined(IL2CPP_STRUCT_UpdateBansRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_UpdateBansRequest_DEFINED
struct UpdateBansRequest__Class;
struct UpdateBansRequest {
    struct UpdateBansRequest__Class* klass;
    MonitorData* monitor;
    struct UpdateBansRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UpdateBansRequest_FWDDECL)
#define IL2CPP_STRUCT_UpdateBansRequest_FWDDECL
#include <Modloader/app/structs/UpdateBansRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_UpdateBansRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpdateBansRequest_DEFINED) && !defined(IL2CPP_STRUCT_UpdateBansRequest_FWDDECL)
#include <Modloader/app/structs/UpdateBansRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UpdateBansRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
