#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LinkOpenIdConnectRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LinkOpenIdConnectRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_LinkOpenIdConnectRequest_DEFINED)
#include <Modloader/app/structs/LinkOpenIdConnectRequest__Fields.h>
#if defined(IL2CPP_STRUCT_LinkOpenIdConnectRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_LinkOpenIdConnectRequest_DEFINED
struct LinkOpenIdConnectRequest__Class;
struct LinkOpenIdConnectRequest {
    struct LinkOpenIdConnectRequest__Class* klass;
    MonitorData* monitor;
    struct LinkOpenIdConnectRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LinkOpenIdConnectRequest_FWDDECL)
#define IL2CPP_STRUCT_LinkOpenIdConnectRequest_FWDDECL
#include <Modloader/app/structs/LinkOpenIdConnectRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_LinkOpenIdConnectRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_LinkOpenIdConnectRequest_DEFINED) && !defined(IL2CPP_STRUCT_LinkOpenIdConnectRequest_FWDDECL)
#include <Modloader/app/structs/LinkOpenIdConnectRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LinkOpenIdConnectRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
