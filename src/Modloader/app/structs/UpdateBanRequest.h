#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UpdateBanRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UpdateBanRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpdateBanRequest_DEFINED)
#include <Modloader/app/structs/UpdateBanRequest__Fields.h>
#if defined(IL2CPP_STRUCT_UpdateBanRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_UpdateBanRequest_DEFINED
struct UpdateBanRequest__Class;
struct UpdateBanRequest {
    struct UpdateBanRequest__Class* klass;
    MonitorData* monitor;
    struct UpdateBanRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UpdateBanRequest_FWDDECL)
#define IL2CPP_STRUCT_UpdateBanRequest_FWDDECL
#include <Modloader/app/structs/UpdateBanRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_UpdateBanRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpdateBanRequest_DEFINED) && !defined(IL2CPP_STRUCT_UpdateBanRequest_FWDDECL)
#include <Modloader/app/structs/UpdateBanRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UpdateBanRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
