#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetPlayersSegmentsRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetPlayersSegmentsRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetPlayersSegmentsRequest_DEFINED)
#include <Modloader/app/structs/GetPlayersSegmentsRequest__Fields.h>
#if defined(IL2CPP_STRUCT_GetPlayersSegmentsRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_GetPlayersSegmentsRequest_DEFINED
struct GetPlayersSegmentsRequest__Class;
struct GetPlayersSegmentsRequest {
    struct GetPlayersSegmentsRequest__Class* klass;
    MonitorData* monitor;
    struct GetPlayersSegmentsRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetPlayersSegmentsRequest_FWDDECL)
#define IL2CPP_STRUCT_GetPlayersSegmentsRequest_FWDDECL
#include <Modloader/app/structs/GetPlayersSegmentsRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_GetPlayersSegmentsRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetPlayersSegmentsRequest_DEFINED) && !defined(IL2CPP_STRUCT_GetPlayersSegmentsRequest_FWDDECL)
#include <Modloader/app/structs/GetPlayersSegmentsRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetPlayersSegmentsRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
