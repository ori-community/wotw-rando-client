#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UnlinkCustomIDRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UnlinkCustomIDRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnlinkCustomIDRequest_DEFINED)
#include <Modloader/app/structs/UnlinkCustomIDRequest__Fields.h>
#if defined(IL2CPP_STRUCT_UnlinkCustomIDRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_UnlinkCustomIDRequest_DEFINED
struct UnlinkCustomIDRequest__Class;
struct UnlinkCustomIDRequest {
    struct UnlinkCustomIDRequest__Class* klass;
    MonitorData* monitor;
    struct UnlinkCustomIDRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UnlinkCustomIDRequest_FWDDECL)
#define IL2CPP_STRUCT_UnlinkCustomIDRequest_FWDDECL
#include <Modloader/app/structs/UnlinkCustomIDRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_UnlinkCustomIDRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnlinkCustomIDRequest_DEFINED) && !defined(IL2CPP_STRUCT_UnlinkCustomIDRequest_FWDDECL)
#include <Modloader/app/structs/UnlinkCustomIDRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UnlinkCustomIDRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
