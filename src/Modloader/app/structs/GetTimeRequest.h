#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetTimeRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetTimeRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetTimeRequest_DEFINED)
#include <Modloader/app/structs/GetTimeRequest__Fields.h>
#if defined(IL2CPP_STRUCT_GetTimeRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_GetTimeRequest_DEFINED
struct GetTimeRequest__Class;
struct GetTimeRequest {
    struct GetTimeRequest__Class* klass;
    MonitorData* monitor;
    struct GetTimeRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetTimeRequest_FWDDECL)
#define IL2CPP_STRUCT_GetTimeRequest_FWDDECL
#include <Modloader/app/structs/GetTimeRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_GetTimeRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetTimeRequest_DEFINED) && !defined(IL2CPP_STRUCT_GetTimeRequest_FWDDECL)
#include <Modloader/app/structs/GetTimeRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetTimeRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
