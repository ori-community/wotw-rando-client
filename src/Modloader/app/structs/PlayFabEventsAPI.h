#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayFabEventsAPI_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayFabEventsAPI_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabEventsAPI_DEFINED)
#define IL2CPP_STRUCT_PlayFabEventsAPI_DEFINED
struct PlayFabEventsAPI__Class;
struct PlayFabEventsAPI {
    struct PlayFabEventsAPI__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_PlayFabEventsAPI_FWDDECL)
#define IL2CPP_STRUCT_PlayFabEventsAPI_FWDDECL
#include <Modloader/app/structs/PlayFabEventsAPI__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayFabEventsAPI_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabEventsAPI_DEFINED) && !defined(IL2CPP_STRUCT_PlayFabEventsAPI_FWDDECL)
#include <Modloader/app/structs/PlayFabEventsAPI.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayFabEventsAPI.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
