#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetPublisherDataRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetPublisherDataRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetPublisherDataRequest_DEFINED)
#include <Modloader/app/structs/GetPublisherDataRequest__Fields.h>
#if defined(IL2CPP_STRUCT_GetPublisherDataRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_GetPublisherDataRequest_DEFINED
struct GetPublisherDataRequest__Class;
struct GetPublisherDataRequest {
    struct GetPublisherDataRequest__Class* klass;
    MonitorData* monitor;
    struct GetPublisherDataRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetPublisherDataRequest_FWDDECL)
#define IL2CPP_STRUCT_GetPublisherDataRequest_FWDDECL
#include <Modloader/app/structs/GetPublisherDataRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_GetPublisherDataRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetPublisherDataRequest_DEFINED) && !defined(IL2CPP_STRUCT_GetPublisherDataRequest_FWDDECL)
#include <Modloader/app/structs/GetPublisherDataRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetPublisherDataRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
