#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerDataCaptureAgent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerDataCaptureAgent_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerDataCaptureAgent_DEFINED)
#include <Modloader/app/structs/PlayerDataCaptureAgent__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerDataCaptureAgent__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerDataCaptureAgent_DEFINED
struct PlayerDataCaptureAgent__Class;
struct PlayerDataCaptureAgent {
    struct PlayerDataCaptureAgent__Class* klass;
    MonitorData* monitor;
    struct PlayerDataCaptureAgent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerDataCaptureAgent_FWDDECL)
#define IL2CPP_STRUCT_PlayerDataCaptureAgent_FWDDECL
#include <Modloader/app/structs/PlayerDataCaptureAgent__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerDataCaptureAgent_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerDataCaptureAgent_DEFINED) && !defined(IL2CPP_STRUCT_PlayerDataCaptureAgent_FWDDECL)
#include <Modloader/app/structs/PlayerDataCaptureAgent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerDataCaptureAgent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
