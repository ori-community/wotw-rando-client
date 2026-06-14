#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WriteClientPlayerEventRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WriteClientPlayerEventRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_WriteClientPlayerEventRequest_DEFINED)
#include <Modloader/app/structs/WriteClientPlayerEventRequest__Fields.h>
#if defined(IL2CPP_STRUCT_WriteClientPlayerEventRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_WriteClientPlayerEventRequest_DEFINED
struct WriteClientPlayerEventRequest__Class;
struct WriteClientPlayerEventRequest {
    struct WriteClientPlayerEventRequest__Class* klass;
    MonitorData* monitor;
    struct WriteClientPlayerEventRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WriteClientPlayerEventRequest_FWDDECL)
#define IL2CPP_STRUCT_WriteClientPlayerEventRequest_FWDDECL
#include <Modloader/app/structs/WriteClientPlayerEventRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_WriteClientPlayerEventRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_WriteClientPlayerEventRequest_DEFINED) && !defined(IL2CPP_STRUCT_WriteClientPlayerEventRequest_FWDDECL)
#include <Modloader/app/structs/WriteClientPlayerEventRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WriteClientPlayerEventRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
