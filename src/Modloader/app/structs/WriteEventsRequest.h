#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WriteEventsRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WriteEventsRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_WriteEventsRequest_DEFINED)
#include <Modloader/app/structs/WriteEventsRequest__Fields.h>
#if defined(IL2CPP_STRUCT_WriteEventsRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_WriteEventsRequest_DEFINED
struct WriteEventsRequest__Class;
struct WriteEventsRequest {
    struct WriteEventsRequest__Class* klass;
    MonitorData* monitor;
    struct WriteEventsRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WriteEventsRequest_FWDDECL)
#define IL2CPP_STRUCT_WriteEventsRequest_FWDDECL
#include <Modloader/app/structs/WriteEventsRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_WriteEventsRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_WriteEventsRequest_DEFINED) && !defined(IL2CPP_STRUCT_WriteEventsRequest_FWDDECL)
#include <Modloader/app/structs/WriteEventsRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WriteEventsRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
