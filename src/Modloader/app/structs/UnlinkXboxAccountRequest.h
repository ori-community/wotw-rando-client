#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UnlinkXboxAccountRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UnlinkXboxAccountRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnlinkXboxAccountRequest_DEFINED)
#include <Modloader/app/structs/UnlinkXboxAccountRequest__Fields.h>
#if defined(IL2CPP_STRUCT_UnlinkXboxAccountRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_UnlinkXboxAccountRequest_DEFINED
struct UnlinkXboxAccountRequest__Class;
struct UnlinkXboxAccountRequest {
    struct UnlinkXboxAccountRequest__Class* klass;
    MonitorData* monitor;
    struct UnlinkXboxAccountRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UnlinkXboxAccountRequest_FWDDECL)
#define IL2CPP_STRUCT_UnlinkXboxAccountRequest_FWDDECL
#include <Modloader/app/structs/UnlinkXboxAccountRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_UnlinkXboxAccountRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnlinkXboxAccountRequest_DEFINED) && !defined(IL2CPP_STRUCT_UnlinkXboxAccountRequest_FWDDECL)
#include <Modloader/app/structs/UnlinkXboxAccountRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UnlinkXboxAccountRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
