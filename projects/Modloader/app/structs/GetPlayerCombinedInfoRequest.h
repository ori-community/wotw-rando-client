#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetPlayerCombinedInfoRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetPlayerCombinedInfoRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetPlayerCombinedInfoRequest_DEFINED)
#include <Modloader/app/structs/GetPlayerCombinedInfoRequest__Fields.h>
#if defined(IL2CPP_STRUCT_GetPlayerCombinedInfoRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_GetPlayerCombinedInfoRequest_DEFINED
struct GetPlayerCombinedInfoRequest__Class;
struct GetPlayerCombinedInfoRequest {
    struct GetPlayerCombinedInfoRequest__Class* klass;
    MonitorData* monitor;
    struct GetPlayerCombinedInfoRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetPlayerCombinedInfoRequest_FWDDECL)
#define IL2CPP_STRUCT_GetPlayerCombinedInfoRequest_FWDDECL
#include <Modloader/app/structs/GetPlayerCombinedInfoRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_GetPlayerCombinedInfoRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetPlayerCombinedInfoRequest_DEFINED) && !defined(IL2CPP_STRUCT_GetPlayerCombinedInfoRequest_FWDDECL)
#include <Modloader/app/structs/GetPlayerCombinedInfoRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetPlayerCombinedInfoRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
