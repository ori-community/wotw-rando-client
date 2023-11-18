#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayFabEvent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayFabEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabEvent_DEFINED)
#include <Modloader/app/structs/PlayFabEvent__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabEvent__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayFabEvent_DEFINED
struct PlayFabEvent__Class;
struct PlayFabEvent {
    struct PlayFabEvent__Class* klass;
    MonitorData* monitor;
    struct PlayFabEvent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayFabEvent_FWDDECL)
#define IL2CPP_STRUCT_PlayFabEvent_FWDDECL
#include <Modloader/app/structs/PlayFabEvent__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayFabEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabEvent_DEFINED) && !defined(IL2CPP_STRUCT_PlayFabEvent_FWDDECL)
#include <Modloader/app/structs/PlayFabEvent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayFabEvent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
