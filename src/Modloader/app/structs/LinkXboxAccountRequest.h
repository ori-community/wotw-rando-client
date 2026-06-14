#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LinkXboxAccountRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LinkXboxAccountRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_LinkXboxAccountRequest_DEFINED)
#include <Modloader/app/structs/LinkXboxAccountRequest__Fields.h>
#if defined(IL2CPP_STRUCT_LinkXboxAccountRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_LinkXboxAccountRequest_DEFINED
struct LinkXboxAccountRequest__Class;
struct LinkXboxAccountRequest {
    struct LinkXboxAccountRequest__Class* klass;
    MonitorData* monitor;
    struct LinkXboxAccountRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LinkXboxAccountRequest_FWDDECL)
#define IL2CPP_STRUCT_LinkXboxAccountRequest_FWDDECL
#include <Modloader/app/structs/LinkXboxAccountRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_LinkXboxAccountRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_LinkXboxAccountRequest_DEFINED) && !defined(IL2CPP_STRUCT_LinkXboxAccountRequest_FWDDECL)
#include <Modloader/app/structs/LinkXboxAccountRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LinkXboxAccountRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
