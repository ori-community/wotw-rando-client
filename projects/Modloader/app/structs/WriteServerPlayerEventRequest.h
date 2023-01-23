#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WriteServerPlayerEventRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WriteServerPlayerEventRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_WriteServerPlayerEventRequest_DEFINED)
#include <Modloader/app/structs/WriteServerPlayerEventRequest__Fields.h>
#if defined(IL2CPP_STRUCT_WriteServerPlayerEventRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_WriteServerPlayerEventRequest_DEFINED
struct WriteServerPlayerEventRequest__Class;
struct WriteServerPlayerEventRequest {
    struct WriteServerPlayerEventRequest__Class* klass;
    MonitorData* monitor;
    struct WriteServerPlayerEventRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WriteServerPlayerEventRequest_FWDDECL)
#define IL2CPP_STRUCT_WriteServerPlayerEventRequest_FWDDECL
#include <Modloader/app/structs/WriteServerPlayerEventRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_WriteServerPlayerEventRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_WriteServerPlayerEventRequest_DEFINED) && !defined(IL2CPP_STRUCT_WriteServerPlayerEventRequest_FWDDECL)
#include <Modloader/app/structs/WriteServerPlayerEventRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WriteServerPlayerEventRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
