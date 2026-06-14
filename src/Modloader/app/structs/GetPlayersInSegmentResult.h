#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetPlayersInSegmentResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetPlayersInSegmentResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetPlayersInSegmentResult_DEFINED)
#include <Modloader/app/structs/GetPlayersInSegmentResult__Fields.h>
#if defined(IL2CPP_STRUCT_GetPlayersInSegmentResult__Fields_DEFINED)
#define IL2CPP_STRUCT_GetPlayersInSegmentResult_DEFINED
struct GetPlayersInSegmentResult__Class;
struct GetPlayersInSegmentResult {
    struct GetPlayersInSegmentResult__Class* klass;
    MonitorData* monitor;
    struct GetPlayersInSegmentResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetPlayersInSegmentResult_FWDDECL)
#define IL2CPP_STRUCT_GetPlayersInSegmentResult_FWDDECL
#include <Modloader/app/structs/GetPlayersInSegmentResult__Class.h>
#endif
#undef IL2CPP_STRUCT_GetPlayersInSegmentResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetPlayersInSegmentResult_DEFINED) && !defined(IL2CPP_STRUCT_GetPlayersInSegmentResult_FWDDECL)
#include <Modloader/app/structs/GetPlayersInSegmentResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetPlayersInSegmentResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
