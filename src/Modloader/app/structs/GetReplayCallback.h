#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetReplayCallback_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetReplayCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetReplayCallback_DEFINED)
#include <Modloader/app/structs/GetReplayCallback__Fields.h>
#if defined(IL2CPP_STRUCT_GetReplayCallback__Fields_DEFINED)
#define IL2CPP_STRUCT_GetReplayCallback_DEFINED
struct GetReplayCallback__Class;
struct GetReplayCallback {
    struct GetReplayCallback__Class* klass;
    MonitorData* monitor;
    struct GetReplayCallback__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetReplayCallback_FWDDECL)
#define IL2CPP_STRUCT_GetReplayCallback_FWDDECL
#include <Modloader/app/structs/GetReplayCallback__Class.h>
#endif
#undef IL2CPP_STRUCT_GetReplayCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetReplayCallback_DEFINED) && !defined(IL2CPP_STRUCT_GetReplayCallback_FWDDECL)
#include <Modloader/app/structs/GetReplayCallback.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetReplayCallback.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
