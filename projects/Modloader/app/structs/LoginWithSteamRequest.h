#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LoginWithSteamRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LoginWithSteamRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoginWithSteamRequest_DEFINED)
#include <Modloader/app/structs/LoginWithSteamRequest__Fields.h>
#if defined(IL2CPP_STRUCT_LoginWithSteamRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_LoginWithSteamRequest_DEFINED
struct LoginWithSteamRequest__Class;
struct LoginWithSteamRequest {
    struct LoginWithSteamRequest__Class* klass;
    MonitorData* monitor;
    struct LoginWithSteamRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LoginWithSteamRequest_FWDDECL)
#define IL2CPP_STRUCT_LoginWithSteamRequest_FWDDECL
#include <Modloader/app/structs/LoginWithSteamRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_LoginWithSteamRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoginWithSteamRequest_DEFINED) && !defined(IL2CPP_STRUCT_LoginWithSteamRequest_FWDDECL)
#include <Modloader/app/structs/LoginWithSteamRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LoginWithSteamRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
