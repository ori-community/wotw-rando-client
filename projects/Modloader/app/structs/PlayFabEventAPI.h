#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayFabEventAPI_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayFabEventAPI_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabEventAPI_DEFINED)
#include <Modloader/app/structs/PlayFabEventAPI__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabEventAPI__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayFabEventAPI_DEFINED
struct PlayFabEventAPI__Class;
struct PlayFabEventAPI {
    struct PlayFabEventAPI__Class* klass;
    MonitorData* monitor;
    struct PlayFabEventAPI__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayFabEventAPI_FWDDECL)
#define IL2CPP_STRUCT_PlayFabEventAPI_FWDDECL
#include <Modloader/app/structs/PlayFabEventAPI__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayFabEventAPI_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabEventAPI_DEFINED) && !defined(IL2CPP_STRUCT_PlayFabEventAPI_FWDDECL)
#include <Modloader/app/structs/PlayFabEventAPI.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayFabEventAPI.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
