#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetPlayersInSegmentRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetPlayersInSegmentRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetPlayersInSegmentRequest_DEFINED)
#include <Modloader/app/structs/GetPlayersInSegmentRequest__Fields.h>
#if defined(IL2CPP_STRUCT_GetPlayersInSegmentRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_GetPlayersInSegmentRequest_DEFINED
struct GetPlayersInSegmentRequest__Class;
struct GetPlayersInSegmentRequest {
    struct GetPlayersInSegmentRequest__Class* klass;
    MonitorData* monitor;
    struct GetPlayersInSegmentRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetPlayersInSegmentRequest_FWDDECL)
#define IL2CPP_STRUCT_GetPlayersInSegmentRequest_FWDDECL
#include <Modloader/app/structs/GetPlayersInSegmentRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_GetPlayersInSegmentRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetPlayersInSegmentRequest_DEFINED) && !defined(IL2CPP_STRUCT_GetPlayersInSegmentRequest_FWDDECL)
#include <Modloader/app/structs/GetPlayersInSegmentRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetPlayersInSegmentRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
