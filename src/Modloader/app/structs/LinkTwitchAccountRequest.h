#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LinkTwitchAccountRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LinkTwitchAccountRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_LinkTwitchAccountRequest_DEFINED)
#include <Modloader/app/structs/LinkTwitchAccountRequest__Fields.h>
#if defined(IL2CPP_STRUCT_LinkTwitchAccountRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_LinkTwitchAccountRequest_DEFINED
struct LinkTwitchAccountRequest__Class;
struct LinkTwitchAccountRequest {
    struct LinkTwitchAccountRequest__Class* klass;
    MonitorData* monitor;
    struct LinkTwitchAccountRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LinkTwitchAccountRequest_FWDDECL)
#define IL2CPP_STRUCT_LinkTwitchAccountRequest_FWDDECL
#include <Modloader/app/structs/LinkTwitchAccountRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_LinkTwitchAccountRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_LinkTwitchAccountRequest_DEFINED) && !defined(IL2CPP_STRUCT_LinkTwitchAccountRequest_FWDDECL)
#include <Modloader/app/structs/LinkTwitchAccountRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LinkTwitchAccountRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
