#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayFabEventsInstanceAPI_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayFabEventsInstanceAPI_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabEventsInstanceAPI_DEFINED)
#include <Modloader/app/structs/PlayFabEventsInstanceAPI__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabEventsInstanceAPI__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayFabEventsInstanceAPI_DEFINED
struct PlayFabEventsInstanceAPI__Class;
struct PlayFabEventsInstanceAPI {
    struct PlayFabEventsInstanceAPI__Class* klass;
    MonitorData* monitor;
    struct PlayFabEventsInstanceAPI__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayFabEventsInstanceAPI_FWDDECL)
#define IL2CPP_STRUCT_PlayFabEventsInstanceAPI_FWDDECL
#include <Modloader/app/structs/PlayFabEventsInstanceAPI__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayFabEventsInstanceAPI_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabEventsInstanceAPI_DEFINED) && !defined(IL2CPP_STRUCT_PlayFabEventsInstanceAPI_FWDDECL)
#include <Modloader/app/structs/PlayFabEventsInstanceAPI.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayFabEventsInstanceAPI.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
