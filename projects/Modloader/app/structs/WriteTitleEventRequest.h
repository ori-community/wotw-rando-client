#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WriteTitleEventRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WriteTitleEventRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_WriteTitleEventRequest_DEFINED)
#include <Modloader/app/structs/WriteTitleEventRequest__Fields.h>
#if defined(IL2CPP_STRUCT_WriteTitleEventRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_WriteTitleEventRequest_DEFINED
struct WriteTitleEventRequest__Class;
struct WriteTitleEventRequest {
    struct WriteTitleEventRequest__Class* klass;
    MonitorData* monitor;
    struct WriteTitleEventRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WriteTitleEventRequest_FWDDECL)
#define IL2CPP_STRUCT_WriteTitleEventRequest_FWDDECL
#include <Modloader/app/structs/WriteTitleEventRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_WriteTitleEventRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_WriteTitleEventRequest_DEFINED) && !defined(IL2CPP_STRUCT_WriteTitleEventRequest_FWDDECL)
#include <Modloader/app/structs/WriteTitleEventRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WriteTitleEventRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
