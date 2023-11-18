#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayFabMultiplayerInstanceAPI_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayFabMultiplayerInstanceAPI_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabMultiplayerInstanceAPI_DEFINED)
#include <Modloader/app/structs/PlayFabMultiplayerInstanceAPI__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabMultiplayerInstanceAPI__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayFabMultiplayerInstanceAPI_DEFINED
struct PlayFabMultiplayerInstanceAPI__Class;
struct PlayFabMultiplayerInstanceAPI {
    struct PlayFabMultiplayerInstanceAPI__Class* klass;
    MonitorData* monitor;
    struct PlayFabMultiplayerInstanceAPI__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayFabMultiplayerInstanceAPI_FWDDECL)
#define IL2CPP_STRUCT_PlayFabMultiplayerInstanceAPI_FWDDECL
#include <Modloader/app/structs/PlayFabMultiplayerInstanceAPI__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayFabMultiplayerInstanceAPI_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabMultiplayerInstanceAPI_DEFINED) && !defined(IL2CPP_STRUCT_PlayFabMultiplayerInstanceAPI_FWDDECL)
#include <Modloader/app/structs/PlayFabMultiplayerInstanceAPI.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayFabMultiplayerInstanceAPI.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
