#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SetPublisherDataRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SetPublisherDataRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetPublisherDataRequest_DEFINED)
#include <Modloader/app/structs/SetPublisherDataRequest__Fields.h>
#if defined(IL2CPP_STRUCT_SetPublisherDataRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_SetPublisherDataRequest_DEFINED
struct SetPublisherDataRequest__Class;
struct SetPublisherDataRequest {
    struct SetPublisherDataRequest__Class* klass;
    MonitorData* monitor;
    struct SetPublisherDataRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SetPublisherDataRequest_FWDDECL)
#define IL2CPP_STRUCT_SetPublisherDataRequest_FWDDECL
#include <Modloader/app/structs/SetPublisherDataRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_SetPublisherDataRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetPublisherDataRequest_DEFINED) && !defined(IL2CPP_STRUCT_SetPublisherDataRequest_FWDDECL)
#include <Modloader/app/structs/SetPublisherDataRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SetPublisherDataRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
