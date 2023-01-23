#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayFabDataAPI_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayFabDataAPI_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabDataAPI_DEFINED)
#define IL2CPP_STRUCT_PlayFabDataAPI_DEFINED
struct PlayFabDataAPI__Class;
struct PlayFabDataAPI {
    struct PlayFabDataAPI__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_PlayFabDataAPI_FWDDECL)
#define IL2CPP_STRUCT_PlayFabDataAPI_FWDDECL
#include <Modloader/app/structs/PlayFabDataAPI__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayFabDataAPI_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabDataAPI_DEFINED) && !defined(IL2CPP_STRUCT_PlayFabDataAPI_FWDDECL)
#include <Modloader/app/structs/PlayFabDataAPI.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayFabDataAPI.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
