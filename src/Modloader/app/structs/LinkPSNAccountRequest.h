#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LinkPSNAccountRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LinkPSNAccountRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_LinkPSNAccountRequest_DEFINED)
#include <Modloader/app/structs/LinkPSNAccountRequest__Fields.h>
#if defined(IL2CPP_STRUCT_LinkPSNAccountRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_LinkPSNAccountRequest_DEFINED
struct LinkPSNAccountRequest__Class;
struct LinkPSNAccountRequest {
    struct LinkPSNAccountRequest__Class* klass;
    MonitorData* monitor;
    struct LinkPSNAccountRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LinkPSNAccountRequest_FWDDECL)
#define IL2CPP_STRUCT_LinkPSNAccountRequest_FWDDECL
#include <Modloader/app/structs/LinkPSNAccountRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_LinkPSNAccountRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_LinkPSNAccountRequest_DEFINED) && !defined(IL2CPP_STRUCT_LinkPSNAccountRequest_FWDDECL)
#include <Modloader/app/structs/LinkPSNAccountRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LinkPSNAccountRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
