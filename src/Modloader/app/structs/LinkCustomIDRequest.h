#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LinkCustomIDRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LinkCustomIDRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_LinkCustomIDRequest_DEFINED)
#include <Modloader/app/structs/LinkCustomIDRequest__Fields.h>
#if defined(IL2CPP_STRUCT_LinkCustomIDRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_LinkCustomIDRequest_DEFINED
struct LinkCustomIDRequest__Class;
struct LinkCustomIDRequest {
    struct LinkCustomIDRequest__Class* klass;
    MonitorData* monitor;
    struct LinkCustomIDRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LinkCustomIDRequest_FWDDECL)
#define IL2CPP_STRUCT_LinkCustomIDRequest_FWDDECL
#include <Modloader/app/structs/LinkCustomIDRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_LinkCustomIDRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_LinkCustomIDRequest_DEFINED) && !defined(IL2CPP_STRUCT_LinkCustomIDRequest_FWDDECL)
#include <Modloader/app/structs/LinkCustomIDRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LinkCustomIDRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
