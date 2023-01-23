#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LoginWithTwitchRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LoginWithTwitchRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoginWithTwitchRequest_DEFINED)
#include <Modloader/app/structs/LoginWithTwitchRequest__Fields.h>
#if defined(IL2CPP_STRUCT_LoginWithTwitchRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_LoginWithTwitchRequest_DEFINED
struct LoginWithTwitchRequest__Class;
struct LoginWithTwitchRequest {
    struct LoginWithTwitchRequest__Class* klass;
    MonitorData* monitor;
    struct LoginWithTwitchRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LoginWithTwitchRequest_FWDDECL)
#define IL2CPP_STRUCT_LoginWithTwitchRequest_FWDDECL
#include <Modloader/app/structs/LoginWithTwitchRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_LoginWithTwitchRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoginWithTwitchRequest_DEFINED) && !defined(IL2CPP_STRUCT_LoginWithTwitchRequest_FWDDECL)
#include <Modloader/app/structs/LoginWithTwitchRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LoginWithTwitchRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
